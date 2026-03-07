__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  volatile LONG *SharedVm; // rbx
  KIRQL v6; // al
  int v7; // edx
  unsigned int v8; // ebx
  char v9; // dl
  $115DCDF994C6370D29323EAB0E0C9502 v11; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0;
  memset(&v11, 0, sizeof(v11));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v11);
  }
  SharedVm = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v7 = *(_DWORD *)(a1 + 1848);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    if ( a2 )
      v9 = HIBYTE(v7) & 0x9F | 0x20;
    else
      v9 = HIBYTE(v7) & 0x9F;
    *(_BYTE *)(a1 + 1851) = v9;
    v8 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1664, v6);
  if ( v2 )
    KiUnstackDetachProcess(&v11);
  return v8;
}
