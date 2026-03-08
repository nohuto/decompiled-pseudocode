/*
 * XREFs of RtlCSparseBitmapFindBitSetCapped @ 0x1403096E0
 * Callers:
 *     RtlSparseArrayElementAllocated @ 0x14030967C (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405B4B40 (RtlSparseArrayElementFindCapped.c)
 * Callees:
 *     RtlLengthCurrentClearRunBackwardEx @ 0x1405A659C (RtlLengthCurrentClearRunBackwardEx.c)
 *     RtlLengthCurrentClearRunForwardEx @ 0x1405A6640 (RtlLengthCurrentClearRunForwardEx.c)
 */

__int64 __fastcall RtlCSparseBitmapFindBitSetCapped(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdi
  signed __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  const signed __int64 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _OWORD v19[5]; // [rsp+28h] [rbp-50h] BYREF

  v19[0] = 0LL;
  while ( a3 )
  {
    v6 = a2 & 0x7FFF;
    v7 = a3;
    v8 = v6 + a3;
    if ( a3 < 0 )
    {
      v7 = ~v6;
      if ( v8 >= 0 )
        v7 = a3;
    }
    else if ( v8 > 0x8000 )
    {
      v7 = 0x8000 - v6;
    }
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    {
      if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
        v9 = 2;
      else
        v9 = 1;
    }
    else
    {
      v9 = 0;
    }
    if ( v9 < 2 )
    {
      if ( v9 != 1 )
      {
        v17 = a2 & 0x3FFFFFFF;
        v7 = a3;
        v18 = v17 + a3;
        if ( a3 >= 0 )
        {
          if ( v18 > 0x40000000 )
            v7 = 0x40000000 - v17;
        }
        else
        {
          v7 = ~(unsigned __int64)(unsigned int)v17;
          if ( v18 >= 0 )
            v7 = a3;
        }
      }
    }
    else
    {
      v10 = (__int64)a2 / 0x8000;
      if ( v7 <= 1 )
        v11 = 1LL;
      else
        v11 = v7;
      v12 = (const signed __int64 *)(*(_QWORD *)(a1 + 8) + (v10 << 12));
      *(_QWORD *)&v19[0] = v6 + v11;
      *((_QWORD *)&v19[0] + 1) = v12;
      if ( _bittest64(v12, v6) )
      {
        v13 = 0LL;
      }
      else
      {
        v14 = a2 & 0x7FFF;
        if ( v7 <= 0 )
          v13 = -RtlLengthCurrentClearRunBackwardEx(v19, v14, -v7);
        else
          v13 = RtlLengthCurrentClearRunForwardEx(v19, v14);
      }
      if ( (__int64)abs64(v13) < (__int64)abs64(v7) )
        return v6 + v13 + (v10 << 15);
    }
    a2 += v7;
    a3 -= v7;
  }
  return -1LL;
}
