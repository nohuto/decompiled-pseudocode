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

__int64 __fastcall RtlpWnfNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 Heap; // rbx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+38h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v11[0] = -50000000LL;
  v10 = 0LL;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  if ( !qword_18016D250 )
    return result;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !Heap )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4144LL);
      if ( !Heap )
        break;
    }
    result = ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, __int64, int))NtGetCompleteWnfStateSubscription)(
               v4,
               &v10,
               v5,
               v6,
               Heap,
               4144);
    if ( (int)result < 0 )
      goto LABEL_11;
    v6 = RtlpWnfProcessCurrentDescriptor(Heap, 0LL);
    if ( v6 == 259 )
    {
      v4 = 0LL;
      v5 = 0;
      v10 = 0LL;
      v6 = 0;
LABEL_8:
      Heap = 0LL;
    }
    else
    {
      v4 = Heap + 8;
      v10 = *(_QWORD *)Heap;
      v5 = *(_DWORD *)(Heap + 24);
      if ( v6 == -1073741267 )
      {
        RtlpWnfCalculateAndSetNextTimer();
        goto LABEL_8;
      }
    }
  }
  result = 3221225495LL;
LABEL_11:
  if ( (_DWORD)result != -2147483622 )
    result = TpSetWaitEx(a3, a2, v11, 0LL);
  if ( Heap )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return result;
}
