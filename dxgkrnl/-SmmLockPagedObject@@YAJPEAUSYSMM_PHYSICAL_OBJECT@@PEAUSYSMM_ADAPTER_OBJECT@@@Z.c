/*
 * XREFs of ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D2E8C
 * Callers:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x1C0071508 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$03@@YAXPEAU?$SYSMM_PUSHLOCK@$03@@@Z @ 0x1C006DD04 (--$SmmAcquirePushLockExclusive@$03@@YAXPEAU-$SYSMM_PUSHLOCK@$03@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$03@@YAXPEAU?$SYSMM_PUSHLOCK@$03@@@Z @ 0x1C006DD4C (--$SmmReleasePushLockExclusive@$03@@YAXPEAU-$SYSMM_PUSHLOCK@$03@@@Z.c)
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x1C0070E84 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x1C0071130 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x1C007138C (SmmMapLockedPagesToIommu.c)
 *     SmmLockPagesForAdapter @ 0x1C03D31E4 (SmmLockPagesForAdapter.c)
 *     SmmUnlockPages @ 0x1C03D341C (SmmUnlockPages.c)
 */

__int64 __fastcall SmmLockPagedObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER_OBJECT *a2)
{
  __int64 v2; // r12
  struct _MDL *v4; // rbx
  int locked; // r14d
  __int64 v7; // rax
  __int64 v8; // r9
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+A8h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp+60h] BYREF

  v2 = *((_QWORD *)a2 + 2);
  v4 = 0LL;
  Mdl = 0LL;
  locked = 0;
  SmmAcquirePushLockExclusive<4>((__int64)a1 + 32);
  v7 = *((_QWORD *)a1 + 7);
  if ( *((_DWORD *)a1 + 12) )
  {
    if ( !v7 )
    {
      WdLogSingleEntry1(1LL, 425LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPhysicalObject->PagedData.LockData.Mdl != nullptr",
        425LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    if ( v7 )
    {
      WdLogSingleEntry1(1LL, 374LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPhysicalObject->PagedData.LockData.Mdl == nullptr",
        374LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *(_QWORD *)a1;
    BaseAddress = 0LL;
    NumberOfBytes = 0LL;
    v13 = 0LL;
    locked = SysMmMapPhysicalObject(a1, 0, 0LL, v8, 0, &BaseAddress, &v13, &NumberOfBytes);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      goto LABEL_16;
    }
    locked = SmmLockPagesForAdapter(v2, (char *)BaseAddress + v13, NumberOfBytes, &Mdl);
    SysMmUnmapPhysicalObject((struct _MDL **)a1, BaseAddress, NumberOfBytes);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      v4 = Mdl;
      goto LABEL_14;
    }
    v4 = Mdl;
    locked = SmmMapLockedPagesToIommu(v2, (__int64)a1, (__int64)a2, Mdl);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      goto LABEL_14;
    }
    *((_QWORD *)a1 + 7) = v4;
    v4 = 0LL;
  }
  ++*((_DWORD *)a1 + 12);
LABEL_14:
  if ( v4 )
    SmmUnlockPages(v4);
LABEL_16:
  SmmReleasePushLockExclusive<4>((__int64)a1 + 32);
  return (unsigned int)locked;
}
