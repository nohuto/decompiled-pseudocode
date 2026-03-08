/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00AE4B0
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00AE490 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C0015360 (VidSchSubmitDeviceCommand.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00A8C8C (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchFlushDevice @ 0x1C00AB9F0 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v5; // bl
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // eax
  int v23; // r9d
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD v31[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v32; // [rsp+60h] [rbp-78h] BYREF
  BOOL v33; // [rsp+70h] [rbp-68h] BYREF
  __int64 v34; // [rsp+74h] [rbp-64h]
  __int64 v35; // [rsp+7Ch] [rbp-5Ch]
  int v36; // [rsp+84h] [rbp-54h]
  __int64 v37; // [rsp+88h] [rbp-50h]
  __int64 v38; // [rsp+90h] [rbp-48h]
  __int64 v39; // [rsp+98h] [rbp-40h]
  _QWORD *v40; // [rsp+A0h] [rbp-38h]
  __int64 v41; // [rsp+A8h] [rbp-30h]
  __int128 v42; // [rsp+B0h] [rbp-28h]

  v5 = (char)a4.0;
  v8 = **a2;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v8 + 320) == KeGetCurrentThread() )
  {
    if ( *(int *)(v8 + 328) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(v25, 262146LL);
    }
    ++*(_DWORD *)(v8 + 328);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8 + 304, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = *(_DWORD *)(v8 + 332);
        if ( v24 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, &EventBlockThread, v10, v24);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 312));
      ExAcquirePushLockExclusiveEx(v8 + 304, 0LL);
    }
    if ( *(_QWORD *)(v8 + 320) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(v26, 262146LL);
    }
    if ( *(_DWORD *)(v8 + 328) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(v27, 262146LL);
    }
    *(_QWORD *)(v8 + 320) = KeGetCurrentThread();
    *(_DWORD *)(v8 + 328) = 1;
  }
  *((_DWORD *)a2 + 8) |= 1u;
  if ( *(struct _KTHREAD **)(v8 + 320) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v8 + 296, 0LL, 0LL);
  if ( *(int *)(v8 + 328) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(v28, 262146LL);
  }
  if ( (*(_DWORD *)(v8 + 328))-- == 1 )
  {
    *(_QWORD *)(v8 + 320) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 304, 0LL);
  }
  KeLeaveCriticalRegion();
  v12 = (__int64)a2[1];
  a2[24] = (__int64 *)a5;
  v13 = *(_QWORD *)v12;
  *(_BYTE *)(v12 + 56) = 1;
  v14 = v13 + 44512;
  if ( v14 && *(struct _KTHREAD **)(v14 + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(v29, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v23 = *(_DWORD *)(v14 + 24);
      if ( v23 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v23);
    }
    ExAcquirePushLockExclusiveEx(v14, 0LL);
  }
  *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
  if ( (*(_DWORD *)(v12 + 60) & 7) == 4 )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v12, 3);
    KeSetEvent(*(PRKEVENT *)(**(_QWORD **)v12 + 176LL), 0, 0);
  }
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (byte_1C00769C1 & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(v17, &EventTerminateAllocation, v18, a2);
  v19 = **a2;
  v20 = *(_QWORD *)(v19 + 16);
  if ( (**(_DWORD **)(v19 + 536) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1940);
    *((_QWORD *)this + 971) += v20;
  }
  else
  {
    ++*((_DWORD *)this + 1944);
    *((_QWORD *)this + 973) += v20;
  }
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v40 = v31;
  v31[0] = 1LL;
  v31[1] = a2;
  v33 = (v5 & 1) == 0 || (**(_DWORD **)(v8 + 536) & 0x4000) != 0;
  v21 = a2[1][4];
  v22 = VidSchSubmitDeviceCommand(v21, (__int64)&v33, v18);
  if ( v22 < 0 )
  {
    WdLogSingleEntry1(3LL, v22);
    v32 = 0LL;
    LODWORD(v32) = 5;
    VidSchFlushDevice(v21, (int *)&v32, 0xFFFFFFFD, 0LL);
    v33 = 0;
    VidSchSubmitDeviceCommand(v21, (__int64)&v33, v30);
  }
}
