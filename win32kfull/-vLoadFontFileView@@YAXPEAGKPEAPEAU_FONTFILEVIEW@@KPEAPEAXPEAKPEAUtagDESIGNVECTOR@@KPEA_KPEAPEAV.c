/*
 * XREFs of ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C026E2D4
 * Callers:
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026DA10 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026DF1C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     UmfdLoadFontFileView @ 0x1C011859C (UmfdLoadFontFileView.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0118E20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

void __fastcall vLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        struct PDEV **a10,
        struct _FNTCHECKSUM *a11,
        int a12,
        int *a13)
{
  Gre::Base *v17; // rcx
  __int64 v18; // [rsp+70h] [rbp-18h] BYREF

  UmfdHostLifeTimeManager::EnsureUmfdHost((__int64)a1);
  v18 = *((_QWORD *)Gre::Base::Globals(v17) + 8);
  GreAcquireSemaphore(v18);
  *((_DWORD *)a11 + 1) = 0;
  *(_DWORD *)a11 = 0;
  UmfdLoadFontFileView(a1, a2, a3, a4, (char)a5, (char)a6, a7, a8, (__int64 *)a9, a10, (unsigned int *)a11, a12, a13);
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
}
