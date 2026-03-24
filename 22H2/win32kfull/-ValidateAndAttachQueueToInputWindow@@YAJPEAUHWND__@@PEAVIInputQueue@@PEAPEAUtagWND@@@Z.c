/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C010A9B8
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C010A9A0 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004EFF4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C010AAC0 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     _GetAncestor @ 0x1C010ACE8 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(unsigned __int64 a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  int v12; // ebx
  __int64 v14; // rax
  int v15; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  *a3 = 0LL;
  v6 = HMValidateHandleNoSecure(a1, 1);
  v8 = v6;
  if ( v6 && (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
    v10 = *(_QWORD **)(v8 + 16);
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v10[53]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v10[174] == GetAncestor(v8, 1LL) && (v14 = v10[175]) != 0 && v11 == *(_QWORD **)(*(_QWORD *)(v14 + 16) + 424LL) )
    {
      v12 = AttachInputQueueToWindow((struct tagWND *)v8, a2);
      if ( v12 >= 0 )
        *a3 = (struct tagWND *)v8;
    }
    else
    {
      v12 = -1073741790;
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v7);
  return (unsigned int)v12;
}
