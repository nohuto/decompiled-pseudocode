/*
 * XREFs of ObDereferenceObjectEx @ 0x140344218
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 *     PspClearProcessThreadCidRefs @ 0x1407D935C (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObDereferenceObjectExWithTag @ 0x140344234 (ObDereferenceObjectExWithTag.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR a1)
{
  return ObDereferenceObjectExWithTag(a1);
}
