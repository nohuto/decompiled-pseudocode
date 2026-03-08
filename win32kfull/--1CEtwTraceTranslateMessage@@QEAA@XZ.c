/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C014570E
 * Callers:
 *     xxxTranslateMessage @ 0x1C00E4F1C (xxxTranslateMessage.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(CEtwTraceTranslateMessage *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = *(_DWORD *)this;
  LOBYTE(v2) = *((_BYTE *)PtiCurrentShared((__int64)this) + 1296);
  EtwTraceEndTranslateMessage(v2, v1);
}
