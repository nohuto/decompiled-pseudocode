__int64 __fastcall NtGdiAddEmbFontToDC(HDC a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  struct PFF *PFFFromId; // rsi
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *a2;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v5 = Gre::Base::Globals(v4);
    GreAcquireSemaphore(*((_QWORD *)v5 + 6));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v5 + 6), 14LL);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v9, *((struct PFT **)v5 + 796));
    if ( v9[0] )
    {
      PFFFromId = GetPFFFromId(*((struct PFT **)v5 + 796), v2, 0LL);
      if ( (unsigned int)PUBLIC_PFTOBJ::VerifyPFF((PUBLIC_PFTOBJ *)v9, PFFFromId) )
        v3 = XDCOBJ::bAddRemoteFont((XDCOBJ *)v8, PFFFromId);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 6));
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v3;
}
