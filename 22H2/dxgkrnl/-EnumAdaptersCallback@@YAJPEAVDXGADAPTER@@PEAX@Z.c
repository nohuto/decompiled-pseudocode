/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012C200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0009188 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C011746C (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C012C424 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C012C6B8 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C012E0D0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C013C5B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ADAPTER_RENDER *v13; // rsi
  struct DXGPROCESS *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // r12d
  struct DXGPROCESS *Current; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct DXGPROCESS *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  _DWORD v53[2]; // [rsp+20h] [rbp-30h] BYREF
  int *v54; // [rsp+28h] [rbp-28h]
  _BYTE v55[8]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGADAPTER *v56; // [rsp+38h] [rbp-18h]
  char v57; // [rsp+40h] [rbp-10h]
  unsigned int v58; // [rsp+88h] [rbp+38h] BYREF
  int v59; // [rsp+90h] [rbp+40h] BYREF

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v39 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v39 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v41, v40);
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    return 3221225485LL;
  }
  v56 = this;
  v57 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 2609) && (*((_DWORD *)this + 642) & 4) == 0 )
  {
    v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
    if ( v13 && (v14 = DXGPROCESS::GetCurrent(v10, v9, v11, v12), ADAPTER_RENDER::IsProcessGpuAccessBlocked(v13, v14)) )
    {
      v42 = WdLogNewEntry5_WdEvent(v10, v15);
      *(_QWORD *)(v42 + 24) = this;
      *(_QWORD *)(v42 + 32) = DXGPROCESS::GetCurrent(v44, v43, v45, v46);
      WdLogEvent5_WdEvent(v42);
    }
    else
    {
      v16 = a2[3];
      if ( (v16 & 1) != 0 || !DXGADAPTER::IsComputeOnlyAdapter(this) )
      {
        v17 = 2;
        if ( (v16 & 2) != 0 || *((_QWORD *)this + 338) )
        {
          ++*((_DWORD *)a2 + 2);
          if ( *(_DWORD *)a2 >= *((_DWORD *)a2 + 1) )
          {
            if ( a2[2] )
            {
              v47 = WdLogNewEntry5_WdWarning(v10, v16, v11);
              *(_QWORD *)(v47 + 24) = *((unsigned int *)a2 + 2);
              *(_QWORD *)(v47 + 32) = *((unsigned int *)a2 + 1);
              WdLogEvent5_WdWarning(v47);
            }
          }
          else
          {
            v58 = 0;
            Current = DXGPROCESS::GetCurrent(v10, v16, v11, v12);
            v19 = DXGADAPTER::CreateHandle(this, Current, &v58);
            v22 = v19;
            if ( v19 < 0 )
            {
              v48 = WdLogNewEntry5_WdError(v21, v20);
              *(_QWORD *)(v48 + 24) = this;
              *(_QWORD *)(v48 + 32) = v22;
              WdLogEvent5_WdError(v48);
              goto LABEL_21;
            }
            v23 = *(unsigned int *)a2;
            v24 = a2[2];
            v25 = 5 * v23;
            *(_DWORD *)a2 = v23 + 1;
            *(_DWORD *)(v24 + 4 * v25) = v58;
            v26 = *(_QWORD *)((char *)this + 316);
            *(_DWORD *)(v24 + 4 * v25 + 16) = 0;
            *(_QWORD *)(v24 + 4 * v25 + 4) = v26;
            if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
            {
              SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                         SessionDataForSpecifiedSession,
                                         (const struct _LUID *)((char *)this + 316));
              if ( SessionAdapterFromLuid )
                LODWORD(SessionAdapterFromLuid) = *((_DWORD *)SessionAdapterFromLuid + 27);
              *(_DWORD *)(v24 + 4 * v25 + 12) = (_DWORD)SessionAdapterFromLuid;
              if ( (_DWORD)SessionAdapterFromLuid
                && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors()
                && DXGADAPTER::IsFullWDDMAdapter(this) )
              {
                v49 = WdLogNewEntry5_WdAssertion(v33, v32);
                *(_QWORD *)(v49 + 24) = 901LL;
                WdLogEvent5_WdAssertion(v49);
              }
              if ( !*((_QWORD *)this + 338) )
              {
                v50 = *((_QWORD *)this + 337);
                if ( *(_QWORD *)(*(_QWORD *)(v50 + 16) + 2704LL) )
                {
                  v51 = WdLogNewEntry5_WdAssertion(v33, v32);
                  *(_QWORD *)(v51 + 24) = 6626LL;
                  WdLogEvent5_WdAssertion(v51);
                }
                *(_DWORD *)(v24 + 4 * v25 + 16) = *(_DWORD *)(v50 + 364);
              }
            }
            else
            {
              v59 = 0;
              v54 = &v59;
              v53[0] = 2;
              v53[1] = 4;
              v35 = DXGPROCESS::GetCurrent(v28, v27, v29, v30);
              if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v35 + 11) + 352LL))(v53) < 0 )
              {
                v52 = WdLogNewEntry5_WdWarning(v37, v36, v38);
                *(_QWORD *)(v52 + 24) = 929LL;
                WdLogEvent5_WdWarning(v52);
              }
              else
              {
                v17 = v59;
              }
              if ( v17 != 0xFFFF
                && *((_DWORD *)SessionDataForSpecifiedSession + 4625) == *((_DWORD *)this + 79)
                && *((_DWORD *)SessionDataForSpecifiedSession + 4626) == *((_DWORD *)this + 80) )
              {
                *(_DWORD *)(v24 + 4 * v25 + 12) = *((_DWORD *)SessionDataForSpecifiedSession + 4627);
              }
              else
              {
                *(_DWORD *)(v24 + 4 * v25 + 12) = 0;
              }
            }
          }
        }
      }
    }
  }
  LODWORD(v22) = 0;
LABEL_21:
  if ( v57 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
  return (unsigned int)v22;
}
