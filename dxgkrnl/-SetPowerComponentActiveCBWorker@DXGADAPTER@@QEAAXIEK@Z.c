void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  char v5; // bl
  __int64 v6; // r13
  __int64 v8; // rdi
  __int64 v9; // rcx
  char v10; // r15
  char v11; // r14
  char v12; // r12
  __int64 v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rax
  __int64 **v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r8
  int v24; // ecx
  _QWORD *v25; // rdx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // rcx
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+30h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+48h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  char *v34; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+88h] [rbp-60h] BYREF
  char v36; // [rsp+A0h] [rbp-48h]
  char v37; // [rsp+100h] [rbp+18h]

  v37 = a3;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !*((_QWORD *)this + 379) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
  v8 = *((_QWORD *)this + 378) + 520 * v6;
  v9 = *(_QWORD *)(v8 + 512);
  if ( v9 )
  {
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v9 + 136));
    if ( (*((_DWORD *)this + 698) & 0x10) != 0 )
    {
      v29 = *((_DWORD *)this + 418);
      v30 = 0LL;
      if ( v29 )
      {
        while ( *(_DWORD *)(*((_QWORD *)this + 514) + 4 * v30) )
        {
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= v29 )
            goto LABEL_63;
        }
        goto LABEL_6;
      }
    }
    else if ( !**((_DWORD **)this + 514) )
    {
      goto LABEL_6;
    }
LABEL_63:
    memset(&v32, 0, sizeof(v32));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 554, &v32);
    *(_BYTE *)(*(_QWORD *)(v8 + 512) + 240LL) = 1;
    if ( !*((_BYTE *)this + 4440) )
    {
      *((_BYTE *)this + 4440) = 1;
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 537) = -1LL;
      KeSetTimer((PKTIMER)((char *)this + 4304), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 4368));
    }
    KeReleaseInStackQueuedSpinLock(&v32);
  }
LABEL_6:
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = v5;
  v11 = 0;
  v12 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 504), &LockHandle);
  if ( (int)++*(_DWORD *)(v8 + 352) > 1 )
  {
    v11 = 1;
    goto LABEL_23;
  }
  v13 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + 480);
  if ( !*(_BYTE *)(v8 + 360) )
  {
    v14 = (__int64 *)(v8 + 400);
    if ( *(_QWORD *)(v8 + 400) )
    {
      v36 = 0;
      v34 = (char *)this + 3488;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 436, &v35);
      *((_QWORD *)this + 437) = KeGetCurrentThread();
      v15 = *v14;
      v36 = 1;
      if ( !v15 )
        goto LABEL_16;
      if ( *(__int64 **)(v15 + 8) != v14 )
        goto LABEL_67;
      v16 = *(__int64 ***)(v8 + 408);
      if ( *v16 != v14 )
        goto LABEL_67;
      *v16 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      if ( *((DXGADAPTER **)this + 434) == (DXGADAPTER *)((char *)this + 3472) && *((_BYTE *)this + 3460) )
      {
        v17 = *((_QWORD *)this + 366);
        *((_BYTE *)this + 3460) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17 + 736) + 8LL) + 864LL))(
          *(_QWORD *)(v17 + 744),
          0LL);
      }
      if ( v36 )
      {
LABEL_16:
        v36 = 0;
        *((_QWORD *)v34 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v35);
      }
      v4 = a4;
    }
    memset(&v31, 0, sizeof(v31));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 445, &v31);
    v18 = (_QWORD *)(v8 + 440);
    v19 = *(_QWORD *)(v8 + 440);
    if ( !v19 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
      v20 = *(_QWORD *)(v8 + 496);
      if ( v13 < v20 )
        *(_QWORD *)(v8 + 472) = v20;
      v10 = 1;
      v11 = 0;
      goto LABEL_22;
    }
    if ( *(_QWORD **)(v19 + 8) == v18 )
    {
      v25 = *(_QWORD **)(v8 + 448);
      if ( (_QWORD *)*v25 == v18 )
      {
        *v25 = v19;
        *(_QWORD *)(v19 + 8) = v25;
        *v18 = 0LL;
        if ( *((DXGADAPTER **)this + 439) == (DXGADAPTER *)((char *)this + 3512) )
        {
          KeCancelTimer((PKTIMER)((char *)this + 3576));
          *((_BYTE *)this + 3461) = 0;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
        if ( v13 > *(_QWORD *)(v8 + 496) )
          *(_QWORD *)(v8 + 472) = 0LL;
        v11 = 1;
        goto LABEL_22;
      }
    }
LABEL_67:
    __fastfail(3u);
  }
  v10 = 0;
  v12 = 1;
LABEL_22:
  v5 = v37;
LABEL_23:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_DWORD *)(v8 + 208) == 7 )
    DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v8 + 4), 0, 1);
  if ( v10 )
  {
    if ( v5 )
    {
      if ( KeGetCurrentIrql() >= 2u )
        WdLogSingleEntry5(0LL, 275LL, 20LL, this, 0LL, 0LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v26, (unsigned int)&Dxgk_ReportPowerComponentState, v27, (_DWORD)this, v6, 1);
      v23 = 1LL;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v21, (unsigned int)&Dxgk_ReportPowerComponentState, v22, (_DWORD)this, v6, 1);
      v23 = v4;
    }
    PoFxActivateComponent(*((_QWORD *)this + 379), (unsigned int)v6, v23);
    if ( v11 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v24, (unsigned int)&Dxgk_ReportPowerComponentState, v22, (_DWORD)this, v6, 0);
      v28 = *((_QWORD *)this + 379);
      if ( v28 )
        PoFxIdleComponent(v28, (unsigned int)v6, v4);
    }
  }
  if ( v12 )
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v6, 0, 1u);
    DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v6, 1u);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentActiveCBEnd, v22, this, v6);
  }
}
