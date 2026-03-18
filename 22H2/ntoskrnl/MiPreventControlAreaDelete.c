/*
 * XREFs of MiPreventControlAreaDelete @ 0x140624E2C
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1406245A4 (MiFlushControlArea.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall MiPreventControlAreaDelete(__int64 a1)
{
  unsigned __int64 v1; // rbx

  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1752LL) = a1;
  v1 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
  return v1;
}
