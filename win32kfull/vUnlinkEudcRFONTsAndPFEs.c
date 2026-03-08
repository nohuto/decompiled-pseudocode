/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x1C02A311C
 * Callers:
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00DF170 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C02A3238 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(Gre::Base *a1, __int64 a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 i; // rbx
  __int64 v10; // rbx
  __int64 j; // rdi
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = Gre::Base::Globals(a1);
  v14 = *((_QWORD *)v4 + 6);
  GreAcquireSemaphore(v14);
  v13 = *((_QWORD *)v4 + 3);
  GreAcquireSemaphore(v13);
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v5) + 32) + 20272LL);
  if ( *(_DWORD *)(v7 + 24) )
  {
    do
    {
      if ( *(_QWORD *)(v7 + 8 * v6 + 40) )
        vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(v7 + 24) );
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v12);
  v8 = v12[0];
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 24); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v8 + 8 * i + 40) )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  v10 = *((_QWORD *)v4 + 796);
  if ( v10 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v10 + 24); j = (unsigned int)(j + 1) )
    {
      if ( *(_QWORD *)(v10 + 8 * j + 40) )
        vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
}
