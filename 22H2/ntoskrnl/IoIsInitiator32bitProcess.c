/*
 * XREFs of IoIsInitiator32bitProcess @ 0x1403B6160
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x14022BA40 (IoIs32bitProcess.c)
 *     IoGetInitiatorProcess @ 0x14036DFE0 (IoGetInitiatorProcess.c)
 */

BOOLEAN __fastcall IoIsInitiator32bitProcess(PIRP Irp)
{
  __int64 InitiatorProcess; // rax
  __int16 v4; // cx

  InitiatorProcess = IoGetInitiatorProcess((__int64)Irp->Tail.Overlay.CurrentStackLocation->FileObject);
  if ( !InitiatorProcess )
    return IoIs32bitProcess(Irp);
  if ( *(_QWORD *)(InitiatorProcess + 1408) )
  {
    v4 = *(_WORD *)(InitiatorProcess + 2412);
    if ( v4 == 332 || v4 == 452 )
      return 1;
  }
  return 0;
}
