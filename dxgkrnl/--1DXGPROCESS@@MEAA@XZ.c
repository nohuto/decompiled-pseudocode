/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x1C01993E0
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C0014E60 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C00555B0 (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C00555F4 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0016CCC (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  PLIST_ENTRY v5; // rax
  PLIST_ENTRY v6; // rsi
  unsigned int i; // edi
  struct DXGGLOBAL *Global; // rsi
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _QWORD v17[10]; // [rsp+50h] [rbp-88h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 57) )
  {
    WdLogSingleEntry1(1LL, 1271LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DecommittableBytes == 0", 1271LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[8] = MEMORY[0xFFFFF78000000014];
  v2 = *((_DWORD *)this + 106) & 0x104;
  LODWORD(v17[3]) = 25;
  LOBYTE(v17[6]) = -1;
  if ( v2 == 4 )
  {
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v13, v14);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionDataForSpecifiedSession);
  }
  if ( !*((_DWORD *)this + 10) )
    DXGPROCESS::Destroy(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17, 0);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    WdLogSingleEntry1(1LL, 1288LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ExecutionState == EXECUTION_STOPPED",
      1288LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 74) )
  {
    WdLogSingleEntry1(1LL, 1293LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr == m_pVailObjectRef", 1293LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    operator delete(*(void **)(v3 + 96));
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v4 + 104), (PKSPIN_LOCK)(v4 + 120));
        v6 = v5;
        if ( !v5 )
          break;
        ((void (__fastcall *)(struct _LIST_ENTRY *))v5[1].Flink)(v5[1].Blink);
        operator delete(v6);
      }
      operator delete((void *)v4);
    }
  }
  if ( *((_QWORD *)this + 6) )
  {
    for ( i = 0; ; ++i )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( !*((_DWORD *)Global + 341) )
      {
        WdLogSingleEntry1(1LL, 2723LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_MaximumGlobalAdapterCount > 0",
          2723LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( i >= *((_DWORD *)Global + 341) )
        break;
    }
  }
  operator delete(*((void **)this + 6));
  operator delete(*((void **)this + 9));
  v9 = (void *)*((_QWORD *)this + 12);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROCESS *)((char *)this + 376));
  if ( *((DXGPROCESS **)this + 43) != (DXGPROCESS *)((char *)this + 344) )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGPROCESS **)this + 40) != (DXGPROCESS *)((char *)this + 320) )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  operator delete(*((void **)this + 35));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROCESS *)((char *)this + 104));
  *((_QWORD *)this + 3) = 0LL;
}
