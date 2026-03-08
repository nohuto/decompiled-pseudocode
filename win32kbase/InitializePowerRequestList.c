/*
 * XREFs of InitializePowerRequestList @ 0x1C031F97C
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C00C6170 (Win32kBaseUserInitialize.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C00C63F8 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x1C00C6528 (-InitializePowerWatchdogTimeoutDefaults@@YAXXZ.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  const unsigned __int16 *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  NTSTATUS result; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  PVOID v30; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v31; // rdi
  int v32; // eax
  __int64 v33; // rdx
  __int64 Pool2; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  void *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  void *v53; // rbx
  _QWORD *v54; // rax
  __int64 v55; // r10
  signed __int32 v56[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 v57; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v61[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD InputBuffer[24]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v63[24]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID BackTrace[24]; // [rsp+120h] [rbp+20h] BYREF
  char OutputBuffer; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v66; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v67; // [rsp+208h] [rbp+108h] BYREF

  OutputBuffer = 0;
  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v2 = OutputBuffer;
  *(_BYTE *)(SGDGetUserSessionState(v4, v3, v5, v6) + 712) = v2;
  InitializePowerWatchdogTimeoutDefaults(v8, v7, v9, v10);
  v15 = 0;
  v16 = 552LL;
  do
  {
    v17 = SGDGetUserSessionState(v12, v11, v13, v14);
    v66 = 0;
    v18 = v17;
    if ( (unsigned int)GetConfigUlong(v19, *(const unsigned __int16 **)(v17 + v16 + 8), &v66) == 1 )
    {
      v12 = v66;
      *(_DWORD *)(v18 + v16 + 16) = v66;
    }
    else if ( *(_BYTE *)(SGDGetUserSessionState(v20, v11, v13, v14) + 712) != 1 )
    {
      goto LABEL_4;
    }
    ++v15;
    v16 += 24LL;
  }
  while ( v15 < 5 );
  v48 = (void *)(SGDGetUserSessionState(v12, v11, v13, v14) + 728);
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, v48, 8u);
  if ( result >= 0 )
  {
    v53 = (void *)(SGDGetUserSessionState(v50, v49, v51, v52) + 736);
    memset(&v63[1], 0, 0x5CuLL);
    v63[0] = 21;
    result = ZwPowerInformation(SystemPowerStateLogging|0x40, v63, 0x60u, v53, 8u);
    if ( result >= 0 )
    {
LABEL_4:
      v21 = (_QWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 680);
      v21[1] = v21;
      *v21 = v21;
      v26 = SGDGetUserSessionState(v23, v22, v24, v25);
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      v30 = Object;
      *(_QWORD *)(v26 + 704) = Object;
      if ( result < 0 )
        return result;
      v31 = gpLeakTrackingAllocator;
      v59 = 68LL;
      v67 = 1869640533;
      v32 = *(_DWORD *)gpLeakTrackingAllocator;
      v33 = 56LL;
      v60 = 56LL;
      switch ( v32 )
      {
        case 0:
          Pool2 = ExAllocatePool2(68LL, 56LL, 1869640533LL);
          if ( Pool2 )
            _InterlockedAdd64((volatile signed __int64 *)v31 + 14, 1uLL);
          goto LABEL_8;
        case 1:
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6F707355u) )
          {
            v54 = (_QWORD *)ExAllocatePool2(v59 & 0xFFFFFFFFFFFFFFFDuLL, 72LL, v67);
            Pool2 = (__int64)v54;
            if ( !v54
              || (_InterlockedAdd64((volatile signed __int64 *)v31 + 14, 1uLL),
                  *v54 = 1869640533LL,
                  Pool2 = (__int64)(v54 + 2),
                  v54 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v31 + 1),
                0x6F707355uLL);
            }
            goto LABEL_8;
          }
          break;
        case 2:
          v57 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1869640533, &v57) )
          {
            v61[0] = &v59;
            v61[1] = &v67;
            Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                      (__int64)v31,
                      (__int64)v61,
                      &v60);
            goto LABEL_8;
          }
          Pool2 = ExAllocatePool2(v55, 72LL, 1869640533LL);
          if ( Pool2 )
          {
            _InterlockedAdd64((volatile signed __int64 *)v31 + 16, 1uLL);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v31,
                     (const void *)Pool2,
                     v57,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                Pool2 += 16LL;
LABEL_8:
                *(_QWORD *)(SGDGetUserSessionState(v30, v33, v28, v29) + 696) = Pool2;
                if ( !*(_QWORD *)(SGDGetUserSessionState(v36, v35, v37, v38) + 696) )
                  return -1073741801;
                v43 = *(_QWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 696);
                *(_QWORD *)(v43 + 8) = 0LL;
                *(_DWORD *)(v43 + 16) = 0;
                *(_DWORD *)v43 = 1;
                KeInitializeEvent((PRKEVENT)(v43 + 24), SynchronizationEvent, 0);
                *(_DWORD *)(SGDGetUserSessionState(v45, v44, v46, v47) + 2936) = 1;
                _InterlockedOr(v56, 0);
                return 0;
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v31,
                        Pool2,
                        v57,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              goto LABEL_8;
            }
            _InterlockedAdd64((volatile signed __int64 *)v31 + 17, 1uLL);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
          }
          break;
      }
      Pool2 = 0LL;
      goto LABEL_8;
    }
  }
  return result;
}
