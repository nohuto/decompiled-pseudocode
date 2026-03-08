/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0021A10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockFindCorrespondingDock @ 0x1C0009314 (ACPIDockFindCorrespondingDock.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487BC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase2(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // ebx
  __int64 CorrespondingDock; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  const char *v7; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(v1[95], 1262699615LL) )
    goto LABEL_10;
  CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v1);
  if ( !CorrespondingDock || *(_DWORD *)(CorrespondingDock + 200) != 2 )
    goto LABEL_10;
  *(_DWORD *)(CorrespondingDock + 200) = 1;
  KdDisableDebugger();
  v3 = ACPIGet((_DWORD)v1, 1262699615, 546308096, 0, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  KdEnableDebugger();
  v5 = v1[1];
  v6 = (const char *)&unk_1C00622D0;
  v7 = (const char *)&unk_1C00622D0;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = (const char *)v1[76];
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = (const char *)v1[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x5Bu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v3,
      (char)v1,
      v6,
      v7);
  result = 259LL;
  if ( v3 != 259 )
  {
LABEL_10:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}
