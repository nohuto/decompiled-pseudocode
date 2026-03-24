/*
 * XREFs of DrvQueryMDEVPowerState @ 0x1C0019870
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00198CC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C00770F0 (xxxUserSetDisplayConfig.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C0147C78 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvQueryMDEVPowerState(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 i; // rdx
  __int64 v5; // r8
  __int64 v7; // rax

  v2 = 0;
  v3 = *(unsigned int *)(a1 + 20);
  if ( !(_DWORD)v3 )
    return 1LL;
  for ( i = a1 + 40; ; i += 56LL )
  {
    v5 = *(_QWORD *)(*(_QWORD *)i + 2576LL);
    if ( !v5 )
      break;
    if ( *(int *)(v5 + 160) < 0 )
      return 0LL;
    if ( ++v2 >= (unsigned int)v3 )
      return 1LL;
  }
  v7 = WdLogNewEntry5_WdError(v3, i);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(56LL * v2 + a1 + 40);
  *(_QWORD *)(v7 + 32) = v2;
  WdLogEvent5_WdError(v7);
  return 0LL;
}
