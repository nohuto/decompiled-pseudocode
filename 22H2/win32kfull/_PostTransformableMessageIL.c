/*
 * XREFs of _PostTransformableMessageIL @ 0x1C003F6B0
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C003ECB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0037F54 (IAMThreadAccessGranted.c)
 *     _PostTransformableMessage @ 0x1C003F8B8 (_PostTransformableMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003F8FC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C003FA68 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C003FAEC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ValidateDDEConvPair @ 0x1C021C530 (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  int v9; // r9d
  __int64 v10; // rsi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // r14
  int v13; // r15d
  unsigned __int8 v14; // al
  bool v15; // zf
  __int16 v16; // ax
  int v18; // eax
  int v19; // r8d
  __int64 v20; // r8
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  if ( a2 - 992 <= 8 )
  {
    v18 = ValidateDDEConvPair(a3, a1, 1LL);
    v9 = a5;
    if ( v18 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( a2 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
    v9 = v19;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( v9 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( a2 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v10,
                         a1,
                         a2,
                         a3,
                         a4,
                         0) )
      return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
    v13 = IsMessageAlwaysAllowedAcrossIL(a2);
    if ( v13 )
    {
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
    }
    else
    {
      if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
        return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
      }
      if ( *(_QWORD *)v10 == gpepCSRSS )
        v21 = 0x2000LL;
      else
        v21 = *(_QWORD *)(v10 + 880);
      v14 = CheckAccess((char *)v12 + 880, &v21);
      v13 = v14;
      if ( v14 )
      {
        v15 = (unsigned __int8)Enforced() == 0;
        v16 = 5;
        if ( v15 )
          v16 = 1;
        MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, v16);
      }
      if ( v13 )
        return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
      if ( a2 == 793 )
      {
        v20 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v20 + 1392) == a1 && *(_QWORD *)(v20 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
          return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
      }
      EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
      UserSetLastError(5LL);
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 0);
    }
    if ( v13 )
      return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  }
  return 0LL;
}
