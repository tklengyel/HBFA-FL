/** @file
  IA-32/x64 AsmReadGdtr()

  Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>

/**
  Reads the current Global Descriptor Table Register(GDTR) descriptor.

  Reads and returns the current GDTR descriptor and returns it in Gdtr. This
  function is only available on IA-32 and x64.

  If Gdtr is NULL, then ASSERT().

  @param  Gdtr  The pointer to a GDTR descriptor.

**/
VOID
EFIAPI
AsmReadGdtr (
  OUT     IA32_DESCRIPTOR           *Gdtr
  )
{
  ASSERT (FALSE);
}

/**
  Writes the current Global Descriptor Table Register (GDTR) descriptor.

  Writes and the current GDTR descriptor specified by Gdtr. This function is
  only available on IA-32 and x64.

  If Gdtr is NULL, then ASSERT().

  @param  Gdtr  The pointer to a GDTR descriptor.

**/
VOID
EFIAPI
AsmWriteGdtr (
  IN      CONST IA32_DESCRIPTOR     *Gdtr
  )
{
  ASSERT (FALSE);
}
