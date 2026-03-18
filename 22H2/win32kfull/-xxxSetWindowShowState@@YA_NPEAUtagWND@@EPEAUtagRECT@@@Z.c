/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0224FD4
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C01DD4C0 (NtUserSetWindowShowState.c)
 * Callees:
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C0012F3C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021DDD8 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxSetWindowShowState(struct tagWND *this, unsigned __int8 a2, struct tagRECT *a3, __int64 a4)
{
  unsigned int v5; // ebx
  BOOL v7; // eax
  struct tagWND *v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagRECT *Prop; // rax
  char v14; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v7 = (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 || IsSemiMaximized(this);
  if ( ((_BYTE)v5 == 16 || (_BYTE)v5 == 18 || (_BYTE)v5 == 20) && !v7 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (struct tagRECT *)GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, a4);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore(this, a3) )
    {
      UserSetLastError(8);
      return 0;
    }
  }
  if ( ((_BYTE)v5 == 15 || (_BYTE)v5 == 17 || (_BYTE)v5 == 19) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
LABEL_9:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
    LOBYTE(v8) = 1;
    NotifyShell::TrackedWindowPosChanged(this, v8, v9);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v10, v11);
    return 1;
  }
  return (unsigned int)_ShowWindowAsync((struct tagTHREADINFO **)this, 1u, v5, a3 != 0LL ? 4 : 0) != 0;
}
