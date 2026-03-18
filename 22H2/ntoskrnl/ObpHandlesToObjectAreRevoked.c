/*
 * XREFs of ObpHandlesToObjectAreRevoked @ 0x140749A18
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x14074A2F4 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1402F4E10 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 */

bool __fastcall ObpHandlesToObjectAreRevoked(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r8

  v1 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a1);
  if ( v1 )
    return *(_QWORD *)(v1 + 16) == 1LL;
  return v2;
}
