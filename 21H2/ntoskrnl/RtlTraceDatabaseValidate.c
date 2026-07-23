/*
 * XREFs of RtlTraceDatabaseValidate @ 0x14058EE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14058EE70 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x14058F148 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8

  RtlpTraceDatabaseAcquireLock();
  v2 = *(_DWORD *)(a1 + 112);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    v4 = v2;
    do
    {
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  RtlpTraceDatabaseReleaseLock(a1);
  return 1;
}
