__int16 __fastcall ExInitializeFastResource2(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  char v2; // bp
  unsigned __int8 CurrentIrql; // al
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  int RecordedStackTraceIndex; // r14d
  __int16 result; // ax

  v2 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (BugCheckParameter3 & 0xFFFFFFF0) != 0 )
    KeBugCheckEx(0x1C6u, 0x10uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  memset((void *)BugCheckParameter2, 0, 0x68uLL);
  v5 = 0LL;
  v6 = *(_BYTE *)(BugCheckParameter2 + 101) & 0xFA;
  *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 101) = v6 | 2;
  *(_DWORD *)(BugCheckParameter2 + 96) = 0;
  *(_BYTE *)(BugCheckParameter2 + 100) = 0;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v7 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v8 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
      v9 = v8;
      if ( v8 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v7, v8);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v7, v9);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      LOWORD(v5) = RecordedStackTraceIndex;
    }
    v5 = (unsigned __int16)v5;
  }
  *(_QWORD *)(BugCheckParameter2 + 40) = v5;
  result = *(_WORD *)(BugCheckParameter2 + 26) | 1;
  *(_WORD *)(BugCheckParameter2 + 26) = result;
  if ( (v2 & 1) != 0 )
  {
    result |= 0x40u;
    *(_WORD *)(BugCheckParameter2 + 26) = result;
  }
  if ( (v2 & 8) != 0 )
  {
    result |= 8u;
    *(_WORD *)(BugCheckParameter2 + 26) = result;
  }
  return result;
}
