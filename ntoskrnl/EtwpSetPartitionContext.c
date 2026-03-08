/*
 * XREFs of EtwpSetPartitionContext @ 0x1405FF3A0
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 * Callees:
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall EtwpSetPartitionContext(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *a1;
  v5 = 0;
  if ( v4 )
  {
    PsDereferencePartition(v4);
    *a1 = 0LL;
  }
  if ( ((a2 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    v5 = PsReferencePartitionByHandle(a2, 2LL, a3, 1870099525LL, &v8);
    if ( v5 >= 0 )
      *a1 = v8;
  }
  return (unsigned int)v5;
}
