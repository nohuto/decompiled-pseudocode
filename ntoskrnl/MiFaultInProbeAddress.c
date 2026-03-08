/*
 * XREFs of MiFaultInProbeAddress @ 0x1402E021C
 * Callers:
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MiLockPageLeafPageTable @ 0x140269310 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafFrame @ 0x1403CFA14 (MiProbeLeafFrame.c)
 * Callees:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiLockProbePacketWorkingSet @ 0x1402E0344 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E038C (MiUnlockProbePacketWorkingSet.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x14061A338 (MiDeliverPicoExceptionForProbedPage.c)
 */

__int64 __fastcall MiFaultInProbeAddress(__int64 a1)
{
  signed __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // r14d
  ULONG_PTR v5; // rdi
  int v6; // edi
  _QWORD v8[16]; // [rsp+28h] [rbp-39h] BYREF

  memset(&v8[2], 0, 0x68uLL);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 96);
  LOWORD(v8[2]) = 2;
  v8[0] = v2 & 0xFFFFFFFFFFFFF000uLL;
  v8[1] = v3 - (v2 & 0xFFFFFFFFFFFFF000uLL);
  v8[4] = 1LL;
  v8[3] = v8;
  v5 = 0LL;
  memset(&v8[5], 0, 20);
  if ( v4 )
  {
    v5 = 2LL;
    if ( v4 == 3 )
    {
      v5 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 72) & 0xF) == 6 && (unsigned int)MiGetSystemRegionType(v2) == 12 )
    {
      v5 = 0LL;
    }
  }
  MiUnlockProbePacketWorkingSet(a1);
  v6 = MmAccessFault(v5, v2, 0, (ULONG_PTR)&v8[2] + 1);
  if ( v6 < 0 && (*(_DWORD *)(a1 + 72) & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    v6 = MiDeliverPicoExceptionForProbedPage(v2, v4);
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v6;
}
