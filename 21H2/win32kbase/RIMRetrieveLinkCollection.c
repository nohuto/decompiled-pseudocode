/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C0195468
 * Callers:
 *     RIMAssignTouchType @ 0x1C018FAFC (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     RIMCacheAxisChildIndex @ 0x1C018FDAC (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x1C0193C60 (RIMGetPropertyCount.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3)
{
  __int64 v3; // r12
  char v4; // r14
  unsigned int v7; // r13d
  PVOID v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 Pool2; // rbx
  int (*v12)(struct _HIDP_LINK_COLLECTION_NODE *, unsigned int *, struct _HIDP_PREPARSED_DATA *); // rax
  unsigned __int16 v13; // r12
  int v14; // edx
  int v15; // r8d
  unsigned __int16 v16; // di
  int v17; // r14d
  __int64 v18; // r12
  USHORT ReportCount; // r12
  bool v20; // zf
  int v21; // r9d
  unsigned __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS v28; // [rsp+100h] [rbp+0h] BYREF

  v3 = *(_QWORD *)(a1 + 760);
  v4 = 0;
  v24 = a3;
  v25 = 0;
  v7 = 0;
  v26 = v3;
  *(_WORD *)(v3 + 8) = 0;
  if ( v24 <= 1 )
    return v7;
  v8 = gpLeakTrackingAllocator;
  v9 = 24LL * v24;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65637352) != 0x65637352
    || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, v9);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1701016402 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
  {
    v4 = 1;
    v9 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v9);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v4 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v8,
             (const void *)Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
LABEL_7:
        if ( !Pool2 )
          return v7;
LABEL_8:
        v12 = gpfnHidP_GetLinkCollectionNodes;
        *(_QWORD *)(v3 + 16) = Pool2;
        if ( !v12
          || ((unsigned int (__fastcall *)(__int64, unsigned int *, struct _HIDP_PREPARSED_DATA *))v12)(Pool2, &v24, a2) != 1114112 )
        {
          return v7;
        }
        v13 = 0;
        memset(&v28, 0, sizeof(v28));
        v16 = *(_WORD *)(Pool2 + 10);
        v23 = 0;
        v17 = 1;
        if ( v24 )
        {
          while ( 1 )
          {
            v23 = 1;
            if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, v16, 0x51u, &v28, &v23, a2) == 1114112 )
              break;
            ++v13;
            v16 = *(_WORD *)(Pool2 + 24LL * v16 + 8);
            if ( v13 >= v24 )
              goto LABEL_38;
          }
          v18 = v26;
          v23 = 1;
          *(_WORD *)(v26 + 4) = v16;
          *(_WORD *)(a1 + 776) = v16;
          if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v16, 0x30u, &v28, &v23, a2) == 1114112 )
          {
            ReportCount = v28.ReportCount;
            v23 = 1;
            if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v16, 0x31u, &v28, &v23, a2) == 1114112
              && (v17 = 0, ReportCount == v28.ReportCount) )
            {
              v20 = ReportCount == 2;
              v18 = v26;
              if ( v20 )
                *(_DWORD *)(a1 + 360) |= 0x200u;
            }
            else
            {
              v18 = v26;
            }
          }
          if ( *(_WORD *)(Pool2 + 24LL * v16 + 10) )
          {
            if ( v17 )
            {
              v21 = 1;
LABEL_35:
              v7 = RIMCacheAxisChildIndex(a1, a2, v24, v21);
              if ( v7
                && rimHidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v18 + 4), 0, 0LL, &v25, a2) == -1072627705 )
              {
                RIMGetPropertyCount(a1, *(_WORD *)(v18 + 4), v25, a2);
              }
              return v7;
            }
LABEL_34:
            v21 = 0;
            goto LABEL_35;
          }
          if ( !v17 )
            goto LABEL_34;
        }
LABEL_38:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v14) = 0;
        }
        if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v15,
            (_DWORD)gRimLog,
            3,
            1,
            29,
            (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
        }
        return v7;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v8,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_8;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v7;
}
