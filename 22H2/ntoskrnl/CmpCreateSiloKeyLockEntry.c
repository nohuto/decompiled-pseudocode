/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x140849290
 * Callers:
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CF0C (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D9378 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140769400 (CmpDereferenceKeyControlBlockUnsafe.c)
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
