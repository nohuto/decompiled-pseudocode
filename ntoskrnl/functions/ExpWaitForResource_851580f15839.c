NTSTATUS __fastcall ExpWaitForResource(_DWORD *a1, __int64 a2, unsigned int a3, void (__fastcall *a4)(_DWORD *))
{
  unsigned int v8; // edi
  unsigned int v9; // esi
  _DWORD *v10; // r15
  NTSTATUS result; // eax
  __int64 Pool2; // rax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v14; // [rsp+40h] [rbp-48h]

  __incgsdword(0x8A68u);
  v8 = 0;
  v9 = 0;
  v10 = a1 + 17;
  v14 = a1 + 17;
  ++a1[17];
  Timeout.QuadPart = -5000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v8;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v8);
    ++v9;
    Timeout.QuadPart = ExpTimeout;
    if ( ExResourceTimeoutCount && v9 > ExResourceTimeoutCount )
    {
      v9 = 0;
      DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
      Pool2 = ExAllocatePool2(64LL, 56LL, 1867801938LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = ExpResourceTimeoutCaptureLiveDump;
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 32) = KeGetCurrentThread();
        *(_QWORD *)(Pool2 + 40) = a1;
        *(_DWORD *)(Pool2 + 48) = *v10;
        *(_DWORD *)(Pool2 + 52) = ExResourceTimeoutCount;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      __debugbreak();
    }
    if ( a4 )
      a4(a1);
  }
  return result;
}
