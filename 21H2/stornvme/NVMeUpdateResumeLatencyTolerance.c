/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x1C000B288
 * Callers:
 *     NVMePowerSetFState @ 0x1C000A004 (NVMePowerSetFState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000B18C (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C0019F70 (NVMeSystemPowerHint.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // eax
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 1696);
  if ( *(_DWORD *)(a1 + 1692) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 112);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1700);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 108);
    if ( v2 == -1 )
    {
      v3 = *(unsigned __int8 *)(a1 + 1690);
      if ( !(_BYTE)v3 || v3 >= *(unsigned __int8 *)(a1 + 1689) - 1 || (v2 = *(_DWORD *)(a1 + 1712), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1704);
    }
  }
  *(_DWORD *)(a1 + 1696) = v2;
  return v1 != v2;
}
