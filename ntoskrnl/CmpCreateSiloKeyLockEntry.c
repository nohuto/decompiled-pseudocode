/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x140846130
 * Callers:
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406B6158 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1407B05D8 (CmpReferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateSiloKeyLockEntry(volatile signed __int64 *a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(256LL, 32LL, 876039491LL);
  v3 = Pool;
  if ( Pool )
    *(_QWORD *)(Pool + 16) = a1;
  else
    CmpDereferenceKeyControlBlockUnsafe(a1);
  return v3;
}
