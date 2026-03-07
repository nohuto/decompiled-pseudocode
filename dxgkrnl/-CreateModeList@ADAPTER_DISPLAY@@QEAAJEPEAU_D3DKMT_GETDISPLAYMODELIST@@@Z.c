__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r14
  void *v9; // rcx
  struct _D3DKMT_GETDISPLAYMODELIST *v10; // r9
  __int64 ActiveVidPnBasedDisplayModeList; // rbp
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  ULONG TimeIncrement; // eax
  void *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  _BYTE v22[16]; // [rsp+50h] [rbp-48h] BYREF
  void *v23[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v24; // [rsp+70h] [rbp-28h]

  v6 = MEMORY[0xFFFFF78000000320];
  v8 = v6 * KeQueryTimeIncrement();
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 6576LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayModeList != NULL", 6576LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6577LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayModeList->VidPnSourceId < GetNumVidPnSources()",
      6577LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3->pModeList )
  {
    WdLogSingleEntry1(1LL, 6578LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayModeList->pModeList == NULL",
      6578LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v21) = 0;
    LODWORD(v20) = a3->VidPnSourceId;
    McTemplateK0pqq_EtwWriteTransfer((unsigned int)v20, &EventStartRebuildModeCache, v7, this, v20, v21);
  }
  v9 = (void *)*((_QWORD *)this + 2);
  v24 = 0LL;
  v10 = (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v23 & -(__int64)(*((_QWORD *)this + 43) != 0LL));
  *(_OWORD *)v23 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(v9, a2, a3, v10);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v13 = *((_QWORD *)this + 43);
  if ( v13 )
  {
    v17 = *(void **)(v13 + 24LL * a3->VidPnSourceId + 8);
    if ( v17 )
      operator delete(v17);
    v18 = 3LL * a3->VidPnSourceId;
    v19 = *((_QWORD *)this + 43);
    *(_OWORD *)(v19 + 8 * v18) = *(_OWORD *)v23;
    *(_QWORD *)(v19 + 8 * v18 + 16) = v24;
  }
  else if ( v23[1] )
  {
    operator delete(v23[1]);
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete(a3->pModeList);
    a3->pModeList = 0LL;
    WdLogSingleEntry3(4LL, this, a3->VidPnSourceId, ActiveVidPnBasedDisplayModeList);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v21) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v20) = a3->VidPnSourceId;
    McTemplateK0pqq_EtwWriteTransfer((unsigned int)v20, &EventEndRebuildModeCache, v12, this, v20, v21);
  }
  v14 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    (v14 * (unsigned __int64)TimeIncrement - v8) / 0x2710,
    *(_QWORD *)(*((_QWORD *)this + 2) + 404LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
