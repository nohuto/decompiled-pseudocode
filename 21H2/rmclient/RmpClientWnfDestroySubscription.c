/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x1800022D0
 * Callers:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     HamIpcChannelRundown @ 0x18000223C (HamIpcChannelRundown.c)
 *     HamDisconnectForExtendedExecution @ 0x180004680 (HamDisconnectForExtendedExecution.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x180009840 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x180012480 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     CempListRemoveHeadAndClear @ 0x180011DE0 (CempListRemoveHeadAndClear.c)
 */

__int64 __fastcall RmpClientWnfDestroySubscription(_DWORD *P)
{
  _QWORD *v2; // rdx
  void *v4; // rax
  _QWORD *v5; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-8h]

  RtlUnsubscribeWnfNotificationWaitForCompletion(*(_QWORD *)P);
  RtlAcquireSRWLockExclusive(P + 8);
  P[16] |= 4u;
  v2 = (_QWORD *)*((_QWORD *)P + 2);
  if ( v2 == (_QWORD *)(P + 4) )
  {
    v6 = &v5;
    v5 = &v5;
  }
  else
  {
    v6 = (_QWORD *)*((_QWORD *)P + 3);
    v5 = v2;
    v2[1] = &v5;
    *v6 = &v5;
    *((_QWORD *)P + 3) = P + 4;
    *((_QWORD *)P + 2) = P + 4;
  }
  RtlReleaseSRWLockExclusive(P + 8);
  while ( v5 != &v5 )
  {
    v4 = (void *)CempListRemoveHeadAndClear(&v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  TpWaitForWork(*((_QWORD *)P + 7), 0LL);
  TpReleaseWork(*((_QWORD *)P + 7));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
