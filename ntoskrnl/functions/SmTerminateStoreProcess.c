LONG __fastcall SmTerminateStoreProcess(__int64 a1)
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  PsTerminateMinimalProcess(*(PRKPROCESS *)(a1 + 2008));
  Timeout.QuadPart = -3000000000LL;
  while ( KeWaitForSingleObject(*(PVOID *)(a1 + 2008), WrKernel, 0, 0, &Timeout) )
    ;
  ZwClose(*(HANDLE *)(a1 + 2000));
  ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 2008), 0x746C6644u);
  Timeout.QuadPart = -6000000000LL;
  while ( KeWaitForSingleObject((PVOID)(a1 + 2016), WrKernel, 0, 0, &Timeout) )
    ;
  result = KeResetEvent((PRKEVENT)(a1 + 2016));
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_QWORD *)(a1 + 2000) = 0LL;
  return result;
}
