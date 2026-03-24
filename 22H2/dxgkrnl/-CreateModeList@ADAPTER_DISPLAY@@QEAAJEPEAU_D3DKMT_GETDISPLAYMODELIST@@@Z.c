/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00E108C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A3F8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00E12BC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r14
  void *v10; // rcx
  struct _D3DKMT_GETDISPLAYMODELIST *v11; // r9
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  __int64 VidPnSourceId; // rdx
  __int64 v14; // r8
  ULONG TimeIncrement; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-40h]
  __int64 v24; // [rsp+28h] [rbp-38h]
  _BYTE v25[16]; // [rsp+30h] [rbp-30h] BYREF
  void *v26[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+90h] [rbp+30h]
  __int64 v29; // [rsp+A0h] [rbp+40h]

  v28 = MEMORY[0xFFFFF78000000320];
  v9 = v28 * KeQueryTimeIncrement();
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 6256LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v18 + 24) = 6257LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a3->pModeList )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v19 + 24) = 6258LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a3->VidPnSourceId, &EventStartRebuildModeCache, v8, this, a3->VidPnSourceId, 0);
  v10 = (void *)*((_QWORD *)this + 2);
  v27 = 0LL;
  v11 = (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v26 & -(__int64)(*((_QWORD *)this + 37) != 0LL));
  *(_OWORD *)v26 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(v10, a2, a3, v11);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (ADAPTER_DISPLAY *)((char *)this + 256), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  v14 = *((_QWORD *)this + 37);
  if ( v14 )
  {
    VidPnSourceId = a3->VidPnSourceId;
    v20 = *(void **)(v14 + 24 * VidPnSourceId + 8);
    if ( v20 )
    {
      operator delete[](v20);
      VidPnSourceId = a3->VidPnSourceId;
      v14 = *((_QWORD *)this + 37);
    }
    v21 = 3LL * (unsigned int)VidPnSourceId;
    *(_OWORD *)(v14 + 8 * v21) = *(_OWORD *)v26;
    *(_QWORD *)(v14 + 8 * v21 + 16) = v27;
  }
  else if ( v26[1] )
  {
    operator delete[](v26[1]);
  }
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, VidPnSourceId);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete[](a3->pModeList);
    a3->pModeList = 0LL;
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v22[3] = this;
    v22[4] = a3->VidPnSourceId;
    v22[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v22);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v24) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v23) = a3->VidPnSourceId;
    McTemplateK0pqq_EtwWriteTransfer((unsigned int)v23, &EventEndRebuildModeCache, v14, this, v23, v24);
  }
  v29 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    (v29 * (unsigned __int64)TimeIncrement - v9) / 0x2710,
    *(_QWORD *)(*((_QWORD *)this + 2) + 316LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
