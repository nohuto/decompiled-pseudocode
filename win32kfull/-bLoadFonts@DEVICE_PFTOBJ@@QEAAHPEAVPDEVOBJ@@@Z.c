/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C026D824
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00F5628 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00039AC (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F2EE4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0117434 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D160 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C011D180 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C011D1B0 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02D8474 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2)
{
  Gre::Base *v4; // rcx
  BOOL v6; // r13d
  HDEV v7; // rsi
  struct PFT *v8; // rdi
  struct DHPDEV__ *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct PFF **v13; // rdx
  size_t Size; // [rsp+30h] [rbp-59h]
  struct Gre::Base::SESSION_GLOBALS *v15; // [rsp+90h] [rbp+7h]
  _QWORD v16[9]; // [rsp+98h] [rbp+Fh] BYREF
  struct PFF **v17; // [rsp+100h] [rbp+77h] BYREF
  __int64 v18; // [rsp+108h] [rbp+7Fh] BYREF

  v17 = 0LL;
  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v15 = Gre::Base::Globals(v4);
  v18 = *((_QWORD *)v15 + 6);
  GreAcquireSemaphore(v18);
  v6 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  if ( !v6 )
  {
    v7 = *(HDEV *)a2;
    v8 = *(struct PFT **)this;
    v18 = 0LL;
    v9 = (struct DHPDEV__ *)*((_QWORD *)v7 + 221);
    v10 = PDEVOBJ::cFonts(a2);
    LODWORD(Size) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v16,
      v10,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v7,
      v9,
      v8,
      0,
      0,
      (struct _FNTCHECKSUM *)&v18,
      0LL,
      0LL,
      0);
    if ( v16[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v16, a2) )
    {
      v18 = *((_QWORD *)v15 + 6);
      GreAcquireSemaphore(v18);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v16, 0) )
        {
          v11 = v16[0];
          v12 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v16[0] + 52LL) & 0x200) == 0 )
            ++*(_DWORD *)(v12 + 32);
          ++*(_DWORD *)(v12 + 28);
          v13 = v17;
          if ( *v17 )
            *((_QWORD *)*v17 + 2) = v11;
          *(_QWORD *)(v11 + 8) = *v13;
          *(_QWORD *)(v11 + 16) = 0LL;
          *v13 = (struct PFF *)v11;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v16);
          v6 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v16);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v16);
  }
  return v6;
}
