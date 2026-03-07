__int64 __fastcall CTouchProcessor::PointerInfoCopyOutHelper(
        PERESOURCE *this,
        struct CPointerInfoNode *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  int v7; // ebp
  unsigned int v9; // esi
  int v10; // ebx

  v7 = (int)a3;
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13926);
  v9 = ApiSetPointerInfoCopyOutHelperInternal((int)a2 + 160, *(_QWORD *)((char *)a2 + 148), v7, a4, a5, (__int64)a6);
  if ( v9 )
  {
    v10 = a4 - 2;
    if ( v10 )
    {
      if ( v10 == 1 )
        InputTraceLogging::Pointer::GetPointerPenInfo(a6);
      else
        InputTraceLogging::Pointer::GetPointerInfo(a6);
    }
    else
    {
      InputTraceLogging::Pointer::GetPointerTouchInfo(a6);
    }
  }
  return v9;
}
