/*
 * XREFs of MiCopyWorkingSetFields @ 0x1403A93E4
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x1408598B8 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiCopyWorkingSetFields(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *SharedVm; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  unsigned __int8 v10; // r15
  volatile LONG *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rax
  volatile LONG *v16; // rax

  SharedVm = MiGetSharedVm((__int64)a1);
  v8 = MiGetSharedVm(v7);
  *(_DWORD *)SharedVm = 0;
  v10 = MiLockWorkingSetShared(v9);
  v11 = (volatile LONG *)MiGetSharedVm((__int64)a2);
  ExAcquireSpinLockExclusiveAtDpcLevel(v11 + 16);
  v12 = 8LL;
  a1[14] = a2[14];
  a1[15] = a2[15];
  SharedVm[6] = v8[6];
  SharedVm[7] = v8[7];
  a1[16] = a2[16];
  v13 = a2 + 5;
  a1[17] = a2[17];
  a1[18] = a2[18];
  a1[19] = a2[19];
  a1[2] = a3;
  v14 = a1 + 5;
  do
  {
    v15 = *v13++;
    *v14++ = v15;
    --v12;
  }
  while ( v12 );
  v16 = (volatile LONG *)MiGetSharedVm((__int64)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v16 + 16);
  return MiUnlockWorkingSetShared((__int64)a2, v10);
}
