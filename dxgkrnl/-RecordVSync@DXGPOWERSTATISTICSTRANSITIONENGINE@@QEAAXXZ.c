/*
 * XREFs of ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0054A98
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C000ED70 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C00544FC (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync(KSPIN_LOCK *this)
{
  signed __int64 v2; // r11
  _QWORD *v3; // rdi
  __int64 v4; // r8
  KSPIN_LOCK v5; // rax
  KSPIN_LOCK v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  if ( *((_BYTE *)this + 88) != 1 )
  {
    v2 = this[4];
    v3 = this + 9;
    if ( v2 > (__int64)this[5] )
    {
      v4 = *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4);
      v5 = **(_QWORD **)(*this + 4200);
      this[4] = v5;
      v6 = v5 - v2;
      v2 = v5;
      *v3 += v6 * v4;
    }
    LODWORD(v7) = 0;
    if ( v2 )
    {
      v8 = **(_QWORD **)(*this + 4208);
      if ( v8 )
        v7 = 1000LL * *v3 / *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4) / v8;
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::CalculatePState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, v7);
    *v3 = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
