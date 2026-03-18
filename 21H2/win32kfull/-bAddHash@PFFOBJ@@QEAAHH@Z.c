/*
 * XREFs of ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0012704
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00134A0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02707FC (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02709E0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0270D90 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C0012850 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C0012CE4 (-bValid@FHOBJ@@QEBAHXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall PFFOBJ::bAddHash(PFFOBJ *this, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _FONTHASH **v7; // rdx
  _QWORD *v8; // rcx
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v2 = 0;
  ++*(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v6 )
  {
    v7 = gpPFTPublic;
    if ( *(struct PFT **const *)(v5 + 128) == gpPFTPrivate )
      v7 = gpPFTPrivate;
    v8 = v7 + 1;
    v9 = (__int64 *)(v7 + 2);
    if ( *(_QWORD *)(v5 + 88) == qword_1C033BDF8 && !*(_DWORD *)(v6 + 8) )
      ++gcTrueTypeFonts;
  }
  else
  {
    v8 = (_QWORD *)(v5 + 104);
    v7 = (struct _FONTHASH **)(v5 + 112);
    v9 = (__int64 *)(v5 + 120);
  }
  v15[1] = *v7;
  v16[1] = *v8;
  v10 = *v9;
  v16[0] = v8;
  v14[1] = v10;
  v15[0] = v7;
  v14[0] = v9;
  if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v14)
    && (unsigned int)FHOBJ::bValid((FHOBJ *)v15)
    && (unsigned int)FHOBJ::bValid((FHOBJ *)v16) )
  {
    v11 = *(_QWORD *)this;
    v12 = 0;
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v11 + 8LL * v12 + 216);
        if ( !(unsigned int)FHOBJ::bInsert((FHOBJ *)v14, (struct PFEOBJ *)&v17)
          || !a2
          && (!(unsigned int)FHOBJ::bInsert((FHOBJ *)v15, (struct PFEOBJ *)&v17)
           || !(unsigned int)FHOBJ::bInsert((FHOBJ *)v16, (struct PFEOBJ *)&v17)) )
        {
          break;
        }
        v11 = *(_QWORD *)this;
        if ( ++v12 >= *(_DWORD *)(*(_QWORD *)this + 208LL) )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
