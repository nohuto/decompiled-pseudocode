/*
 * XREFs of xxxFlashWindow @ 0x1C0005C64
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005B40 (xxxSystemTimerProc.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserFlashWindowEx @ 0x1C01CF820 (NtUserFlashWindowEx.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F5FC0 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 *     xxxFlashEnabledPopup @ 0x1C0222D28 (xxxFlashEnabledPopup.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006474 (_SetSystemTimer.c)
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxFlashWindow(unsigned __int64 *BugCheckParameter2, unsigned int a2, int a3)
{
  unsigned int v6; // ebp
  unsigned int Prop; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edi
  BOOL v10; // r14d
  unsigned __int64 v11; // rcx
  __int64 v12; // r12
  unsigned int v13; // r15d
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 v18[9]; // [rsp+50h] [rbp-48h] BYREF

  v18[0] = 0LL;
  v6 = 0;
  Prop = GetProp(BugCheckParameter2, (unsigned __int16)gaFlashWState, 1LL);
  v8 = Prop;
  if ( Prop == 2048 )
  {
    v8 = 18432;
LABEL_3:
    v9 = 0;
LABEL_4:
    v10 = gpqForeground && *(unsigned __int64 **)(gpqForeground + 128LL) == BugCheckParameter2;
    goto LABEL_21;
  }
  if ( Prop )
  {
    if ( a2 == 1024 )
      a2 = Prop;
  }
  else
  {
    v11 = BugCheckParameter2[5];
    if ( (*(_BYTE *)(v11 + 16) & 0x40) != 0 || (a2 & 1) != 0 && (*(_BYTE *)(v11 + 30) & 0xC0) != 0 )
      v8 = 36864;
  }
  v9 = a2 & 0xFFFF000F;
  v6 = v8 & 0x8000;
  if ( BugCheckParameter2 == (unsigned __int64 *)gspwndAltTab )
    return v6;
  if ( (v8 & 8) != 0 && gpqForeground == *(_QWORD *)(BugCheckParameter2[2] + 432) )
    goto LABEL_3;
  if ( !v9 )
    goto LABEL_4;
  v10 = v6 == 0;
  if ( (v9 & 1) == 0 )
  {
LABEL_22:
    if ( (v9 & 2) == 0 )
    {
LABEL_29:
      v14 = v9;
      if ( HIWORD(v9) )
      {
        v8 |= 0x2000u;
        v9 -= 0x10000;
        if ( ((v8 >> 12) & 1) != v10 )
          v9 = v14;
        if ( (v8 & 0x4000) == 0 )
          v9 |= 4u;
      }
      if ( (v9 & 4) == 0 )
        goto LABEL_39;
      v8 |= 0x4000u;
      if ( !a3 )
        a3 = *(_DWORD *)(gpsi + 4984LL);
      if ( SetSystemTimer((_DWORD)BugCheckParameter2, 65528, a3, (unsigned int)xxxSystemTimerProc, 1) )
      {
LABEL_39:
        if ( (v8 & 0x2000) == 0 || HIWORD(v9) )
        {
          if ( v10 )
            v16 = v8 | 0x8000;
          else
            v16 = v8 & 0xFFFF7FFF;
          v15 = (v9 ^ v16) & 0xFFFF000B ^ v16;
        }
        else
        {
          v15 = 2048;
        }
        InternalSetProp(BugCheckParameter2, (unsigned __int16)gaFlashWState, v15, 5LL);
      }
      return v6;
    }
    goto LABEL_23;
  }
LABEL_21:
  xxxSendTransformableMessageTimeout((ULONG_PTR)BugCheckParameter2, 0, 100, (__int64)v18, 1, 0);
  if ( v9 )
    goto LABEL_22;
LABEL_23:
  if ( (unsigned __int8)IsTrayWindow(BugCheckParameter2, 1LL) )
  {
    v12 = *BugCheckParameter2;
    if ( (v8 & 0x800) != 0 )
      v13 = !v10;
    else
      v13 = v9 != 0 && v10;
    xxxCallHook(6, *BugCheckParameter2, v13, 10);
    PostShellHookMessagesEx(v13 != 0 ? 32774 : 6, v12, 0LL);
  }
  if ( v9 )
    goto LABEL_29;
  if ( (v8 & 0x4000) != 0 )
    FindTimer((_DWORD)BugCheckParameter2, 65528, 2, 1, 0LL);
  InternalRemoveProp(BugCheckParameter2, (unsigned __int16)gaFlashWState, 1LL);
  return v6;
}
