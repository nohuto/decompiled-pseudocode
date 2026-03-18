/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00E28EC
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00E26E0 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     _GetAncestor @ 0x1C0048CF8 (_GetAncestor.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00E2830 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  char v25; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v25);
  LOBYTE(v4) = 1;
  v5 = HMValidateHandleNoSecure(a1, v4);
  v10 = (struct tagWND *)v5;
  if ( v5 && (v7 = *(_QWORD *)(v5 + 40), v6 = (*(_WORD *)(v7 + 42) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v12 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    v13 = (_QWORD *)*((_QWORD *)v10 + 2);
    if ( v12 == (_QWORD *)v13[53]
      || (unsigned int)IsProcessDwm(*v12)
      || v13[179] == GetAncestor((__int64)v10, 1LL)
      && (v24 = v13[180]) != 0
      && v12 == *(_QWORD **)(*(_QWORD *)(v24 + 16) + 424LL) )
    {
      v16 = AttachInputQueueToWindow(v10, a2);
      if ( !v25 )
        UserSessionSwitchLeaveCrit(v15, v14, v17, v18);
      return v16;
    }
    else
    {
      if ( !v25 )
        UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
      return 3221225506LL;
    }
  }
  else
  {
    if ( !v25 )
      UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
    return 3221225485LL;
  }
}
