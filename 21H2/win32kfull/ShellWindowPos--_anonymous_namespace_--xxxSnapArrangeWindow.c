/*
 * XREFs of ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0237BB4
 * Callers:
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C0236640 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 */

void __fastcall ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 v4; // rdx
  struct tagRECT *v5; // rcx
  int v6; // eax
  unsigned int left; // r9d
  char v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  char v12; // bl
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v20; // [rsp+48h] [rbp-40h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h]

  if ( IsRectEmptyInl(a2) )
  {
    v9 = *(_QWORD *)(v4 + 16);
    if ( v9 )
    {
      v10 = HMValidateHandleNoSecure(v9, 1);
      v11 = v10;
      if ( v10 )
      {
        v12 = *(_BYTE *)(*(_QWORD *)(v10 + 40) + 24LL);
        v21 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v20.left = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v20;
        *(_QWORD *)&v20.right = v11;
        HMLockObject(v11);
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
        xxxSetWindowPos(a1, v11, 0LL, 0LL, 0, 0, ((~v12 & 8) << 18) | 0x62413);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19, v14, v15);
        ThreadUnlock1(v17, v16, v18);
      }
    }
    else
    {
      xxxSetForegroundWindowWithOptions(a1, 31LL, 0LL, 0);
    }
    if ( (a2[1].bottom & 0x20) == 0 )
      ShellWindowPos::NotifyPosAndStateApplied(a1, 3, a2, a2[2].left);
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 28);
    left = v5[2].left;
    v8 = ((v6 & 0x10) != 0) | 2;
    v20 = *v5;
    if ( (v6 & 1) == 0 )
      v8 = (v6 & 0x10) != 0;
    WindowArrangement::xxxSetSnapArrangementPos((__int64)a1, &v20, v8, left);
  }
}
