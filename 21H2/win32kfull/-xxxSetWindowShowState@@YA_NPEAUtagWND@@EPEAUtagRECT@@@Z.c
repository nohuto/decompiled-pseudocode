/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023DD00
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C01FE820 (NtUserSetWindowShowState.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C011A14C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxSetWindowShowState(struct tagWND *this, unsigned __int8 a2, struct tagRECT *a3)
{
  unsigned int v4; // ebx
  BOOL v6; // eax
  struct tagWND *v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagRECT *Prop; // rax
  __int64 v13; // rdx
  char v14; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v6 = (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 || IsSemiMaximized(this);
  if ( ((_BYTE)v4 == 16 || (_BYTE)v4 == 18 || (_BYTE)v4 == 20) && !v6 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (struct tagRECT *)GetProp((__int64)this, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore(this, a3) )
    {
      UserSetLastError(8LL, v13);
      return 0;
    }
  }
  if ( ((_BYTE)v4 == 15 || (_BYTE)v4 == 17 || (_BYTE)v4 == 19) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
LABEL_9:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
    LOBYTE(v7) = 1;
    NotifyShell::TrackedWindowPosChanged(this, v7, v8);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v9, v10);
    return 1;
  }
  return (unsigned int)_ShowWindowAsync((struct tagTHREADINFO **)this, 1u, v4, a3 != 0LL ? 4 : 0) != 0;
}
