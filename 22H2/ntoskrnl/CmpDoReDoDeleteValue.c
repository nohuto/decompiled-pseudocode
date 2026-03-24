/*
 * XREFs of CmpDoReDoDeleteValue @ 0x140881FAC
 * Callers:
 *     CmpDoReDoRecord @ 0x140882008 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403FB500 (ZwDeleteValueKey.c)
 *     CmpDoReOpenTransKey @ 0x140882300 (CmpDoReOpenTransKey.c)
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
