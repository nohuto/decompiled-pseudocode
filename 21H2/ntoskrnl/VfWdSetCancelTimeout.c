/*
 * XREFs of VfWdSetCancelTimeout @ 0x140A9D0D0
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140A9C958 (VfSetVerifierInformationEx.c)
 *     VfWdInit @ 0x140A9D00C (VfWdInit.c)
 * Callees:
 *     VfWdCheckForSettingsChange @ 0x140A9CF88 (VfWdCheckForSettingsChange.c)
 */

__int64 __fastcall VfWdSetCancelTimeout(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 > 0xEA60 )
      return (unsigned int)-1073741811;
    v2 = (a1 + 999) / 0x3E8;
  }
  else
  {
    v2 = 0;
  }
  VfWdCancelTimeoutTicks = v2;
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    VfWdCheckForSettingsChange(MmVerifierData);
  return v1;
}
