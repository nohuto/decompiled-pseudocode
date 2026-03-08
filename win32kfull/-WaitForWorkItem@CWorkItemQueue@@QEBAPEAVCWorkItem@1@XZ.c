/*
 * XREFs of ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00BD100
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00BD190 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 */

struct CWorkItemQueue::CWorkItem *__fastcall CWorkItemQueue::WaitForWorkItem(PRKEVENT **this)
{
  struct CWorkItemQueue::CWorkItem *result; // rax
  struct CWorkItemQueue::CWorkItem *v3; // rdi
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF

  result = CWorkItemQueue::DequeueWorkItem((CWorkItemQueue *)this);
  if ( !result && !*(_BYTE *)this )
  {
    while ( 1 )
    {
      if ( KeWaitForSingleObject(*this[1], UserRequest, 1, 0, 0LL) == 192 )
      {
LABEL_6:
        KeSetEvent(*this[1], 1, 0);
        return CWorkItemQueue::DequeueWorkItem((CWorkItemQueue *)this);
      }
      result = CWorkItemQueue::DequeueWorkItem((CWorkItemQueue *)this);
      if ( result )
        return result;
      if ( *(_BYTE *)this )
        return CWorkItemQueue::DequeueWorkItem((CWorkItemQueue *)this);
      KeResetEvent(*this[1]);
      _InterlockedOr(v4, 0);
      v3 = CWorkItemQueue::DequeueWorkItem((CWorkItemQueue *)this);
      if ( v3 )
        break;
      if ( *(_BYTE *)this )
        goto LABEL_6;
    }
    KeSetEvent(*this[1], 1, 0);
    return v3;
  }
  return result;
}
