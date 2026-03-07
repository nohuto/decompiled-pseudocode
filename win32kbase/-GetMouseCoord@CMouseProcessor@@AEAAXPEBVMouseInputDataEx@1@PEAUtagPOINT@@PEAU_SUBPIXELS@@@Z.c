void __fastcall CMouseProcessor::GetMouseCoord(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4)
{
  unsigned int v6; // ebp
  BOOL v9; // r10d
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx

  *(_QWORD *)a4 = 0LL;
  v6 = *((unsigned __int16 *)a2 + 1);
  v9 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
  v10 = v9 | 2;
  if ( (v6 & 0x80u) == 0 )
    v10 = v9;
  if ( (v10 & 1) == 0 && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2696);
  v11 = *((unsigned int *)a2 + 5);
  v12 = *((_QWORD *)a2 + 6);
  v13 = *((unsigned int *)a2 + 4);
  v14 = *((unsigned int *)a2 + 3);
  if ( (v6 & 1) != 0 )
    CMouseProcessor::GetMouseCoordinateAbsolute(this, v14, v13, v6, a3, a4, v12, v11, v10);
  else
    CMouseProcessor::GetMouseCoordinateRelative(this, v14, v13, a3, a4, v12, v11, v10);
}
