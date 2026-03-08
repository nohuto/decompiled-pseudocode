/*
 * XREFs of ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C0349C88
 * Callers:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C002A248 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C034AC74 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::~DXGKEYEDMUTEX(DXGKEYEDMUTEX *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(1LL, 3612LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 3612LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGKEYEDMUTEX::DestroyGlobal(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGKEYEDMUTEX *)((char *)this + 112));
  *((_QWORD *)this + 2) = 0LL;
}
