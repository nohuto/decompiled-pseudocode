__int64 __fastcall CopyTouchInputListSorted(
        const struct tagTOUCHINPUTLIST *a1,
        struct tagTOUCHINPUTLIST *a2,
        __int64 a3,
        unsigned int *a4)
{
  __m128i *v5; // rsi
  int v6; // r8d
  unsigned int v7; // ebx
  __m128i v8; // xmm3
  __m128i v9; // xmm2
  __m128i v10; // xmm4
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  ULONG v15; // ecx
  int v16; // ecx
  unsigned int v17; // edi
  unsigned int i; // r10d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __m128i v28; // [rsp+38h] [rbp-60h]
  int v29; // [rsp+B0h] [rbp+18h]

  v5 = (__m128i *)*((_QWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 1);
  v7 = 1;
  while ( 2 )
  {
    v29 = v6;
    if ( v6 )
    {
      v8 = *v5;
      v28 = *v5;
      v9 = v5[1];
      v10 = v5[2];
      if ( (v9.m128i_i32[1] & 0xFFFFFF00) != 0 || (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) & 0xFFFFFFF8) != 0 )
      {
        v15 = 1004;
        goto LABEL_40;
      }
      v11 = (_mm_cvtsi128_si32(_mm_srli_si128(v9, 4)) & 0xF) - 4;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
LABEL_9:
          v14 = -1;
          goto LABEL_13;
        }
        v13 = v12 - 4;
        if ( v13 )
        {
          if ( v13 != 1 )
            goto LABEL_9;
          v14 = 1;
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 3;
      }
LABEL_13:
      switch ( v14 )
      {
        case -1:
LABEL_14:
          v15 = RtlNtStatusToDosError(-1073741811);
LABEL_40:
          UserSetLastError(v15);
          return 0LL;
        case 1:
          v16 = 2;
          break;
        case 2:
          v16 = 1;
          break;
        default:
          v16 = 4;
          break;
      }
      if ( v7 != v16 )
      {
        if ( v7 == 1 )
        {
          v7 = v16;
        }
        else if ( v16 != 1 )
        {
          goto LABEL_14;
        }
      }
      v17 = *((_DWORD *)a2 + 1);
      for ( i = v17; ; --i )
      {
        v19 = i - 1;
        if ( !i )
          goto LABEL_38;
        v20 = *((_QWORD *)a2 + 1);
        if ( v28.m128i_i64[1] >= *(_QWORD *)(v20 + 48 * v19 + 8)
          && (v28.m128i_i64[1] != *(_QWORD *)(v20 + 48 * v19 + 8) || v9.m128i_i32[0] >= *(_DWORD *)(v20 + 48 * v19 + 16)) )
        {
          break;
        }
        v22 = 6LL * i;
        *(_OWORD *)(v20 + 8 * v22) = *(_OWORD *)(v20 + 48 * v19);
        *(_OWORD *)(v20 + 8 * v22 + 16) = *(_OWORD *)(v20 + 48 * v19 + 16);
        *(_OWORD *)(v20 + 8 * v22 + 32) = *(_OWORD *)(v20 + 48 * v19 + 32);
      }
      v23 = *((_QWORD *)a2 + 1) + 48 * v19;
      if ( v28.m128i_i64[1] != *(_QWORD *)(v23 + 8) || v9.m128i_i32[0] != *(_DWORD *)(v23 + 16) )
      {
LABEL_38:
        v25 = 6LL * i;
        v26 = *((_QWORD *)a2 + 1);
        *(__m128i *)(v26 + 8 * v25) = v8;
        *(__m128i *)(v26 + 8 * v25 + 16) = v9;
        *(__m128i *)(v26 + 8 * v25 + 32) = v10;
        *((_DWORD *)a2 + 1) = v17 + 1;
        v6 = v29 - 1;
        v5 += 3;
        continue;
      }
      goto LABEL_14;
    }
    break;
  }
  if ( a4 )
    *a4 = v7;
  return 1LL;
}
