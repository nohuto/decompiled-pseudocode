/*
 * XREFs of ViCreateProcessCallback @ 0x14045F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ViCreateProcessCallbackInternal @ 0x140A96D84 (ViCreateProcessCallbackInternal.c)
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
