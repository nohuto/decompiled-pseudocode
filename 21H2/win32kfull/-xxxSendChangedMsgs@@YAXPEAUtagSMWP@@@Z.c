/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E958
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     DwmChildRectChange @ 0x1C004E18C (DwmChildRectChange.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C006A9E4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     CalcWindowFullScreen @ 0x1C006AA64 (CalcWindowFullScreen.c)
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006DB4C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006EC18 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006ED88 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxRemoveShadow @ 0x1C007CAF0 (xxxRemoveShadow.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     WindowHasShadow @ 0x1C00BC1B4 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00BC1E8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1C011B94C (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C013DECC (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013E1FC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C023E108 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C023E2B0 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  unsigned __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  int v7; // r8d
  char v8; // r8
  int v9; // esi
  __int64 v10; // rdx
  int v11; // r8d
  const struct tagCVR *v12; // r8
  __int64 v13; // rcx
  struct tagWND **Shadow; // rax
  struct tagRECT v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  struct tagRECT v19; // [rsp+50h] [rbp-48h] BYREF
  __int128 v20; // [rsp+60h] [rbp-38h] BYREF
  __int64 v21; // [rsp+70h] [rbp-28h]
  __int64 v22; // [rsp+A0h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 7);
  v20 = 0LL;
  v21 = 0LL;
  while ( --v3 >= 0 )
  {
    if ( !*(_QWORD *)v2 )
      goto LABEL_21;
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(*(_QWORD *)v2, a2);
    if ( !v5 )
    {
      *(_DWORD *)(v2 + 32) = 6159;
LABEL_37:
      *(_QWORD *)v2 = 0LL;
      goto LABEL_21;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
      goto LABEL_37;
    if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v20 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v20;
      *((_QWORD *)&v20 + 1) = v5;
      HMLockObject(v5);
      v7 = *(_DWORD *)(v2 + 32);
      if ( (v7 & 0x80u) != 0 )
      {
        xxxRemoveShadow(v5);
        v7 = *(_DWORD *)(v2 + 32);
      }
      if ( (v7 & 0x40) != 0 )
      {
        if ( (unsigned int)ShouldHaveShadow(v5) )
          xxxAddShadow((struct tagWND *)v5);
      }
      else if ( (unsigned int)WindowHasShadow(v5) )
      {
        if ( (v8 & 1) == 0 || (v8 & 0x20) != 0 )
        {
          Shadow = (struct tagWND **)FindShadow((struct tagWND *)v5);
          if ( Shadow )
            zzzApplyShadow(*Shadow, Shadow[1]);
        }
        else if ( (v8 & 2) == 0 )
        {
          zzzMoveShadow(v5);
        }
        if ( (*(_DWORD *)(v2 + 32) & 4) == 0 )
          xxxUpdateShadowZorder(v5);
      }
      v9 = *(_DWORD *)(v2 + 32) & 0x9820;
      if ( (unsigned int)IsWindowDesktopComposed(v5) && v9 != 6144 )
        DwmChildRectChange(v5, v10, v11);
      if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v5 + 16) )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v5, 0x47u, 0LL, (struct _LARGE_STRING *)v2, 0, 0, 0LL, 1, 0);
      }
      else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) != 1 )
      {
        v22 = 0LL;
        xxxSendTransformableMessageTimeout(v5, 0x47u, 0LL, (struct _LARGE_STRING *)v2, 2u, 0x64u, &v22, 1, 0);
      }
      if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
      {
        if ( (*(_DWORD *)(v2 + 32) & 0x80000) != 0 )
          v15 = *(struct tagRECT *)(*(_QWORD *)(v5 + 40) + 88LL);
        else
          v15 = *(struct tagRECT *)(v2 + 136);
        v16 = *(_QWORD *)(v2 + 128);
        v19 = v15;
        v17 = ValidateHmonitorNoRip(v16);
        if ( v17 )
          v18 = *(_WORD *)(*(_QWORD *)(v17 + 40) + 64LL);
        else
          v18 = 0;
        xxxNotifyMonitorChanged((struct tagWND *)v5, &v19, *(struct tagBWL **)(v2 + 160), v18);
      }
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
      NotifyShell::PositioningChanged((NotifyShell *)v5, (struct tagWND *)v2, v12);
      CalcWindowFullScreen((struct tagWND *)v5);
      if ( v9 != 6144 )
        xxxWindowEvent(0x800Bu, 1u);
      ThreadUnlock1(v13);
    }
LABEL_21:
    v2 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
