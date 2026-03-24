/*
 * XREFs of vLinkEudcPFEs @ 0x1C00A3D9C
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C00A2390 (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x1C00E6908 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0297780 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vLinkEudcPFEsWorker @ 0x1C00A3B24 (vLinkEudcPFEsWorker.c)
 */

void __fastcall vLinkEudcPFEs(__int64 a1)
{
  struct _FONTHASH **v2; // rbx
  __int64 i; // rdi
  struct PFF *v4; // rdx
  struct PFT *v5; // rbx
  __int64 j; // rdi
  struct PFF *v7; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v2 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 6); i = (unsigned int)(i + 1) )
  {
    v4 = v2[i + 5];
    if ( v4 )
      vLinkEudcPFEsWorker(a1, v4);
  }
  v5 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v5 + 6); j = (unsigned int)(j + 1) )
  {
    v7 = (struct PFF *)*((_QWORD *)v5 + j + 5);
    if ( v7 )
      vLinkEudcPFEsWorker(a1, v7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
