/*
 * XREFs of NdisTryPromoteRWLockFromReadToWrite @ 0x1C00A5AA0
 * Callers:
 *     ?ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C00A5790 (-ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NdisTryPromoteRWLockFromReadToWrite(KSPIN_LOCK *a1, __int64 a2)
{
  BOOLEAN result; // al
  __int64 v5; // r8
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  _QWORD *v8; // r8
  _QWORD *i; // rdx

  result = KeTryToAcquireSpinLockAtDpcLevel(a1 + 2);
  if ( result )
  {
    v5 = ndisMaxNumberOfProcessors << 12;
    v6 = (_QWORD *)(a1[4] + (KeGetPcr()->Prcb.Number << 12));
    --*v6;
    v7 = (_QWORD *)a1[4];
    v8 = (_QWORD *)((char *)v7 + v5);
    for ( i = v7; i != v8; i += 512 )
    {
      if ( *i && i != (_QWORD *)((char *)v7 + (KeGetPcr()->Prcb.Number << 12)) )
      {
        while ( *i )
          _mm_pause();
      }
    }
    a1[3] = (KSPIN_LOCK)KeGetCurrentThread();
    result = 1;
    *(_BYTE *)(a2 + 1) = 4;
  }
  return result;
}
