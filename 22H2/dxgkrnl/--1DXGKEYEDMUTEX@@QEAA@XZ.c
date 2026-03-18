/*
 * XREFs of ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C034E6E8
 * Callers:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C002B248 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C034F6D8 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::~DXGKEYEDMUTEX(DXGKEYEDMUTEX *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(1LL, 3667LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 3667LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGKEYEDMUTEX::DestroyGlobal(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGKEYEDMUTEX *)((char *)this + 112));
  *((_QWORD *)this + 2) = 0LL;
}
