/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x1C0297384
 * Callers:
 *     bDeleteFlEntry @ 0x1C02961A8 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C029747C (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(__int64 a1, __int64 a2)
{
  struct _FONTHASH **v4; // rbx
  __int64 i; // rdi
  struct PFT *v6; // rbx
  __int64 j; // rdi
  __int64 k; // rdi
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v9 = ghsemRFONTList;
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
  if ( gpPFTPrivate )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)gpPFTPrivate + 6); k = (unsigned int)(k + 1) )
    {
      if ( gpPFTPrivate[k + 5] )
        vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
