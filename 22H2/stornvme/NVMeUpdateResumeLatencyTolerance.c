/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x1C0010E74
 * Callers:
 *     NVMePowerSetFState @ 0x1C00105A8 (NVMePowerSetFState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C0010838 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C0010DB0 (NVMeSystemPowerHint.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  int v3; // eax
  bool v4; // zf

  v1 = *(_DWORD *)(a1 + 1680);
  if ( *(_DWORD *)(a1 + 1676) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 104);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1684);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 100);
    if ( v2 == -1 )
    {
      v3 = *(unsigned __int8 *)(a1 + 1674);
      if ( !(_BYTE)v3 || v3 >= *(unsigned __int8 *)(a1 + 1673) - 1 || (v2 = *(_DWORD *)(a1 + 1696), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1688);
    }
  }
  *(_DWORD *)(a1 + 1680) = v2;
  v4 = v1 == v2;
  if ( v1 != v2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n", v1, v2);
    v4 = v1 == v2;
  }
  return !v4;
}
