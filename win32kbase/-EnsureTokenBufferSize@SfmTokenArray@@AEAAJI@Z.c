/*
 * XREFs of ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C00CFE78
 * Callers:
 *     ?AddNotificationToken@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CFDF0 (-AddNotificationToken@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00D85A8 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall SfmTokenArray::EnsureTokenBufferSize(SfmTokenArray *this, int a2)
{
  unsigned int *v2; // r15
  unsigned int v3; // ebx
  unsigned int v5; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v6; // rsi
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 Pool2; // rdi
  unsigned int *v10; // rax
  _QWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r10
  char v15; // r13
  void *Src; // [rsp+20h] [rbp-A9h]
  _QWORD v17[2]; // [rsp+30h] [rbp-99h] BYREF
  PVOID BackTrace[28]; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v19; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v20; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+140h] [rbp+77h] BYREF
  unsigned __int64 v22; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = (unsigned int *)((char *)this + 16);
  v3 = 0;
  v5 = ((a2 + *((_DWORD *)this + 3)) & 0xFFFFFFE0) + 32;
  if ( v5 <= *((_DWORD *)this + 4) )
    return v3;
  v6 = gpLeakTrackingAllocator;
  v7 = 40 * v5;
  Src = *(void **)this;
  v20 = 1649231443;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v21 = 260LL;
  v22 = v7;
  if ( !v8 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v7, 1649231443LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_5;
  }
  if ( v8 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x624D4653u)
      && v7 + 16 >= v7 )
    {
      v12 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v20);
      Pool2 = (__int64)v12;
      if ( !v12
        || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
            *v12 = 1649231443LL,
            Pool2 = (__int64)(v12 + 2),
            v12 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v6 + 1),
          (const void *)0x624D4653);
      }
LABEL_5:
      *(_QWORD *)this = Pool2;
      v10 = v2;
      if ( Pool2 )
        goto LABEL_6;
LABEL_32:
      *v10 = 0;
      *((_DWORD *)this + 3) = 0;
      return (unsigned int)-1073741801;
    }
LABEL_31:
    v10 = v2;
    *(_QWORD *)this = 0LL;
    goto LABEL_32;
  }
  if ( v8 != 2 )
    goto LABEL_31;
  v19 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x624D4653u, &v19) )
  {
    v17[0] = &v21;
    v17[1] = &v20;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v6,
              (__int64)v17,
              &v22);
    goto LABEL_5;
  }
  v15 = 0;
  if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
  {
    v7 += 16LL;
    v15 = 1;
    v22 = v7;
  }
  Pool2 = ExAllocatePool2(v14, v7, v13);
  if ( !Pool2 )
    goto LABEL_31;
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v6,
                            Pool2,
                            v19,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_5;
    }
    goto LABEL_30;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v6,
                           Pool2,
                           v19,
                           BackTrace) )
  {
LABEL_30:
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_31;
  }
  *(_QWORD *)this = Pool2;
  v10 = v2;
LABEL_6:
  if ( *v10 && Src )
  {
    memmove((void *)Pool2, Src, 40 * *v10);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Src);
  }
  *v2 = v5;
  return v3;
}
