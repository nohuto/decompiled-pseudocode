/*
 * XREFs of ObpHandlesToObjectAreRevoked @ 0x1407DEA60
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1407DF2CC (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14035A830 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
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
