/*
 * XREFs of NtGdiGetGlyphIndicesWInternal @ 0x1C0114560
 * Callers:
 *     NtGdiGetGlyphIndicesW @ 0x1C0114530 (NtGdiGetGlyphIndicesW.c)
 * Callees:
 *     GreGetGlyphIndicesW @ 0x1C0114748 (GreGetGlyphIndicesW.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesWInternal(HDC a1, char *a2, int a3, char *a4, unsigned int a5, int a6)
{
  __int64 v7; // rsi
  _BYTE *v8; // rbx
  unsigned int GlyphIndicesW; // edi
  unsigned int v10; // r13d
  size_t v11; // r8
  char *v13; // [rsp+50h] [rbp-A8h]
  _BYTE Src[64]; // [rsp+70h] [rbp-88h] BYREF

  v7 = a3;
  v13 = a2;
  v8 = 0LL;
  GlyphIndicesW = -1;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( !a3 && !a2 && !a4 && !a5 )
    return GreGetGlyphIndicesW(a1, 0, a6);
  v10 = 0;
  if ( a5 <= 1 )
    v10 = a5;
  if ( a3 > 16 )
  {
    if ( (unsigned int)a3 <= 0x9C4000 )
    {
      v8 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)(4 * a3));
      a2 = v13;
    }
  }
  else
  {
    v8 = Src;
  }
  if ( v8 )
  {
    if ( &a2[2 * v7] < a2 || (unsigned __int64)&a2[2 * v7] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(&v8[2 * v7], a2, 2 * v7);
    GlyphIndicesW = v7;
    if ( (_DWORD)v7 != -1 )
    {
      GlyphIndicesW = GreGetGlyphIndicesW(a1, v10, a6);
      if ( GlyphIndicesW != -1 )
      {
        v11 = 2LL * (int)v7;
        if ( &a4[v11] <= a4 || (unsigned __int64)&a4[v11] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v8, v11);
      }
    }
    if ( v8 != Src )
      FreeTmpBuffer(v8);
  }
  return GlyphIndicesW;
}
