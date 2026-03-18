/*
 * XREFs of NtUserPostMessage @ 0x1C0054740
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 *     ForwardTouchMessage @ 0x1C01D6D8C (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C0217870 (ValidateDDEConvPair.c)
 */

__int64 __fastcall NtUserPostMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rdi
  unsigned __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rsi
  BOOL v11; // ebp
  __int64 v12; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v14; // r15
  struct tagQMSG *v15; // rax
  __int64 v17; // rcx
  char v18; // al
  __int16 v19; // cx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  EnterCrit(0LL, 1LL);
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v9 = 0;
    goto LABEL_21;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v8 = (unsigned __int16)MessageTable[v4];
    if ( (v8 & 0x2000) != 0 )
    {
      v9 = 0;
      v20 = 5LL;
      goto LABEL_50;
    }
  }
  v9 = 0;
  if ( a1 )
  {
    v10 = -1LL;
    if ( a1 != 0xFFFF && a1 != -1 )
    {
      v10 = ValidateHwnd(a1);
      if ( !v10 )
      {
        LOBYTE(v9) = (_DWORD)v4 == 993;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LODWORD(v15) = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
      goto LABEL_20;
    }
    v20 = 1400LL;
LABEL_50:
    UserSetLastError(v20);
    goto LABEL_21;
  }
  if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
    || (unsigned int)(v4 - 577) <= 3
    || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
  {
    v20 = 1002LL;
    goto LABEL_50;
  }
  v11 = 0;
  if ( (unsigned int)(v4 - 992) <= 8 )
    v11 = ValidateDDEConvPair(a3, v10) != 0;
  if ( (_DWORD)v4 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
    v11 = 1;
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v11 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL);
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8);
    v14 = CurrentProcessWin32Process;
    if ( (struct tagPROCESSINFO *)v12 != CurrentProcessWin32Process )
    {
      if ( (_DWORD)v4 == 717 )
        goto LABEL_21;
      if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                            CurrentProcessWin32Process,
                            (struct tagPROCESSINFO *)v12,
                            (struct tagWND *)v10,
                            v4,
                            a3,
                            (__int64)a4,
                            0) )
      {
        if ( !(unsigned int)IsMessageAlwaysAllowedAcrossIL(v4)
          && ((_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
        {
          if ( *(_QWORD *)v12 == gpepCSRSS )
            v23 = 0x2000LL;
          else
            v23 = *(_QWORD *)(v12 + 880);
          if ( (unsigned __int8)CheckAccess((char *)v14 + 880, &v23) )
          {
            v18 = Enforced(v17);
            v19 = 5;
            if ( !v18 )
              v19 = 1;
            MSGSQMAddMessage(v14, (struct tagPROCESSINFO *)v12, (__int64)a4, 0, v19);
          }
          else if ( (_DWORD)v4 != 793
                 || (v22 = *(_QWORD *)(v10 + 16), *(_QWORD *)(v22 + 1392) != v10)
                 || *(_QWORD *)(v22 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
          {
            EtwTraceUIPIMsgError(v14, v12, (unsigned int)v4, a3, a4);
            UserSetLastError(5LL);
            MSGSQMAddMessage(v14, (struct tagPROCESSINFO *)v12, (__int64)a4, 0, 0);
            goto LABEL_21;
          }
        }
        else
        {
          MSGSQMAddMessage(v14, (struct tagPROCESSINFO *)v12, (__int64)a4, 0, 2);
        }
      }
    }
  }
  v15 = _PostTransformableMessageExtended((struct tagWND *)v10, v4, a3, (__int64)a4, 0LL, 1);
  v8 = (unsigned __int64)MmSystemRangeStart;
  if ( v15 >= MmSystemRangeStart )
  {
    LOBYTE(v9) = v15 != 0LL;
    LODWORD(v15) = v9;
  }
LABEL_20:
  v9 = (int)v15;
LABEL_21:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
