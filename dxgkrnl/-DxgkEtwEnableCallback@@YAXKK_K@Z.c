void __fastcall DxgkEtwEnableCallback(int a1, char a2, __int64 a3, int a4)
{
  char v5; // bl
  __int64 v6; // r8
  bool v7; // cl
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int8 v10; // cl

  v5 = 1;
  if ( a1 != 2 || !bTracingEnabled )
  {
    if ( qword_1C013A870 == g_OldAnyKeywords )
      goto LABEL_11;
    v6 = 4096LL;
    v7 = (qword_1C013A870 & 0x1000) != 0 && (qword_1C013A870 & 0x2000) == 0;
    if ( (g_OldAnyKeywords & 0x1000) != 0 )
    {
      if ( (qword_1C013A870 & 0x1000) == 0 )
        DxgkDisableStablePowerState();
    }
    else if ( (qword_1C013A870 & 0x1000) != 0 && v7 )
    {
      DxgkEnableStablePowerState();
    }
    v8 = qword_1C013A870;
    if ( _bittest64((const signed __int64 *)&g_OldAnyKeywords, 0xAu) )
    {
      if ( (qword_1C013A870 & 0x400) != 0 )
        goto LABEL_9;
      v8 = 0LL;
    }
    else
    {
      if ( (qword_1C013A870 & 0x400) == 0 )
        goto LABEL_9;
      LOBYTE(v8) = 1;
    }
    LOBYTE(v6) = a2;
    DpiControlEtwLogging(v8, qword_1C013A870 & 0x3000, v6);
LABEL_9:
    if ( _bittest64((const signed __int64 *)&g_OldAnyKeywords, 0xEu) )
    {
      if ( _bittest64(&qword_1C013A870, 0xEu) )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(0);
      v10 = 0;
    }
    else
    {
      if ( !_bittest64(&qword_1C013A870, 0xEu) )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(1);
      v10 = 1;
    }
    DxgkEnableClockCalibration(v10);
    goto LABEL_11;
  }
  if ( a3 == 0x4000000 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CaptureSchedulerLogs(Global);
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qxq_EtwWriteTransfer(2, a2, a3, a4, qword_1C013A870, a2);
    DxgkReportGlobalState();
  }
LABEL_11:
  if ( (qword_1C013A870 & 0x461C8ED7) == 0 || (qword_1C013A878 & 0xFFFFFFFFB9E37128uLL) != 0 )
    v5 = 0;
  bTracingEnabled = v5;
  g_OldAnyKeywords = qword_1C013A870;
}
