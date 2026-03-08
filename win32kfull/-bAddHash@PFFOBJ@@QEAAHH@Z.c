/*
 * XREFs of ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0117434
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C026D824 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026DA10 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026DF1C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x1C0114D30 (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C01175B4 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C0117D28 (-bValid@FHOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PFFOBJ::bAddHash(PFFOBJ *this, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v4 = Gre::Base::Globals(this);
  ++*(_DWORD *)(*((_QWORD *)v4 + 241) + 1573016LL);
  v6 = SGDGetSessionState(v5);
  v7 = *(_QWORD **)this;
  v8 = *(_QWORD *)(v6 + 32);
  if ( *(_QWORD *)(*(_QWORD *)this + 80LL) )
  {
    if ( PFFOBJ::bInPrivatePFT(this) )
      v10 = (_QWORD *)*((_QWORD *)v4 + 796);
    else
      v10 = *(_QWORD **)(v8 + 20272);
    v11 = v10 + 1;
    v12 = v10 + 2;
    if ( *(_QWORD *)(*(_QWORD *)this + 88LL) == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v9) + 32) + 23448LL)
      && !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) )
    {
      ++*((_DWORD *)v4 + 40);
    }
  }
  else
  {
    v11 = v7 + 13;
    v10 = v7 + 14;
    v12 = v7 + 15;
  }
  v17[1] = *v10;
  v18[1] = *v11;
  v16[1] = *v12;
  v17[0] = v10;
  v18[0] = v11;
  v16[0] = v12;
  if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v16)
    && (unsigned int)FHOBJ::bValid((FHOBJ *)v17)
    && (unsigned int)FHOBJ::bValid((FHOBJ *)v18) )
  {
    v13 = *(_QWORD *)this;
    v14 = 0LL;
    if ( !*(_DWORD *)(*(_QWORD *)this + 208LL) )
      return 1LL;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v13 + 8 * v14 + 216);
      if ( !(unsigned int)FHOBJ::bInsert((FHOBJ *)v16, (struct PFEOBJ *)&v19)
        || !a2
        && (!(unsigned int)FHOBJ::bInsert((FHOBJ *)v17, (struct PFEOBJ *)&v19)
         || !(unsigned int)FHOBJ::bInsert((FHOBJ *)v18, (struct PFEOBJ *)&v19)) )
      {
        break;
      }
      v13 = *(_QWORD *)this;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(*(_QWORD *)this + 208LL) )
        return 1LL;
    }
  }
  return 0LL;
}
