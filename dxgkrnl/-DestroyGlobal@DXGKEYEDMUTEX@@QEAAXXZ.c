/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C034AC74
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C0349C88 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C000E148 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E190 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v4[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(1LL, 3685LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 3685LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGKEYEDMUTEX **)this + 12) != (DXGKEYEDMUTEX *)((char *)this + 96) )
  {
    WdLogSingleEntry1(1LL, 3686LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_KeyedMutexWaiterList)",
      3686LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 176) )
  {
    if ( *((_DWORD *)this + 8) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v4);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 8));
      *((_DWORD *)this + 8) = 0;
      if ( v4[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
    }
  }
  operator delete(*((void **)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  Current = DXGPROCESS::GetCurrent(v2);
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 8), Current);
}
