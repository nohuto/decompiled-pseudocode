/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CAC10
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02CF1D0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiPollDisplayChildren @ 0x1C0394D00 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C03A81C0 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C03BF0BC (MonitorAcquireMonitorPendingEvent.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C03BFF94 (MonitorReleaseMonitorPendingEvent.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 CurrentProcess; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  D3DKMT_HANDLE hAdapter; // edx
  _QWORD *v12; // r13
  struct _KTHREAD **v13; // r8
  int v14; // r8d
  __int64 v15; // rdi
  PVOID v16; // rbx
  char *v17; // rsi
  int v18; // eax
  int v19; // eax
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  int v24; // eax
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v30; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v31; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[144]; // [rsp+90h] [rbp-70h] BYREF

  Timeout.QuadPart = (LONGLONG)a3;
  v27 = a2;
  v30 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  v6 = Current;
  if ( Current )
  {
    hAdapter = a1->hAdapter;
    P = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v31, hAdapter, Current, (struct DXGADAPTER **)&P, 1);
    v12 = P;
    if ( P )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, (struct DXGADAPTER *const)P, 0LL);
      LODWORD(v15) = COREADAPTERACCESS::AcquireExclusive((__int64)v32, (unsigned int)(v14 + 1));
      if ( (int)v15 >= 0 )
      {
        v16 = (PVOID)v12[27];
        v17 = 0LL;
        P = 0LL;
        Object = v16;
        ObfReferenceObject(v16);
        if ( (*((_DWORD *)a1 + 1) & 2) != 0
          && (v18 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v12), v17 = (char *)P, v15 = v18, v18 < 0) )
        {
          if ( P )
          {
            WdLogSingleEntry1(1LL, 1950LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pMonitorPendingEvent == NULL",
              1950LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(2LL, v15);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
          v16 = Object;
        }
        else if ( (*((_DWORD *)v30 + 1) & 4) != 0 )
        {
          v19 = DmmEnableModeResetOnMonitorEvent(v12, 0);
          v15 = v19;
          if ( v19 < 0 )
          {
            WdLogSingleEntry1(2LL, v19);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!",
              v15,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v32);
        if ( (int)v15 >= 0 )
        {
          LODWORD(v15) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))DpiPollDisplayChildren)(
                           v16,
                           v27,
                           (union _LARGE_INTEGER)Timeout.QuadPart);
          ObfDereferenceObject(v16);
          if ( v17 )
          {
            if ( (int)v15 >= 0 )
            {
              Timeout.QuadPart = -10000000LL;
              PreviousMode = ExGetPreviousMode();
              v21 = KeWaitForSingleObject(v17 + 24, UserRequest, PreviousMode, 0, &Timeout);
              v15 = v21;
              if ( v21 == 258 )
              {
                WdLogSingleEntry1(2LL, 2015LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Monitor pending event wait has been timeouted!",
                  2015LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else if ( v21 < 0 )
              {
                WdLogSingleEntry1(2LL, v21);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
                  v15,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            MonitorReleaseMonitorPendingEvent(v17);
          }
          if ( (*((_DWORD *)v30 + 1) & 4) != 0 )
          {
            v22 = COREADAPTERACCESS::AcquireExclusive((__int64)v32, 1LL);
            v23 = v22;
            if ( v22 < 0 )
            {
              WdLogSingleEntry1(2LL, v22);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
                v23,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              v24 = DmmEnableModeResetOnMonitorEvent(v12, 1u);
              v23 = v24;
              if ( v24 < 0 )
              {
                WdLogSingleEntry1(2LL, v24);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed in re-enabling mode reset on monitor event (Status == 0x%I64x)!",
                  v23,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v32);
            }
            if ( !(_DWORD)v15 )
              LODWORD(v15) = v23;
          }
        }
        else
        {
          ObfDereferenceObject(v16);
          if ( v17 )
            MonitorReleaseMonitorPendingEvent(v17);
        }
      }
      v8 = v15;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    }
    else
    {
      v13 = v6;
      v8 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, v13, a1->hAdapter);
    }
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v10,
      0LL,
      0LL,
      0LL);
  }
  return v8;
}
