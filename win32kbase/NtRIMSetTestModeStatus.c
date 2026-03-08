/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1C01A2B80
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetTestModeStatus @ 0x1C01A0BE0 (RIMSetTestModeStatus.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C023FFB0 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1, v2, v3, v4);
  else
    return 3221225506LL;
}
