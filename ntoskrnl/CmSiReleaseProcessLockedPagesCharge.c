/*
 * XREFs of CmSiReleaseProcessLockedPagesCharge @ 0x14020C564
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140730B54 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140730DF8 (HvpViewMapCreateView.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x1407310B8 (HvpViewMapAcquireChargesAndLockViewPages.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1407326F8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140732864 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x14074C624 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140823068 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140880D20 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapShrinkStorage @ 0x140A1A654 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1406A3848 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x1406A419C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall CmSiReleaseProcessLockedPagesCharge(_QWORD *a1, __int64 a2)
{
  struct _KPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // ecx
  _BYTE v9[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v4 = (struct _KPROCESS *)a1[1];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  CmSiRWLockAcquireExclusive(a1 + 2);
  v5 = a1[5];
  v6 = a1[4] - a2;
  v7 = *((_DWORD *)a1 + 8) - a2;
  v9[0] = 0;
  MmAdjustWorkingSetSizeEx(v7, v5, 0, 0, 0, (__int64)v9);
  a1[3] -= a2;
  a1[4] = v6;
  CmSiRWLockReleaseExclusive((ULONG_PTR)(a1 + 2));
  return KiUnstackDetachProcess(&ApcState, 0LL);
}
