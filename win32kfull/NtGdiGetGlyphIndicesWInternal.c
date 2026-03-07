__int64 __fastcall NtGdiGetGlyphIndicesWInternal(__int64 a1, char *a2, int a3, char *a4, unsigned int a5, int a6)
{
  __int64 v7; // r14
  _BYTE *v10; // rbx
  unsigned int GlyphIndicesW; // edi
  unsigned int v12; // eax
  size_t v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // rax
  unsigned int v20; // ebx
  _BYTE v22[48]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v23[48]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE Src[64]; // [rsp+E0h] [rbp-88h] BYREF

  v7 = a3;
  v10 = 0LL;
  GlyphIndicesW = -1;
  if ( a3 < 0 )
    return GlyphIndicesW;
  if ( a3 || a2 || a4 )
  {
    v12 = a5;
LABEL_4:
    if ( v12 > 1 )
      a5 = 0;
    if ( a3 > 16 )
    {
      if ( (unsigned __int64)a3 <= 0x9C4000 )
        v10 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)(4 * a3));
    }
    else
    {
      v10 = Src;
    }
    if ( v10 )
    {
      v13 = 2 * v7;
      if ( &a2[2 * v7] < a2 || (unsigned __int64)&a2[2 * v7] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v10[v13], a2, v13);
      GlyphIndicesW = v7;
      if ( (_DWORD)v7 != -1 )
      {
        v17 = SGDGetSessionState(v15);
        EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v23, *(struct Gre::Full::SESSION_GLOBALS **)(v17 + 32));
        GlyphIndicesW = GreGetGlyphIndicesW(a1, &v10[v13], (unsigned int)v7, v10, a5, a6, 7);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v23);
        if ( GlyphIndicesW != -1 )
        {
          if ( (unsigned __int64)&a4[v13] > MmUserProbeAddress || &a4[v13] <= a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a4, v10, v13);
        }
      }
      if ( v10 != Src )
        FreeTmpBuffer(v10, v14, v16);
    }
    return GlyphIndicesW;
  }
  v12 = a5;
  if ( a5 )
    goto LABEL_4;
  v19 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v22, *(struct Gre::Full::SESSION_GLOBALS **)(v19 + 32));
  v20 = GreGetGlyphIndicesW(a1, 0LL, 0LL, 0LL, 0, a6, 7);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v22);
  return v20;
}
