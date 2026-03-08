/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C0065BF8
 * Callers:
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C005D1C0 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C00619CC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 *     ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00650E0 (-SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0068ED0 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0252128 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C0068700 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  int v8; // eax
  __int64 UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64; // rbx
  _QWORD *v11; // rax
  int v12; // ecx
  _QWORD *Pool2; // rax
  __int64 v14; // [rsp+20h] [rbp-99h] BYREF
  __int64 *Buffer; // [rsp+30h] [rbp-89h] BYREF
  unsigned int *v16; // [rsp+38h] [rbp-81h]
  _QWORD v17[2]; // [rsp+40h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v19; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v20; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  if ( (*((_DWORD *)a2 + 4) & 4) == 0 )
  {
    v7 = gpLeakTrackingAllocator;
    v19 = 1920418628;
    v14 = 260LL;
    v17[0] = 24LL;
    v8 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v8 != 1 )
      {
        if ( v8 != 2 )
          goto LABEL_27;
        v20 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x72774344u, &v20) )
        {
          Buffer = &v14;
          v16 = &v19;
          UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                                                                                             v7,
                                                                                             &Buffer,
                                                                                             v17);
          goto LABEL_5;
        }
        UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(
                                                                                           261LL,
                                                                                           40LL,
                                                                                           1920418628LL);
        if ( !UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
          goto LABEL_27;
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v7,
                                  UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                                  v20,
                                  BackTrace) )
            goto LABEL_6;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v7,
                                     UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                                     v20,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 += 16LL;
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64);
        goto LABEL_27;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72774344u) )
        goto LABEL_27;
      Pool2 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFCuLL | 1, 40LL, v19);
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
            *Pool2 = 1920418628LL,
            UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v7 + 1),
          (const void *)0x72774344);
      }
    }
    else
    {
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(
                                                                                         261LL,
                                                                                         24LL,
                                                                                         1920418628LL);
      if ( UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
    }
LABEL_5:
    if ( UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
    {
LABEL_6:
      *(_QWORD *)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 + 16) = a2;
      *(_DWORD *)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 + 8) = 1;
      Buffer = (__int64 *)a2;
      v16 = (unsigned int *)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64;
      if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), &Buffer, 0x10u, 0LL) )
      {
        v3 = 0;
        *((_DWORD *)a2 + 4) |= 4u;
LABEL_8:
        *a3 = (struct DirectComposition::CWeakReferenceBase *)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64;
        return v3;
      }
      v3 = -1073741801;
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        (void *)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64);
LABEL_28:
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = 0LL;
      goto LABEL_8;
    }
LABEL_27:
    v3 = -1073741801;
    goto LABEL_28;
  }
  v17[0] = a2;
  v17[1] = 0LL;
  UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = 0LL;
  v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), v17);
  if ( v11 )
    UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = v11[1];
  v12 = *(_DWORD *)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 + 8);
  *(_DWORD *)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 + 8) = v12 + 1;
  if ( v12 != -1 )
    goto LABEL_8;
  *(_DWORD *)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 + 8) = -1;
  return 3223191811LL;
}
