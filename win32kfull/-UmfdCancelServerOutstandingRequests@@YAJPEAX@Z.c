CMultipleConsumerWorkQueue::CWaitableWorkItem *__fastcall UmfdCancelServerOutstandingRequests(CWorkItemQueue **a1)
{
  CMultipleConsumerWorkQueue::CWaitableWorkItem *result; // rax

  while ( 1 )
  {
    result = CWorkItemQueue::DequeueWorkItem(*a1);
    if ( !result )
      break;
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(result);
  }
  return result;
}
