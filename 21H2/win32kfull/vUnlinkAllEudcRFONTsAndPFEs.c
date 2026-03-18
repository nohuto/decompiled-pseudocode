/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEs @ 0x1C015EC88
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C015E790 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0295894 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0295B94 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C015ED74 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEs(unsigned int a1)
{
  struct _FONTHASH **v2; // rbx
  __int64 i; // rdi
  struct PFT *v4; // rbx
  __int64 j; // rdi
  __int64 k; // rdi
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v7 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v2 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v2[i + 5] )
      vUnlinkAllEudcRFONTsAndPFEsWorker(a1);
  }
  v4 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v4 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v4 + j + 5) )
      vUnlinkAllEudcRFONTsAndPFEsWorker(a1);
  }
  if ( gpPFTPrivate )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)gpPFTPrivate + 6); k = (unsigned int)(k + 1) )
    {
      if ( gpPFTPrivate[k + 5] )
        vUnlinkAllEudcRFONTsAndPFEsWorker(a1);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
