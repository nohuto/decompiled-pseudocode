/*
 * XREFs of IovpCompleteRequest4 @ 0x140AC9E98
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140ABEB60 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     MdlInvariantPostDriverCompletion @ 0x1405CCFE4 (MdlInvariantPostDriverCompletion.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall IovpCompleteRequest4(__int64 a1, int a2, const void *a3, _QWORD *a4)
{
  __int64 v7; // rbx
  _BYTE *v8; // rsi

  if ( *a4 )
  {
    v7 = a4[1];
    *(_BYTE *)(v7 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 8));
    if ( a2 != -1073741802 )
    {
      v8 = *(_BYTE **)(a1 + 184);
      if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66)
        && (unsigned __int8)(*v8 - 3) <= 1u
        && *(_QWORD *)(a1 + 8)
        && (MmVerifierData & 0x6000) != 0 )
      {
        MdlInvariantPostDriverCompletion(v7, a1);
      }
      if ( *(_QWORD *)(v7 + 216) && *(int *)(v7 + 56) >= 0 && (v8[3] & 1) == 0 )
      {
        ViErrorReport1(0x228u, a3, (const void *)a1);
        *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
      }
    }
    VfIrpDatabaseEntryReleaseLock(v7);
  }
}
