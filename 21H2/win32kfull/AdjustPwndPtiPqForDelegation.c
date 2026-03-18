/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8
 * Callers:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0003AF8 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostInputMessage @ 0x1C00A9D30 (EditionPostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00AAD40 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostMouseMoveToQ @ 0x1C00AB330 (EditionPostMouseMoveToQ.c)
 *     EditionHandleAltTab @ 0x1C0121AA0 (EditionHandleAltTab.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01DCA70 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01E8F50 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C021CF44 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     CalcWakeMask @ 0x1C0057150 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00AC7DC (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C00AC9A0 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        struct tagTHREADINFO **a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r12d
  struct tagTHREADINFO *InputDelegate; // rax
  __int64 v14; // rdx
  struct tagTHREADINFO *v15; // rbx
  __int64 result; // rax
  char v17; // di
  unsigned __int8 v18; // al
  bool v19; // zf
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v10 = *a2;
  v11 = *a1;
  v12 = CalcWakeMask(a4, a4, 0);
  if ( (a4 == 513 || a4 == 516)
    && v10
    && (*(_DWORD *)(v10 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 1296LL)
    && a5
    && ((*a5 - 2) & 0xFFFFFFEF) == 0 )
  {
    v17 = (a4 != 513) + 1;
    if ( !*(_QWORD *)(v11 + 136) )
    {
      v20[0] = v11 + 136;
      v20[1] = v10;
      HMAssignmentLock(v20, 0LL);
    }
    *(_BYTE *)(v11 + 144) |= v17;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v11 + 136) )
    goto LABEL_5;
  if ( a4 != 514 && a4 != 517 )
  {
    if ( a4 == 512 )
      v10 = *(_QWORD *)(v11 + 136);
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v11 + 136);
  v18 = (a4 == 514) - 3;
  v19 = (v18 & *(_BYTE *)(v11 + 144)) == 0;
  *(_BYTE *)(v11 + 144) &= v18;
  if ( !v19 || (result = HMAssignmentUnlock(v11 + 136), (v10 = result) != 0) )
  {
LABEL_5:
    *a2 = v10;
    InputDelegate = GetInputDelegate((struct tagWND *)v10, v12);
    v15 = InputDelegate;
    if ( InputDelegate )
    {
      vAdjustDelegatePriority(InputDelegate, v14);
      *a1 = *((_QWORD *)v15 + 54);
      *a3 = v15;
      *a6 = 1;
    }
    return 1LL;
  }
  return result;
}
