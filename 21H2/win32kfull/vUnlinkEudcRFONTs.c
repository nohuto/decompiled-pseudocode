/*
 * XREFs of vUnlinkEudcRFONTs @ 0x1C0297294
 * Callers:
 *     bDeleteFlEntry @ 0x1C02961A8 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02975D8 (vUnlinkEudcRFONTsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTs(__int64 a1)
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
      vUnlinkEudcRFONTsWorker(a1);
  }
  v4 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v4 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v4 + j + 5) )
      vUnlinkEudcRFONTsWorker(a1);
  }
  if ( gpPFTPrivate )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)gpPFTPrivate + 6); k = (unsigned int)(k + 1) )
    {
      if ( gpPFTPrivate[k + 5] )
        vUnlinkEudcRFONTsWorker(a1);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
