/*
 * XREFs of AlpcpCompleteDeferSignalRequestAndWait @ 0x14076BBC4
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     AlpcpWaitForSingleObject @ 0x1402E0F40 (AlpcpWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x14033E350 (AlpcpSignalAndWait.c)
 */

__int64 __fastcall AlpcpCompleteDeferSignalRequestAndWait(
        __int64 a1,
        void *a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *a5)
{
  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
    return AlpcpSignalAndWait(a1, a2, WrLpcReceive, a4, a5, 0);
  else
    return AlpcpWaitForSingleObject(a2, WrLpcReceive, a4, (*(_DWORD *)(a1 + 48) & 0x200000) != 0, a5);
}
