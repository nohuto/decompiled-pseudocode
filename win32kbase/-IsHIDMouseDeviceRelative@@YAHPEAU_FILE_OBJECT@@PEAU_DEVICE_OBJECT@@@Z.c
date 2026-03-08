/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C00C4
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1C003017C (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetCaps @ 0x1C01B1F2C (rimHidP_GetCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C0658 (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall IsHIDMouseDeviceRelative(struct _FILE_OBJECT *a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v8; // rsi
  unsigned __int64 v9; // rdi
  int v10; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned int v13; // edx
  __int64 v14; // r10
  char v15; // r14
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  int Caps; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v24[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  PVOID BackTrace[20]; // [rsp+88h] [rbp-80h] BYREF
  __int64 OutputBuffer; // [rsp+128h] [rbp+20h] BYREF
  int v29; // [rsp+130h] [rbp+28h]
  _WORD v30[32]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v31[80]; // [rsp+178h] [rbp+70h] BYREF

  memset(v30, 0, sizeof(v30));
  OutputBuffer = 0LL;
  v29 = 0;
  v4 = 0;
  memset(v31, 0, 0x48uLL);
  LOWORD(v22) = 1;
  if ( (int)SendSyncOutputIrpRequest(0xB01A8u, &OutputBuffer, 0xCu, a1, a2) < 0 )
    return 0LL;
  v8 = gpLeakTrackingAllocator;
  v9 = (unsigned int)OutputBuffer;
  LODWORD(v23) = 1147695957;
  v25 = 68LL;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  v26 = (unsigned int)OutputBuffer;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      if ( v10 != 2 )
        goto LABEL_49;
      v24[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695957, v24) )
      {
        v24[0] = (unsigned __int64)&v25;
        v24[1] = (unsigned __int64)&v23;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v8,
                                                                                           (__int64)v24,
                                                                                           &v26);
        goto LABEL_23;
      }
      v15 = 0;
      if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
      {
        v9 += 16LL;
        v15 = 1;
        v26 = v9;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v14, v9, v13);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_49;
      _InterlockedAdd64((volatile signed __int64 *)v8 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v15
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v8,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v24[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_23;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v8,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v24[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_26;
      }
      _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_49;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687355u)
      || v9 + 16 < v9 )
    {
      goto LABEL_49;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v25 & 0xFFFFFFFFFFFFFFFDuLL, v9 + 16, (unsigned int)v23);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
          *Pool2 = 1147695957LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v8 + 1),
        0x44687355uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       68LL,
                                                                                       (unsigned int)OutputBuffer,
                                                                                       1147695957LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
  }
LABEL_23:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_26:
    if ( (int)SendSyncOutputIrpRequest(
                0xB0193u,
                (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                OutputBuffer,
                a1,
                a2) >= 0 )
    {
      Caps = rimHidP_GetCaps(
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               (__int64)v30,
               v17,
               v18);
      if ( Caps == 1114112 )
      {
        if ( v30[1] == 1
          && (unsigned __int16)(v30[0] - 1) <= 1u
          && (int)rimHidP_GetSpecificValueCaps(
                    0LL,
                    1LL,
                    0LL,
                    48LL,
                    (__int64)v31,
                    (__int64)&v22,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) >= 0
          && !v31[15] )
        {
          v4 = 1;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v20) = 0;
        }
        if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v20,
            v21,
            (_DWORD)gRimLog,
            3,
            1,
            15,
            (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids,
            Caps);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          (_DWORD)gRimLog,
          3,
          1,
          14,
          (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids);
      }
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return v4;
  }
LABEL_49:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (_DWORD)gRimLog,
      3,
      1,
      13,
      (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids);
  }
  return v4;
}
