/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18004DFB0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18004DAF0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18004D474 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x18004E168 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18004E1FC (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K0@Z @ 0x18004E320 (-Trace@CFrameInfo@@QEAAXK_K0@Z.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004E374 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004E430 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800AEDD4 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v4; // r15
  char *v5; // rsi
  __int64 i; // rbp
  char *v7; // r14
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned int FirstOutstandingFrameIndex; // esi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  CFrameInfo *v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  bool v22; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-30h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_UPDATE_TIMES_Start,
      a3,
      1LL,
      v23);
  if ( *((_BYTE *)this + 4548)
    && *((_BYTE *)this + 4549)
    && (v19 = CPartitionVerticalBlankScheduler::Reset(this), v10 = v19, v19 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x460u, 0LL);
    v7 = (char *)this + 4208;
    v4 = (unsigned int *)((char *)this + 4192);
  }
  else
  {
    v4 = (unsigned int *)((char *)this + 4192);
    v5 = (char *)this + 256 * (unsigned __int64)*((unsigned int *)this + 1048);
    memset_0(v5 + 96, 0, 0xB0uLL);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 74); i = (unsigned int)(i + 1) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v5 + 34) + 8 * i) + 40LL))(*(_QWORD *)(*((_QWORD *)v5 + 34) + 8 * i));
    *((_DWORD *)v5 + 74) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 272, 8LL);
    CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    v7 = (char *)this + 4208;
    *(_QWORD *)(*((_QWORD *)this + 526) + 72LL) = *((_QWORD *)this + 1166);
    v8 = CPartitionVerticalBlankScheduler::ComputeVSyncInfo(this);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x479u, 0LL);
    }
    else
    {
      v10 = 0;
      FirstOutstandingFrameIndex = CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(this);
      if ( FirstOutstandingFrameIndex == -1 )
      {
LABEL_10:
        *(_DWORD *)(*(_QWORD *)v7 + 32LL) = *(_DWORD *)(*((_QWORD *)this + 527) + 32LL) + 1;
      }
      else
      {
        while ( 1 )
        {
          v12 = CPartitionVerticalBlankScheduler::RetireFrame(
                  this,
                  (CPartitionVerticalBlankScheduler *)((char *)this
                                                     + 256 * (unsigned __int64)FirstOutstandingFrameIndex
                                                     + 96),
                  FirstOutstandingFrameIndex,
                  &v22,
                  0);
          v10 = v12;
          if ( v12 < 0 )
            break;
          FirstOutstandingFrameIndex = ((_BYTE)FirstOutstandingFrameIndex + 1) & 0xF;
          if ( !v22 || FirstOutstandingFrameIndex == *v4 )
            goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x5F5u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v10, 0x47Bu, 0LL);
      }
    }
  }
  v14 = *((_QWORD *)this + 527);
  v15 = *(CFrameInfo **)v7;
  if ( *(_QWORD *)(v14 + 64) )
    v16 = *((_QWORD *)v15 + 8) - *(_QWORD *)(v14 + 64);
  else
    v16 = *((_QWORD *)v15 + 30);
  CFrameInfo::Trace(v15, *v4, v16, *((_QWORD *)this + 528));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop,
      v17,
      1LL,
      v23);
  return v10;
}
