/*
 * XREFs of MiFaultInProbeAddress @ 0x14030F0A8
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x14020B3A0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafFrame @ 0x14027DEC0 (MiProbeLeafFrame.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiLockProbePacketWorkingSet @ 0x14030F1D8 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14030F220 (MiUnlockProbePacketWorkingSet.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x1405309BC (MiDeliverPicoExceptionForProbedPage.c)
 */

__int64 __fastcall MiFaultInProbeAddress(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // r14d
  unsigned __int64 v5; // rdx
  ULONG_PTR v6; // rdi
  int v7; // edi
  _QWORD v9[14]; // [rsp+28h] [rbp-29h] BYREF

  memset(&v9[2], 0, 0x60uLL);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFF000uLL;
  LOWORD(v9[2]) = 2;
  v9[0] = v5;
  v9[1] = v3 - v5;
  v9[4] = 1LL;
  v9[3] = v9;
  v6 = 0LL;
  memset(&v9[5], 0, 20);
  if ( v4 )
  {
    v6 = 2LL;
    if ( v4 == 3 )
    {
      v6 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 64) & 0xF) == 6 && (unsigned int)MiGetSystemRegionType(v2) == 12 )
    {
      v6 = 0LL;
    }
  }
  MiUnlockProbePacketWorkingSet(a1);
  v7 = MmAccessFault(v6, v2, 0, (ULONG_PTR)&v9[2] + 1);
  if ( v7 < 0 && (*(_DWORD *)(a1 + 64) & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 2240LL) )
    v7 = MiDeliverPicoExceptionForProbedPage(v2, v4);
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v7;
}
