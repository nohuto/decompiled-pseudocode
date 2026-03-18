/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750
 * Callers:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0003F94 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C007BD70 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     vLinkEudcPFEsWorker @ 0x1C0081920 (vLinkEudcPFEsWorker.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C009AC84 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00A0C88 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00A4C34 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00A82C8 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BCE48 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0112870 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0115160 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C013FC0C (vDeactivateEudcRFONTsWorker.c)
 *     _lambda_42f186421c331d4d68df43a01bbfc838_::operator() @ 0x1C013FD78 (_lambda_42f186421c331d4d68df43a01bbfc838_--operator().c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0159ACA (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026A85C (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026A9A8 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C026AAA4 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C026AC98 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C026ADB8 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C02A0ADC (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02A0C30 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     Feature_1519700280__private_IsEnabledDeviceUsage @ 0x1C013EA74 (Feature_1519700280__private_IsEnabledDeviceUsage.c)
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  bool v2; // cc

  v2 = dword_1C035A150 <= 0;
  if ( dword_1C035A150 < 0 )
  {
    _InterlockedCompareExchange(&dword_1C035A150, Feature_1519700280__private_IsEnabledDeviceUsage() != 0, -1);
    v2 = dword_1C035A150 <= 0;
  }
  if ( !v2 )
  {
    while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
      a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  }
  return a1;
}
