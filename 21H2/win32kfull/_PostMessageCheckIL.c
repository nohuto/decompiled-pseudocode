/*
 * XREFs of _PostMessageCheckIL @ 0x1C01DD244
 * Callers:
 *     ForwardTouchMessage @ 0x1C01D6D8C (ForwardTouchMessage.c)
 *     NtUserInjectGesture @ 0x1C01F7FF0 (NtUserInjectGesture.c)
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 *     ValidateDDEConvPair @ 0x1C0217870 (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostMessageCheckIL(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  BOOL v8; // edi
  __int64 v9; // rdi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v11; // r14
  unsigned int v12; // r8d
  __int64 v14; // rcx
  __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0;
  if ( a2 - 992 <= 8 )
    v8 = ValidateDDEConvPair(a3, a1) != 0;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostMessage((int)a1, a2, a3, a4);
  if ( v8 )
    return PostMessage((int)a1, a2, a3, a4);
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v11 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v9 == CurrentProcessWin32Process )
    return PostMessage((int)a1, a2, a3, a4);
  if ( a2 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (void *const **)v9,
                         a1,
                         a2,
                         a3,
                         a4,
                         0) )
      return PostMessage((int)a1, a2, a3, a4);
    if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
    {
      v12 = a2;
LABEL_13:
      MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, v12, a3, a4, 0, 2);
      return PostMessage((int)a1, a2, a3, a4);
    }
    v12 = 274;
    if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      goto LABEL_13;
    if ( *(_QWORD *)v9 == gpepCSRSS )
      v18 = 0x2000LL;
    else
      v18 = *(_QWORD *)(v9 + 880);
    if ( (unsigned __int8)CheckAccess((char *)v11 + 880, &v18) )
    {
      if ( (unsigned __int8)Enforced(v14) )
        v15 = 5;
      else
        v15 = 1;
      MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, a2, a3, a4, 0, v15);
      return PostMessage((int)a1, a2, a3, a4);
    }
    if ( a2 == 793 )
    {
      v16 = *((_QWORD *)a1 + 2);
      if ( *(struct tagWND **)(v16 + 1392) == a1 && *(_QWORD *)(v16 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
        return PostMessage((int)a1, a2, a3, a4);
    }
    EtwTraceUIPIMsgError(v11, v9, a2, a3, a4);
    UserSetLastError(5LL, v17);
    MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, a2, a3, a4, 0, 0);
  }
  return 0LL;
}
