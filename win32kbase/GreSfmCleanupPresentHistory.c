/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C0091F60
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0092140 (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void GreSfmCleanupPresentHistory()
{
  unsigned int v0; // esi
  __int64 Pool2; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  NSInstrumentation::CLeakTrackingAllocator *v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r10
  char v18; // r15
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[160]; // [rsp+118h] [rbp+10h] BYREF

  v0 = 0;
  v20 = 0LL;
  memset(v26, 0, sizeof(v26));
  Pool2 = (__int64)v26;
  v21 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v3, v2);
  LOBYTE(v5) = 1;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(DxgkWin32kInterface + 72))(&v20, 0LL, v5, 0LL) < 0 )
    return;
  v6 = (unsigned int)v20;
  if ( !(_DWORD)v20 )
    return;
  if ( (unsigned int)v20 > 8 )
  {
    if ( !(20 * (_DWORD)v20) )
      return;
    v7 = gpLeakTrackingAllocator;
    v8 = (unsigned int)(20 * v20);
    LODWORD(v19) = 1886221383;
    v23 = 260LL;
    v9 = *(_DWORD *)gpLeakTrackingAllocator;
    v24 = v8;
    switch ( v9 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, (unsigned int)v8, 1886221383LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
        goto LABEL_8;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u)
          && v8 + 16 >= v8 )
        {
          v16 = (_QWORD *)ExAllocatePool2(v23 & 0xFFFFFFFFFFFFFFFDuLL, v8 + 16, (unsigned int)v19);
          Pool2 = (__int64)v16;
          if ( !v16
            || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
                *v16 = 1886221383LL,
                Pool2 = (__int64)(v16 + 2),
                v16 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v7 + 1),
              (const void *)0x706D7447);
          }
LABEL_8:
          if ( !Pool2 )
            return;
          goto LABEL_9;
        }
        break;
      case 2:
        v22[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, v22) )
        {
          v22[0] = (unsigned __int64)&v23;
          v22[1] = (unsigned __int64)&v19;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v7,
                    (__int64)v22,
                    &v24);
          goto LABEL_8;
        }
        v18 = 0;
        if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
        {
          v8 += 16LL;
          v18 = 1;
          v24 = v8;
        }
        Pool2 = ExAllocatePool2(v17, v8, 1886221383LL);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v18 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v7,
                                    Pool2,
                                    v22[0],
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_8;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v7,
                                       Pool2,
                                       v22[0],
                                       BackTrace) )
          {
            goto LABEL_8;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_8;
  }
LABEL_9:
  memset((void *)Pool2, 0, 20 * v6);
  v21 = Pool2;
  v12 = DxDdGetDxgkWin32kInterface(v11, v10);
  LOBYTE(v13) = 1;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(v12 + 72))(&v20, 0LL, v13, 0LL) >= 0
    && (_DWORD)v20
    && (unsigned int)v20 <= (unsigned int)v6 )
  {
    do
    {
      GreSfmCleanupDxgAdapter(*(_DWORD *)(v21 + 20LL * v0));
      LODWORD(v22[0]) = *(_DWORD *)(v21 + 20LL * v0);
      v15 = DxDdGetDxgkWin32kInterface(LODWORD(v22[0]), v14);
      (*(void (__fastcall **)(unsigned __int64 *, _QWORD))(v15 + 88))(v22, 0LL);
      ++v0;
    }
    while ( v0 < (unsigned int)v20 );
  }
  if ( (_BYTE *)Pool2 != v26 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
}
