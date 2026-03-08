/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C020FD0C
 * Callers:
 *     NtUserDownlevelTouchpad @ 0x1C016EB00 (NtUserDownlevelTouchpad.c)
 * Callees:
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C0200C18 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0207420 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C020FB30 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        __int64 a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2,
        __int64 a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rbx
  unsigned __int16 v6; // si
  __int64 v7; // rax
  const struct CPointerInputFrame *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  const struct CPointerInputFrame *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rax

  v4 = gptiCurrent;
  v6 = a1;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  v8 = CTouchProcessor::ReferenceFrameFromId(*(CTouchProcessor **)(v7 + 3424), v6);
  v12 = v8;
  if ( v8 )
  {
    v13 = *((unsigned int *)v8 + 57);
    if ( (v13 & 0x80u) == 0LL )
    {
      v14 = -1073741811;
LABEL_6:
      v15 = SGDGetUserSessionState(v9, v13, v10, v11);
      CTouchProcessor::UnreferenceFrameExternal(*(CTouchProcessor **)(v15 + 3424), v12);
      return v14;
    }
    *((_WORD *)v4 + 584) = v6;
    *((_QWORD *)v4 + 147) = *((_QWORD *)v8 + 8);
  }
  else if ( v6 != *((_WORD *)v4 + 584) )
  {
    return (unsigned int)-1073741790;
  }
  v14 = CPTPProcessor::xxxDownlevelInput(v8, a2);
  if ( v12 )
    goto LABEL_6;
  return v14;
}
