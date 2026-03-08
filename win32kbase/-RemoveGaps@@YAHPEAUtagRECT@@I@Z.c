/*
 * XREFs of ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1C02474D8
 * Callers:
 *     AlignRects @ 0x1C00CC4F8 (AlignRects.c)
 * Callees:
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
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C02471DC (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1C0247430 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall RemoveGaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // eax
  _QWORD *Pool2; // rax
  __int64 v9; // r10
  char v10; // si
  unsigned int v11; // r11d
  _QWORD *v12; // rsi
  struct tagRECT *v13; // rdi
  _QWORD *v14; // r9
  struct tagRECT *v15; // r10
  int v16; // r8d
  _QWORD *v17; // rax
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // edx
  __int64 v21; // rcx
  struct tagRECT *v22; // r14
  struct tagRECT **v23; // rsi
  unsigned __int64 v24; // rdi
  struct tagRECT **ContiguousRectangle; // rax
  struct tagRECT *v26; // rdx
  unsigned int v28; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT *v33[16]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = a2;
  memset(v33, 0, sizeof(v33));
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v33;
  if ( (unsigned int)v2 <= 0x10 )
    goto LABEL_23;
  v5 = gpLeakTrackingAllocator;
  v6 = (unsigned int)(8 * v2);
  v31 = v6;
  v28 = 1953657685;
  v30 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
        return 0LL;
      v29[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1953657685, v29) )
      {
        v29[0] = (unsigned __int64)&v30;
        v29[1] = (unsigned __int64)&v28;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v5,
                                                                                           (__int64)v29,
                                                                                           &v31);
        goto LABEL_22;
      }
      v10 = 0;
      if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
      {
        v6 += 16LL;
        v10 = 1;
        v31 = v6;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v9,
                                                                                         v6,
                                                                                         1953657685LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return 0LL;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v10
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v5,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v29[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_22;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v5,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v29[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_23;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return 0LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x74727355u)
      || v6 + 16 < v6 )
    {
      return 0LL;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v30 & 0xFFFFFFFFFFFFFFFDuLL, v6 + 16, v28);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
          *Pool2 = 1953657685LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v5 + 1),
        0x74727355uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)v6,
                                                                                       1953657685LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
  }
LABEL_22:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return 0LL;
LABEL_23:
  CenterRectangles(a1, v2);
  v11 = -1;
  v12 = (_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  v13 = &a1[v2];
  v14 = (_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  v15 = a1;
  if ( a1 < v13 )
  {
    do
    {
      *v12 = v15;
      v16 = (v15->right - v15->left) / 2 + v15->left;
      v17 = v12;
      v18 = -((v15->bottom - v15->top) / 2 + v15->top);
      if ( (v15->bottom - v15->top) / 2 + v15->top >= 0 )
        v18 = (v15->bottom - v15->top) / 2 + v15->top;
      v19 = -v16;
      if ( v16 >= 0 )
        v19 = (v15->right - v15->left) / 2 + v15->left;
      v20 = v18 + v19;
      if ( v20 >= v11 )
        v17 = v14;
      ++v12;
      ++v15;
      v14 = v17;
      if ( v20 >= v11 )
        v20 = v11;
      v11 = v20;
    }
    while ( v15 < v13 );
    if ( v17 != (_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
      v21 = *v17;
      *v17 = *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v21;
    }
  }
  v22 = a1 + 1;
  v23 = (struct tagRECT **)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8);
  if ( v22 < v13 )
  {
    v24 = ((unsigned __int64)((char *)v13 - (char *)v22 - 1) >> 4) + 1;
    do
    {
      ContiguousRectangle = AddNextContiguousRectangle(
                              (struct tagRECT **)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v23,
                              v2);
      if ( ContiguousRectangle != v23 )
      {
        v26 = *ContiguousRectangle;
        *ContiguousRectangle = *v23;
        *v23 = v26;
      }
      ++v23;
      --v24;
    }
    while ( v24 );
  }
  if ( (struct tagRECT **)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 != v33 )
  {
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  }
  return 1LL;
}
