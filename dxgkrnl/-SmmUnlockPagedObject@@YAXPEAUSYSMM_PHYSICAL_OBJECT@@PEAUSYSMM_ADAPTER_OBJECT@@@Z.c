void __fastcall SmmUnlockPagedObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER_OBJECT *a2)
{
  __int64 v2; // rbp

  v2 = *((_QWORD *)a2 + 2);
  SmmAcquirePushLockExclusive<4>((__int64)a1 + 32);
  if ( !*((_DWORD *)a1 + 12) )
  {
    WdLogSingleEntry1(1LL, 476LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->PagedData.LockData.LockCount > 0",
      476LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    WdLogSingleEntry1(1LL, 477LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->PagedData.LockData.Mdl != nullptr",
      477LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)a1 + 12))-- == 1 )
  {
    if ( *((_DWORD *)a2 + 8) )
      WdLogSingleEntry5(0LL, 484LL, 5LL, a2, v2, *((_QWORD *)a1 + 7));
    SmmUnmapLockedPagesFromIommu(v2, (__int64)a1, (__int64)a2, *((struct _MDL **)a1 + 7));
    SmmUnlockPages(*((PMDL *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
  }
  SmmReleasePushLockExclusive<4>((__int64)a1 + 32);
}
