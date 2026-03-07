void __fastcall CMouseProcessor::PrepareDataForIntercept(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        char a3,
        struct _MouseInterceptorData *a4)
{
  __int64 v8; // rax
  bool v9; // al
  __int16 v10; // r9
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  *((_WORD *)a4 + 12) = *((_WORD *)a2 + 1);
  *((_WORD *)a4 + 13) = *((_WORD *)a2 + 2);
  *((_WORD *)a4 + 14) = *((_WORD *)a2 + 3);
  v8 = *((_QWORD *)a2 + 4);
  *(_QWORD *)a4 = v8;
  if ( !v8 )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5784);
  }
  *((_DWORD *)a4 + 2) = *((_DWORD *)a2 + 12);
  *((_QWORD *)a4 + 2) = *((_QWORD *)a2 + 7);
  if ( (*((_BYTE *)a2 + 2) & 1) != 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v9 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
    v10 = *((_WORD *)a2 + 1);
    v11 = v9 | 2;
    if ( (v10 & 0x80u) == 0 )
      v11 = v9;
    CMouseProcessor::GetMouseCoordinateAbsolute(
      (__int64)this,
      *((_DWORD *)a2 + 3),
      *((_DWORD *)a2 + 4),
      v10,
      (int *)&v14,
      &v15,
      *((_QWORD *)a2 + 6),
      *((unsigned int *)a2 + 5),
      v11 | 4);
    *((_QWORD *)a4 + 4) = v14;
  }
  else
  {
    v12 = *((unsigned int *)a2 + 3);
    *((_DWORD *)a4 + 8) = v12;
    v13 = *((unsigned int *)a2 + 4);
    *((_DWORD *)a4 + 9) = v13;
    if ( a3 )
      CMouseProcessor::ApplyAccelerationToDelta(
        this,
        v12,
        v13,
        gptCursorAsync,
        *((_BYTE *)a2 + 2) >> 7,
        (struct _SUBPIXELS *)&v14,
        (int *)a4 + 8,
        (int *)a4 + 9);
  }
  *((_DWORD *)a4 + 10) = CMouseProcessor::ComputeMouseSystemStateForInterceptor((__int64)this, (__int64)a2);
}
