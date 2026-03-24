/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0222538
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02257B0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C014E738 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C014F7B8 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C02C71CC (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02DCAA8 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  unsigned int v5; // r12d
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 hAdapter; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  DXGADAPTER *QuadPart; // rsi
  _QWORD *v22; // rax
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rbx
  void *v26; // r15
  union _LARGE_INTEGER v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-99h] BYREF
  DXGADAPTER *v52; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v53[144]; // [rsp+50h] [rbp-79h] BYREF

  v5 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2, (__int64)a3, a4);
  v10 = Current;
  if ( !Current )
  {
    v11 = -1073741811;
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13, v15, v16);
    WdLogEvent5_WdError(v12);
    return v11;
  }
  hAdapter = a1->hAdapter;
  Timeout.QuadPart = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v52,
    hAdapter,
    Current,
    (struct DXGADAPTER **)&Timeout,
    1);
  QuadPart = (DXGADAPTER *)Timeout.QuadPart;
  if ( !Timeout.QuadPart )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v11 = -1073741811;
    v22[3] = -1073741811LL;
    v22[4] = v10;
    v22[5] = a1->hAdapter;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
  LODWORD(v25) = COREADAPTERACCESS::AcquireExclusive((__int64)v53, (unsigned int)(v23 + 1));
  if ( (int)v25 >= 0 )
  {
    v26 = (void *)*((_QWORD *)QuadPart + 27);
    v27.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v26);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v28 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout);
      v27 = Timeout;
      v25 = v28;
      if ( v28 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v33 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0);
          v25 = v33;
          if ( v33 < 0 )
          {
            v36 = WdLogNewEntry5_WdError(v35, v34);
            *(_QWORD *)(v36 + 24) = v25;
            WdLogEvent5_WdError(v36);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v53);
        if ( (int)v25 < 0 )
        {
          ObfDereferenceObject(v26);
          if ( v27.QuadPart )
            MonitorReleaseMonitorPendingEvent((PVOID)v27.QuadPart, v24);
          goto LABEL_34;
        }
        LODWORD(v25) = DpiPollDisplayChildren(v26, v5, a3);
        ObfDereferenceObject(v26);
        if ( !v27.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v41 = COREADAPTERACCESS::AcquireExclusive((__int64)v53, 1LL);
            v44 = v41;
            if ( v41 < 0 )
            {
              v49 = WdLogNewEntry5_WdError(v43, v42);
              *(_QWORD *)(v49 + 24) = v44;
              WdLogEvent5_WdError(v49);
            }
            else
            {
              v45 = DmmEnableModeResetOnMonitorEvent(QuadPart, 1u);
              v44 = v45;
              if ( v45 < 0 )
              {
                v48 = WdLogNewEntry5_WdError(v47, v46);
                *(_QWORD *)(v48 + 24) = v44;
                WdLogEvent5_WdError(v48);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v53);
            }
            if ( !(_DWORD)v25 )
              LODWORD(v25) = v44;
          }
          goto LABEL_34;
        }
        if ( (int)v25 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v38 = KeWaitForSingleObject((PVOID)(v27.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v25 = v38;
          if ( v38 == 258 )
          {
            v40 = WdLogNewEntry5_WdError(v39, v24);
            *(_QWORD *)(v40 + 24) = 1958LL;
LABEL_24:
            WdLogEvent5_WdError(v40);
            goto LABEL_25;
          }
          if ( v38 < 0 )
          {
            v40 = WdLogNewEntry5_WdError(v39, v24);
            *(_QWORD *)(v40 + 24) = v25;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((PVOID)v27.QuadPart, v24);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v31 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v31 + 24) = 1893LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v32 + 24) = v25;
      WdLogEvent5_WdError(v32);
    }
    if ( (int)v25 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_34:
  v11 = v25;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53, v24);
LABEL_35:
  if ( v52 )
    DXGADAPTER::ReleaseReference(v52);
  return v11;
}
