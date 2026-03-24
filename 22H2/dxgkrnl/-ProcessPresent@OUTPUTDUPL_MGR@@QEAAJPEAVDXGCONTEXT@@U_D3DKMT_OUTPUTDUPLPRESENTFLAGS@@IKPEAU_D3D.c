/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C029C5D4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026E918 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C029C240 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C015D0D4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0282224 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C02831BC (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C029AD70 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C029B410 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C029C904 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C02A23BC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // r15
  unsigned int v24; // r13d
  int v25; // eax
  DXGFASTMUTEX ***v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // [rsp+50h] [rbp-118h]
  _BYTE v36[16]; // [rsp+80h] [rbp-E8h] BYREF
  struct _VIDMM_DMA_BUFFER *v37[16]; // [rsp+90h] [rbp-D8h] BYREF

  v13 = 0;
  memset(v37, 0, sizeof(v37));
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, a8);
  v17 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a10, ActiveContextCount, v37);
  if ( v17 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = a2;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v17;
  }
  v20 = *((_QWORD *)this + 2) + 32LL * a8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, *(struct DXGFASTMUTEX *const *)v20, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  v23 = *(__int64 **)(v20 + 8);
  v24 = 0;
  v25 = 1;
  v34 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_20;
  while ( 1 )
  {
    v22 = *v23;
    if ( !*v23 || !*(_DWORD *)(v22 + 316) )
      goto LABEL_16;
    if ( v25 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        v17 = OUTPUTDUPL_MGR::LogPresentParams(v26, a3, a6, a8, *(struct AUTOEXPANDALLOCATION **)(v20 + 16));
        if ( v17 < 0 )
          goto LABEL_19;
      }
      v34 = 0;
      v22 = *v23;
    }
    v28 = OUTPUTDUPL_CONTEXT::ProcessPresent(
            (OUTPUTDUPL_CONTEXT *)v22,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(struct AUTOEXPANDALLOCATION **)(v20 + 16),
            a9);
    v17 = v28;
    if ( v28 == -1071775486 )
    {
      v22 = 259LL;
      v17 = 259;
      *(_DWORD *)(*v23 + 280) = 1;
LABEL_14:
      v13 = 259;
      goto LABEL_15;
    }
    if ( v28 < 0 )
      break;
    v22 = 259LL;
    if ( v28 == 259 )
      goto LABEL_14;
LABEL_15:
    v25 = v34;
LABEL_16:
    ++v24;
    ++v23;
    if ( v24 >= *((_DWORD *)this + 2) )
      goto LABEL_20;
  }
  v13 = v28;
LABEL_19:
  v29 = WdLogNewEntry5_WdError(v27, v21);
  *(_QWORD *)(v29 + 24) = a2;
  WdLogEvent5_WdError(v29);
LABEL_20:
  if ( v36[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36, v21);
  if ( v17 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v30 + 24) = a8;
    WdLogEvent5_WdError(v30);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, a8, 0LL, 0, 0, 7);
    if ( v13 != v17 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v33 + 24) = 1194LL;
      WdLogEvent5_WdAssertion(v33);
    }
    if ( v13 != -1073741130 )
      v13 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v13;
}
