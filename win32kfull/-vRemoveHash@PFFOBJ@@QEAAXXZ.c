/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00B7040 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C026D824 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026DA10 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026DF1C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C00B6FC0 (-vFree@FHOBJ@@QEAAXXZ.c)
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x1C0114D30 (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C0117D28 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0117D44 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 */

void __fastcall PFFOBJ::vRemoveHash(PFFOBJ *this)
{
  __int64 v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF

  v3 = Gre::Base::Globals(this);
  ++*(_DWORD *)(*((_QWORD *)v3 + 241) + 1573016LL);
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 80LL) )
  {
    v5 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
    if ( PFFOBJ::bInPrivatePFT(this) )
      v6 = (_QWORD *)*((_QWORD *)v3 + 796);
    else
      v6 = *(_QWORD **)(v5 + 20272);
    v12[0] = v6;
    v10 = v6 + 1;
    v7 = 0LL;
    v11 = v6[1];
    v12[1] = *v6;
    v8 = v6 + 2;
    v9 = *(_QWORD *)this;
    v13[0] = v8;
    v13[1] = *v8;
    if ( *(_DWORD *)(v9 + 208) )
    {
      do
      {
        v14 = *(_QWORD *)(v9 + 8 * v7 + 216);
        if ( (*(_DWORD *)(v14 + 12) & 8) == 0 )
        {
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v10) )
            FHOBJ::vDelete((FHOBJ *)&v10, (struct PFEOBJ *)&v14);
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v12) )
            FHOBJ::vDelete((FHOBJ *)v12, (struct PFEOBJ *)&v14);
        }
        if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v13) )
          FHOBJ::vDelete((FHOBJ *)v13, (struct PFEOBJ *)&v14);
        v9 = *(_QWORD *)this;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(*(_QWORD *)this + 208LL) );
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 88LL) == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v9) + 32) + 23448LL)
      && !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) )
    {
      --*((_DWORD *)v3 + 40);
    }
  }
  else
  {
    v10 = (__int64 *)(v4 + 104);
    v11 = *(_QWORD *)(v4 + 104);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v10) )
      FHOBJ::vFree((FHOBJ *)&v10);
    v10 = (__int64 *)(*(_QWORD *)this + 112LL);
    v11 = *v10;
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v10) )
      FHOBJ::vFree((FHOBJ *)&v10);
    v10 = (__int64 *)(*(_QWORD *)this + 120LL);
    v11 = *v10;
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v10) )
      FHOBJ::vFree((FHOBJ *)&v10);
  }
}
