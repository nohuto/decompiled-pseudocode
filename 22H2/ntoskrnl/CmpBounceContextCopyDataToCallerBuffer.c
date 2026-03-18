/*
 * XREFs of CmpBounceContextCopyDataToCallerBuffer @ 0x14070EAC8
 * Callers:
 *     NtQueryMultipleValueKey @ 0x14070DE10 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E3E0 (NtEnumerateValueKey.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

void *__fastcall CmpBounceContextCopyDataToCallerBuffer(__int64 a1, size_t a2)
{
  void *result; // rax
  const void *v4; // rdx

  result = *(void **)a1;
  v4 = *(const void **)(a1 + 8);
  if ( *(const void **)a1 != v4 )
    return memmove(result, v4, a2);
  return result;
}
