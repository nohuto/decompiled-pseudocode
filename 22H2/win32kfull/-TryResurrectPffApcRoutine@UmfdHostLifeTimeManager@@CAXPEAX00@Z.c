/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02E0F00
 * Callers:
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BCE48 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0113620 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C026AAA4 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E0D70 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E1038 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C02E13F0 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 */

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
