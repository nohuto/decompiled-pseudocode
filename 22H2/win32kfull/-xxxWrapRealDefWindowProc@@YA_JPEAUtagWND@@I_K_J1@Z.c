/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0049CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003F8FC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C003FA68 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C003FAEC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rbp
  __int64 v10; // rdi
  int v12; // r15d
  unsigned __int8 v13; // al
  bool v14; // zf
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
    v9 = CurrentProcessWin32Process;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
      return xxxRealDefWindowProc(a1);
    if ( a2 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (void *const **)v10,
                           a1,
                           a2,
                           a3,
                           a4,
                           1) )
        return xxxRealDefWindowProc(a1);
      v12 = IsMessageAlwaysAllowedAcrossIL(a2);
      if ( v12 )
      {
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a2, a3, a4, 1, 2);
      }
      else
      {
        if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, 0x112u, a3, a4, 1, 2);
          return xxxRealDefWindowProc(a1);
        }
        if ( *(_QWORD *)v10 == gpepCSRSS )
          v17 = 0x2000LL;
        else
          v17 = *(_QWORD *)(v10 + 880);
        v13 = CheckAccess((char *)v9 + 880, &v17);
        v12 = v13;
        if ( v13 )
        {
          v14 = (unsigned __int8)Enforced() == 0;
          v15 = 5;
          if ( v14 )
            v15 = 1;
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a2, a3, a4, 1, v15);
        }
        if ( v12 )
          return xxxRealDefWindowProc(a1);
        if ( a2 == 793 )
        {
          v16 = *((_QWORD *)a1 + 2);
          if ( *(struct tagWND **)(v16 + 1392) == a1 && *(_QWORD *)(v16 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
            return xxxRealDefWindowProc(a1);
        }
        EtwTraceUIPIMsgError(v9, v10, a2, a3, a4);
        UserSetLastError(5LL);
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a2, a3, a4, 1, 0);
      }
      if ( v12 )
        return xxxRealDefWindowProc(a1);
    }
    if ( *(_QWORD *)v9 == gpepCSRSS )
      return xxxRealDefWindowProc(a1);
  }
  UserSetLastError(5LL);
  return 0LL;
}
