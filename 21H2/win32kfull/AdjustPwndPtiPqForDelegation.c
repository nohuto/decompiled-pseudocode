/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x1C004F520
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionPostMouseMoveToQ @ 0x1C004F610 (EditionPostMouseMoveToQ.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0108CEC (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C010A160 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostInputMessage @ 0x1C0110B90 (EditionPostInputMessage.c)
 *     EditionHandleAltTab @ 0x1C0131FC0 (EditionHandleAltTab.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01E1A10 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01EE990 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0223730 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     GetInputDelegate @ 0x1C004F5E8 (GetInputDelegate.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004FC44 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CalcWakeMask @ 0x1C00577A0 (CalcWakeMask.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        struct tagTHREADINFO **a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // edx
  int v12; // r11d
  unsigned int v13; // r12d
  struct tagTHREADINFO *InputDelegate; // rax
  struct tagTHREADINFO *v15; // rbx
  __int64 result; // rax
  char v17; // si
  unsigned __int8 v18; // al
  bool v19; // zf
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v9 = *a1;
  v10 = *a2;
  v13 = CalcWakeMask(a4, a4, 0LL);
  if ( (v11 == 513 || v11 == 516)
    && v10
    && (*(_DWORD *)(v10 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 1264LL)
    && a5
    && ((*a5 - 2) & 0xFFFFFFEF) == 0 )
  {
    v17 = (v12 != 513) + 1;
    if ( !*(_QWORD *)(v9 + 136) )
    {
      v20[0] = v9 + 136;
      v20[1] = v10;
      HMAssignmentLock(v20);
    }
    *(_BYTE *)(v9 + 144) |= v17;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v9 + 136) )
    goto LABEL_5;
  if ( v12 != 514 && v12 != 517 )
  {
    if ( v12 == 512 )
      v10 = *(_QWORD *)(v9 + 136);
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v9 + 136);
  v18 = (v12 == 514) - 3;
  v19 = (v18 & *(_BYTE *)(v9 + 144)) == 0;
  *(_BYTE *)(v9 + 144) &= v18;
  if ( !v19 || (result = HMAssignmentUnlock(v9 + 136), (v10 = result) != 0) )
  {
LABEL_5:
    *a2 = v10;
    InputDelegate = (struct tagTHREADINFO *)GetInputDelegate(v10, v13);
    v15 = InputDelegate;
    if ( InputDelegate )
    {
      vAdjustDelegatePriority(InputDelegate);
      *a1 = *((_QWORD *)v15 + 54);
      *a3 = v15;
      *a6 = 1;
    }
    return 1LL;
  }
  return result;
}
