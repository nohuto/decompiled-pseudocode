/*
 * XREFs of vLinkEudcPFEs @ 0x1C010E458
 * Callers:
 *     bAddAllFlEntry @ 0x1C015E414 (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C015E790 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0295894 (GreEudcLoadLinkW.c)
 * Callees:
 *     vLinkEudcPFEsWorker @ 0x1C000FE74 (vLinkEudcPFEsWorker.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vLinkEudcPFEs(__int64 a1)
{
  struct _FONTHASH **v2; // rbx
  __int64 i; // rdi
  __int64 v4; // rdx
  struct PFT *v5; // rbx
  __int64 j; // rdi
  __int64 v7; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v2 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 6); i = (unsigned int)(i + 1) )
  {
    v4 = (__int64)v2[i + 5];
    if ( v4 )
      vLinkEudcPFEsWorker(a1, v4);
  }
  v5 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v5 + 6); j = (unsigned int)(j + 1) )
  {
    v7 = *((_QWORD *)v5 + j + 5);
    if ( v7 )
      vLinkEudcPFEsWorker(a1, v7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
