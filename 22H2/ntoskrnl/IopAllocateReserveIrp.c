/*
 * XREFs of IopAllocateReserveIrp @ 0x1404FFFF0
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x14029C49C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x1402D2090 (IopAllocateIrpMustSucceed.c)
 *     IoAsynchronousPageWrite @ 0x1402E5D7C (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x1402E66C0 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x1402FFCC0 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x14050091C (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // di
  __int16 v4; // si
  PIRP v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PIRP v8; // rcx
  struct _IO_STACK_LOCATION *v9; // rax
  PIRP v10; // rcx
  struct _IO_STACK_LOCATION *v11; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140C45E20 )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140C45D48, 1) == 1 )
      KeWaitForSingleObject(&word_140C45D50, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 8 * (8 * v3 + v4) + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v5 = IopReserveIrps;
    IopReserveIrps->Tail.Overlay.CurrentStackLocation -= 2;
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->CurrentLocation -= 2;
    v5->StackCount -= 2;
    *((_QWORD *)&v5->Tail.CompletionKey + 10) = CurrentStackLocation;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140C45D70, 1) == 1 )
      KeWaitForSingleObject(&word_140C45D78, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140C45D68, 72 * v3 + 208, v3);
    qword_140C45D68->AllocationFlags = 33;
    v8 = qword_140C45D68;
    qword_140C45D68->Tail.Overlay.CurrentStackLocation -= 2;
    v9 = v8->Tail.Overlay.CurrentStackLocation;
    v8->CurrentLocation -= 2;
    v8->StackCount -= 2;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v9;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(qword_140C45D68);
    return qword_140C45D68;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140C45D98, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140C45DA0, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140C45D90, 72 * v3 + 208, v3);
  qword_140C45D90->AllocationFlags = 33;
  v10 = qword_140C45D90;
  qword_140C45D90->Tail.Overlay.CurrentStackLocation -= 2;
  v11 = v10->Tail.Overlay.CurrentStackLocation;
  v10->CurrentLocation -= 2;
  v10->StackCount -= 2;
  *((_QWORD *)&v10->Tail.CompletionKey + 10) = v11;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(qword_140C45D90);
  return qword_140C45D90;
}
