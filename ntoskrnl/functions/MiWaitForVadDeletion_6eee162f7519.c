void *__fastcall MiWaitForVadDeletion(__int64 a1)
{
  void *result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4[10]; // [rsp+20h] [rbp-50h] BYREF

  result = memset(v4, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v4[1]) = 0;
    v4[3] = (unsigned __int64)&v4[2];
    LODWORD(v4[8]) = 1;
    v4[2] = (unsigned __int64)&v4[2];
    LOWORD(v4[1]) = 263;
    BYTE2(v4[1]) = 6;
    MiInsertVadEvent(a1, v4, 1);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v4[1], 18LL, 0);
    return (void *)MiLockVad((__int64)CurrentThread, a1);
  }
  return result;
}
