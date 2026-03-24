/*
 * XREFs of ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D051C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0013BBC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C0041290 (CkptRestore.c)
 *     GetMonitorMaxArea @ 0x1C0041474 (GetMonitorMaxArea.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00DAB90 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E5988 (LogicalToPhysicalInPlaceRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023F2D8 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C0240790 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 */

void __fastcall xxxCloneWindowPosAndArrangement(struct tagWND *a1, const struct WINDOWPOSANDCHECKPOINT *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  struct tagRECT v7; // xmm6
  __int128 v8; // xmm7
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int64 Prop; // rax
  struct tagRECT *v16; // rax
  __int64 v17; // rcx
  struct tagRECT *v18; // r14
  LONG left; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // al
  bool v23; // cf
  __int64 v24; // rax
  __int64 v25; // rcx
  CWindowGroupManager *v26; // rcx
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h]
  struct tagRECT v30; // [rsp+58h] [rbp-B0h]
  __int128 v31; // [rsp+68h] [rbp-A0h]
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h]
  struct tagRECT v35; // [rsp+98h] [rbp-70h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v37[3]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-38h] BYREF
  struct tagRECT v39; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v40; // [rsp+F8h] [rbp-10h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v37[2] = 0LL;
  v27 = ValidateHmonitorNoRip(v3);
  v5 = v27;
  if ( !v27 )
  {
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v27 = v5;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v37[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v37;
  v37[1] = v5;
  HMLockObject(v5);
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_BYTE *)a2 + 93) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      xxxMinMaximizeEx(a1, 7u, 320, 0LL, 0LL, 0LL);
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    v9 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v9 + 31) & 1) == 0 || *(_QWORD *)(v9 + 256) != *((_QWORD *)a2 + 2) )
      xxxMinMaximizeEx(a1, 3u, *((_QWORD *)a2 + 1) != 0LL ? 64 : 320, v27, 0LL, *((_QWORD *)a2 + 1));
  }
  else
  {
    v10 = *((_QWORD *)a1 + 5);
    v40 = *(_OWORD *)((char *)a2 + 24);
    v39 = 0LL;
    PhysicalToLogicalDPIRect(&v39, &v40, *(unsigned int *)(v10 + 288), &v27);
    ExtendRectByWindowMargin(a1, &v39, &v39);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 )
    {
      Prop = GetProp((__int64)a1, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
      if ( Prop )
        *(_DWORD *)(Prop + 48) &= 0xFFFFFFE1;
      xxxMinMaximizeEx(a1, 9u, 584, v27, &v39, *((_QWORD *)a2 + 1));
    }
    else
    {
      v11 = ValidateHwnd(*((_QWORD *)a2 + 1));
      v34 = 0LL;
      v33 = 0LL;
      if ( v11 )
      {
        v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v33 = *(_QWORD *)(v12 + 416);
        *(_QWORD *)(v12 + 416) = &v33;
        *((_QWORD *)&v33 + 1) = v11;
        HMLockObject(v11);
        v13 = 524304;
      }
      else
      {
        v13 = 524308;
      }
      xxxSetWindowPos(
        a1,
        v11,
        (unsigned int)v39.left,
        (unsigned int)v39.top,
        v39.right - v39.left,
        v39.bottom - v39.top,
        v13);
      if ( v11 )
        ThreadUnlock1(v14);
    }
    SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
    SetOrClrWF(0, (__int64)a1, 0xF20u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 95), (__int64)a1, 0xD901u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 96), (__int64)a1, 0xD902u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 97), (__int64)a1, 0xDA80u, 1);
    v35 = v39;
    LogicalToPhysicalInPlaceRect(a1, &v35);
    v36 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect(a1, &v36);
    v7 = v35;
    v8 = v36;
  }
  v16 = (struct tagRECT *)CkptRestore((__int64)a1, (_OWORD *)(*((_QWORD *)a1 + 5) + 88LL));
  v18 = v16;
  if ( v16 && *((_BYTE *)a2 + 92) )
  {
    *v16 = *(struct tagRECT *)((char *)a2 + 40);
    v16[1] = *(struct tagRECT *)((char *)a2 + 56);
    v16[2] = *(struct tagRECT *)((char *)a2 + 72);
    v16[3].left = *((_DWORD *)a2 + 22);
    PhysicalToLogicalDPIRect(v16, v16, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v27);
    PhysicalToLogicalDPIRect(&v18[1], &v18[1], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v27);
    ExtendRectByWindowMargin(a1, v18, v18);
    ExtendRectByWindowMargin(a1, v18 + 1, v18 + 1);
    left = v18[3].left;
    if ( (left & 0x20) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v18[2], &v18[2], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v27);
      left = v18[3].left;
    }
    if ( (left & 0x40) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v18[2].right, &v18[2].right, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v27);
      v20 = *(_QWORD *)GetMonitorMaxArea(&v38, a1, v27);
      v18[2].right -= v20;
      v18[2].bottom -= HIDWORD(v20);
      left = v18[3].left;
    }
    v18[3].left = left & 0xFFFFFF7F;
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v17 + 31) & 0x20) != 0 && (*(_DWORD *)(v17 + 288) & 0xF) == 2 )
    {
      SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
      v18[3].left |= 0x80u;
    }
  }
  ThreadUnlock1(v17);
  v30 = 0LL;
  v31 = 0LL;
  if ( *((_BYTE *)a2 + 93) )
  {
    v28 = 2;
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    v28 = 1;
  }
  else
  {
    if ( *((_BYTE *)a2 + 95) || (v28 = 0, *((_BYTE *)a2 + 96)) )
      v28 = 3;
    v30 = v7;
  }
  v21 = *((_QWORD *)a1 + 5);
  v22 = *(_BYTE *)(v21 + 31);
  if ( (v22 & 0x20) != 0 )
  {
    v29 = 2;
  }
  else if ( (v22 & 1) != 0 )
  {
    v29 = 1;
  }
  else
  {
    v23 = (*(_BYTE *)(v21 + 233) & 3) != 0;
    v31 = v8;
    v29 = v23 ? 3 : 0;
  }
  v24 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v24 )
    v25 = ***(_QWORD ***)(v24 + 8);
  else
    v25 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v25) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v32);
    CWindowGroupManager::NotifyTemplateApplied(v26, a1, (const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *)&v28);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v32);
  }
}
