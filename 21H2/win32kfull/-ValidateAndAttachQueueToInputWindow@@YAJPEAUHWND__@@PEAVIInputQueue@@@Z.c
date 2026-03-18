/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00FF328
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00FF310 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00FF424 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     _GetAncestor @ 0x1C00FF684 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  unsigned int v10; // ebx
  __int64 v12; // rax
  int v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = (int)a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  v4 = HMValidateHandleNoSecure(v2, 1);
  v6 = (struct tagWND *)v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v5);
    v8 = (_QWORD *)*((_QWORD *)v6 + 2);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v8[53]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v8[174] == GetAncestor(v6, 1LL) && (v12 = v8[175]) != 0 && v9 == *(_QWORD **)(*(_QWORD *)(v12 + 16) + 424LL) )
    {
      v10 = AttachInputQueueToWindow(v6, a2);
    }
    else
    {
      v10 = -1073741790;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( !v13 )
    UserSessionSwitchLeaveCrit(v5);
  return v10;
}
