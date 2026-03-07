void __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edx
  bool v5; // r11
  __int64 v6; // rbx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  signed __int8 v11; // cf
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(char *)(a2 + 563);
  v4 = *(_DWORD *)(a2 + 540);
  v5 = 0;
  v6 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 == (_DWORD)v2 )
    goto LABEL_2;
  v8 = v4 & 0x100;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v9 + 4 * v2 + 536), 1u);
    v5 = (int)v2 < (int)v6;
  }
  v10 = (unsigned __int8)v2 | (unsigned int)v8;
  *(_DWORD *)(a2 + 540) = v10;
  if ( !v5 )
  {
LABEL_2:
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  else
  {
    v11 = _interlockedbittestandset(a1, 7u);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v11 )
      KiActivateWaiterQueueWithNoLocks(a2, (unsigned __int64)a1, 0LL);
    else
      KiActivateWaiterPriQueue((ULONG_PTR)a1, v10);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  }
}
