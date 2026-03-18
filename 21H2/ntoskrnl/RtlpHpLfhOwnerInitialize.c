/*
 * XREFs of RtlpHpLfhOwnerInitialize @ 0x140371BFC
 * Callers:
 *     RtlpHpLfhBucketAllocateSlot @ 0x140370898 (RtlpHpLfhBucketAllocateSlot.c)
 *     RtlpHpLfhBucketActivate @ 0x1403719B4 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhBucketInitialize @ 0x140371B80 (RtlpHpLfhBucketInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhOwnerInitialize(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a3 == -1 )
    *(_BYTE *)a1 = 1;
  else
    *(_BYTE *)(a1 + 2) = a3;
  *(_BYTE *)(a1 + 1) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  result = a1 + 40;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  return result;
}
