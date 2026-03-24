/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x1C0298AE0
 * Callers:
 *     bDeleteFlEntry @ 0x1C0298670 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090814 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C016AA98 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0298BF0 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(__int64 a1, __int64 a2)
{
  struct _FONTHASH **v4; // rbx
  __int64 i; // rdi
  struct PFT *v6; // rbx
  __int64 j; // rdi
  __int64 v8; // rbx
  __int64 k; // rdi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v10[0] = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v4 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v4[i + 5] )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  v6 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v6 + j + 5) )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v11, (struct PFT *)gpPFTPrivate);
  if ( RFONTOBJ::bValid((RFONTOBJ *)&v11) )
  {
    v8 = v11;
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v8 + 24); k = (unsigned int)(k + 1) )
    {
      if ( *(_QWORD *)(v8 + 8 * k + 40) )
        vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  SEMOBJ::vUnlock((SEMOBJ *)v10);
}
