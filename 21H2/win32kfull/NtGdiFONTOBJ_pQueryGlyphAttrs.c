/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B30C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0122C7C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01267F4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C012ABD8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C012AD40 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C015DA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C02911C0 (FONTOBJ_pQueryGlyphAttrs.c)
 */

void *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, ULONG a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  struct PFT *v8; // rsi
  void *v9; // rdi
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v11; // r14
  unsigned int cjThis; // esi
  void *v13; // rax
  char v14; // [rsp+60h] [rbp+18h] BYREF
  struct UMPDOBJ *v15; // [rsp+68h] [rbp+20h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  v15 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v8 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v8 )
  {
    --*((_DWORD *)v6 + 105);
    return 0LL;
  }
  v9 = 0LL;
  if ( *((_QWORD *)v6 + 42) )
  {
    v9 = (void *)*((_QWORD *)v6 + 42);
  }
  else
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v14, v8);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v14, v6, 0, 0, 0LL);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs((FONTOBJ *)v8, a2);
    v11 = GlyphAttrs;
    if ( GlyphAttrs )
    {
      cjThis = GlyphAttrs->cjThis;
      v13 = UMPDOBJ::_AllocUserMem(v6, GlyphAttrs->cjThis, 0);
      v9 = v13;
      if ( v13 )
      {
        memmove(v13, v11, cjThis);
        *((_QWORD *)v6 + 42) = v9;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v14, v6, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v14);
  }
  --*((_DWORD *)v6 + 105);
  return v9;
}
