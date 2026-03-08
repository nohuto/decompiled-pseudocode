/*
 * XREFs of ViSettingsEnableKernelHandleChecking @ 0x140AD7EBC
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140AD7DA4 (VfSettingsCheckForChanges.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140AD7E88 (VfSettingsMiscellaneousChecksInitPhase1.c)
 * Callees:
 *     PsSetProcessHandleTracingInformation @ 0x1409AB674 (PsSetProcessHandleTracingInformation.c)
 */

__int64 __fastcall ViSettingsEnableKernelHandleChecking(int a1)
{
  __int64 result; // rax
  int *v2; // rdx
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  if ( a1 )
  {
    if ( VfHandleTracingEntries )
    {
      v3 = 0;
      v2 = &v3;
      v4 = VfHandleTracingEntries;
    }
    else
    {
      v2 = 0LL;
    }
    result = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)PsInitialSystemProcess, (__int64)v2);
    _InterlockedOr((volatile signed __int32 *)&NtGlobalFlag, 0x40000000u);
  }
  else
  {
    result = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)PsInitialSystemProcess, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&NtGlobalFlag, 0xBFFFFFFF);
  }
  return result;
}
