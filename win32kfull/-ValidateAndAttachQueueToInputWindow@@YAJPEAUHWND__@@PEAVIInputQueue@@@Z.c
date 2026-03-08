/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C003B404
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C003B2D0 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0029A64 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003C250 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     _GetAncestor @ 0x1C00EA498 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  LOBYTE(v4) = 1;
  v5 = HMValidateHandleNoSecure(a1, v4);
  v7 = (struct tagWND *)v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v9 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    v10 = (_QWORD *)*((_QWORD *)v7 + 2);
    if ( v9 == (_QWORD *)v10[53]
      || (unsigned int)IsProcessDwm(*v9)
      || v10[179] == GetAncestor(v7, 1LL) && (v15 = v10[180]) != 0 && v9 == *(_QWORD **)(*(_QWORD *)(v15 + 16) + 424LL) )
    {
      v12 = AttachInputQueueToWindow(v7, a2);
      if ( !v16 )
        UserSessionSwitchLeaveCrit(v11);
      return v12;
    }
    else
    {
      if ( !v16 )
        UserSessionSwitchLeaveCrit(v14);
      return 3221225506LL;
    }
  }
  else
  {
    if ( !v16 )
      UserSessionSwitchLeaveCrit(v6);
    return 3221225485LL;
  }
}
