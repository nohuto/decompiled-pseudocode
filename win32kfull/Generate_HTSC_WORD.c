__int64 __fastcall Generate_HTSC_WORD(__m128i *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // r14d
  __int64 v4; // rcx
  __m128i v5; // xmm1
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // xmm0_8
  int v8; // r8d
  unsigned __int16 epi16; // di
  __int64 v10; // rsi
  ULONG v11; // r8d
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  PVOID v14; // r15
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v18; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v19; // [rsp+B0h] [rbp+18h]

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 48);
  if ( a1->m128i_i8[1] <= 0x11u )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 8));
    v3 = 0;
    v4 = *(_QWORD *)(v2 + 8LL * a1->m128i_u8[1] + 1112);
    a1[1].m128i_i64[0] = v4;
    if ( v4 )
    {
LABEL_16:
      EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
      LOBYTE(v3) = a1[1].m128i_i64[0] != 0;
      return v3;
    }
    v5 = *a1;
    v6 = (unsigned __int8)HIBYTE(a1->m128i_u16[0]);
    v19 = v6;
    v7 = _mm_srli_si128(*a1, 8).m128i_u64[0];
    v8 = v6 + 7;
    if ( (unsigned int)v6 <= 9 )
      v8 = v6;
    v18 = 16 * (v6 >> 1);
    epi16 = _mm_extract_epi16(v5, 4);
    v10 = *(_QWORD *)&DefStdHTPat[v18 + 8];
    v11 = (v8 << 24) + 808539208;
    v12 = v10;
    v13 = 6 * epi16 * (unsigned __int64)WORD1(v7);
    if ( v13 <= 0xFFFFFFFF && HIDWORD(v7) >= (unsigned int)v13 )
    {
      v14 = EngAllocMem(1u, HIDWORD(v7), v11);
      if ( v14 )
      {
        if ( v5.m128i_i8[1] > 0xFu )
        {
          if ( v5.m128i_i8[1] == 16 )
          {
            v16 = v10;
          }
          else
          {
            v16 = v10 + 512;
            v12 = v10 + 256;
          }
          if ( !(unsigned int)GenerateWORDPat(v12, v10, v16, (char *)v14, v5.m128i_u16[2], epi16, v5.m128i_u16[5]) )
          {
            EngFreeMem(v14);
            v14 = 0LL;
          }
        }
        else
        {
          v15 = v5.m128i_u16[2];
          RotateHTPat45(
            v10,
            (_DWORD)v14 + 2,
            v5.m128i_u16[2],
            v5.m128i_u16[5],
            *(unsigned __int16 *)&DefStdHTPat[v18 + 2],
            epi16);
          RotateHTPatXY(
            (_DWORD)v14 + 2,
            (_DWORD)v14 + 4,
            v15,
            v5.m128i_u16[5],
            epi16,
            (v5.m128i_i8[1] & 1) != 0 ? v15 >> 1 : 0,
            0);
          RotateHTPatXY(
            (_DWORD)v14 + 2,
            (_DWORD)v14,
            v15,
            v5.m128i_u16[5],
            epi16,
            (v5.m128i_i8[1] & 1) != 0 ? v15 >> 2 : 0,
            (v5.m128i_i8[1] & 1) != 0 ? v5.m128i_u16[5] >> 2 : 0);
          ExpandHTPatX((char *)v14, v5.m128i_u16[2], v5.m128i_u16[5], epi16);
        }
      }
      *(_QWORD *)(v2 + 8 * v19 + 1112) = v14;
      a1[1].m128i_i64[0] = (__int64)v14;
      goto LABEL_16;
    }
  }
  return 0LL;
}
