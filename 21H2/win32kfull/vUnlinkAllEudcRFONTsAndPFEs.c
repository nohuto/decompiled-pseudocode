/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011E990
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C00A24E4 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0297DB0 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02980C0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090814 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011EA94 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C016AA98 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  struct _FONTHASH **v4; // rbx
  __int64 i; // rdi
  struct PFT *v6; // rbx
  __int64 j; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 k; // rdi
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v11[0] = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v13 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v4 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v4[i + 5] )
      vUnlinkAllEudcRFONTsAndPFEsWorker(v3, a2);
  }
  v6 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v6 + j + 5) )
      vUnlinkAllEudcRFONTsAndPFEsWorker(v3, a2);
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v12, (struct PFT *)gpPFTPrivate);
  if ( RFONTOBJ::bValid((RFONTOBJ *)&v12) )
  {
    v9 = v12;
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v9 + 24); k = (unsigned int)(k + 1) )
    {
      if ( *(_QWORD *)(v9 + 8 * k + 40) )
        vUnlinkAllEudcRFONTsAndPFEsWorker(v8, a2);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)v11);
}
