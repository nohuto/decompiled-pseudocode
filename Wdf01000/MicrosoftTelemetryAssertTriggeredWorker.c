void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 ReturnAddress,
        unsigned int BucketArg1,
        const char *BucketArg2,
        unsigned int a4,
        unsigned int hasArgs)
{
  KIRQL v6; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v8; // r14
  _LIST_ENTRY *v9; // rdi
  _LIST_ENTRY *Pool2; // rax
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int ImageTuple; // eax
  _LIST_ENTRY *v18; // r10
  __int64 v19; // r12
  int v20; // r15d
  unsigned int v21; // ebx
  unsigned int Flink_high; // eax
  int Blink; // edi
  const char *v24; // r14
  const char *v25; // rdx
  KIRQL CurrentIrql; // al
  unsigned int v27; // edi
  const _GUID *v28; // r8
  ULONG cData; // r10d
  KIRQL v30; // al
  _LIST_ENTRY *v31; // rcx
  unsigned int SizeOfImage; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Timestamp; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int _tlgTemp3; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int _tlgTemp5; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int _tlgTemp6; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int _tlgTemp7; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned int _tlgTemp9; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int _tlgTemp10; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-8Ch]
  unsigned int _tlgTemp0; // [rsp+78h] [rbp-88h] BYREF
  unsigned int _tlgTemp1; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int _tlgTemp2; // [rsp+80h] [rbp-80h] BYREF
  _EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *p_tlgTemp10; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  unsigned int *p_tlgTemp9; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  unsigned int *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  unsigned int *p_tlgTemp7; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *p_tlgTemp6; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  unsigned int *p_tlgTemp5; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  unsigned int *p_tlgTemp3; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  _EVENT_DATA_DESCRIPTOR _tlgData[14]; // [rsp+130h] [rbp+30h] BYREF

  v38 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v6 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
  v8 = v6;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == g_MicrosoftTelemetryAssertsTriggeredList.Flink )
  {
LABEL_5:
    Pool2 = (_LIST_ENTRY *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v9 = Pool2;
    if ( !Pool2 )
    {
$Done_72:
      KeReleaseSpinLock(&g_AssertSpinLock, v8);
      return;
    }
    v11 = MEMORY[0xFFFFF78000000320];
    Pool2->Flink = (_LIST_ENTRY *)ReturnAddress;
    TimeIncrement = KeQueryTimeIncrement();
    LODWORD(v9[1].Flink) = 0;
    HIDWORD(v9[1].Flink) = 0;
    LODWORD(v9[1].Blink) = 0;
    v9->Blink = (_LIST_ENTRY *)(((__int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
                              + ((unsigned __int64)((unsigned __int128)(v11
                                                                      * TimeIncrement
                                                                      * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
                              - 60001);
    v13 = v9 + 2;
    v14 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    if ( g_MicrosoftTelemetryAssertsTriggeredList.Flink->Blink != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    v13->Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    v9[2].Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    v14->Blink = v13;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = v9 + 2;
  }
  else
  {
    while ( 1 )
    {
      v9 = Flink - 2;
      if ( Flink[-2].Flink == (_LIST_ENTRY *)ReturnAddress )
        break;
      Flink = Flink->Flink;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == Flink )
        goto LABEL_5;
    }
  }
  ++LODWORD(v9[1].Flink);
  ++HIDWORD(v9[1].Flink);
  v15 = MEMORY[0xFFFFF78000000320];
  Timestamp = 0;
  SizeOfImage = 0;
  v16 = v15 * KeQueryTimeIncrement();
  if ( v16 / 10000 - (unsigned __int64)v9->Blink <= 0xEA60 )
    goto $Done_72;
  ImageTuple = GetImageTuple((_IMAGE_DOS_HEADER *)v16, &Timestamp, &SizeOfImage);
  v19 = SizeOfImage;
  v20 = ImageTuple;
  if ( ImageTuple
    && ReturnAddress >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)SizeOfImage > 0x1C0000000LL
    && ReturnAddress <= 0x1C0000000LL + (unsigned __int64)SizeOfImage )
  {
    v21 = ReturnAddress - 0xC0000000;
  }
  else
  {
    v21 = 0;
  }
  SizeOfImage = (unsigned int)v9[1].Flink;
  Flink_high = HIDWORD(v9[1].Flink);
  v9->Blink = v18;
  Blink = (int)v9[1].Blink;
  v41 = Flink_high;
  KeReleaseSpinLock(&g_AssertSpinLock, v8);
  v24 = "<unknown>";
  if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
  {
    _tlgTemp0 = 10;
    _tlgData[2].Ptr = (unsigned __int64)&_tlgTemp0;
    v25 = "<unknown>";
    *(_QWORD *)&_tlgData[2].Size = 4LL;
    _tlgData[3].Ptr = (unsigned __int64)&_tlgTemp1;
    _tlgTemp1 = v21;
    *(_QWORD *)&_tlgData[3].Size = 4LL;
    _tlgData[4].Ptr = (unsigned __int64)&_tlgTemp2;
    _tlgTemp2 = v20 != 0 ? Timestamp : 0;
    *(_QWORD *)&_tlgData[4].Size = 4LL;
    _tlgData[5].Ptr = (unsigned __int64)&_tlgTemp3;
    _tlgTemp3 = v20 != 0 ? v19 : 0;
    *(_QWORD *)&_tlgData[5].Size = 4LL;
    if ( g_ModuleName )
      v25 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(&_tlgData[6], v25);
    _tlgData[7].Ptr = (unsigned __int64)&_tlgTemp5;
    _tlgTemp6 = v41;
    _tlgData[8].Ptr = (unsigned __int64)&_tlgTemp6;
    _tlgTemp5 = SizeOfImage;
    *(_QWORD *)&_tlgData[7].Size = 4LL;
    *(_QWORD *)&_tlgData[8].Size = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    *(_QWORD *)&_tlgData[9].Size = 4LL;
    _tlgTemp7 = CurrentIrql;
    _tlgData[9].Ptr = (unsigned __int64)&_tlgTemp7;
    tlgCreate1Sz_char(&_tlgData[10], "wdf01000.sys");
    _tlgData[11].Ptr = (unsigned __int64)&_tlgTemp9;
    _tlgTemp10 = hasArgs;
    _tlgTemp9 = v38;
    _tlgData[12].Ptr = (unsigned __int64)&_tlgTemp10;
    *(_QWORD *)&_tlgData[11].Size = 4LL;
    *(_QWORD *)&_tlgData[12].Size = 4LL;
    tlgCreate1Sz_char(&_tlgData[13], "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer(
      &Tlgmtakm_hTelemetryAssertProv,
      (char *)&tlgEvent_3._tlgChannel,
      0LL,
      0LL,
      0xEu,
      _tlgData);
  }
  if ( Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.LevelPlus1 && !Blink && !KeGetCurrentIrql() )
  {
    v27 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v21, g_ModuleName, Timestamp, v19, 0LL, 0LL, 0);
    if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
    {
      v47 = 4LL;
      p_tlgTemp10 = &_tlgTemp10;
      _tlgTemp10 = 10;
      p_tlgTemp9 = &_tlgTemp9;
      _tlgTemp9 = v21;
      v49 = 4LL;
      v50 = &v38;
      v38 = v20 != 0 ? Timestamp : 0;
      v51 = 4LL;
      v53 = 4LL;
      _tlgTemp7 = v20 != 0 ? v19 : 0;
      p_tlgTemp7 = &_tlgTemp7;
      if ( g_ModuleName )
        v24 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(&pDesc, v24);
      _tlgTemp6 = SizeOfImage;
      v56 = 4LL;
      p_tlgTemp6 = &_tlgTemp6;
      _tlgTemp5 = v41;
      p_tlgTemp5 = &_tlgTemp5;
      p_tlgTemp3 = &_tlgTemp3;
      v58 = 4LL;
      _tlgTemp3 = v27;
      v60 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        &Tlgmtakm_hTelemetryAssertProv,
        (char *)&tlgEvent_5._tlgChannel,
        v28,
        0LL,
        cData,
        &pData);
    }
    if ( !v27 )
    {
      v30 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v31 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
      v8 = v30;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != g_MicrosoftTelemetryAssertsTriggeredList.Flink )
      {
        while ( v31[-2].Flink != (_LIST_ENTRY *)ReturnAddress )
        {
          v31 = v31->Flink;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v31 )
            goto $Done_72;
        }
        ++LODWORD(v31[-1].Blink);
      }
      goto $Done_72;
    }
  }
}
