/*
 * XREFs of ?DxgkCddUnsubscribeWnfStateChange@@YAXPEAU_CDD_WNF_CALLBACK_CONTEXT@@@Z @ 0x1C01DD6D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DxgkCddUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  ExWaitForRundownProtectionRelease(Context + 4);
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DxgkUnsubscribeWnfStateChangeWork, DelayedWorkQueue, Context);
  }
  else
  {
    WdLogSingleEntry1(2LL, 3961LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed allocating workitem to unsubscribe the WNF callback.",
      3961LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
