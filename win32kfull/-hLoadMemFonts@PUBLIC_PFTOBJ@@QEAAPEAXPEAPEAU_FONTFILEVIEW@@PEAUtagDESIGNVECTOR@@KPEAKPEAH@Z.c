/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026DF1C
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C028E05C (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F2EE4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0114D68 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C01154C8 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0117434 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C011D0B8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D160 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C011D180 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C011D1B0 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C026E2D4 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C02E3154 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  Gre::Base *v18; // rcx
  struct PFT *v19; // rcx
  struct PFF **v20; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  struct PFF **v23; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+9Ch] [rbp-74h]
  HDEV v26; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp-68h] BYREF
  int *v28; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v29[3]; // [rsp+B8h] [rbp-58h] BYREF
  void *v30; // [rsp+D0h] [rbp-40h] BYREF
  HDEV v31; // [rsp+D8h] [rbp-38h] BYREF
  wchar_t Dst[32]; // [rsp+E0h] [rbp-30h] BYREF

  v6 = a2;
  v7 = *a2;
  v28 = a6;
  v25 = a4;
  v11 = 0LL;
  v23 = 0LL;
  v30 = (void *)*((_QWORD *)v7 + 2);
  v24 = *((_DWORD *)v7 + 6);
  v27 = 0LL;
  v26 = 0LL;
  if ( ScrutinizeFontLoad(1u, 0LL) >= 0 )
  {
    vLoadFontFileView(
      0LL,
      0,
      v6,
      1u,
      &v30,
      &v24,
      a3,
      a4,
      &v27,
      (struct PDEV **)&v26,
      (struct _FNTCHECKSUM *)&v23,
      1,
      0LL);
    v31 = v26;
    if ( v27 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v31, v27, 2u, 0, 0LL);
      v13 = FontFile;
      v14 = FontFile - 1;
      if ( (unsigned int)v14 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        v15 = SGDGetSessionState(v14);
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 32) + 23368LL)));
        v16 = -1LL;
        do
          ++v16;
        while ( Dst[v16] );
        LODWORD(Size) = a4;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v29,
          v13,
          Dst,
          v16 + 1,
          1u,
          a3,
          Size,
          v27,
          v26,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)&v23,
          v6,
          0LL,
          0);
        v17 = v29[0];
        if ( v29[0] )
        {
          v6 = 0LL;
          *v28 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v29, Dst, v13, 0LL, 0LL) )
          {
            v28 = (int *)*((_QWORD *)Gre::Base::Globals(v18) + 6);
            GreAcquireSemaphore(v28);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v29, 0) )
            {
              v23 = 0LL;
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v16 + 1, 1, a3, v25, &v23, 0) )
              {
                v19 = *this;
                if ( (*(_DWORD *)(v17 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v19 + 8);
                ++*((_DWORD *)v19 + 7);
                v20 = v23;
                if ( *v23 )
                  *((_QWORD *)*v23 + 2) = v17;
                *(_QWORD *)(v17 + 8) = *v20;
                *(_QWORD *)(v17 + 16) = 0LL;
                *v20 = (struct PFF *)v17;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v29);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v29);
                v11 = *(unsigned int *)(v17 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v29);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v28);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v29);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
