/*
 * XREFs of CmpDoReDoRenameKey @ 0x140A27D14
 * Callers:
 *     CmpDoReDoRecord @ 0x140A27C2C (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwRenameKey @ 0x1404152F0 (ZwRenameKey.c)
 *     CmpDoReOpenTransKey @ 0x140A27F24 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoRenameKey(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, &a2[2], 131078LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwRenameKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
