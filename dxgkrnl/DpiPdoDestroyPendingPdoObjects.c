/*
 * XREFs of DpiPdoDestroyPendingPdoObjects @ 0x1C03A4D90
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C0396F80 (DpiFdoHandleRemoveDevice.c)
 *     DpiPdoRemovePdoObjects @ 0x1C03A5670 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoDestroyPendingPdoObjects(__int64 a1)
{
  struct _IO_REMOVE_LOCK **v1; // rdi
  struct _IO_REMOVE_LOCK *v2; // rbx
  __int64 v3; // rax
  NTSTATUS v4; // eax

  v1 = (struct _IO_REMOVE_LOCK **)(*(_QWORD *)(a1 + 64) + 3688LL);
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == (struct _IO_REMOVE_LOCK *)v1 )
      break;
    if ( *(struct _IO_REMOVE_LOCK ***)&v2->Common.RemoveEvent.Header.Lock != v1
      || (v3 = *(_QWORD *)&v2->Common.Removed, *(struct _IO_REMOVE_LOCK **)(*(_QWORD *)&v2->Common.Removed + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *v1 = (struct _IO_REMOVE_LOCK *)v3;
    *(_QWORD *)(v3 + 8) = v1;
    v4 = IoAcquireRemoveLockEx(v2 + 2, DpiPdoDestroyPendingPdoObjects, File, 1u, 0x20u);
    if ( v4 >= 0 )
    {
      IoReleaseRemoveLockAndWaitEx(v2 + 2, DpiPdoDestroyPendingPdoObjects, 0x20u);
      IoQueueWorkItem(
        (PIO_WORKITEM)v2[29].Common.RemoveEvent.Header.WaitListHead.Blink,
        (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo,
        DelayedWorkQueue,
        0LL);
    }
    else
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v4);
    }
  }
  return 0LL;
}
