/*
 * XREFs of CmSiEventTupleCleanup @ 0x1402441AC
 * Callers:
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiEventTupleCleanup(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( *(_QWORD *)a1 )
    return ZwClose(*(HANDLE *)a1);
  return result;
}
