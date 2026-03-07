char __fastcall EtwTraceWaitCursor(__int64 a1, struct tagCURSOR *a2)
{
  _UNKNOWN **v2; // rax
  unsigned int WaitCursorType; // esi
  struct tagCURSOR *const v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  unsigned int v9; // edi
  _DWORD *v10; // rax
  int v11; // r8d
  PETHREAD *v12; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000040000uLL) != 0 )
  {
    LOBYTE(v2) = byte_1C02C4068 - 1;
    if ( (unsigned __int8)(byte_1C02C4068 - 1) > 2u && (qword_1C02C4050 & 0x8000000000040000uLL) != 0 )
    {
      LOBYTE(v2) = 0;
      if ( (qword_1C02C4058 & 0x8000000000040000uLL) == qword_1C02C4058 )
      {
        WaitCursorType = EtwpGetWaitCursorType(a2);
        LODWORD(v2) = EtwpGetWaitCursorType(v4);
        v8 = (int)v2;
        if ( WaitCursorType == LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
        {
          if ( WaitCursorType )
          {
            if ( WaitCursorType != (_DWORD)v2 )
            {
              v9 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                 - W32kEtwWaitCursorStartMs;
              if ( v9 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
              {
                v10 = (_DWORD *)SGDGetUserSessionState(MEMORY[0xFFFFF78000000320], v5, v6, v7);
                LOBYTE(v2) = McTemplateK0qqqqq_EtwWriteTransfer(
                               *v10,
                               (unsigned int)&WaitCursorEvent,
                               v11,
                               W32kEtwWaitCursorThreadId,
                               W32kEtwWaitCursorProcessId,
                               *v10,
                               WaitCursorType,
                               v9);
              }
            }
          }
        }
        LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = v8;
        if ( v8 )
        {
          LOBYTE(v2) = MEMORY[0xFFFFF78000000320];
          W32kEtwWaitCursorStartMs = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        }
        if ( gpqCursor
          && ((v2 = (_UNKNOWN **)*((_QWORD *)gpqCursor + 14)) == 0LL
            ? (v12 = (PETHREAD *)*((_QWORD *)gpqCursor + 12))
            : (v12 = (PETHREAD *)v2[2]),
              v12) )
        {
          W32kEtwWaitCursorThreadId = (unsigned int)PsGetThreadId(*v12);
          v2 = (_UNKNOWN **)v12[53];
          W32kEtwWaitCursorProcessId = *((_DWORD *)v2 + 14);
        }
        else
        {
          W32kEtwWaitCursorThreadId = 0;
          W32kEtwWaitCursorProcessId = 0;
        }
      }
    }
  }
  return (char)v2;
}
