void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4)
{
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdx
  BOOL v13; // esi
  BOOL v14; // edi
  BOOL v15; // ebx
  bool v16; // al
  struct tagPOINT v17; // [rsp+68h] [rbp-11h] BYREF
  _WORD v18[4]; // [rsp+70h] [rbp-9h] BYREF
  int v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+7Ch] [rbp+3h]
  int v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+84h] [rbp+Bh]

  v17 = a3;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16) && CBaseProcessor::IsUMSuppressed(this) )
  {
    v8 = 0;
    v9 = 4LL;
    v10 = (_QWORD *)((char *)a2 + 56);
LABEL_9:
    InputTraceLogging::Mouse::DropMove(*v10, v9, v7);
    goto LABEL_10;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v11 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v17, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0, (__int64)a4);
    v10 = (_QWORD *)((char *)a2 + 56);
  }
  else
  {
    v18[1] = *((_WORD *)a2 + 1);
    v18[2] = *((_WORD *)a2 + 2);
    v18[3] = *((_WORD *)a2 + 3);
    v20 = *((_DWORD *)a2 + 3);
    v21 = *((_DWORD *)a2 + 4);
    v22 = *((_DWORD *)a2 + 5);
    v19 = *((_DWORD *)a2 + 2);
    v18[0] = 0;
    v13 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
    v14 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2);
    v15 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000);
    v16 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000);
    v10 = (_QWORD *)((char *)a2 + 56);
    v11 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v17,
            *((_DWORD *)a2 + 5),
            (unsigned int)v18,
            (int)a2 + 24,
            *((_DWORD *)a2 + 12),
            *((_QWORD *)a2 + 7),
            v13,
            v14,
            v15,
            v16,
            (__int64)a4);
  }
  v8 = v11;
  if ( !v11 )
  {
    v9 = 2LL;
    goto LABEL_9;
  }
LABEL_10:
  InputTraceLogging::Mouse::CommitPosition(*v10, v12, v8);
  if ( v8 && (v8 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2368);
  *((_DWORD *)a2 + 19) = v8;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
  {
    *((_OWORD *)this + 221) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 444) = *((_QWORD *)a2 + 8);
  }
}
