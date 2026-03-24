/*
 * XREFs of NtUserPostMessage @ 0x1C0054600
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0037F54 (IAMThreadAccessGranted.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003F8FC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C003FA68 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C003FAEC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00549A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ForwardTouchMessage @ 0x1C01DC09C (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C021C530 (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edi
  __int64 v11; // rsi
  BOOL v12; // ebp
  __int64 v13; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v15; // r14
  struct tagQMSG *v16; // rax
  unsigned __int8 v18; // al
  int v19; // r13d
  char v20; // al
  __int16 v21; // cx
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v10 = 0;
    goto LABEL_21;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v8 = (unsigned __int16)MessageTable[v4];
    if ( (v8 & 0x2000) != 0 )
    {
      v10 = 0;
      v22 = 5LL;
LABEL_60:
      UserSetLastError(v22);
      goto LABEL_21;
    }
  }
  v10 = 0;
  if ( a1 >= 0x10000 && a1 != -1LL )
    goto LABEL_5;
  if ( !a1 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
  if ( a1 == 0xFFFF || a1 == -1LL )
  {
    v11 = -1LL;
  }
  else
  {
LABEL_5:
    v11 = ValidateHwnd(a1);
    if ( !v11 )
    {
      if ( (_DWORD)v4 == 993 )
        v10 = 1;
      goto LABEL_21;
    }
  }
LABEL_6:
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v22 = 1400LL;
      goto LABEL_60;
    }
    v10 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
  }
  else
  {
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v4 - 577) <= 3
      || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
    {
      v22 = 1002LL;
      goto LABEL_60;
    }
    v12 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v12 = ValidateDDEConvPair(a3, v11, v9) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
      v12 = 1;
    if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
      CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8);
      v15 = CurrentProcessWin32Process;
      if ( (struct tagPROCESSINFO *)v13 != CurrentProcessWin32Process )
      {
        if ( (_DWORD)v4 == 717 )
          goto LABEL_21;
        if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                              CurrentProcessWin32Process,
                              (void *const **)v13,
                              (struct tagWND *)v11,
                              v4,
                              a3,
                              (__int64)a4,
                              0) )
        {
          if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4) )
          {
            MSGSQMAddMessage(v15, (struct tagPROCESSINFO *)v13, v4, a3, (unsigned __int64)a4, 0, 2);
          }
          else if ( (_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
          {
            if ( *(_QWORD *)v13 == gpepCSRSS )
              v25 = 0x2000LL;
            else
              v25 = *(_QWORD *)(v13 + 880);
            v18 = CheckAccess((char *)v15 + 880, &v25);
            v19 = v18;
            if ( v18 )
            {
              v20 = Enforced();
              v21 = 1;
              if ( v20 )
                v21 = 5;
              MSGSQMAddMessage(v15, (struct tagPROCESSINFO *)v13, v4, a3, (unsigned __int64)a4, 0, v21);
            }
            if ( !v19 )
            {
              if ( (_DWORD)v4 != 793
                || (v24 = *(_QWORD *)(v11 + 16), *(_QWORD *)(v24 + 1392) != v11)
                || *(_QWORD *)(v24 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
              {
                EtwTraceUIPIMsgError(v15, v13, (unsigned int)v4, a3, a4);
                UserSetLastError(5LL);
                MSGSQMAddMessage(v15, (struct tagPROCESSINFO *)v13, v4, a3, (unsigned __int64)a4, 0, 0);
                goto LABEL_21;
              }
            }
          }
          else
          {
            MSGSQMAddMessage(v15, (struct tagPROCESSINFO *)v13, 0x112u, a3, (unsigned __int64)a4, 0, 2);
          }
        }
      }
    }
    v16 = _PostTransformableMessageExtended((struct tagWND *)v11, v4, a3, (__int64)a4, 0LL, 1);
    v8 = (unsigned __int64)MmSystemRangeStart;
    if ( v16 >= MmSystemRangeStart )
    {
      if ( v16 )
        v10 = 1;
      LODWORD(v16) = v10;
    }
    v10 = (int)v16;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
