/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C02B92E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0040EA8 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0048AD4 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0286100 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B585C (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B717C (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGVAILOBJECT *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGPROCESS *v39; // r14
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rdx
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v50; // [rsp+28h] [rbp-58h]
  _BYTE v51[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v53; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v51, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
    if ( *((_QWORD *)Current + 60) )
    {
      v11 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51, v12);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v11 + 10);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v11 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v11, v13);
      LODWORD(v15) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v11);
      if ( v50 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object, v14);
      DxgkCompositionObject::Release(v11);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 104)
           && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      Object = 0LL;
      SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 102);
      if ( SessionDataForSpecifiedSession )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v19);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           SessionDataForSpecifiedSession,
                                           CurrentProcessSessionId);
      }
      if ( SessionDataForSpecifiedSession )
      {
        v26 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v15 = v26;
        if ( v26 >= 0 )
        {
          v53 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v39 = DXGPROCESS::GetCurrent(v33, v32, v34, v35);
          if ( !*((_BYTE *)v39 + 488) )
          {
            v40 = WdLogNewEntry5_WdWarning(v37, v36, v38);
            LODWORD(v15) = -2147483611;
            *(_QWORD *)(v40 + 24) = -2147483611LL;
            WdLogEvent5_WdWarning(v40);
          }
          if ( (int)v15 >= 0 )
          {
            v41 = DXGSESSIONDATA::VailGuestDisconnect(SessionDataForSpecifiedSession);
            v15 = v41;
            if ( v41 >= 0 )
            {
              v46 = 0;
            }
            else
            {
              v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
              *(_QWORD *)(v45 + 24) = v15;
              WdLogEvent5_WdWarning(v45);
              v46 = 1;
            }
            *((_BYTE *)v39 + 488) = v46;
          }
          if ( v53 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v29 = WdLogNewEntry5_WdError(v28, v27);
          *(_QWORD *)(v29 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v31, v30);
          *(_QWORD *)(v29 + 32) = v15;
          WdLogEvent5_WdError(v29);
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v23 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v25, v24);
        *(_QWORD *)(v23 + 32) = -1073741790LL;
        WdLogEvent5_WdError(v23);
        LODWORD(v15) = -1073741790;
      }
    }
    else
    {
      LODWORD(v15) = -1073741790;
      v47 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v47 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v47);
    }
    KeLeaveCriticalRegion();
    if ( v51[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51, v48);
    return (unsigned int)v15;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
