/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0161C04
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C016D980 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0019AD4 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0019BD8 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C016A124 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONDATA **this, __int64 a2)
{
  __int64 CurrentProcessSessionId; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v5; // rdi
  __int64 v6; // rdx
  DXGSESSIONDATA *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  DXGSESSIONDATA *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v22[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  v5 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18528));
    v7 = this[15];
    if ( v5 == v7 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v17 + 24) = 5002LL;
      WdLogEvent5_WdAssertion(v17);
      v19 = (__int64)this[15];
      if ( v5 == (DXGSESSIONDATA *)v19 )
      {
        Global = DXGGLOBAL::GetGlobal(v19, v18);
        DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 102), 0);
      }
    }
    DXGSESSIONDATA::ReleaseSessionModeChangeLock(v5);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v10 = DXGGLOBAL::GetGlobal(v9, v8);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)v10,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(this + 10), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
  v13[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v14 = 0LL;
  else
    v14 = *((_QWORD *)this[5] + CurrentProcessSessionId);
  v13[4] = v14;
  v13[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v13);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v16 = (DXGSESSIONDATA *)*((_QWORD *)this[5] + CurrentProcessSessionId);
    if ( v16 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v16);
      *((_QWORD *)this[5] + CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v15);
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v15);
}
