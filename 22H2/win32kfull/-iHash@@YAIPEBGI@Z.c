/*
 * XREFs of ?iHash@@YAIPEBGI@Z @ 0x1C0115910
 * Callers:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00A0568 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00A4C34 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C00A8168 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0115160 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C011608C (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C011681C (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iHash(const unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // r8d

  v2 = 0;
  while ( *a1 )
  {
    v3 = *(unsigned __int8 *)a1++;
    v2 = v3 + 257 * v2;
  }
  return v2 % a2;
}
