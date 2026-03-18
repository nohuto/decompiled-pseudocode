/*
 * XREFs of VfPacketDereference @ 0x140A9C0A0
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140A91260 (ViPendingCompleteAfterWait.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140602294 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1406022DC (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140A81AE8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

__int64 __fastcall VfPacketDereference(_QWORD *a1, int a2)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( a2 == 1 && (*((_DWORD *)a1 + 6))-- == 1 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v6);
    v4 = *a1;
    ((void (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 1LL);
    *a1 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v4 >> 12))),
      v4);
    result = ViIrpDatabaseReleaseLockExclusive(v6);
  }
  _InterlockedDecrement((volatile signed __int32 *)a1 + 5);
  return result;
}
