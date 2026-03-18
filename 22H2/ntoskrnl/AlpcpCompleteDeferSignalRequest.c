/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x14071BEEC
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x14071BAA0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     AlpcpSignal @ 0x1402B6C40 (AlpcpSignal.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v5; // rcx

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    AlpcpSignal(a1, 0, 0, a4);
    v5 = *(void **)(a1 + 32);
    if ( v5 )
      ObfDereferenceObject(v5);
  }
}
