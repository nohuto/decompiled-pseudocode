/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C0010B58
 * Callers:
 *     NVMePowerSetFState @ 0x1C00105A8 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSetFStateIdleTimer(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 1676) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 88);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 84);
    if ( v3 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1674) )
      {
        if ( *(_BYTE *)(a1 + 1673) <= 2u )
          return v2;
        v3 = *(_DWORD *)(a1 + 1700);
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 1692);
      }
    }
  }
  if ( v3 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v3);
    *(_DWORD *)(a1 + 1664) |= 0x20u;
    return (unsigned int)StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1704), NVMeFStateIdleTimerCallback);
  }
  return v2;
}
