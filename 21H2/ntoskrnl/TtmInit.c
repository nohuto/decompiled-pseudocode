/*
 * XREFs of TtmInit @ 0x1407D2B48
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 */

__int64 TtmInit()
{
  __int64 v1; // r8
  const wchar_t *v2; // rax
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdx
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-39h] BYREF
  __int128 v10[8]; // [rsp+48h] [rbp-29h] BYREF

  if ( TtmpEnabled == 1 )
  {
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 2;
    v1 = 0x7FFFLL;
    HIDWORD(v10[1]) = 2031619;
    *((_QWORD *)&v10[3] + 1) = TtmpOpenQueueHandle;
    DWORD1(v10[2]) = 512;
    *(_QWORD *)&v10[4] = TtmpCloseQueueHandle;
    *(__int128 *)((char *)v10 + 12) = TtmpQueueMapping;
    *((_QWORD *)&v10[4] + 1) = TtmpDeleteQueue;
    v2 = L"TerminalEventQueue";
    HIDWORD(v10[2]) = 176;
    SourceString = 0LL;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v1;
    }
    while ( v1 );
    v3 = (0x7FFF - v1) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64);
    if ( v1 )
    {
      SourceString.Buffer = L"TerminalEventQueue";
      SourceString.Length = 2 * v3;
      SourceString.MaximumLength = 2 * v3 + 2;
    }
    v4 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, (__int16 *)0x80, (__int64 *)&TtmpQueueObjectType);
    if ( v4 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v4, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  TtmpSession = 0LL;
  if ( TtmpEnabled == 1 )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 6;
    v5 = 0x7FFFLL;
    HIDWORD(v10[1]) = 2031619;
    *((_QWORD *)&v10[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v10[4] = TtmpCloseTerminalHandle;
    *(__int128 *)((char *)v10 + 12) = TtmpTerminalMapping;
    *((_QWORD *)&v10[4] + 1) = TtmpDeleteTerminal;
    v6 = L"Terminal";
    DWORD1(v10[2]) = 512;
    HIDWORD(v10[2]) = 288;
    SourceString = 0LL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = (0x7FFF - v5) & -(__int64)(v5 != 0);
    if ( v5 )
    {
      SourceString.Buffer = L"Terminal";
      SourceString.Length = 2 * v7;
      SourceString.MaximumLength = 2 * v7 + 2;
    }
    v8 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, 0LL, (__int64 *)&TtmpTerminalObjectType);
    if ( v8 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v8, 0LL, 0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
    (ULONGLONG *)&dword_140D2D8C8,
    (unsigned __int16 *)TtmpTraceLoggingCallback,
    0LL);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140D2D890, 0LL, 0LL);
}
