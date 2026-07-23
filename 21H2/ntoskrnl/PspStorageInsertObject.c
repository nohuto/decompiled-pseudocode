/*
 * XREFs of PspStorageInsertObject @ 0x1406C4480
 * Callers:
 *     PsInsertSiloContext @ 0x1405D25C0 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406C43AC (PsInsertPermanentSiloContextEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PspGetStorageArray @ 0x1406C4594 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageInsertObject(__int64 a1, __int64 a2, char a3, signed __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rdx
  signed __int64 v9; // rsi
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v10 = 0;
  v11 = 0LL;
  result = PspGetStorageArray(a1, a2, &v10, &v11);
  if ( (int)result >= 0 )
  {
    ObfReferenceObject((PVOID)a4);
    v7 = v11 + 16LL * v10;
    ExAcquirePushLockSharedEx(v7, 0LL);
    v8 = a4 | 1;
    if ( !a3 )
      v8 = a4;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v8, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v7);
    KeAbPostRelease(v7);
    if ( v9 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)a4);
      return 3221225659LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
