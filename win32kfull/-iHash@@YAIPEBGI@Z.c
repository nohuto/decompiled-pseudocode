/*
 * XREFs of ?iHash@@YAIPEBGI@Z @ 0x1C01181D0
 * Callers:
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0114D68 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0114DE0 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C01175B4 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0117D44 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C01183E8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C011D0B8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
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
