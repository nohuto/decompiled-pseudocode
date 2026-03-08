/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0227CCC
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C01DE4F0 (NtUserSetWindowShowState.c)
 * Callees:
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C00121FC (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C02209E0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxSetWindowShowState(struct tagWND *this, unsigned __int8 a2, struct tagRECT *a3)
{
  unsigned int v4; // ebx
  BOOL v6; // eax
  struct tagWND *v7; // rdx
  unsigned int v8; // r8d
  struct tagRECT *Prop; // rax
  char v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v6 = (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 || IsSemiMaximized(this);
  if ( ((_BYTE)v4 == 16 || (_BYTE)v4 == 18 || (_BYTE)v4 == 20) && !v6 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (struct tagRECT *)GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
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
  if ( ((_BYTE)v4 == 15 || (_BYTE)v4 == 17 || (_BYTE)v4 == 19) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
LABEL_9:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
    LOBYTE(v7) = 1;
    NotifyShell::TrackedWindowPosChanged(this, v7, v8);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
    return 1;
  }
  return (unsigned int)_ShowWindowAsync((struct tagTHREADINFO **)this, 1u, v4, a3 != 0LL ? 4 : 0) != 0;
}
