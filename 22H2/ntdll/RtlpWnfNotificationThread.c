/*
 * XREFs of RtlpWnfNotificationThread @ 0x180063D20
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180063E3C (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008B61C (RtlpWnfCalculateAndSetNextTimer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x18009F310 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _WNF_STATE_NAME *p_StateName; // rsi
  ULONG EventMask; // ebp
  ULONG v5; // edi
  _WNF_DELIVERY_DESCRIPTOR *NewDeliveryDescriptor; // rbx
  NTSTATUS CompleteWnfStateSubscription; // eax
  ULONG64 OldSubscriptionId; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-20h] BYREF

  p_StateName = 0LL;
  Timeout.QuadPart = -50000000LL;
  OldSubscriptionId = 0LL;
  EventMask = 0;
  v5 = 0;
  NewDeliveryDescriptor = 0LL;
  if ( !qword_18016D250 )
    return;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !NewDeliveryDescriptor )
    {
      NewDeliveryDescriptor = (_WNF_DELIVERY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
      if ( !NewDeliveryDescriptor )
        break;
    }
    CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(
                                     p_StateName,
                                     &OldSubscriptionId,
                                     EventMask,
                                     v5,
                                     NewDeliveryDescriptor,
                                     0x1030u);
    if ( CompleteWnfStateSubscription < 0 )
      goto LABEL_11;
    v5 = RtlpWnfProcessCurrentDescriptor(NewDeliveryDescriptor);
    if ( v5 == 259 )
    {
      p_StateName = 0LL;
      EventMask = 0;
      OldSubscriptionId = 0LL;
      v5 = 0;
LABEL_8:
      NewDeliveryDescriptor = 0LL;
    }
    else
    {
      p_StateName = &NewDeliveryDescriptor->StateName;
      OldSubscriptionId = NewDeliveryDescriptor->SubscriptionId;
      EventMask = NewDeliveryDescriptor->EventMask;
      if ( v5 == -1073741267 )
      {
        RtlpWnfCalculateAndSetNextTimer();
        goto LABEL_8;
      }
    }
  }
  CompleteWnfStateSubscription = -1073741801;
LABEL_11:
  if ( CompleteWnfStateSubscription != -2147483622 )
    TpSetWaitEx(a3, a2, &Timeout, 0LL);
  if ( NewDeliveryDescriptor )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NewDeliveryDescriptor);
}
