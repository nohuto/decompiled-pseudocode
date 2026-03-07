__int64 __fastcall MiZeroPageWorkMapping(unsigned int a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 LeafVa; // rsi
  __int64 v7; // r10
  int v8; // r9d
  __int64 result; // rax
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  v4 = a1;
  memset(v10, 0, 0xB8uLL);
  LeafVa = MiGetLeafVa(a2);
  MiWriteLargePte(LeafVa, 0LL, v4, 0);
  v7 = 1LL;
  v8 = 2;
  if ( (a3 & 2) == 0 || (result = MiVaIsUltra(LeafVa), !(_DWORD)result) && (unsigned int)v4 <= (unsigned int)v7 )
  {
    v10[3] = 0LL;
    LODWORD(v10[1]) = 20;
    if ( (unsigned int)v4 <= (unsigned int)v7 )
    {
      MiInsertLargeTbFlushEntry((__int64)v10, v8 - v4, a2);
    }
    else
    {
      if ( (_DWORD)v4 != 3 )
        v7 = MiLargePageSizes[v4];
      MiInsertTbFlushEntry(v10, LeafVa, v7);
    }
    return MiFlushTbList(v10);
  }
  return result;
}
