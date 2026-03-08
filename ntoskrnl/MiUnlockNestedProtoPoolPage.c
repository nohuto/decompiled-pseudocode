/*
 * XREFs of MiUnlockNestedProtoPoolPage @ 0x14029ECE8
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x14029F020 (MiCombineWithStandbyExisting.c)
 *     MiUnlockDataCopyPages @ 0x1402E2D6C (MiUnlockDataCopyPages.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiUnlockNestedProtoPoolPage(__int64 a1)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1);
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
