/*
 * XREFs of MiLdwPopupWorker @ 0x140A2CB60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     CcMmLogLostDelayedWriteError @ 0x140535454 (CcMmLogLostDelayedWriteError.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall MiLdwPopupWorker(__int64 a1)
{
  struct _FILE_OBJECT *v1; // rbx
  NTSTATUS v2; // edi

  v1 = *(struct _FILE_OBJECT **)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 48) )
    ExFreePoolWithTag((PVOID)a1, 0);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0);
  CcMmLogLostDelayedWriteError(v1, v2);
  return ObfDereferenceObjectWithTag(v1, 0x644C6D4Du);
}
