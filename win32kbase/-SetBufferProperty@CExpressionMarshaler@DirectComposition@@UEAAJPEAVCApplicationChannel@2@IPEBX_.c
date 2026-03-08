/*
 * XREFs of ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0069010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0069720 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x1C019ADF0 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetBufferProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        void *a4,
        size_t Size,
        bool *a6)
{
  bool *v6; // rax
  unsigned int v7; // ebx
  size_t v9; // r14
  size_t v10; // r12
  NSInstrumentation::CLeakTrackingAllocator *v11; // rsi
  int v12; // eax
  __int64 UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64; // rdi
  unsigned int v14; // edx
  bool *v15; // rax
  _QWORD *Pool2; // rax
  unsigned int v18; // edx
  size_t v19; // r10
  char v20; // r13
  unsigned __int64 v21[2]; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v22; // [rsp+40h] [rbp-99h] BYREF
  size_t v23; // [rsp+48h] [rbp-91h] BYREF
  PVOID BackTrace[26]; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v25; // [rsp+140h] [rbp+67h] BYREF
  void *Src; // [rsp+148h] [rbp+6Fh]

  Src = a4;
  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a3 != 21 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(this, a2, a3, a4, Size, v6);
  if ( *((_QWORD *)this + 26) )
    return (unsigned int)-1073741790;
  v9 = Size;
  v10 = Size / 0x18;
  if ( Size != 24 * (Size / 0x18) )
    return (unsigned int)-1073741811;
  v11 = gpLeakTrackingAllocator;
  v22 = 260LL;
  v25 = 2019902276;
  v23 = Size;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
        return (unsigned int)-1073741801;
      v21[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x78654344u, v21) )
      {
        v21[0] = (unsigned __int64)&v22;
        v21[1] = (unsigned __int64)&v25;
        UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
                                                                                           v11,
                                                                                           v21,
                                                                                           &v23);
        goto LABEL_7;
      }
      v20 = 0;
      if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
      {
        v19 = v9 + 16;
        v20 = 1;
        v23 = v9 + 16;
      }
      UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = ExAllocatePool2(263LL, v19, v18);
      if ( !UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 )
        return (unsigned int)-1073741801;
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v20
        && (unsigned __int64)(UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v11,
                                UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64,
                                v21[0],
                                BackTrace) )
        {
          UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 += 16LL;
          goto LABEL_7;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v11,
                                   UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64,
                                   v21[0],
                                   BackTrace) )
      {
        goto LABEL_8;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64);
      return (unsigned int)-1073741801;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78654344u)
      || v9 + 16 < v9 )
    {
      return (unsigned int)-1073741801;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v22 | 3, v9 + 16, v25);
    UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
          *Pool2 = 2019902276LL,
          UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v11 + 1),
        (const void *)0x78654344);
    }
  }
  else
  {
    UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = ExAllocatePool2(
                                                                                       263LL,
                                                                                       Size,
                                                                                       2019902276LL);
    if ( UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
  }
LABEL_7:
  if ( !UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 )
    return (unsigned int)-1073741801;
LABEL_8:
  memmove((void *)UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64, Src, v9);
  v14 = 0;
  if ( (_DWORD)v10 )
  {
    while ( *(_DWORD *)(UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 + 24LL * v14 + 20) < *((_DWORD *)this + 50) )
    {
      if ( ++v14 >= (unsigned int)v10 )
        goto LABEL_11;
    }
    LODWORD(a6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 197LL);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (void *)UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64);
    return (unsigned int)-1073741811;
  }
LABEL_11:
  v15 = a6;
  *((_QWORD *)this + 26) = UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64;
  *((_DWORD *)this + 54) = v10;
  *v15 = 1;
  *((_DWORD *)this + 4) &= ~0x800u;
  return v7;
}
