/*
 * XREFs of PoGetSystemWake @ 0x140581630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PoGetSystemWake(PIRP Irp)
{
  BOOLEAN result; // al
  __int64 v2; // r8

  result = 0;
  v2 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  if ( !*(_BYTE *)(v2 + 184) )
    return *(_BYTE *)(v2 + 240);
  return result;
}
