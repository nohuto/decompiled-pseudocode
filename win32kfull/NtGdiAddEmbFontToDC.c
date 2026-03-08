/*
 * XREFs of NtGdiAddEmbFontToDC @ 0x1C027A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C012F7A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C014CD9A (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C026D69C (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02C2EB4 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

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
