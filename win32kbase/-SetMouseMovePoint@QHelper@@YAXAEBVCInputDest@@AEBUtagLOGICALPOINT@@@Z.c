void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 Queue; // rbx

  Queue = CInputDest::GetQueue(this, 2LL);
  if ( Queue )
  {
    if ( (((unsigned __int16)(*((_DWORD *)a2 + 2) >> 8) ^ (unsigned __int16)((unsigned int)CInputDest::GetDpiAwarenessContext(this) >> 8)) & 0x1FF) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 493LL);
    *(_QWORD *)(Queue + 192) = *(_QWORD *)a2;
    *(_DWORD *)(Queue + 200) = *((_DWORD *)a2 + 2);
  }
}
