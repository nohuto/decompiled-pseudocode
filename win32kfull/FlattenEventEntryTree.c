/*
 * XREFs of FlattenEventEntryTree @ 0x1C00EC164
 * Callers:
 *     FlushLookUpTableBucket @ 0x1C00EC09C (FlushLookUpTableBucket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FlattenEventEntryTree(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax
  __int64 v3; // r9
  __int64 *v4; // r8
  __int64 i; // rcx
  __int64 v6; // [rsp+8h] [rbp+8h] BYREF

  v6 = a1;
  v1 = &v6;
  result = 0LL;
  while ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    v1 = (__int64 *)(*v1 + 24);
    v4 = v1;
    for ( i = *v1; i; i = *(_QWORD *)(i + 32) )
      v4 = (__int64 *)(i + 32);
    *v4 = v3;
    result = (unsigned int)(result + 1);
    a1 = *v1;
  }
  return result;
}
