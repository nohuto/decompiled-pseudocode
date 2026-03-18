/*
 * XREFs of MiFlushValidPteFromTb @ 0x14038A3A4
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1403C2B1C (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C4C (MiInsertLargeTbFlushEntry.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x1402E5A20 (MiGetLeafVa.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140367B48 (MiInsertRecursiveTbFlushEntries.c)
 *     MiRealVaToFlushType @ 0x14038A6B8 (MiRealVaToFlushType.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

void __fastcall MiFlushValidPteFromTb(unsigned __int64 a1, char a2, int a3)
{
  unsigned __int64 LeafVa; // rax
  _QWORD v7[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v7, 0, 0xB8uLL);
  LeafVa = MiGetLeafVa(a1);
  LODWORD(v7[0]) = MiRealVaToFlushType(LeafVa);
  LODWORD(v7[1]) = 20;
  WORD2(v7[0]) = 0;
  v7[2] = 0LL;
  v7[3] = 0LL;
  if ( a2 >= 0 )
    MiInsertRecursiveTbFlushEntries((__int64)v7, a3, a1);
  else
    MiInsertLargeTbFlushEntry((__int64)v7, a3, a1);
  MiFlushTbList((int *)v7);
}
