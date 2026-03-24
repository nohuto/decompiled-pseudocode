/*
 * XREFs of VfIoFreeIrp @ 0x1409D125C
 * Callers:
 *     IovFreeIrpPrivate @ 0x1409C51E0 (IovFreeIrpPrivate.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140298A60 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViErrorReport1 @ 0x1405A1E58 (ViErrorReport1.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A254C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1405A2594 (ViIrpDatabaseReleaseLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x1409C63C0 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409E07B8 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E093C (VfIrpDatabaseEntryReleaseLock.c)
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
  KIRQL v13; // [rsp+50h] [rbp+18h] BYREF

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
            v13 = 0;
            if ( v9 )
            {
              ViIrpDatabaseAcquireLockExclusive(&v13);
              v11 = *v5;
              ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v5[6])(v5, *v5, 1LL);
              *v5 = 0LL;
              VfUtilAddressRangeRemoveCheckEmpty(
                (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v11 >> 12))),
                v11);
              ViIrpDatabaseReleaseLockExclusive(v13);
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
              (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v10 >> 12))),
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
