/*
 * XREFs of Generate_HTSC_WORD @ 0x1C011DD3C
 * Callers:
 *     CachedHalftonePattern @ 0x1C0093E60 (CachedHalftonePattern.c)
 * Callees:
 *     RotateHTPatXY @ 0x1C014D664 (RotateHTPatXY.c)
 *     RotateHTPat45 @ 0x1C014EA64 (RotateHTPat45.c)
 *     ExpandHTPatX @ 0x1C0150468 (ExpandHTPatX.c)
 *     GenerateWORDPat @ 0x1C025E348 (GenerateWORDPat.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__m128i *a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __m128i v5; // xmm1
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // xmm0_8
  unsigned __int16 epi16; // di
  int v9; // r8d
  ULONG v10; // r8d
  __int64 v11; // rsi
  int v12; // ebx
  unsigned __int64 v13; // rax
  PVOID v14; // rax
  void *v15; // r13
  unsigned int v16; // r14d
  int v17; // esi
  int v18; // edi
  int v19; // r8d
  __int64 v20; // [rsp+90h] [rbp+8h]

  if ( a1->m128i_i8[1] <= 0x11u )
  {
    EngAcquireSemaphore(hsem);
    v2 = 0;
    v3 = ppwHTPat[a1->m128i_u8[1]];
    a1[1].m128i_i64[0] = v3;
    if ( v3 )
    {
LABEL_3:
      EngReleaseSemaphore(hsem);
      LOBYTE(v2) = a1[1].m128i_i64[0] != 0;
      return v2;
    }
    v5 = *a1;
    v6 = (unsigned __int8)HIBYTE(a1->m128i_u16[0]);
    v7 = _mm_srli_si128(*a1, 8).m128i_u64[0];
    epi16 = _mm_extract_epi16(*a1, 4);
    v9 = v6 + 7;
    if ( (unsigned int)v6 <= 9 )
      v9 = (unsigned __int8)HIBYTE(a1->m128i_u16[0]);
    v20 = 16 * (v6 >> 1);
    v10 = (v9 << 24) + 808539208;
    v11 = *(__int64 *)((char *)&off_1C02DD128 + v20);
    v12 = v11;
    v13 = 6 * epi16 * (unsigned __int64)WORD1(v7);
    if ( v13 <= 0xFFFFFFFF && HIDWORD(v7) >= (unsigned int)v13 )
    {
      v14 = EngAllocMem(1u, HIDWORD(v7), v10);
      v15 = v14;
      if ( v14 )
      {
        if ( v5.m128i_i8[1] > 0xFu )
        {
          if ( v5.m128i_i8[1] == 16 )
          {
            v19 = v11;
          }
          else
          {
            v19 = v11 + 512;
            v12 = v11 + 256;
          }
          if ( !(unsigned int)GenerateWORDPat(v12, v11, v19, (_DWORD)v14, v5.m128i_u16[2], epi16, v5.m128i_u16[5]) )
          {
            EngFreeMem(v15);
            v15 = 0LL;
          }
        }
        else
        {
          v16 = v5.m128i_u16[2];
          v17 = epi16;
          v18 = (_DWORD)v14 + 2;
          RotateHTPat45(
            v12,
            (_DWORD)v14 + 2,
            v5.m128i_u16[2],
            v5.m128i_u16[5],
            *(unsigned __int16 *)&DefStdHTPat[v20 + 2],
            v17);
          RotateHTPatXY(v18, (_DWORD)v15 + 4, v16, v5.m128i_u16[5], v17, (v5.m128i_i8[1] & 1) != 0 ? v16 >> 1 : 0, 0);
          RotateHTPatXY(
            v18,
            (_DWORD)v15,
            v16,
            v5.m128i_u16[5],
            v17,
            (v5.m128i_i8[1] & 1) != 0 ? v16 >> 2 : 0,
            (v5.m128i_i8[1] & 1) != 0 ? v5.m128i_u16[5] >> 2 : 0);
          ExpandHTPatX(v15);
        }
      }
      a1[1].m128i_i64[0] = (__int64)v15;
      ppwHTPat[v5.m128i_u8[1]] = (__int64)v15;
      goto LABEL_3;
    }
  }
  return 0LL;
}
