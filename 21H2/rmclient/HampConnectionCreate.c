/*
 * XREFs of HampConnectionCreate @ 0x1800039B0
 * Callers:
 *     HamConnectToServerEx @ 0x180003930 (HamConnectToServerEx.c)
 *     HamConnectForStateChangeNotifications @ 0x1800092E0 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForSessionState @ 0x1800093B0 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x180009420 (HamConnectForDebugging.c)
 *     HamConnectForServicing @ 0x1800094A0 (HamConnectForServicing.c)
 *     HamConnectForFullTrust @ 0x180010590 (HamConnectForFullTrust.c)
 * Callees:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     HampConnectionInitialize @ 0x180004D90 (HampConnectionInitialize.c)
 *     HampConnectionAllocateState @ 0x1800051B0 (HampConnectionAllocateState.c)
 *     RmpClientWnfCreateSubscription @ 0x180009940 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HampConnectionCreate(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  PVOID Heap; // rax
  __int64 v10; // rbx
  int State; // edi
  __int64 result; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v10 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  HampConnectionInitialize(a1, a2, Heap);
  State = HampConnectionAllocateState(v10, a2, a3, a4);
  if ( State < 0 )
    goto LABEL_8;
  if ( *(_DWORD *)(v10 + 112) != 6 )
    goto LABEL_4;
  State = RmpClientWnfCreateSubscription(v10 + 8, HampConnectionDeliverStateChangePayload, v10, v10 + 16);
  if ( State >= 0 )
    State = 0;
  if ( State < 0 )
  {
LABEL_8:
    HampConnectionDestroy(v10);
    return (unsigned int)State;
  }
  else
  {
LABEL_4:
    result = 0LL;
    *a5 = v10;
  }
  return result;
}
