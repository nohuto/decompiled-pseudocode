/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0272F10
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C028A458 (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00A0258 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00A3B30 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C00A6AF8 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C00BA214 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00BBC28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0115378 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C01227A0 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0125764 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C012616C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0127A90 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0134FCC (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct _FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // rsi
  struct _FONTFILEVIEW *v7; // rdx
  __int64 v11; // r15
  unsigned int FontFile; // eax
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rbx
  struct PFT *v16; // rcx
  struct PFF **v17; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+94h] [rbp-7Ch]
  HDEV v22; // [rsp+98h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-68h] BYREF
  struct PFF **v25; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v26[3]; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+D0h] [rbp-40h] BYREF
  HDEV v28; // [rsp+D8h] [rbp-38h] BYREF
  int *v29; // [rsp+E0h] [rbp-30h]
  __int64 v30; // [rsp+E8h] [rbp-28h] BYREF
  wchar_t Dst[32]; // [rsp+F0h] [rbp-20h] BYREF

  v6 = a2;
  v7 = *a2;
  v29 = a6;
  v21 = a4;
  v11 = 0LL;
  v24 = 0LL;
  v27 = (void *)*((_QWORD *)v7 + 2);
  v20 = *((_DWORD *)v7 + 6);
  v23 = 0LL;
  v22 = 0LL;
  if ( ScrutinizeFontLoad(1LL, 0LL, (__int64)a3) >= 0 )
  {
    vLoadFontFileView(
      0LL,
      0,
      v6,
      1LL,
      &v27,
      &v20,
      a3,
      a4,
      &v23,
      (struct PDEV **)&v22,
      (struct _FNTCHECKSUM *)&v24,
      1,
      0LL);
    v28 = v22;
    if ( v23 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v28, v23, 2u, 0, 0LL);
      v13 = FontFile;
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
        v14 = -1LL;
        do
          ++v14;
        while ( Dst[v14] );
        LODWORD(Size) = a4;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v26,
          v13,
          Dst,
          v14 + 1,
          1u,
          a3,
          Size,
          v23,
          v22,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)&v24,
          v6,
          0LL,
          0);
        v15 = v26[0];
        if ( v26[0] )
        {
          v6 = 0LL;
          *v29 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v26, Dst, v13, 0LL, 0LL) )
          {
            v30 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v26, 0) )
            {
              v25 = 0LL;
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v14 + 1, 1, a3, v21, &v25, 0) )
              {
                v16 = *this;
                if ( (*(_DWORD *)(v15 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v16 + 8);
                ++*((_DWORD *)v16 + 7);
                v17 = v25;
                if ( *v25 )
                  *((_QWORD *)*v25 + 2) = v15;
                *(_QWORD *)(v15 + 8) = *v17;
                *(_QWORD *)(v15 + 16) = 0LL;
                *v17 = (struct PFF *)v15;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v26);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v26);
                v11 = *(unsigned int *)(v15 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v26);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v30);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v26);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
