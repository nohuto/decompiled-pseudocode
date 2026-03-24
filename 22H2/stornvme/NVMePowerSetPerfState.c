/*
 * XREFs of NVMePowerSetPerfState @ 0x1C00106D0
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006080 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C000EBE0 (NVMeGetPowerState.c)
 *     NVMePerfStateTransition @ 0x1C000FDC8 (NVMePerfStateTransition.c)
 *     NVMePowerStateGetMaxPower @ 0x1C0010964 (NVMePowerStateGetMaxPower.c)
 *     NVMeSetPowerState @ 0x1C001BEC4 (NVMeSetPowerState.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  __int64 PowerState; // rax
  int MaxPower; // eax
  int v10; // r10d
  __int64 v11; // rdx
  int v12; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    v5 = "Succeeded";
    if ( !*(_BYTE *)(a2 + 12) )
      v5 = "Failed";
    StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State Callback for P%u, PEP %s\n", v4, v5);
    if ( *(_BYTE *)(a2 + 12) )
    {
      if ( (unsigned __int8)v4 <= *(_BYTE *)(a1 + 1669) )
      {
        if ( (unsigned __int8)v4 <= 0x1Fu )
        {
          NVMeGetPowerState(a1, v4);
          PowerState = NVMeGetPowerState(v7, v6);
          MaxPower = NVMePowerStateGetMaxPower(PowerState);
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
            v4,
            MaxPower,
            v10);
          LOBYTE(v11) = v4;
          NVMeSetPowerState(a1, v11);
          *(_BYTE *)(a1 + 1671) = v4;
          *(_BYTE *)(a1 + 1668) = v4;
        }
        else
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Power state index %u is invalid\n", v4);
        }
      }
      else
      {
        StorPortDebugPrint(
          3LL,
          "StorNVMe - POWER: PS%u is greater than deepest operational power state PS%u\n",
          v4,
          *(unsigned __int8 *)(a1 + 1669));
      }
    }
  }
  v12 = *(_DWORD *)(a1 + 1664);
  if ( (v12 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1664) = v12 & 0xFFFFFF7F, LOBYTE(v12) = NVMePerfStateTransition(a1), !(_BYTE)v12) )
  {
    *(_DWORD *)(a1 + 1712) &= ~1u;
  }
  return v12;
}
