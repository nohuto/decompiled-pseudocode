/*
 * XREFs of RmpClientSubscriptionDeliverPayload @ 0x180008580
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientCallbackGenerateLastMessage @ 0x180008620 (RmpClientCallbackGenerateLastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpClientSubscriptionDeliverPayload(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _BYTE *v5; // r10
  void (__fastcall *v6)(_BYTE *); // rax
  void (__fastcall *v7)(_BYTE *); // rax
  _BYTE v8[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( a3 )
  {
    v5 = a3;
  }
  else
  {
    RmpClientCallbackGenerateLastMessage(a2, v8);
    v5 = v8;
  }
  if ( *(_DWORD *)v5 )
  {
    if ( *(_DWORD *)v5 == 1 )
    {
      v6 = (void (__fastcall *)(_BYTE *))a2[9];
      *((_QWORD *)v5 + 3) = a2[10];
      v6(v5 + 8);
    }
  }
  else
  {
    v7 = (void (__fastcall *)(_BYTE *))a2[9];
    *((_QWORD *)v5 + 2) = a2[10];
    v7(v5 + 8);
  }
  if ( !a3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}
