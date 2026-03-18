/*
 * XREFs of ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F6DB0
 * Callers:
 *     ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C01F79C0 (-sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x1C01F71BC (-Receive@CIVChannel@@AEAAJXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x1C01F79EC (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 */

__int64 __fastcall CIVChannel::PacketCallback(CIVChannel *this, struct _IVSRContext *a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  bool v7; // bl
  int v8; // edx
  unsigned __int64 v9; // rdi
  unsigned int v10; // r15d
  char v11; // bl
  PVOID v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 Pool2; // rdi
  int v16; // r8d
  int v17; // r8d
  int v18; // edx
  int v20; // edx
  unsigned int v21; // [rsp+60h] [rbp-E8h]
  void *Src; // [rsp+68h] [rbp-E0h]
  size_t Size; // [rsp+70h] [rbp-D8h]
  PVOID BackTrace[20]; // [rsp+80h] [rbp-C8h] BYREF
  char v25; // [rsp+160h] [rbp+18h]
  unsigned int v26; // [rsp+168h] [rbp+20h]

  if ( !isChildPartition() )
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 36;
      LOBYTE(v8) = v7;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        36,
        (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
        *((_DWORD *)this + 2));
    }
    KeBugCheck(0x164u);
  }
  v9 = *((_QWORD *)a2 + 14);
  v10 = *((_DWORD *)a2 + 40);
  v21 = *((_DWORD *)a2 + 44);
  Src = (void *)*((_QWORD *)a2 + 13);
  v26 = v10;
  Size = v9;
  v11 = 1;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ddq(WPP_GLOBAL_Control->AttachedDevice, v4, v5, v6);
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMVirtPnpQuickRelease__private_reporting,
    30688442LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
    1,
    3);
  if ( !v10 )
  {
    v12 = gpLeakTrackingAllocator;
    v13 = v9;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6E705649) == 0x6E705649 )
    {
      v14 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1852855881 )
        {
          if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_24;
        }
        v25 = 0;
        if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
        {
          v25 = 1;
          v13 = v9 + 16;
        }
        Pool2 = ExAllocatePool2(260LL, v13);
        if ( !Pool2 )
          goto LABEL_46;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v12,
                 (const void *)Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
LABEL_25:
            if ( Pool2 )
            {
LABEL_26:
              memmove((void *)Pool2, Src, Size);
              v10 = v26;
              Src = (void *)Pool2;
              goto LABEL_27;
            }
LABEL_46:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
            {
              v11 = 0;
            }
            if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = 38;
              LOBYTE(v20) = v11;
              LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v20,
                v16,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                12,
                38,
                (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
            }
            return CIVChannel::Receive(this);
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v12,
                    Pool2,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_26;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_46;
      }
    }
LABEL_24:
    Pool2 = ExAllocatePool2(260LL, v9);
    goto LABEL_25;
  }
LABEL_27:
  if ( (*((unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _QWORD))this + 3))(
         *(_QWORD *)this,
         v21,
         v10,
         Src,
         *((_QWORD *)a2 + 19)) )
  {
    return CIVChannel::Receive(this);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 39;
    LOBYTE(v18) = v11;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v18,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      12,
      39,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
  }
  return 0LL;
}
