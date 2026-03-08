/*
 * XREFs of MiCreateFreePfns @ 0x140B37598
 * Callers:
 *     MiSwitchToPfns @ 0x140B37268 (MiSwitchToPfns.c)
 * Callees:
 *     MxReleaseFreeDescriptor @ 0x140B371A0 (MxReleaseFreeDescriptor.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 */

__int64 __fastcall MiCreateFreePfns(__int128 *a1)
{
  __int128 *v2; // rcx
  __int64 result; // rax
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __m128i v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // r14
  _OWORD v15[2]; // [rsp+38h] [rbp-9h] BYREF
  __m128i v16; // [rsp+58h] [rbp+17h]
  _OWORD v17[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v18; // [rsp+88h] [rbp+47h]
  unsigned __int64 v19; // [rsp+90h] [rbp+4Fh]

  if ( (*((_DWORD *)a1 + 6) & 0x40000000) != 0 )
  {
    v4 = (unsigned __int64 *)MxBootFreeDescriptor;
    v5 = *((_QWORD *)a1 + 4);
    while ( v4 < (unsigned __int64 *)&MxBootFreeDescriptor[5 * (unsigned __int16)KeNumberNodes] )
    {
      if ( (__int128 *)v4[4] == a1 )
      {
        if ( !v4[1] )
          break;
        v6 = *v4;
        if ( *v4 < v5 || v6 >= *((_QWORD *)a1 + 5) + v5 )
          break;
        v7 = (__m128i)a1[2];
        v8 = *a1;
        v9 = a1[1];
        v10 = *((_QWORD *)a1 + 4);
        v15[0] = *a1;
        v15[1] = v9;
        v16 = v7;
        if ( v6 > v10 )
        {
          v14 = v6 - v10;
          v18 = v7.m128i_i64[0];
          v19 = v14;
          v17[0] = v8;
          v17[1] = v9;
          MxCreateFreePfns(v17);
          v10 = *v4;
          v11 = _mm_srli_si128(v7, 8).m128i_u64[0] - v14;
        }
        else
        {
          v11 = v16.m128i_i64[1];
        }
        v12 = v4[1];
        v13 = *((_DWORD *)a1 + 6);
        v16.m128i_i64[0] = v12 + v10;
        v16.m128i_i64[1] = v11 - v12;
        result = MxReleaseFreeDescriptor(v4, v13);
        if ( v16.m128i_i64[1] )
        {
          v2 = v15;
          return MxCreateFreePfns(v2);
        }
        return result;
      }
      v4 += 5;
    }
  }
  v2 = a1;
  return MxCreateFreePfns(v2);
}
