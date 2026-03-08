/*
 * XREFs of ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0114D68
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026DF1C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C01181D0 (-iHash@@YAIPEBGI@Z.c)
 */

void __fastcall PFFOBJ::vSetUniqueness(PFFOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // r10

  Gre::Base::Globals(this);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  *(_DWORD *)(*(_QWORD *)this + 140LL) = ++*(_DWORD *)(v3 + 20268);
  v4 = iHash(
         *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
         *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 24LL));
  *(_DWORD *)(v5 + 140) = *(_DWORD *)(v5 + 140) & 0xFFFFFF | (v4 << 24);
}
