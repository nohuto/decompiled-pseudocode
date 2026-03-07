__int64 __fastcall CTouchProcessor::SetPointerInputCapture(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  unsigned int v3; // ebx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v8; // rdi

  v3 = 0;
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15047);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15051);
  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  v8 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 72, (__int64)a3);
    v3 = 1;
    *((_DWORD *)v8 + 75) = *((_DWORD *)v8 + 75) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(a3);
  return v3;
}
