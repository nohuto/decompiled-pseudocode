__int64 __fastcall UsbhAcquireFdoPwrLock(__int64 a1, KSPIN_LOCK a2, int a3, int a4)
{
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // al
  int v9; // ecx
  __int64 result; // rax

  v7 = (KSPIN_LOCK *)FdoExt(a1);
  v8 = KeAcquireSpinLockRaiseToDpc(v7 + 632);
  v9 = *((_DWORD *)v7 + 1043);
  *((_BYTE *)v7 + 5064) = v8;
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v9;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *((unsigned int *)v7 + 1043);
  v7[168] = a2;
  return result;
}
