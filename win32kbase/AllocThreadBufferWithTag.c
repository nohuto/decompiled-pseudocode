/*
 * XREFs of AllocThreadBufferWithTag @ 0x1C003C700
 * Callers:
 *     AllocFreeTmpBuffer @ 0x1C003C6A0 (AllocFreeTmpBuffer.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0185410 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0185500 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1C00BAA3C (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  const void *v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // eax
  unsigned __int64 v7; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v8; // r14
  int v9; // eax
  __int64 Pool2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  unsigned int v15; // ecx
  _QWORD *v16; // rax
  char v17; // r15
  __int64 v18; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+128h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (const void *)a2;
  v5 = 0LL;
  if ( a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v15 = a1 + 32;
      if ( v15 > 0x400 && v15 + 4096 >= v15 )
        v15 = (v15 + 4095) & 0xFFFFF000;
      a1 = v15 - 32;
    }
    v6 = a1 + 32;
    if ( a1 != -32 )
    {
      v7 = v6;
      v8 = gpLeakTrackingAllocator;
      v22 = a2;
      v18 = 260LL;
      v19 = v6;
      v9 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(262LL, (unsigned int)v7, a2);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
        goto LABEL_7;
      }
      if ( v9 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a2) )
        {
          if ( v7 + 16 >= v7 )
          {
            v16 = (_QWORD *)ExAllocatePool2(v18 | 2, v7 + 16, v22);
            Pool2 = (__int64)v16;
            if ( !v16
              || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
                  *v16 = v4,
                  Pool2 = (__int64)(v16 + 2),
                  v16 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v8 + 1),
                v4);
            }
          }
          else
          {
            Pool2 = 0LL;
          }
        }
        else
        {
          Pool2 = 0LL;
        }
        goto LABEL_7;
      }
      if ( v9 == 2 )
      {
        v23 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a2, &v23) )
        {
          v20[0] = &v18;
          v20[1] = &v22;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                    v8,
                    v20,
                    &v19);
          goto LABEL_7;
        }
        v17 = 0;
        if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
        {
          v7 += 16LL;
          v17 = 1;
          v19 = v7;
        }
        Pool2 = ExAllocatePool2(262LL, v7, (unsigned int)v4);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v8,
                                    Pool2,
                                    v23,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_7;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v8,
                                       Pool2,
                                       v23,
                                       BackTrace) )
          {
            goto LABEL_7;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      Pool2 = 0LL;
LABEL_7:
      if ( Pool2 )
      {
        v5 = Pool2 + 32;
        KeEnterCriticalRegion();
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v3 = *ThreadWin32Thread;
        *(_QWORD *)(Pool2 + 16) = v5;
        *(_QWORD *)(Pool2 + 24) = FreeThreadBufferWithTag;
        if ( v3 )
        {
          v12 = *(_QWORD *)(v3 + 88);
          v13 = (__int64 *)(v3 + 88);
          if ( *(_QWORD *)(v12 + 8) != v3 + 88 )
            __fastfail(3u);
          *(_QWORD *)Pool2 = v12;
          *(_QWORD *)(Pool2 + 8) = v13;
          *(_QWORD *)(v12 + 8) = Pool2;
          *v13 = Pool2;
        }
        else
        {
          *(_QWORD *)(Pool2 + 8) = Pool2;
          *(_QWORD *)Pool2 = Pool2;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return v5;
}
