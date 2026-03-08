/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C01B9AA4
 * Callers:
 *     RIMAssignTouchType @ 0x1C01B3810 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C01B2000 (rimHidP_GetLinkCollectionNodes.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 *     RIMCacheAxisChildIndex @ 0x1C01B3B48 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x1C01B7E64 (RIMGetPropertyCount.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  char v4; // si
  unsigned int v7; // r13d
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 Pool2; // rbx
  __int64 v12; // r9
  char v13; // r10
  unsigned int v14; // r11d
  unsigned __int16 v15; // r15
  int v16; // edx
  int v17; // r8d
  unsigned __int16 v18; // di
  int v19; // esi
  __int64 v20; // r15
  __int16 v21; // r15
  bool v22; // zf
  int v23; // r9d
  __int16 v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  PVOID BackTrace[20]; // [rsp+90h] [rbp-70h] BYREF
  _WORD v34[40]; // [rsp+130h] [rbp+30h] BYREF

  v3 = *(_QWORD *)(a1 + 760);
  v4 = 0;
  v26 = a3;
  v27 = 0;
  v7 = 0;
  v29 = v3;
  *(_WORD *)(v3 + 8) = 0;
  if ( v26 <= 1 )
    return v7;
  v8 = gpLeakTrackingAllocator;
  v28 = 1701016402;
  v31 = 260LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  v10 = 24LL * v26;
  v32 = v10;
  if ( !v9 )
  {
    Pool2 = ExAllocatePool2(260LL, 24LL * v26, 1701016402LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
LABEL_22:
    if ( !Pool2 )
      return v7;
LABEL_25:
    *(_QWORD *)(v3 + 16) = Pool2;
    if ( (unsigned int)rimHidP_GetLinkCollectionNodes(Pool2, (__int64)&v26, a2, v12) != 1114112 )
      return v7;
    v15 = 0;
    memset(v34, 0, 0x48uLL);
    v18 = *(_WORD *)(Pool2 + 10);
    v25 = 0;
    v19 = 1;
    if ( v26 )
    {
      while ( 1 )
      {
        v25 = 1;
        if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 13LL, v18, 81LL, (__int64)v34, (__int64)&v25, a2) == 1114112 )
          break;
        ++v15;
        v18 = *(_WORD *)(Pool2 + 24LL * v18 + 8);
        if ( v15 >= v26 )
          goto LABEL_44;
      }
      v20 = v29;
      v25 = 1;
      *(_WORD *)(v29 + 4) = v18;
      *(_WORD *)(a1 + 776) = v18;
      if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 1LL, v18, 48LL, (__int64)v34, (__int64)&v25, a2) == 1114112 )
      {
        v21 = v34[10];
        v25 = 1;
        if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 1LL, v18, 49LL, (__int64)v34, (__int64)&v25, a2) == 1114112
          && (v19 = 0, v21 == v34[10]) )
        {
          v22 = v21 == 2;
          v20 = v29;
          if ( v22 )
            *(_DWORD *)(a1 + 360) |= 0x200u;
        }
        else
        {
          v20 = v29;
        }
      }
      if ( *(_WORD *)(Pool2 + 24LL * v18 + 10) )
      {
        if ( v19 )
        {
          v23 = 1;
LABEL_41:
          v7 = RIMCacheAxisChildIndex(a1, a2, v26, v23);
          if ( v7
            && (unsigned int)rimHidP_GetSpecificValueCaps(
                               0LL,
                               0LL,
                               *(unsigned __int16 *)(v20 + 4),
                               0LL,
                               0LL,
                               (__int64)&v27,
                               a2) == -1072627705 )
          {
            RIMGetPropertyCount(a1, *(_WORD *)(v20 + 4), v27, a2);
          }
          return v7;
        }
LABEL_40:
        v23 = 0;
        goto LABEL_41;
      }
      if ( !v19 )
        goto LABEL_40;
    }
LABEL_44:
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
        29,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
    }
    return v7;
  }
  if ( v9 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65637352u)
      || v10 + 16 < v10 )
    {
      return v7;
    }
    Pool2 = ExAllocatePool2(v31 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, v28);
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
          *(_QWORD *)Pool2 = 1701016402LL,
          (Pool2 += 16LL) == 0) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v8 + 1),
        0x65637352uLL);
    }
    goto LABEL_22;
  }
  if ( v9 != 2 )
    return v7;
  v30[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701016402, v30) )
  {
    v30[0] = (unsigned __int64)&v31;
    v30[1] = (unsigned __int64)&v28;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v8,
              (__int64)v30,
              &v32);
    goto LABEL_22;
  }
  if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
  {
    v10 += 16LL;
    v4 = v13;
    v32 = v10;
  }
  Pool2 = ExAllocatePool2(260LL, v10, v14);
  if ( Pool2 )
  {
    _InterlockedAdd64((volatile signed __int64 *)v8 + 16, 1uLL);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v4 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v8,
             (const void *)Pool2,
             v30[0],
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_22;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v8,
                Pool2,
                v30[0],
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_25;
    }
    _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
  }
  return v7;
}
