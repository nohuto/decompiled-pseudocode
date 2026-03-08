/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C000F9C0
 * Callers:
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C000F950 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C001B4DC (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001CBA8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C000F410 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C003F408 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0051530 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C00548DC (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // zf
  DXGADAPTER *v10; // rax
  DXGADAPTER *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+48h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !*((_QWORD *)this + 379) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v6 = *((_QWORD *)this + 378) + 520 * v4;
  v7 = *(_QWORD *)(v6 + 512);
  if ( v7 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v7 + 136));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle);
  v8 = *(_DWORD *)(v6 + 352) - 1;
  *(_DWORD *)(v6 + 352) = v8;
  if ( v8 <= 0 )
  {
    if ( *(_BYTE *)(v6 + 360) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1u, 1u);
      goto LABEL_17;
    }
    v9 = *(_QWORD *)(v6 + 472) == 0LL;
    *(_QWORD *)(v6 + 480) = MEMORY[0xFFFFF78000000014];
    if ( v9 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v16, (unsigned int)&Dxgk_ReportPowerComponentState, v15, (_DWORD)this, v4, 0);
      v17 = *((_QWORD *)this + 379);
      if ( v17 )
        PoFxIdleComponent(v17, (unsigned int)v4, v3);
      goto LABEL_17;
    }
    if ( *(_DWORD *)(v6 + 208) != 7
      || (KeReleaseInStackQueuedSpinLock(&LockHandle),
          DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1),
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle),
          *(int *)(v6 + 352) <= 0) )
    {
      *(_QWORD *)(v6 + 488) = *(_QWORD *)(v6 + 480) + *(_QWORD *)(v6 + 472);
      memset(&v21, 0, sizeof(v21));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 445, &v21);
      v10 = (DXGADAPTER *)*((_QWORD *)this + 440);
      v11 = (DXGADAPTER *)((char *)this + 3512);
      if ( v10 != (DXGADAPTER *)((char *)this + 3512) )
      {
        while ( *(_QWORD *)(v6 + 488) < *((_QWORD *)v10 + 6) )
        {
          v10 = (DXGADAPTER *)*((_QWORD *)v10 + 1);
          if ( v10 == v11 )
            goto LABEL_12;
        }
        v18 = *(_QWORD *)v10;
        v19 = (_QWORD *)(v6 + 440);
        if ( *(DXGADAPTER **)(*(_QWORD *)v10 + 8LL) != v10 )
          goto LABEL_39;
        *v19 = v18;
        *(_QWORD *)(v6 + 448) = v10;
        *(_QWORD *)(v18 + 8) = v19;
        *(_QWORD *)v10 = v19;
        if ( v10 != v11 )
        {
LABEL_15:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
          goto LABEL_16;
        }
      }
LABEL_12:
      v12 = *(_QWORD *)v11;
      v13 = (_QWORD *)(v6 + 440);
      if ( *(DXGADAPTER **)(*(_QWORD *)v11 + 8LL) == v11 )
      {
        *v13 = v12;
        *(_QWORD *)(v6 + 448) = v11;
        *(_QWORD *)(v12 + 8) = v13;
        *(_QWORD *)v11 = v13;
        v14 = *(_QWORD *)(v6 + 472);
        if ( !*((_BYTE *)this + 3461) )
        {
          *((_BYTE *)this + 3461) = 1;
          KeSetTimer((PKTIMER)((char *)this + 3576), (LARGE_INTEGER)-v14, (PKDPC)((char *)this + 3640));
        }
        goto LABEL_15;
      }
LABEL_39:
      __fastfail(3u);
    }
  }
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_17:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCBEnd, v15, this, v4);
  }
}
