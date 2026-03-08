/*
 * XREFs of AlpcpSetOwnerProcessPort @ 0x140712A4C
 * Callers:
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x14077D738 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerProcessPort(__int64 a1, _DWORD *a2)
{
  PEPROCESS Process; // rbx
  LONG_PTR result; // rax

  if ( a2 && (*a2 & 0x100000) != 0 )
    Process = PsInitialSystemProcess;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObfReferenceObjectWithTag(Process, 0x63706C41u);
  *(_QWORD *)(a1 + 24) = Process;
  return result;
}
