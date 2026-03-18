/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x1406D0FF4
 * Callers:
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpEnlistKeyBody @ 0x1407C07FC (CmpEnlistKeyBody.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 1LL, 17LL) != 17 )
    return 0;
  *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  return v1;
}
