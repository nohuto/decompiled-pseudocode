/*
 * XREFs of ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C0365AF4
 * Callers:
 *     ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1C0365BD0 (--_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0361180 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
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
