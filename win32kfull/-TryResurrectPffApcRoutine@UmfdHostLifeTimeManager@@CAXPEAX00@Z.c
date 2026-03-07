void __fastcall UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(Gre::Base *a1, _BYTE *a2, struct PFF *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rsi
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 )
  {
    v5 = Gre::Base::Globals(a1);
    v12 = *((_QWORD *)v5 + 6);
    GreAcquireSemaphore(v12);
    v7 = SGDGetSessionState(v6);
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v9 + 23504) = CurrentThread;
    if ( a3
      || *(_QWORD *)(v9 + 20272)
      && (v10 = *(_QWORD *)(v9 + 20272), (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v10, (__int64)a2)) != 0LL)
      || *((_QWORD *)v5 + 796)
      && (v11[0] = *((_QWORD *)v5 + 796), (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)v11, (__int64)a2)) != 0LL) )
    {
      if ( a2[12] )
      {
        if ( UmfdHostLifeTimeManager::EnsureUmfdHost((__int64)CurrentThread) )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectHff(a2, a3) )
          {
            v13 = *((_QWORD *)a3 + 11);
            if ( (unsigned int)PDEVOBJ::QueryFontFile((PDEVOBJ *)&v13, (unsigned __int64)a2, 2u, 0, 0LL) == *((_DWORD *)a3 + 52)
              && UmfdHostLifeTimeManager::TryResurrectUmfdAllocations((unsigned __int64)a2, a3) )
            {
              a2[12] = 0;
            }
          }
        }
      }
    }
    *(_QWORD *)(v9 + 23504) = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v12);
  }
}
