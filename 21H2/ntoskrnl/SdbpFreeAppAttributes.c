/*
 * XREFs of SdbpFreeAppAttributes @ 0x1405D1E50
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x140754DBC (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     AslFree @ 0x14075493C (AslFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SdbpFreeAppAttributes(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 i; // rsi
  unsigned __int16 *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    for ( i = 0LL; i < v1; ++i )
    {
      v4 = 0LL;
      if ( i < v1 )
      {
        v5 = *(_QWORD *)(a1 + 8) * i;
        if ( !is_mul_ok(*(_QWORD *)(a1 + 8), i)
          || (v6 = *(_QWORD *)(a1 + 40), v4 = (unsigned __int16 *)(v6 + v5), v6 + v5 < v6) )
        {
          v4 = 0LL;
        }
      }
      v7 = *v4;
      if ( (unsigned __int16)(v7 - 24617) <= 1u || (_WORD)v7 == 24619 )
      {
        AslFree(v7, *((_QWORD *)v4 + 1));
        v7 = *v4;
      }
      if ( (_WORD)v7 == 24577
        || (LOWORD(v7) = v7 - 24593, (unsigned __int16)v7 <= 0x37u) && (v8 = 0x82000000000001LL, _bittest64(&v8, v7)) )
      {
        AslFree(v7, *((_QWORD *)v4 + 1));
      }
      v1 = *(_QWORD *)(a1 + 16);
    }
    v9 = *(void **)(a1 + 40);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72615452u);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
}
