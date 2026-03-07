NTSTATUS __fastcall ExpWaitForFastResource2(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  _DWORD *v8; // r14
  NTSTATUS result; // eax
  __int64 Pool2; // rax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v12; // [rsp+40h] [rbp-48h]

  __incgsdword(0x8A68u);
  v6 = 0;
  v7 = 0;
  v8 = a1 + 15;
  v12 = a1 + 15;
  ++a1[15];
  Timeout.QuadPart = -5000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v6;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v6);
    ++v7;
    Timeout.QuadPart = ExpTimeout;
    if ( ExResourceTimeoutCount && v7 > ExResourceTimeoutCount )
    {
      v7 = 0;
      DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
      Pool2 = ExAllocatePool2(64LL, 56LL, 1867801938LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = ExpResourceTimeoutCaptureLiveDump;
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 32) = KeGetCurrentThread();
        *(_QWORD *)(Pool2 + 40) = a1;
        *(_DWORD *)(Pool2 + 48) = *v8;
        *(_DWORD *)(Pool2 + 52) = ExResourceTimeoutCount;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      __debugbreak();
    }
  }
  return result;
}
