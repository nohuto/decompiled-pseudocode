/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x1C009FA68
 * Callers:
 *     EditionPostInputMessage @ 0x1C0009890 (EditionPostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00D6620 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01B78F0 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01C4440 (PostPointerEventMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C020311C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C0037160 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0047028 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CalcWakeMask @ 0x1C0071660 (CalcWakeMask.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        struct tagTHREADINFO **a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // r11d
  int v13; // r12d
  struct tagTHREADINFO *InputDelegate; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagTHREADINFO *v17; // rbx
  __int64 result; // rax
  char v19; // si
  unsigned __int8 v20; // al
  bool v21; // zf
  int v22; // edx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v10 = *a2;
  v11 = *a1;
  v13 = CalcWakeMask(a4, a4, 0);
  if ( (v12 == 513 || v12 == 516)
    && v10
    && (*(_DWORD *)(v10 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 1312LL)
    && a5
    && ((*a5 - 2) & 0xFFFFFFEF) == 0 )
  {
    v19 = (v12 != 513) + 1;
    if ( !*(_QWORD *)(v11 + 144) )
    {
      v23[0] = v11 + 144;
      v23[1] = v10;
      HMAssignmentLock(v23, 0LL);
    }
    *(_BYTE *)(v11 + 152) |= v19;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v11 + 144) )
    goto LABEL_5;
  if ( v12 != 514 && v12 != 517 )
  {
    if ( v12 == 512 )
      v10 = *(_QWORD *)(v11 + 144);
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v11 + 144);
  v20 = (v12 == 514) - 3;
  v21 = (v20 & *(_BYTE *)(v11 + 152)) == 0;
  *(_BYTE *)(v11 + 152) &= v20;
  if ( !v21 || (result = HMAssignmentUnlock(v11 + 144), (v10 = result) != 0) )
  {
LABEL_5:
    *a2 = v10;
    InputDelegate = GetInputDelegate((struct tagWND *)v10, v13);
    v17 = InputDelegate;
    if ( InputDelegate )
    {
      vAdjustDelegatePriority(InputDelegate, v15, v16);
      *a1 = *((_QWORD *)v17 + 54);
      v22 = (*((_DWORD *)v17 + 319) >> 6) & 1;
      *a3 = v17;
      *a6 = 1;
      *a7 = v22;
    }
    return 1LL;
  }
  return result;
}
