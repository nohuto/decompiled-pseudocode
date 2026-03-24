/*
 * XREFs of NtUserPostThreadMessage @ 0x1C00DA2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003F8FC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C003FA68 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C003FAEC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     GetDesktopView @ 0x1C004EFA0 (GetDesktopView.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _PostThreadMessage @ 0x1C00DA3F8 (_PostThreadMessage.c)
 *     IsPrivileged @ 0x1C011D26C (IsPrivileged.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  __int64 *i; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdi
  struct tagPROCESSINFO *v16; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r12d
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  bool v25; // zf
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+48h] [rbp-8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8, v9);
    v10 = 0;
    goto LABEL_6;
  }
  v10 = 0;
  v13 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v13 )
  {
    v18 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v18 )
      goto LABEL_9;
    for ( i = (__int64 *)v18[2]; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        v18 = (_QWORD *)*v18;
        goto LABEL_8;
      }
      if ( *((unsigned __int16 *)i + 16) == a1 )
        break;
    }
    v13 = (_QWORD *)i[2];
  }
  v14 = v13[57];
  if ( *(_QWORD *)(gptiCurrent + 456LL) == v14
    || (*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0
    || GetDesktopView(*(_QWORD *)(gptiCurrent + 424LL), v14) )
  {
    goto LABEL_4;
  }
  v30 = 0LL;
  v29 = 0LL;
  if ( !(unsigned int)IsPrivileged(psTcb) )
  {
LABEL_9:
    UserSetLastError(1444LL, (__int64)v18, v12);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)Enforced(v19) )
  {
    if ( (int)GetProcessLuid(*gptiCurrent, &v30) >= 0 && (int)GetProcessLuid(*v13, &v29) >= 0 && v30 == v29 )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v13[53] + 880LL) )
  {
    UserSetLastError(1444LL, v20, v21);
    EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), v13[53], a2, a3, a4);
    goto LABEL_6;
  }
LABEL_4:
  v15 = v13[53];
  v16 = *(struct tagPROCESSINFO **)(gptiCurrent + 424LL);
  if ( (struct tagPROCESSINFO *)v15 == v16 )
    goto LABEL_5;
  if ( a2 == 717 )
    goto LABEL_6;
  if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(v16, (void *const **)v15, 0LL, a2, a3, a4, 0) )
    goto LABEL_5;
  v22 = IsMessageAlwaysAllowedAcrossIL(a2);
  if ( v22 )
  {
    MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, a2, a3, a4, 0, 2);
    goto LABEL_44;
  }
  if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
  {
    if ( *(_QWORD *)v15 == gpepCSRSS )
      v29 = 0x2000LL;
    else
      v29 = *(_QWORD *)(v15 + 880);
    v23 = CheckAccess((char *)v16 + 880, &v29);
    v22 = v23;
    if ( v23 )
    {
      v25 = (unsigned __int8)Enforced(v24) == 0;
      v26 = 5;
      if ( v25 )
        v26 = 1;
      MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, a2, a3, a4, 0, v26);
    }
    if ( !v22 )
    {
      EtwTraceUIPIMsgError(v16, v15, a2, a3, a4);
      UserSetLastError(5LL, v27, v28);
      MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, a2, a3, a4, 0, 0);
LABEL_44:
      if ( !v22 )
        goto LABEL_6;
    }
  }
  else
  {
    MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, 0x112u, a3, a4, 0, 2);
  }
LABEL_5:
  v10 = PostThreadMessage(v13, a2, a3);
LABEL_6:
  UserSessionSwitchLeaveCrit(i);
  return v10;
}
