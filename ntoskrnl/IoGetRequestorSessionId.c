/*
 * XREFs of IoGetRequestorSessionId @ 0x140300CF0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 */

NTSTATUS __stdcall IoGetRequestorSessionId(PIRP Irp, PULONG pSessionId)
{
  PETHREAD Thread; // rcx
  ULONG v3; // ebx
  ULONG SessionId; // eax
  NTSTATUS result; // eax

  Thread = Irp->Tail.Overlay.Thread;
  v3 = 0;
  if ( Thread )
  {
    SessionId = MmGetSessionIdEx(Thread->Process);
    if ( SessionId != -1 )
      v3 = SessionId;
    result = 0;
    *pSessionId = v3;
  }
  else
  {
    *pSessionId = -1;
    return -1073741823;
  }
  return result;
}
