/*
 * XREFs of ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0119178
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0119120 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C014FD40 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C016B580 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01DE6E0 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01DE740 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 */

__int64 __fastcall CheckProcessIdentity(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // edi
  __int16 v8; // r14
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // rsi
  __int64 v11; // rbx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 5;
  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
    v10 = CurrentProcessWin32Process;
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( (struct tagPROCESSINFO *)v11 == CurrentProcessWin32Process )
      return 1LL;
    if ( v6 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (void *const **)v11,
                           a1,
                           v6,
                           a3,
                           a4,
                           1) )
        return 1LL;
      if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v6) )
      {
        v13 = v6;
LABEL_11:
        MSGSQMAddMessage(v10, (struct tagPROCESSINFO *)v11, v13, a3, a4, 1, 2);
        return 1LL;
      }
      v13 = 274;
      if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        goto LABEL_11;
      if ( *(_QWORD *)v11 == gpepCSRSS )
        v17 = 0x2000LL;
      else
        v17 = *(_QWORD *)(v11 + 880);
      if ( (unsigned __int8)CheckAccess((char *)v10 + 880, &v17) )
      {
        if ( !(unsigned __int8)Enforced(v14) )
          v8 = 1;
        MSGSQMAddMessage(v10, (struct tagPROCESSINFO *)v11, v6, a3, a4, 1, v8);
        return 1LL;
      }
      if ( v6 == 793 )
      {
        v15 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v15 + 1392) == a1 && *(_QWORD *)(v15 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
          return 1LL;
      }
      EtwTraceUIPIMsgError(v10, v11, v6, a3, a4);
      UserSetLastError(5LL, v16);
      MSGSQMAddMessage(v10, (struct tagPROCESSINFO *)v11, v6, a3, a4, 1, 0);
    }
    a2 = gpepCSRSS;
    if ( *(_QWORD *)v10 == gpepCSRSS )
      return 1LL;
  }
  UserSetLastError(5LL, a2);
  return 0LL;
}
