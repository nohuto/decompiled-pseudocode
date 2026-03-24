/*
 * XREFs of ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C00389F8
 * Callers:
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C003ED10 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00390EC (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0039FA4 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A3F8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::ProcessComponentIdleList(KSPIN_LOCK *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  KSPIN_LOCK v10; // rcx
  int v11; // r8d
  _QWORD *i; // rsi
  unsigned int v13; // r15d
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 3238) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0_EtwWriteTransfer(this, &Dxgk_ProcessComponentIdleList);
    v2 = MEMORY[0xFFFFF78000000014];
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 417, &LockHandle);
    v16[1] = v16;
    v3 = this + 411;
    v16[0] = v16;
    v4 = (_QWORD *)this[411];
    while ( v4 != v3 )
    {
      v5 = v4;
      v6 = v4;
      v4 = (_QWORD *)*v4;
      if ( v5[6] > v2 )
        break;
      if ( (_QWORD *)v4[1] != v6
        || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6)
        || (*v7 = v4, v4[1] = v7, *v6 = 0LL, v8 = v5 + 2, v9 = v16[0], *(_QWORD **)(v16[0] + 8LL) != v16) )
      {
        __fastfail(3u);
      }
      *v8 = v16[0];
      v5[3] = v16;
      *(_QWORD *)(v9 + 8) = v8;
      v16[0] = v5 + 2;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v16[0]; i != v16; i = (_QWORD *)*i )
    {
      v13 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v10, (unsigned int)&Dxgk_ReportPowerComponentState, v11, (_DWORD)this, v13, 0);
      v10 = this[351];
      if ( v10 )
        PoFxIdleComponent(v10, v13, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 417, &LockHandle);
    *((_BYTE *)this + 3237) = 0;
    v14 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      if ( v14[5] <= v2 )
      {
        v15 = v14[6] - v2;
      }
      else
      {
        v15 = v14[7];
        v14[5] = v2;
        v14[6] = v15 + v2;
      }
      DXGADAPTER::ScheduleComponentIdleListTimer((DXGADAPTER *)this, v15);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
