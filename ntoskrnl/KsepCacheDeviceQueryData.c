/*
 * XREFs of KsepCacheDeviceQueryData @ 0x140800E58
 * Callers:
 *     KsepDbCacheQueryDeviceData @ 0x140800DE4 (KsepDbCacheQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall KsepCacheDeviceQueryData(__int64 a1, const WCHAR *a2)
{
  const UNICODE_STRING *v2; // rsi
  const UNICODE_STRING *v3; // rbx
  const UNICODE_STRING *v4; // rdi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  v2 = (const UNICODE_STRING *)(a1 + 56);
  v3 = *(const UNICODE_STRING **)(a1 + 56);
  String2 = 0LL;
  RtlInitUnicodeString(&String2, a2);
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(const UNICODE_STRING **)&v3->Length;
    if ( RtlEqualUnicodeString(v4 + 1, &String2, 1u) )
      return v4;
  }
  return 0LL;
}
