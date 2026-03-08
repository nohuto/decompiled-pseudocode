/*
 * XREFs of MiGetPageTablesForLargeMap @ 0x14038A5B8
 * Callers:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x14038A3C4 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiObtainSystemVa @ 0x140210534 (MiObtainSystemVa.c)
 */

unsigned __int64 __fastcall MiGetPageTablesForLargeMap(unsigned __int64 a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned __int64 v7; // r12
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  int v14; // r8d
  int v16; // [rsp+68h] [rbp+10h]

  v5 = 13;
  if ( a2 != 9 )
    v5 = a2;
  v16 = v5;
  v7 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v10 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v10 = a1 >> 9;
  v11 = MiObtainSystemVa((unsigned int)v10, v5);
  v12 = v11;
  if ( v11 )
  {
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = 3 - (a2 != 12);
    if ( !a3 )
      v14 = 7 - (a2 != 12);
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v13, v13 + 8 * v7 - 8, v14, a2, a4)
      && (a1 == v7 || (unsigned int)MiMakeZeroedPageTablesEx(v13 + 8 * v7, v13 + 8 * (a1 - 1), a2 == 12, a2, a4)) )
    {
      return v12;
    }
    MiReturnSystemVa(v12, v12 + (v10 << 21), v16, 0LL);
  }
  return 0LL;
}
