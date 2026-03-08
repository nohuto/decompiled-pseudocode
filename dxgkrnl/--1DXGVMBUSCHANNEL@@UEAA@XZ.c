/*
 * XREFs of ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C0361064
 * Callers:
 *     ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1C0361140 (--_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C035C6F0 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::~DXGVMBUSCHANNEL(void **this)
{
  *this = &DXGVMBUSCHANNEL::`vftable';
  DXGVMBUSCHANNEL::Cleanup((DXGVMBUSCHANNEL *)this);
  if ( this[6] != this + 6 )
  {
    WdLogSingleEntry1(1LL, 166LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsListEmpty(&m_SubscriberList)", 166LL, 0LL, 0LL, 0LL, 0LL);
  }
  operator delete(this[4]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 15));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 9));
}
