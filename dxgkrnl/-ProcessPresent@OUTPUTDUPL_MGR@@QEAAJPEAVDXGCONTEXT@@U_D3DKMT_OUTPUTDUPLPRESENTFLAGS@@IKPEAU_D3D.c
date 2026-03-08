/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0329AC4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0315DC8 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C03294A0 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0327ED4 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C03284BC (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0329EEC (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C032E8DC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C033B770 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C033C434 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a3,
        unsigned int a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        unsigned int a8,
        struct DXGCONTEXT **a9,
        struct COREDEVICEACCESS *a10)
{
  unsigned int v13; // esi
  unsigned int ActiveContextCount; // eax
  int v15; // edi
  OUTPUTDUPL_MGR *v17; // rcx
  unsigned int v18; // eax
  OUTPUTDUPL_CONTEXT **v19; // r13
  int v20; // edx
  OUTPUTDUPL_CONTEXT *v21; // r10
  DXGDIAGNOSTICS **v22; // rcx
  int v23; // eax
  const wchar_t *v24; // r9
  int v25; // [rsp+50h] [rbp-128h]
  unsigned int v26; // [rsp+54h] [rbp-124h]
  __int64 v29; // [rsp+70h] [rbp-108h]
  _BYTE v30[16]; // [rsp+90h] [rbp-E8h] BYREF
  struct _VIDMM_DMA_BUFFER *v31[16]; // [rsp+A0h] [rbp-D8h] BYREF

  v13 = 0;
  memset(v31, 0, sizeof(v31));
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, a8);
  v15 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a10, ActiveContextCount, v31);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire DMA buffer for context = 0x%I64x",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
  v29 = *((_QWORD *)this + 2) + 72LL * a8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)v29, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v17 = this;
  v18 = 0;
  v19 = *(OUTPUTDUPL_CONTEXT ***)(v29 + 48);
  v20 = 1;
  v25 = 1;
  v26 = 0;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_18;
  while ( 1 )
  {
    v21 = *v19;
    if ( !*v19 || !*((_DWORD *)v21 + 79) )
      goto LABEL_17;
    if ( v20 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v17) )
      {
        v15 = OUTPUTDUPL_MGR::LogPresentParams(v22, a3, a6, a8, *(const void ***)(v29 + 56));
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL, a2);
          v24 = L"Failed to log diag packet 0x%I64x";
          goto LABEL_27;
        }
        v21 = *v19;
      }
      v25 = 0;
    }
    v23 = OUTPUTDUPL_CONTEXT::ProcessPresent(
            v21,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(struct AUTOEXPANDALLOCATION **)(v29 + 56),
            a9);
    v15 = v23;
    if ( v23 == -1071775486 )
    {
      v15 = 259;
      *((_DWORD *)*v19 + 70) = 1;
LABEL_15:
      v13 = 259;
      goto LABEL_16;
    }
    if ( v23 < 0 )
      break;
    if ( v23 == 259 )
      goto LABEL_15;
LABEL_16:
    v20 = v25;
    v18 = v26;
    v17 = this;
LABEL_17:
    ++v18;
    ++v19;
    v26 = v18;
    if ( v18 >= *((_DWORD *)v17 + 2) )
      goto LABEL_18;
  }
  v13 = v23;
  WdLogSingleEntry1(2LL, a2);
  v24 = L"Process present failed for context 0x%I64x";
LABEL_27:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, (__int64)a2, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, a8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"As we failed to process the present we will mark all the contexts on VidPnSource 0x%I64x for destroy",
      a8,
      0LL,
      0LL,
      0LL,
      0LL);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, a8, 0LL, 0, 0, 7);
    if ( v13 != v15 )
    {
      WdLogSingleEntry1(1LL, 1148LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RetStatus == Status", 1148LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v13 != -1073741130 )
      v13 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v13;
}
