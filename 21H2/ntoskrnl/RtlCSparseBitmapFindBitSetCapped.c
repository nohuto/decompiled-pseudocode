/*
 * XREFs of RtlCSparseBitmapFindBitSetCapped @ 0x140314298
 * Callers:
 *     RtlSparseArrayElementAllocated @ 0x14031423C (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405954EC (RtlSparseArrayElementFindCapped.c)
 * Callees:
 *     RtlLengthCurrentClearRunBackwardEx @ 0x140587F04 (RtlLengthCurrentClearRunBackwardEx.c)
 *     RtlLengthCurrentClearRunForwardEx @ 0x140587FA8 (RtlLengthCurrentClearRunForwardEx.c)
 */

__int64 __fastcall RtlCSparseBitmapFindBitSetCapped(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  signed __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  const signed __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  _OWORD v17[5]; // [rsp+28h] [rbp-50h] BYREF

  v17[0] = 0LL;
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
      {
        v9 = 1LL;
        if ( v7 > 1 )
          v9 = v7;
        v10 = (const signed __int64 *)(*(_QWORD *)(a1 + 8) + (((__int64)a2 / 0x8000) << 12));
        *(_QWORD *)&v17[0] = v6 + v9;
        *((_QWORD *)&v17[0] + 1) = v10;
        if ( _bittest64(v10, v6) )
        {
          v11 = 0LL;
        }
        else
        {
          v12 = a2 & 0x7FFF;
          v11 = v7 <= 0
              ? -RtlLengthCurrentClearRunBackwardEx(v17, v12, -v7)
              : RtlLengthCurrentClearRunForwardEx(v17, v12);
        }
        if ( (__int64)abs64(v11) < (__int64)abs64(v7) )
          return v6 + v11 + (((__int64)a2 / 0x8000) << 15);
      }
    }
    else
    {
      v15 = a2 & 0x3FFFFFFF;
      v7 = a3;
      v16 = v15 + a3;
      if ( a3 >= 0 )
      {
        if ( v16 > 0x40000000 )
          v7 = 0x40000000 - v15;
      }
      else
      {
        v7 = ~(unsigned __int64)(unsigned int)v15;
        if ( v16 >= 0 )
          v7 = a3;
      }
    }
    a2 += v7;
    a3 -= v7;
  }
  return -1LL;
}
