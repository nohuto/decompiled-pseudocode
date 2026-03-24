/*
 * XREFs of ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01778F8
 * Callers:
 *     DxgkGetAdapter @ 0x1C0177700 (DxgkGetAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C02221A0 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00085E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C00378D0 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkpFindDefaultRenderAdapterForSession(struct _LUID *a1, DXGADAPTER **a2, __int64 a3, bool *a4)
{
  char v7; // di
  DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGGLOBAL *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGADAPTER *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  struct _LUID *v37; // [rsp+20h] [rbp-18h] BYREF
  DXGADAPTER **v38; // [rsp+28h] [rbp-10h]

  v7 = 1;
  if ( (_BYTE)a3 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, a3, (__int64)a4);
    if ( Current )
    {
      if ( DXGPROCESS::IsRemoteConnection(Current) )
      {
        v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 102);
        if ( v13 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v13,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
          v7 = *((_BYTE *)SessionDataForSpecifiedSession + 18496);
        else
          v7 = 0;
      }
    }
  }
  DXGADAPTER_REFERENCE::Assign(a2, 0LL);
  *a4 = v7 == 0;
  if ( v7 )
  {
    v18 = a1->LowPart == 0;
    v37 = a1;
    v38 = a2;
    if ( !v18 || a1->HighPart )
    {
      Global = DXGGLOBAL::GetGlobal(v17, v16);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))FindHWRenderAdapterByLuid,
        (__int64)&v37,
        2);
    }
    if ( *a2 )
      return 0LL;
    v19 = WdLogNewEntry5_WdEvent(v17, v16);
    *(_QWORD *)(v19 + 24) = a1->HighPart;
    *(_QWORD *)(v19 + 32) = a1->LowPart;
    WdLogEvent5_WdEvent(v19);
    v22 = DXGGLOBAL::GetGlobal(v21, v20);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v22,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v37,
      2);
    if ( *a2 )
      return 0LL;
    v27 = WdLogNewEntry5_WdEvent(v24, v23);
    *(_QWORD *)(v27 + 24) = 4127LL;
    WdLogEvent5_WdEvent(v27);
  }
  if ( *a2 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v37, v16);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v37);
  if ( IsCurrentConsoleSession(v29, v28) )
    v32 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v31, v30) + 105);
  else
    v32 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v31, v30) + 103);
  DXGADAPTER_REFERENCE::Assign(a2, v32);
  if ( *a2 )
  {
    if ( (_BYTE)v38 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v37, v33);
    return 0LL;
  }
  v35 = WdLogNewEntry5_WdError(v34, v33);
  *(_QWORD *)(v35 + 24) = -1073741275LL;
  WdLogEvent5_WdError(v35);
  if ( (_BYTE)v38 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v37, v36);
  return 3221226021LL;
}
