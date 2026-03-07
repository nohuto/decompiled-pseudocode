__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  _QWORD *Pool; // rax
  __int64 v3; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int64 DirectoryTableBase; // rax
  __int64 result; // rax

  Pool = MiAllocatePool(64, 0x280uLL, 0x3250694Du);
  v3 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  ExInitializeAutoExpandPushLock(Pool + 49, 1);
  Process = KeGetCurrentThread()->ApcState.Process;
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 2512) |= 0x20u;
  *(_QWORD *)(a1 + 1224) = 0LL;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_QWORD *)(a1 + 2352) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 2368) = a1 + 2360;
  *(_QWORD *)(a1 + 2360) = a1 + 2360;
  result = MiAllocateProcessShadow(a1, 0);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 2008) = 0LL;
    *(_QWORD *)(a1 + 1496) = Process[1].ActiveProcessors.StaticBitmap[5];
    MiCopyWorkingSetFields((_QWORD *)(a1 + 1664), &Process[1].ActiveProcessors.StaticBitmap[26], v3);
    *(_QWORD *)(a1 + 1272) = Process[1].Affinity.StaticBitmap[13];
    *(_DWORD *)(a1 + 2876) = 1;
    MiInsertNewProcess((_QWORD *)a1, 0LL);
    MiAllowWorkingSetExpansion(a1 + 1664);
    return 0LL;
  }
  return result;
}
