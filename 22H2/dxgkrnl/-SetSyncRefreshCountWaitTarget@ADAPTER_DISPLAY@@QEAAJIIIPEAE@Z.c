/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C0215834
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100EC0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0004AFC (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C003BB30 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C005F15C (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // r14d
  char v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v12; // r8

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (unsigned int)a2;
  v9 = *((_QWORD *)this + 14) + 3968LL * (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + 936) || !*((_BYTE *)Current + 346) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 48) )
  {
    *(_DWORD *)(v9 + 944) = v7;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 48) + 8LL) + 2904 * v8), v7);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          0LL,
          &EventDWMVsyncCountWait,
          v12,
          v7,
          *(_DWORD *)(v9 + 948),
          *(_BYTE *)(v9 + 952),
          v6);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, v5, v7, a5);
  }
  return 0LL;
}
