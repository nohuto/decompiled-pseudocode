/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C016AB44
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013043C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00A0258 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C00BA214 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00BAF70 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0115378 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C012616C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0127A90 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0134FCC (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C016DC7C (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2, __int64 a3)
{
  unsigned int v5; // r14d
  BOOL v7; // r15d
  unsigned __int64 v8; // rdx
  signed __int32 v9; // ett
  SEMOBJ *v10; // rcx
  unsigned __int64 v11; // rdx
  signed __int32 v12; // ett
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct PFF **v15; // rcx
  unsigned __int64 v16; // rdx
  signed __int32 v17; // ett
  unsigned __int64 v18; // rdx
  signed __int32 v19; // ett
  size_t Size; // [rsp+30h] [rbp-69h]
  HDEV v21; // [rsp+40h] [rbp-59h]
  struct DHPDEV__ *v22; // [rsp+48h] [rbp-51h]
  struct PFT *v23; // [rsp+50h] [rbp-49h]
  __int64 v24; // [rsp+90h] [rbp-9h] BYREF
  __int64 v25; // [rsp+98h] [rbp-1h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+B0h] [rbp+17h] BYREF
  _QWORD v29[3]; // [rsp+B8h] [rbp+1Fh] BYREF
  struct PFF **v30; // [rsp+118h] [rbp+7Fh] BYREF

  v5 = a3;
  v30 = 0LL;
  if ( ScrutinizeFontLoad(3LL, 0LL, a3) < 0 )
    return 1LL;
  v25 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v7 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v30) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  if ( !v7 )
  {
    v23 = *(struct PFT **)this;
    v22 = *(struct DHPDEV__ **)(*(_QWORD *)a2 + 1800LL);
    v21 = *(HDEV *)a2;
    LODWORD(Size) = 0;
    v24 = 0LL;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v29,
      v5,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v21,
      v22,
      v23,
      0,
      0,
      (struct _FNTCHECKSUM *)&v24,
      0LL,
      0LL,
      0);
    if ( v29[0] )
    {
      if ( (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v29, a2, v5) )
      {
        v27 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v30) && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
        {
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v29, 0) )
          {
            v13 = v29[0];
            v14 = *(_QWORD *)this;
            if ( (*(_DWORD *)(v29[0] + 52LL) & 0x200) == 0 )
              ++*(_DWORD *)(v14 + 32);
            ++*(_DWORD *)(v14 + 28);
            v15 = v30;
            if ( *v30 )
              *((_QWORD *)*v30 + 2) = v13;
            *(_QWORD *)(v13 + 8) = *v15;
            *(_QWORD *)(v13 + 16) = 0LL;
            *v15 = (struct PFF *)v13;
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v29);
            v7 = 1;
            *(_DWORD *)(*(_QWORD *)a2 + 3568LL) = v5;
            v16 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
            do
              v17 = *(_DWORD *)(v16 + 40);
            while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v17 | 0x40, v17) );
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v29);
            v11 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
            do
              v12 = *(_DWORD *)(v11 + 40);
            while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 40), v12 | 0x40, v12) );
          }
        }
        v10 = (SEMOBJ *)&v27;
      }
      else
      {
        v26 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
        {
          v8 = *(_QWORD *)a2;
          _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
          do
            v9 = *(_DWORD *)(v8 + 40);
          while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 40), v9 | 0x40, v9) );
        }
        v10 = (SEMOBJ *)&v26;
      }
    }
    else
    {
      v28 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
      {
        v18 = *(_QWORD *)a2;
        _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
        do
          v19 = *(_DWORD *)(v18 + 40);
        while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), v19 | 0x40, v19) );
      }
      v10 = (SEMOBJ *)&v28;
    }
    SEMOBJ::vUnlock(v10);
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v29);
  }
  return v7;
}
