/*
 * XREFs of CmpDoReDoRenameKey @ 0x1408820F0
 * Callers:
 *     CmpDoReDoRecord @ 0x140882008 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwRenameKey @ 0x1403FC8A0 (ZwRenameKey.c)
 *     CmpDoReOpenTransKey @ 0x140882300 (CmpDoReOpenTransKey.c)
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
