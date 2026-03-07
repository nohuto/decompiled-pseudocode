void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  RTL_BITMAP *v7; // r12
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rbp
  RTL_BITMAP *i; // rbx
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
  for ( i = (RTL_BITMAP *)*(&qword_140C655C0 + v5); i; i = *(RTL_BITMAP **)&i->SizeOfBitMap )
  {
    Buffer = (unsigned __int64)i->Buffer;
    if ( a2 >= Buffer )
    {
      v8 = (-(__int64)((*(&i[2].SizeOfBitMap + 1) & 1) != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
      if ( a2 < Buffer + 8 * v8 * i[1].SizeOfBitMap )
        break;
    }
    v7 = i;
  }
  if ( !i )
    KeBugCheckEx(0x1Au, 0x2102uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  NumberToClear = (~(v8 - 1) & (v8 + v3 - 1)) / v8;
  StartingIndex = ((__int64)(a2 - (unsigned __int64)i->Buffer) >> 3) / v8;
  if ( !RtlAreBitsSet(i + 1, StartingIndex, NumberToClear) )
    KeBugCheckEx(0x1Au, 0x2103uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  if ( (*(&i[2].SizeOfBitMap + 1) & 2) != 0
    || (RtlClearBits(i + 1, StartingIndex, NumberToClear), !RtlNumberOfSetBits(i + 1)) )
  {
    MiReturnSystemVa(
      (__int64)i->Buffer << 25 >> 16,
      ((__int64)i->Buffer << 25 >> 16) + ((i[1].SizeOfBitMap * (unsigned int)v8) << 12),
      a1 != 0 ? 1 : 12,
      0LL);
    v12 = *(void **)&i->SizeOfBitMap;
    if ( v7 )
      *(_QWORD *)&v7->SizeOfBitMap = v12;
    else
      *(&qword_140C655C0 + v13) = v12;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(i, 0);
  }
  else
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
  }
}
