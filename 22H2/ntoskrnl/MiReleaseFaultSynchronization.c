/*
 * XREFs of MiReleaseFaultSynchronization @ 0x140548E04
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x140548330 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x14029277C (MiUnlockSystemVa.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall MiReleaseFaultSynchronization(__int64 a1)
{
  __int64 v2; // xmm1_8
  _QWORD v3[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    memset(v3, 0, 0x80uLL);
    v2 = *(_QWORD *)(a1 + 72);
    *(_OWORD *)&v3[3] = *(_OWORD *)(a1 + 56);
    v3[5] = v2;
    MiUnlockSystemVa((__int64)v3);
    *(_DWORD *)(a1 + 80) &= ~0x10u;
  }
  else
  {
    MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  }
}
