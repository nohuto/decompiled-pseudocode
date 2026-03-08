/*
 * XREFs of vUnlinkEudcRFONTs @ 0x1C02A3018
 * Callers:
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00DF170 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02A3388 (vUnlinkEudcRFONTsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTs(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rbx
  __int64 j; // rdi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  v12 = *((_QWORD *)v2 + 6);
  GreAcquireSemaphore(v12);
  v11 = *((_QWORD *)v2 + 3);
  GreAcquireSemaphore(v11);
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 20272LL);
  if ( *(_DWORD *)(v5 + 24) )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 8 * v4 + 40) )
        vUnlinkEudcRFONTsWorker(a1);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(v5 + 24) );
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v10);
  v6 = v10[0];
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v6 + 8 * i + 40) )
      vUnlinkEudcRFONTsWorker(a1);
  }
  v8 = *((_QWORD *)v2 + 796);
  if ( v8 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v8 + 24); j = (unsigned int)(j + 1) )
    {
      if ( *(_QWORD *)(v8 + 8 * j + 40) )
        vUnlinkEudcRFONTsWorker(a1);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
}
