/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14052CE6C
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebp
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  int v9; // edx
  unsigned int v10; // ebx
  char v11; // dl
  _OWORD v13[3]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  memset(v13, 0, sizeof(v13));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v13, a4);
  }
  SharedVm = MiGetSharedVm(a1 + 1664);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = *(_DWORD *)(a1 + 1848);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
    v10 = -1073741558;
  }
  else
  {
    if ( a2 )
      v11 = HIBYTE(v9) & 0x9F | 0x20;
    else
      v11 = HIBYTE(v9) & 0x9F;
    *(_BYTE *)(a1 + 1851) = v11;
    v10 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1664, v8);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v13, 0);
  return v10;
}
