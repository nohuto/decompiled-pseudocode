/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016AAC0
 * Callers:
 *     vLinkEudcPFEsWorker @ 0x1C00A3C74 (vLinkEudcPFEsWorker.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00A51A8 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00A5720 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00BAF70 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00BBC28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C010EBC4 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011EA94 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0136934 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C0154694 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C01613EC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C016C6A8 (vDeactivateEudcRFONTsWorker.c)
 *     _lambda_42f186421c331d4d68df43a01bbfc838_::operator() @ 0x1C016CA80 (_lambda_42f186421c331d4d68df43a01bbfc838_--operator().c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C02725B8 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C0272708 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C0272808 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02729FC (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0298BF0 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C0298D50 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     Feature_1989462328__private_IsEnabledDeviceUsage @ 0x1C016ADE0 (Feature_1989462328__private_IsEnabledDeviceUsage.c)
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  bool v2; // cc

  v2 = dword_1C0331C74 <= 0;
  if ( dword_1C0331C74 < 0 )
  {
    _InterlockedCompareExchange(&dword_1C0331C74, Feature_1989462328__private_IsEnabledDeviceUsage() != 0, -1);
    v2 = dword_1C0331C74 <= 0;
  }
  if ( !v2 )
  {
    while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
      a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  }
  return a1;
}
