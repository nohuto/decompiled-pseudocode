__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // ecx
  _QWORD *Pool2; // rax
  _QWORD *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6AFF0, 0LL);
  v4 = dword_140C6AFE0;
  if ( v2 > dword_140C6AFE0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 4096LL, 1934181463LL);
    if ( !Pool2 )
      goto LABEL_3;
    v7 = (_QWORD *)qword_140C6AFD8;
    if ( *(PVOID **)qword_140C6AFD8 != &WdipSemPool )
      __fastfail(3u);
    Pool2[1] = qword_140C6AFD8;
    *Pool2 = &WdipSemPool;
    *v7 = Pool2;
    v4 = 4080;
    qword_140C6AFD8 = (__int64)Pool2;
    qword_140C6AFE8 = (__int64)(Pool2 + 2);
  }
  v3 = qword_140C6AFE8;
  qword_140C6AFE8 += v2;
  dword_140C6AFE0 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((__int64 *)&qword_140C6AFF0, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
