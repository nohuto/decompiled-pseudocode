/*
 * XREFs of MiReleaseDriverPtes @ 0x14075F4E0
 * Callers:
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x14075F494 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x1408C4BC0 (MmUnmapLockedRestartPages.c)
 *     MiReleaseSystemImageVa @ 0x140A92C18 (MiReleaseSystemImageVa.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140253090 (RtlNumberOfSetBits.c)
 *     MiReturnSystemVa @ 0x14027AC68 (MiReturnSystemVa.c)
 *     RtlAreBitsSet @ 0x140306260 (RtlAreBitsSet.c)
 *     MiUnlockDriverMappings @ 0x1403731A8 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x14037339C (MiLockDriverMappings.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  _RTL_BITMAP *v7; // r12
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rbp
  _RTL_BITMAP *v10; // rbx
  unsigned __int64 Buffer; // rcx
  void *v12; // rax
  __int64 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 NumberToClear; // [rsp+88h] [rbp+10h]
  unsigned __int64 StartingIndex; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 0LL;
  v9 = (__int64)(a2 << 25) >> 16;
  MiLockDriverMappings((__int64)CurrentThread);
  v13 = v5;
  v10 = (_RTL_BITMAP *)*(&qword_140C4CD30 + v5);
  if ( !v10 )
    goto LABEL_16;
  do
  {
    Buffer = (unsigned __int64)v10->Buffer;
    if ( a2 >= Buffer )
    {
      v8 = (-(__int64)((*(&v10[2].SizeOfBitMap + 1) & 1) != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
      if ( a2 < Buffer + 8 * v8 * v10[1].SizeOfBitMap )
        break;
    }
    v7 = v10;
    v10 = *(_RTL_BITMAP **)&v10->SizeOfBitMap;
  }
  while ( v10 );
  if ( !v10 )
LABEL_16:
    KeBugCheckEx(0x1Au, 0x2102uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  NumberToClear = (~(v8 - 1) & (v8 + v3 - 1)) / v8;
  StartingIndex = ((__int64)(a2 - (unsigned __int64)v10->Buffer) >> 3) / v8;
  if ( !RtlAreBitsSet(v10 + 1, StartingIndex, NumberToClear) )
    KeBugCheckEx(0x1Au, 0x2103uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  if ( (*(&v10[2].SizeOfBitMap + 1) & 2) != 0
    || (RtlClearBits(v10 + 1, StartingIndex, NumberToClear), !RtlNumberOfSetBits(v10 + 1)) )
  {
    MiReturnSystemVa(
      (__int64)v10->Buffer << 25 >> 16,
      ((__int64)v10->Buffer << 25 >> 16) + (((unsigned int)v8 * v10[1].SizeOfBitMap) << 12),
      12 - (a1 != 0));
    v12 = *(void **)&v10->SizeOfBitMap;
    if ( v7 )
      *(_QWORD *)&v7->SizeOfBitMap = v12;
    else
      *(&qword_140C4CD30 + v13) = v12;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
  }
}
