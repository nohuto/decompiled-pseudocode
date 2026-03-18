/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C013E7D4
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00BDC38 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0003F94 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0022E54 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C00ACE98 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00AE0EC (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00BB404 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0115DB0 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0115F0C (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C0140778 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2, unsigned int a3)
{
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  BOOL v9; // r12d
  int DeviceFontTable; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  signed __int32 v13; // ett
  SEMOBJ *v14; // rcx
  unsigned __int64 v15; // rdx
  signed __int32 v16; // ett
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct PFF **v19; // rdx
  unsigned __int64 v20; // rdx
  signed __int32 v21; // ett
  unsigned __int64 v22; // rdx
  signed __int32 v23; // ett
  size_t Size; // [rsp+38h] [rbp-69h]
  HDEV v25; // [rsp+48h] [rbp-59h]
  struct DHPDEV__ *v26; // [rsp+50h] [rbp-51h]
  struct PFT *v27; // [rsp+58h] [rbp-49h]
  __int64 v28; // [rsp+98h] [rbp-9h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+B8h] [rbp+17h] BYREF
  _QWORD v33[3]; // [rsp+C0h] [rbp+1Fh] BYREF
  struct PFF **v34; // [rsp+120h] [rbp+7Fh] BYREF

  v34 = 0LL;
  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v8 = Gre::Base::Globals(v6);
  v29 = *((_QWORD *)v8 + 6);
  GreAcquireSemaphore(v29);
  v9 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v34) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
  if ( !v9 )
  {
    v27 = *(struct PFT **)this;
    v26 = *(struct DHPDEV__ **)(*(_QWORD *)a2 + 1768LL);
    v25 = *(HDEV *)a2;
    LODWORD(Size) = 0;
    v28 = 0LL;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v33,
      a3,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      v25,
      v26,
      v27,
      0,
      0,
      (struct _FNTCHECKSUM *)&v28,
      0LL,
      0LL,
      0);
    if ( v33[0] )
    {
      DeviceFontTable = PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v33, a2, a3);
      v11 = *((_QWORD *)v8 + 6);
      if ( DeviceFontTable )
      {
        v31 = *((_QWORD *)v8 + 6);
        GreAcquireSemaphore(v11);
        if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v34) && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
        {
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v33, 0) )
          {
            v17 = v33[0];
            v18 = *(_QWORD *)this;
            if ( (*(_DWORD *)(v33[0] + 52LL) & 0x200) == 0 )
              ++*(_DWORD *)(v18 + 32);
            ++*(_DWORD *)(v18 + 28);
            v19 = v34;
            if ( *v34 )
              *((_QWORD *)*v34 + 2) = v17;
            *(_QWORD *)(v17 + 8) = *v19;
            *(_QWORD *)(v17 + 16) = 0LL;
            *v19 = (struct PFF *)v17;
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v33);
            v9 = 1;
            *(_DWORD *)(*(_QWORD *)a2 + 3568LL) = a3;
            v20 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
            do
              v21 = *(_DWORD *)(v20 + 40);
            while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 40), v21 | 0x40, v21) );
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v33);
            v15 = *(_QWORD *)a2;
            _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
            do
              v16 = *(_DWORD *)(v15 + 40);
            while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 40), v16 | 0x40, v16) );
          }
        }
        v14 = (SEMOBJ *)&v31;
      }
      else
      {
        v30 = *((_QWORD *)v8 + 6);
        GreAcquireSemaphore(v11);
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
        {
          v12 = *(_QWORD *)a2;
          _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
          do
            v13 = *(_DWORD *)(v12 + 40);
          while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 40), v13 | 0x40, v13) );
        }
        v14 = (SEMOBJ *)&v30;
      }
    }
    else
    {
      v32 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(v32);
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x40) == 0 )
      {
        v22 = *(_QWORD *)a2;
        _m_prefetchw((const void *)(*(_QWORD *)a2 + 40LL));
        do
          v23 = *(_DWORD *)(v22 + 40);
        while ( v23 != _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 40), v23 | 0x40, v23) );
      }
      v14 = (SEMOBJ *)&v32;
    }
    SEMOBJ::vUnlock(v14);
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v33);
  }
  return v9;
}
