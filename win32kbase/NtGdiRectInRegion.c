/*
 * XREFs of NtGdiRectInRegion @ 0x1C0185920
 * Callers:
 *     <none>
 * Callees:
 *     GreRectInRegion @ 0x1C00A65A0 (GreRectInRegion.c)
 */

__int64 __fastcall NtGdiRectInRegion(HRGN a1, ULONG64 a2)
{
  struct _RECTL *v2; // rbx
  __m128i *v3; // rax
  __m128i v4; // xmm0
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // xmm0_8
  unsigned __int64 v7; // rax
  unsigned int v8; // r8d
  struct _RECTL v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct _RECTL *)a2;
  v10 = 0LL;
  if ( a2 )
  {
    v3 = (__m128i *)a2;
    if ( a2 >= MmUserProbeAddress )
      v3 = (__m128i *)MmUserProbeAddress;
    v4 = *v3;
    v5 = v3->m128i_i64[0];
    v6 = _mm_srli_si128(v4, 8).m128i_u64[0];
    if ( (int)v5 <= (int)v6 )
    {
      v10.left = v5;
      v10.right = v6;
    }
    else
    {
      v10.left = v6;
      v10.right = v5;
    }
    v7 = HIDWORD(v5);
    if ( (int)v7 <= SHIDWORD(v6) )
    {
      v10.top = v7;
      v10.bottom = HIDWORD(v6);
    }
    else
    {
      v10.top = HIDWORD(v6);
      v10.bottom = v7;
    }
    v8 = GreRectInRegion(a1, &v10);
    if ( v8 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (struct _RECTL *)MmUserProbeAddress;
      *v2 = v10;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
