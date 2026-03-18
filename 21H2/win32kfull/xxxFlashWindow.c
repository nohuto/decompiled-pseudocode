/*
 * XREFs of xxxFlashWindow @ 0x1C010B918
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSystemTimerProc @ 0x1C010B7C0 (xxxSystemTimerProc.c)
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 *     NtUserFlashWindowEx @ 0x1C01F3300 (NtUserFlashWindowEx.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0211EA0 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlashEnabledPopup @ 0x1C023F618 (xxxFlashEnabledPopup.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     _SetSystemTimer @ 0x1C00C2F28 (_SetSystemTimer.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 */

__int64 __fastcall xxxFlashWindow(unsigned __int64 *BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebp
  unsigned int Prop; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  BOOL v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // r14d
  unsigned int v13; // edx
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned __int64 v17; // rcx
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0LL;
  v6 = 0;
  Prop = GetProp((__int64)BugCheckParameter2, (unsigned __int16)gaFlashWState, 1u);
  v8 = Prop;
  if ( Prop == 2048 )
  {
    v8 = 18432;
LABEL_32:
    v9 = 0;
    goto LABEL_33;
  }
  if ( Prop )
  {
    if ( a2 == 1024 )
      a2 = Prop;
  }
  else
  {
    v17 = BugCheckParameter2[5];
    if ( (*(_BYTE *)(v17 + 16) & 0x40) != 0 || (a2 & 1) != 0 && (*(_BYTE *)(v17 + 30) & 0xC0) != 0 )
      v8 = 36864;
  }
  v9 = a2 & 0xFFFF000F;
  v6 = v8 & 0x8000;
  if ( BugCheckParameter2 == (unsigned __int64 *)gspwndAltTab )
    return v6;
  if ( (v8 & 8) != 0 && gpqForeground == *(_QWORD *)(BugCheckParameter2[2] + 432) )
    goto LABEL_32;
  if ( !v9 )
  {
LABEL_33:
    v10 = gpqForeground && *(unsigned __int64 **)(gpqForeground + 120LL) == BugCheckParameter2;
    goto LABEL_10;
  }
  v10 = v6 == 0;
  if ( (v9 & 1) == 0 )
    goto LABEL_11;
LABEL_10:
  xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x86u, v10, 0LL, 0, 0x64u, (unsigned __int64 *)&v18, 1, 0);
  if ( v9 )
  {
LABEL_11:
    if ( (v9 & 2) == 0 )
    {
LABEL_17:
      v13 = v9;
      if ( HIWORD(v9) )
      {
        v8 |= 0x2000u;
        v9 -= 0x10000;
        if ( ((v8 >> 12) & 1) != v10 )
          v9 = v13;
        if ( (v8 & 0x4000) == 0 )
          v9 |= 4u;
      }
      if ( (v9 & 4) == 0 )
        goto LABEL_24;
      v8 |= 0x4000u;
      if ( !a3 )
        a3 = *(_DWORD *)(gpsi + 4984LL);
      if ( SetSystemTimer((unsigned __int64)BugCheckParameter2, 65528LL, a3, (__int64)xxxSystemTimerProc, 1) )
      {
LABEL_24:
        if ( (v8 & 0x2000) != 0 && !HIWORD(v9) )
        {
          v15 = 2048;
        }
        else
        {
          if ( v10 )
            v14 = v8 | 0x8000;
          else
            v14 = v8 & 0xFFFF7FFF;
          v15 = (v9 ^ v14) & 0xFFFF000B ^ v14;
        }
        InternalSetProp((__int64)BugCheckParameter2, (unsigned __int16)gaFlashWState, v15, 5u);
      }
      return v6;
    }
  }
  if ( IsTrayWindow((__int64)BugCheckParameter2, 1) )
  {
    v11 = *BugCheckParameter2;
    if ( (v8 & 0x800) != 0 )
      v12 = !v10;
    else
      v12 = v9 != 0 && v10;
    xxxCallHook(6, *BugCheckParameter2, v12, 10);
    PostShellHookMessages(v12 != 0 ? 32774 : 6, v11);
  }
  if ( v9 )
    goto LABEL_17;
  if ( (v8 & 0x4000) != 0 )
    FindTimer((__int64)BugCheckParameter2, 65528LL, 2u, 1, 0LL);
  InternalRemoveProp((__int64)BugCheckParameter2, (unsigned __int16)gaFlashWState, 1u);
  return v6;
}
