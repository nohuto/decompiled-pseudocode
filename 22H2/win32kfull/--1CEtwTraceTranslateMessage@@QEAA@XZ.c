/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C0152430
 * Callers:
 *     xxxTranslateMessage @ 0x1C00ACC1C (xxxTranslateMessage.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(
        CEtwTraceTranslateMessage *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = *(_DWORD *)this;
  LOBYTE(v5) = *((_BYTE *)PtiCurrentShared((__int64)this, a2, a3, a4) + 1296);
  EtwTraceEndTranslateMessage(v5, v4);
}
