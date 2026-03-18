/*
 * XREFs of NtUserPostThreadMessage @ 0x1C00AAB70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetDesktopView @ 0x1C0078100 (GetDesktopView.c)
 *     IsPrivileged @ 0x1C00A2D80 (IsPrivileged.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 *     _PostThreadMessage @ 0x1C00AB08C (_PostThreadMessage.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 *i; // rcx
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdi
  struct tagPROCESSINFO *v14; // rsi
  _QWORD *v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  char v19; // al
  __int16 v20; // cx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8);
    v9 = 0;
    goto LABEL_6;
  }
  v9 = 0;
  v11 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v11 )
  {
    v16 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v16 )
      goto LABEL_9;
    for ( i = (__int64 *)v16[2]; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        v16 = (_QWORD *)*v16;
        goto LABEL_8;
      }
      if ( *((unsigned __int16 *)i + 16) == a1 )
        break;
    }
    v11 = (_QWORD *)i[2];
  }
  v12 = v11[57];
  if ( *(_QWORD *)(gptiCurrent + 456LL) != v12
    && (*(_DWORD *)(gptiCurrent + 488LL) & 8) == 0
    && !GetDesktopView(*(_QWORD *)(gptiCurrent + 424LL), v12) )
  {
    v25 = 0LL;
    v24 = 0LL;
    if ( !(unsigned int)IsPrivileged(psTcb) )
      goto LABEL_9;
    if ( (unsigned __int8)Enforced(v21) )
    {
      if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v11[53] + 880LL) )
      {
        UserSetLastError(1444LL, v22);
        EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), v11[53], a2, a3, a4);
        goto LABEL_6;
      }
      goto LABEL_4;
    }
    if ( (int)GetProcessLuid(*gptiCurrent, &v25) < 0 || (int)GetProcessLuid(*v11, &v24) < 0 || v25 != v24 )
    {
LABEL_9:
      UserSetLastError(1444LL, (__int64)v16);
      goto LABEL_6;
    }
  }
LABEL_4:
  v13 = v11[53];
  v14 = *(struct tagPROCESSINFO **)(gptiCurrent + 424LL);
  if ( (struct tagPROCESSINFO *)v13 == v14 )
    goto LABEL_5;
  if ( a2 == 717 )
    goto LABEL_6;
  if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(v14, (void *const **)v13, 0LL, a2, a3, a4, 0) )
    goto LABEL_5;
  if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
  {
    v17 = a2;
  }
  else
  {
    v17 = 274;
    if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
    {
      if ( *(_QWORD *)v13 == gpepCSRSS )
        v24 = 0x2000LL;
      else
        v24 = *(_QWORD *)(v13 + 880);
      if ( !(unsigned __int8)CheckAccess((char *)v14 + 880, &v24) )
      {
        EtwTraceUIPIMsgError(v14, v13, a2, a3, a4);
        UserSetLastError(5LL, v23);
        MSGSQMAddMessage(v14, (struct tagPROCESSINFO *)v13, a2, a3, a4, 0, 0);
        goto LABEL_6;
      }
      v19 = Enforced(v18);
      v20 = 5;
      if ( !v19 )
        v20 = 1;
      MSGSQMAddMessage(v14, (struct tagPROCESSINFO *)v13, a2, a3, a4, 0, v20);
      goto LABEL_5;
    }
  }
  MSGSQMAddMessage(v14, (struct tagPROCESSINFO *)v13, v17, a3, a4, 0, 2);
LABEL_5:
  v9 = PostThreadMessage(v11, a2, a3, a4);
LABEL_6:
  UserSessionSwitchLeaveCrit(i);
  return v9;
}
