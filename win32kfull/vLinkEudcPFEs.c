void __fastcall vLinkEudcPFEs(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rdi
  __int64 j; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = Gre::Base::Globals(a1);
  v4 = SGDGetSessionState(v3);
  v11 = *((_QWORD *)v2 + 6);
  v5 = *(_QWORD *)(v4 + 32);
  GreAcquireSemaphore(v11);
  v6 = *(_QWORD *)(v5 + 20272);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v6 + 8 * i + 40) )
      vLinkEudcPFEsWorker(a1);
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v10);
  v8 = v10[0];
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v8 + 24); j = (unsigned int)(j + 1) )
  {
    if ( *(_QWORD *)(v8 + 8 * j + 40) )
      vLinkEudcPFEsWorker(a1);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
}
