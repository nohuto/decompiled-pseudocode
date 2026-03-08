/*
 * XREFs of ?AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01E9194
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchProcessor::AddUndispatchedFrameToThreadFrameList(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rcx

  v2 = (_QWORD *)((char *)a2 + 24);
  v3 = (_QWORD *)((char *)gptiCurrent + 1184);
  v4 = *((_QWORD *)gptiCurrent + 148);
  if ( *(struct tagTHREADINFO **)(v4 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1184) )
    __fastfail(3u);
  *v2 = v4;
  v2[1] = v3;
  *(_QWORD *)(v4 + 8) = v2;
  *v3 = v2;
}
