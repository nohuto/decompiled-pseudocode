/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00673C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int16 v8; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rsi
  __int64 v10; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v8 = 5;
  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
      return xxxRealDefWindowProc(a1);
    if ( a2 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (struct tagPROCESSINFO *)v10,
                           a1,
                           a2,
                           a3,
                           a4,
                           1) )
        return xxxRealDefWindowProc(a1);
      if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
        || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage(CurrentProcessWin32Process, (struct tagPROCESSINFO *)v10, a4, 1, 2);
        return xxxRealDefWindowProc(a1);
      }
      if ( *(_QWORD *)v10 == gpepCSRSS )
        v14 = 0x2000LL;
      else
        v14 = *(_QWORD *)(v10 + 880);
      if ( (unsigned __int8)CheckAccess((char *)CurrentProcessWin32Process + 880, &v14) )
      {
        if ( !(unsigned __int8)Enforced(v12) )
          v8 = 1;
        MSGSQMAddMessage(CurrentProcessWin32Process, (struct tagPROCESSINFO *)v10, a4, 1, v8);
        return xxxRealDefWindowProc(a1);
      }
      if ( a2 == 793 )
      {
        v13 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v13 + 1392) == a1 && *(_QWORD *)(v13 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
          return xxxRealDefWindowProc(a1);
      }
      EtwTraceUIPIMsgError(CurrentProcessWin32Process, v10, a2, a3, a4);
      UserSetLastError(5LL);
      MSGSQMAddMessage(CurrentProcessWin32Process, (struct tagPROCESSINFO *)v10, a4, 1, 0);
    }
    if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
      return xxxRealDefWindowProc(a1);
  }
  UserSetLastError(5LL);
  return 0LL;
}
