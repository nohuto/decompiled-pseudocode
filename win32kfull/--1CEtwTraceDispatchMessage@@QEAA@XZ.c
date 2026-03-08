/*
 * XREFs of ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C01C1F70
 * Callers:
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage(CEtwTraceDispatchMessage *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = *(_DWORD *)this;
  LOBYTE(v2) = *((_BYTE *)PtiCurrentShared((__int64)this) + 1296);
  EtwTraceEndDispatchMessage(v2, v1);
}
