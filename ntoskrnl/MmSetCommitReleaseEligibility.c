/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14061762C
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

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
