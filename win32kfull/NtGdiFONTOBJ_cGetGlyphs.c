/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C02CE7E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C012F7A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C012F7B8 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C029AF90 (FONTOBJ_cGetGlyphs.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C029B32C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C029B36C (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C029B3F8 (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02C24F8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02C27CC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, ULONG a2, __int64 a3, ULONG64 a4, ULONG64 a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rsi
  _DWORD *v11; // rdi
  struct PFT *v12; // r15
  HGLYPH *v13; // r14
  ULONG Glyphs; // ebx
  struct _GLYPHBITS **v15; // r14
  struct _GLYPHBITS *v16; // rdx
  struct _GLYPHBITS *v17; // rax
  PVOID *v18; // rdx
  _DWORD v20[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID ppvGlyph[3]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v22[64]; // [rsp+58h] [rbp-40h] BYREF

  v20[1] = a2;
  ppvGlyph[0] = 0LL;
  v20[0] = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  ppvGlyph[2] = ThreadCurrentObj;
  v11 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v11;
  ppvGlyph[1] = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  v12 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v12 || a2 - 1 > 1 )
  {
    --*v11;
    return 0LL;
  }
  v13 = (HGLYPH *)a4;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v13 = (HGLYPH *)MmUserProbeAddress;
    v20[0] = *v13;
    v13 = v20;
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v22, v12);
  UMPDAcquireRFONTSem((struct RFONTOBJ *)v22, v10, 0, 0, 0LL);
  Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v12, a2, 1u, v13, ppvGlyph);
  if ( Glyphs == 1 )
  {
    v15 = (struct _GLYPHBITS **)ppvGlyph[0];
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)ppvGlyph, 0x40u) )
    {
      v16 = *v15;
      if ( *v15 )
      {
        if ( a2 == 1 )
          v17 = UMPDOBJ::CacheGlyphBits(v10, v16);
        else
          v17 = (struct _GLYPHBITS *)UMPDOBJ::CacheGlyphPath(v10, (struct _PATHOBJ *)v16);
        *(_QWORD *)ppvGlyph[0] = v17;
        Glyphs = v17 != 0LL;
      }
    }
    else
    {
      Glyphs = 0;
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)v22, v10, 0LL, 0LL, 0LL);
  if ( Glyphs )
  {
    v18 = (PVOID *)a5;
    if ( a5 >= MmUserProbeAddress )
      v18 = (PVOID *)MmUserProbeAddress;
    *v18 = ppvGlyph[0];
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v22);
  --*v11;
  return Glyphs;
}
