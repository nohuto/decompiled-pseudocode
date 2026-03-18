/*
 * XREFs of ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00AE0EC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0112870 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C013E7D4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026AF54 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026B460 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02D6898 (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02D6950 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFMEMOBJ::~PFFMEMOBJ(PFFMEMOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( (*((_BYTE *)this + 16) & 2) == 0 )
  {
    v2 = *(_QWORD *)this;
    if ( v2 )
    {
      PopThreadGuardedObject(v2 + 160);
      if ( *((_DWORD *)this + 2) )
      {
        v3 = *(_QWORD *)(*(_QWORD *)this + 144LL);
        if ( (*((_DWORD *)this + 5) & 0x2C) != 0 )
          --*(_DWORD *)(v3 + 4);
        else
          --*(_DWORD *)v3;
        if ( !*(_DWORD *)(v3 + 4) && !*(_DWORD *)v3 )
          PFFOBJ::bRemovePvtData(this, (struct tagPvtData *)v3);
      }
      PFFOBJ::vPFFC_DeleteAndCleanup(this);
    }
  }
}
