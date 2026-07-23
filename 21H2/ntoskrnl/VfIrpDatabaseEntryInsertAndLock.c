/*
 * XREFs of VfIrpDatabaseEntryInsertAndLock @ 0x1409E1858
 * Callers:
 *     VfPacketCreateAndLock @ 0x1409E29B8 (VfPacketCreateAndLock.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A283C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1405A2884 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeAdd @ 0x1409C72CC (VfUtilAddressRangeAdd.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409E17A8 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfIrpDatabaseEntryInsertAndLock(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (_QWORD *)(a3 + 32);
  *(_QWORD *)a3 = a1;
  LOBYTE(v10) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 24) = 1LL;
  *(_DWORD *)(a3 + 20) = 1;
  *(_QWORD *)(a3 + 48) = ViPacketNotificationCallback;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v10);
  v6 = 16LL * (unsigned __int8)(-125 * (a1 >> 12));
  v7 = (_QWORD *)(v6 + ViIrpDatabase);
  v8 = *(_QWORD *)(v6 + ViIrpDatabase);
  if ( *(_QWORD *)(v8 + 8) != v6 + ViIrpDatabase )
    __fastfail(3u);
  v4[1] = v7;
  *v4 = v8;
  *(_QWORD *)(v8 + 8) = v4;
  *v7 = v4;
  VfUtilAddressRangeAdd((unsigned __int64 *)(v6 + ViIrpDatabaseAddressRanges), a1, 208LL);
  ViIrpDatabaseReleaseLockExclusive(v10);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 20));
  --*(_DWORD *)(a3 + 24);
  return result;
}
