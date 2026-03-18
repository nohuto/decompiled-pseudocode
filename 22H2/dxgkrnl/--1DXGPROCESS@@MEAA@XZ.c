/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x1C01A9B88
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C0008320 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C0056450 (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0056494 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0016FB0 (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
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
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _QWORD v14[10]; // [rsp+50h] [rbp-88h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 57) )
  {
    WdLogSingleEntry1(1LL, 1271LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DecommittableBytes == 0", 1271LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v14[8] = MEMORY[0xFFFFF78000000014];
  v2 = *((_DWORD *)this + 106) & 0x104;
  LODWORD(v14[3]) = 25;
  LOBYTE(v14[6]) = -1;
  if ( v2 == 4 )
  {
    v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v11 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionDataForSpecifiedSession);
  }
  if ( !*((_DWORD *)this + 10) )
    DXGPROCESS::Destroy(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v14, 0);
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
        WdLogSingleEntry1(1LL, 2724LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_MaximumGlobalAdapterCount > 0",
          2724LL,
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
