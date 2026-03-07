__int64 __fastcall DxgCreateLiveDumpWithWdLogs2(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // r14
  char *v9; // rax
  char *v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdi

  v6 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5, (_BYTE)a6);
  if ( v6 )
  {
    v8 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, BYTE4(a6) & 1) + 4095) & 0xFFFFF000;
    v9 = (char *)operator new[]((unsigned int)v8, 0x4B677844u, 256LL);
    v10 = v9;
    if ( v9 )
    {
      v11 = TdrCollectBugcheckSecondaryDumpData(v9, v8, 1, BYTE4(a6) & 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v6, v10, v11) )
      {
        WdLogSingleEntry1(2LL, 10975LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          10975LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      operator delete(v10);
    }
    else
    {
      WdLogSingleEntry1(6LL, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating live dump data (size 0x%I64x)",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = WdDbgReportComplete(v6);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WdDbgReportComplete returned failed status while building live dump. Status = 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 10962LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WdDbgReportCreate failed", 10962LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
