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
