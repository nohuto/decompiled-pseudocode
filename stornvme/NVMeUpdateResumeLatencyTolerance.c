/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x1C0010AA0
 * Callers:
 *     NVMePowerActive @ 0x1C00030C0 (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C0010324 (NVMePowerSetFState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C0010430 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C0010A10 (NVMeSystemPowerHint.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // eax
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 1896);
  if ( *(_DWORD *)(a1 + 1892) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 112);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1900);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 108);
    if ( v2 == -1 )
    {
      v3 = *(unsigned __int8 *)(a1 + 1890);
      if ( !(_BYTE)v3 || v3 >= *(unsigned __int8 *)(a1 + 1889) - 1 || (v2 = *(_DWORD *)(a1 + 1912), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1904);
    }
  }
  *(_DWORD *)(a1 + 1896) = v2;
  return v1 != v2;
}
