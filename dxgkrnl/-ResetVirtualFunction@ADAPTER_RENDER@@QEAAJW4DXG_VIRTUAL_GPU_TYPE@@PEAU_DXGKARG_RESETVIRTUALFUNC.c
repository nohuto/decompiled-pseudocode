/*
 * XREFs of ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0364994
 * Callers:
 *     DxgkDdiResetVirtualFunction @ 0x1C03662E8 (DxgkDdiResetVirtualFunction.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z @ 0x1C0371A6C (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResetVirtualFunction(__int64 a1, int a2, unsigned int *a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  struct _KTHREAD **v16; // rbx
  unsigned int v17; // ebx
  DXGPROCESS *v19; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  _BYTE v23[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h]
  _BYTE v26[8]; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v30[64]; // [rsp+D0h] [rbp-30h] BYREF

  v19 = 0LL;
  v3 = (__int64 *)(a1 + 1864);
  v4 = (__int64 *)(a1 + 1872);
  if ( a2 == 1 )
    v8 = *v4;
  else
    v8 = *v3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)(v8 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v24);
  v9 = *a3;
  v10 = v4;
  v25 = 1;
  if ( a2 != 1 )
    v10 = v3;
  v11 = *v10;
  if ( !v11 || (unsigned int)v9 >= *(_DWORD *)(v11 + 12) || (v12 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v9)) == 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", *a3, 0LL, 0LL, 0LL, 0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    return 3221225485LL;
  }
  if ( a2 == 1 )
    DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(v12 + 176), 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  COREACCESS::COREACCESS((COREACCESS *)v30, *(struct DXGADAPTER *const *)(a1 + 16));
  COREACCESS::AcquireShared((COREACCESS *)v30, 0LL);
  v13 = v3;
  if ( a2 == 1 )
    v13 = v4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*v13 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v14 = *a3;
  v22 = 1;
  if ( a2 == 1 )
    v3 = v4;
  v15 = *v3;
  if ( !*v3
    || v14 >= *(_DWORD *)(v15 + 12)
    || !*(_QWORD *)(*(_QWORD *)(v15 + 24) + 8LL * v14)
    || (_mm_lfence(), (v16 = *(struct _KTHREAD ***)(*(_QWORD *)(v15 + 24) + 8LL * v14)) == 0LL) )
  {
    WdLogSingleEntry1(2LL, *a3);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", *a3, 0LL, 0LL, 0LL, 0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    return 3221225485LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, v16 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v27);
  v28 = 2;
  v17 = (*((__int64 (__fastcall **)(struct _KTHREAD **, DXGPROCESS **, _QWORD))*v16 + 2))(v16, &v19, 0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v30);
  if ( v19 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)v19 + 7), &ApcState);
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)v19 + 104));
    DXGPROCESS::Destroy(v19, 0LL, 1);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v19 + 13);
    KeUnstackDetachProcess(&ApcState);
  }
  return v17;
}
