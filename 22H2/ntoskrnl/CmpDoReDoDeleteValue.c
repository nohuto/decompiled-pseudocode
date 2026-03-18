/*
 * XREFs of CmpDoReDoDeleteValue @ 0x140A2A930
 * Callers:
 *     CmpDoReDoRecord @ 0x140A2A98C (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 *     CmpDoReOpenTransKey @ 0x140A2AC84 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoDeleteValue(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, &a2[2], 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwDeleteValueKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
