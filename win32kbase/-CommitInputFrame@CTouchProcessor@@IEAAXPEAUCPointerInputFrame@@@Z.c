/*
 * XREFs of ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C00F22F0
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C02005EC (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     ?SetPointerRawDataListFrameId@CTouchProcessor@@AEAAXKPEAUCPointerRawData@@@Z @ 0x1C0205894 (-SetPointerRawDataListFrameId@CTouchProcessor@@AEAAXKPEAUCPointerRawData@@@Z.c)
 */

void __fastcall CTouchProcessor::CommitInputFrame(CTouchProcessor *this, struct CPointerInputFrame *a2)
{
  char *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax

  CTouchProcessor::SetPointerRawDataListFrameId(this, *((_DWORD *)a2 + 10), *((struct CPointerRawData **)a2 + 29));
  v4 = (char *)this + 56;
  v5 = (_QWORD *)((char *)a2 + 8);
  v6 = *(_QWORD *)v4;
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  *v5 = v6;
  v5[1] = v4;
  *(_QWORD *)(v6 + 8) = v5;
  *(_QWORD *)v4 = v5;
}
