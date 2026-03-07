void DxgDbgInit(void)
{
  __int64 Pool2; // rax
  void *v1; // rdi
  NTSTATUS v2; // eax
  __int64 v3; // rbx
  const wchar_t *v4; // r9

  if ( byte_1C013BB42 )
  {
    WdLogSingleEntry1(1LL, 394LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_DxgBugcheckCallbackRegisterSuccess == FALSE",
      394LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( byte_1C013BB41 )
  {
    WdLogSingleEntry1(1LL, 395LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_DxgTriageCallbackRegisterSuccess == FALSE",
      395LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CallbackRecord.State = 0;
  xmmword_1C013BB58 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_1C013BB42 = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_1C013BB42 )
  {
    WdLogSingleEntry1(1LL, 412LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_DxgBugcheckCallbackRegisterSuccess",
      412LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Pool2 = ExAllocatePool2(64LL, 768LL, 1265072196LL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL, 461LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate buffer for Triage Dump Callback",
      461LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return;
  }
  P = (PKBUGCHECK_REASON_CALLBACK_RECORD)Pool2;
  KtriageDumpDataArray = (PKTRIAGE_DUMP_DATA_ARRAY)(Pool2 + 48);
  *(_BYTE *)(Pool2 + 44) = 0;
  v2 = KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)(Pool2 + 48), 0x2D0u);
  if ( v2 < 0 )
  {
    v3 = v2;
    WdLogSingleEntry1(2LL, v2);
    v4 = L"Failed to initialize Triage Dump Data Array with status = 0x%I64x";
LABEL_13:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
    ExFreePoolWithTag(v1, 0x4B677844u);
    KtriageDumpDataArray = 0LL;
    P = 0LL;
    return;
  }
  byte_1C013BB41 = KeRegisterBugCheckReasonCallback(
                     P,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgTriageDumpCallback,
                     KbCallbackTriageDumpData,
                     (PUCHAR)"DxgKrnlTriageDump");
  if ( !byte_1C013BB41 )
  {
    v3 = 452LL;
    WdLogSingleEntry1(2LL, 452LL);
    v4 = L"Failed to register Triage Dump Callback";
    goto LABEL_13;
  }
}
