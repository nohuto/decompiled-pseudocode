/*
 * XREFs of ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@_N@Z @ 0x1C00E16D0
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C0011080 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

struct CWorkItemQueue::CWorkItem *__fastcall CWorkItemQueue::WaitForWorkItem(CWorkItemQueue *this)
{
  union _SLIST_HEADER *v1; // rdi
  struct CWorkItemQueue::CWorkItem *result; // rax
  PSLIST_ENTRY v4; // rax
  PSLIST_ENTRY v5; // rsi
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (union _SLIST_HEADER *)((char *)this + 16);
  result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 1);
  _InterlockedOr(v6, 0);
  if ( result )
  {
    *((_DWORD *)result + 2) = 2;
  }
  else if ( !*(_BYTE *)this )
  {
    while ( 1 )
    {
      if ( KeWaitForSingleObject(**((PVOID **)this + 1), UserRequest, 1, 0, 0LL) == 192 )
      {
LABEL_10:
        KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
LABEL_11:
        result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(v1);
        _InterlockedOr(v6, 0);
        if ( !result )
          return result;
LABEL_12:
        *((_DWORD *)result + 2) = 2;
        return result;
      }
      result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(v1);
      _InterlockedOr(v6, 0);
      if ( result )
        goto LABEL_12;
      if ( *(_BYTE *)this )
        goto LABEL_11;
      KeResetEvent(**((PRKEVENT **)this + 1));
      _InterlockedOr(v6, 0);
      v4 = ExpInterlockedPopEntrySList(v1);
      v5 = v4;
      _InterlockedOr(v6, 0);
      if ( v4 )
        break;
      if ( *(_BYTE *)this )
        goto LABEL_10;
    }
    *((_DWORD *)&v4->Next + 2) = 2;
    KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
    return (struct CWorkItemQueue::CWorkItem *)v5;
  }
  return result;
}
