/*
 * XREFs of VfIoFreeIrp @ 0x140ACA7E4
 * Callers:
 *     IovFreeIrpPrivate @ 0x140ABE6D0 (IovFreeIrpPrivate.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405D0134 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1405D017C (ViIrpDatabaseReleaseLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140ABF44C (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140ADE768 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIoFreeIrp(char *P, const void *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v7; // eax
  unsigned int v8; // esi
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  KIRQL v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (P[71] & 0x21) != 0x21 )
  {
    v4 = VfIrpDatabaseEntryFindAndLock(P);
    v5 = (_QWORD *)v4;
    if ( v4 )
    {
      if ( *((char **)P + 4) != P + 32 )
      {
        ViErrorReport1(0x20Cu, a2, P);
        VfIrpDatabaseEntryReleaseLock(v5);
        return 1LL;
      }
      v7 = *(_DWORD *)(v4 + 56);
      if ( v5[30] )
      {
        if ( (v7 & 0x400000) == 0 )
          ViErrorReport1(0x20Bu, a2, P);
        v8 = 1;
      }
      else
      {
        if ( (v7 & 0x200000) != 0 )
        {
          if ( (v7 & 8) != 0 )
          {
            v8 = 1;
            *(_WORD *)P = 0;
            if ( (P[71] & 1) != 0 )
            {
              PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)v5[11], *((unsigned int *)v5 + 21));
              ObfDereferenceObjectWithTag((PVOID)v5[11], 0x49667256u);
            }
            v9 = (*((_DWORD *)v5 + 6))-- == 1;
            v12 = 0;
            if ( v9 )
            {
              ViIrpDatabaseAcquireLockExclusive(&v12);
              v11 = *v5;
              ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v5[6])(v5, *v5, 1LL);
              *v5 = 0LL;
              VfUtilAddressRangeRemoveCheckEmpty(
                (__int64 *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v11 >> 12))),
                v11);
              ViIrpDatabaseReleaseLockExclusive(v12);
            }
            _InterlockedDecrement((volatile signed __int32 *)v5 + 5);
            VfIrpDatabaseEntryReleaseLock(v5);
            ExFreePoolWithTag(P, 0);
            return v8;
          }
          v9 = (*((_DWORD *)v5 + 6))-- == 1;
          v12 = 0;
          if ( v9 )
          {
            ViIrpDatabaseAcquireLockExclusive(&v12);
            v10 = *v5;
            ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v5[6])(v5, *v5, 1LL);
            *v5 = 0LL;
            VfUtilAddressRangeRemoveCheckEmpty(
              (__int64 *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v10 >> 12))),
              v10);
            ViIrpDatabaseReleaseLockExclusive(v12);
          }
          _InterlockedDecrement((volatile signed __int32 *)v5 + 5);
        }
        v8 = 0;
      }
      VfIrpDatabaseEntryReleaseLock(v5);
      return v8;
    }
  }
  return 0LL;
}
