/*
 * XREFs of ViCreateProcessCallback @ 0x140465E20
 * Callers:
 *     <none>
 * Callees:
 *     ViCreateProcessCallbackInternal @ 0x140AD7224 (ViCreateProcessCallbackInternal.c)
 */

void __fastcall ViCreateProcessCallback(HANDLE ParentId, HANDLE ProcessId, BOOLEAN Create)
{
  HANDLE v3; // rax

  v3 = ProcessId;
  if ( ViVerifierEnabled )
  {
    LOBYTE(ProcessId) = Create;
    ViCreateProcessCallbackInternal(v3, ProcessId);
  }
}
