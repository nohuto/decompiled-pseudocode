/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C00B9EB4
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00A20A8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00A55D0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00BAC64 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C016A2E4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C027258C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0272930 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C00B9FE0 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C00BAAD4 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C00E64E4 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall PFFOBJ::vRemoveHash(PFFOBJ *this)
{
  __int64 v2; // r8
  struct _FONTHASH **v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  struct _FONTHASH **v7; // [rsp+20h] [rbp-30h] BYREF
  struct _FONTHASH *v8; // [rsp+28h] [rbp-28h]
  _QWORD v9[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF

  ++*(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 80LL) )
  {
    v3 = gpPFTPublic;
    if ( *(struct PFT **const *)(v2 + 128) == gpPFTPrivate )
      v3 = gpPFTPrivate;
    v4 = 0LL;
    v9[0] = v3;
    v7 = v3 + 1;
    v8 = v3[1];
    v9[1] = *v3;
    v10[0] = v3 + 2;
    v10[1] = v3[2];
    if ( *(_DWORD *)(v2 + 208) )
    {
      do
      {
        v11 = *(_QWORD *)(v2 + 8 * v4 + 216);
        if ( (*(_DWORD *)(v11 + 12) & 8) == 0 )
        {
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v7) )
            FHOBJ::vDelete((FHOBJ *)&v7, (struct PFEOBJ *)&v11);
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v9) )
            FHOBJ::vDelete((FHOBJ *)v9, (struct PFEOBJ *)&v11);
        }
        if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v10) )
          FHOBJ::vDelete((FHOBJ *)v10, (struct PFEOBJ *)&v11);
        v2 = *(_QWORD *)this;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)this + 208LL) );
    }
    if ( *(struct PDEV **)(v2 + 88) == qword_1C0340AC0 && !*(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) )
      --gcTrueTypeFonts;
  }
  else
  {
    v7 = (struct _FONTHASH **)(v2 + 104);
    v8 = *(struct _FONTHASH **)(v2 + 104);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v7) )
    {
      FHOBJ::vFree((FHOBJ *)&v7);
      v5 = *(_QWORD *)this;
    }
    v7 = (struct _FONTHASH **)(v5 + 112);
    v8 = *(struct _FONTHASH **)(v5 + 112);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v7) )
    {
      FHOBJ::vFree((FHOBJ *)&v7);
      v6 = *(_QWORD *)this;
    }
    v7 = (struct _FONTHASH **)(v6 + 120);
    v8 = *(struct _FONTHASH **)(v6 + 120);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v7) )
      FHOBJ::vFree((FHOBJ *)&v7);
  }
}
