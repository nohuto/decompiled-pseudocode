/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C0196260
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, ULONG64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rdi
  ULONG64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // sf
  ULONG64 v18; // rcx
  unsigned int v19; // r12d
  unsigned int v20; // eax
  size_t v21; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v22; // rbx
  int v23; // eax
  __int64 Pool2; // rdi
  _QWORD *v25; // rax
  char *v26; // r10
  size_t v27; // r11
  char v28; // r14
  unsigned int v29; // edi
  const void *v30; // rdx
  ULONG64 v31; // r14
  char *v32; // r15
  int i; // esi
  const void *v34; // rdx
  int v35; // eax
  __int64 DxgkWin32kInterface; // rax
  unsigned int v37; // [rsp+30h] [rbp-178h] BYREF
  void *v38; // [rsp+38h] [rbp-170h] BYREF
  __int128 v39; // [rsp+40h] [rbp-168h]
  ULONG64 v40; // [rsp+50h] [rbp-158h]
  int v41; // [rsp+58h] [rbp-150h]
  unsigned __int64 v42[2]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v43; // [rsp+70h] [rbp-138h] BYREF
  int v44; // [rsp+78h] [rbp-130h] BYREF
  __int64 v45; // [rsp+7Ch] [rbp-12Ch]
  unsigned int v46; // [rsp+84h] [rbp-124h]
  int v47; // [rsp+88h] [rbp-120h]
  int v48; // [rsp+8Ch] [rbp-11Ch]
  __int64 v49; // [rsp+90h] [rbp-118h]
  int v50; // [rsp+98h] [rbp-110h]
  int v51; // [rsp+9Ch] [rbp-10Ch]
  ULONG64 v52; // [rsp+A0h] [rbp-108h]
  char *v53; // [rsp+A8h] [rbp-100h]
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v55; // [rsp+150h] [rbp-58h] BYREF
  __int64 v56; // [rsp+160h] [rbp-48h]
  _QWORD v57[2]; // [rsp+168h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( !v5 )
  {
    UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
    return 3221225485LL;
  }
  v55 = 0LL;
  v56 = 0LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v55 = *(_OWORD *)v5;
  v56 = *(_QWORD *)(v5 + 16);
  v57[0] = *((_QWORD *)&v55 + 1);
  v57[1] = v56 & 0x1FFFFFFFFLL;
  if ( v4 )
  {
    v18 = MmUserProbeAddress;
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v39 = *(_OWORD *)v4;
    v40 = *(_QWORD *)(v4 + 16);
    if ( (unsigned int)(v39 - 1) > 1
      || !v40
      || HIDWORD(v39) > 0x1000
      || (v18 = DWORD1(v39), DWORD1(v39) > HIDWORD(v39) >> 2)
      || DWORD2(v39) > 0x400 )
    {
      v29 = -1073741811;
      goto LABEL_59;
    }
    v19 = 4 * DWORD1(v39);
    v20 = DWORD2(v39) * 4 * DWORD1(v39);
    v21 = v20;
    if ( v20 )
    {
      v37 = 1886221383;
      v43 = 260LL;
      v22 = gpLeakTrackingAllocator;
      v38 = (void *)v20;
      v23 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(260LL, (unsigned int)v21, 1886221383LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v22 + 14);
        goto LABEL_41;
      }
      if ( v23 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
        {
          v6 = v21 + 16;
          if ( v21 + 16 >= v21 )
          {
            v25 = (_QWORD *)ExAllocatePool2(v43 & 0xFFFFFFFFFFFFFFFDuLL, v6, v37);
            Pool2 = (__int64)v25;
            if ( !v25
              || (_InterlockedIncrement64((volatile signed __int64 *)v22 + 14),
                  *v25 = 1886221383LL,
                  Pool2 = (__int64)(v25 + 2),
                  v25 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v22 + 1),
                (const void *)0x706D7447);
            }
            goto LABEL_41;
          }
        }
        goto LABEL_40;
      }
      if ( v23 == 2 )
      {
        v42[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, v42) )
        {
          v42[0] = (unsigned __int64)&v43;
          v42[1] = (unsigned __int64)&v37;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v22,
                    (__int64)v42,
                    &v38);
LABEL_41:
          v38 = (void *)Pool2;
          if ( Pool2 )
          {
            if ( v19 == HIDWORD(v39) )
            {
              v30 = (const void *)v40;
              if ( v40 >= MmUserProbeAddress )
                v30 = (const void *)MmUserProbeAddress;
              memmove((void *)Pool2, v30, v21);
            }
            else
            {
              v31 = v40;
              v52 = v40;
              v32 = (char *)Pool2;
              v53 = (char *)Pool2;
              for ( i = DWORD2(v39); ; --i )
              {
                v41 = i;
                if ( !i )
                  break;
                v34 = (const void *)v31;
                if ( v31 >= MmUserProbeAddress )
                  v34 = (const void *)MmUserProbeAddress;
                memmove(v32, v34, v19);
                v31 += HIDWORD(v39);
                v52 = v31;
                v32 += v19;
                v53 = v32;
              }
            }
            v48 = 0;
            if ( (_DWORD)v39 == 1 )
            {
              v44 = 2;
            }
            else
            {
              v35 = 0;
              v18 = 4LL;
              if ( (_DWORD)v39 == 2 )
                v35 = 4;
              v44 = v35;
            }
            v45 = *(_QWORD *)((char *)&v39 + 4);
            v46 = v19;
            v47 = DWORD2(v55);
            v49 = Pool2;
            v50 = 0;
            v51 = 0;
            DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v18, v6);
            v14 = (*(__int64 (__fastcall **)(__int128 *, _QWORD *, int *, _QWORD))(DxgkWin32kInterface + 648))(
                    &v55,
                    v57,
                    &v44,
                    0LL);
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
            v17 = v14 < 0;
            goto LABEL_7;
          }
          v29 = -1073741823;
LABEL_59:
          UserSessionSwitchLeaveCrit(v18, v6, v8, v9);
          return v29;
        }
        v28 = 0;
        if ( v21 < v27 || (v21 & 0xFFF) != 0 )
        {
          v28 = 1;
          v26 += 16;
          v38 = v26;
        }
        Pool2 = ExAllocatePool2(260LL, v26, 1886221383LL);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v22 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v28 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v22,
                                    Pool2,
                                    v42[0],
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_41;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v22,
                                       Pool2,
                                       v42[0],
                                       BackTrace) )
          {
            goto LABEL_41;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v22 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
    }
LABEL_40:
    Pool2 = 0LL;
    goto LABEL_41;
  }
  v11 = DxDdGetDxgkWin32kInterface(MmUserProbeAddress, v6);
  v14 = (*(__int64 (__fastcall **)(__int128 *, _QWORD *, _QWORD))(v11 + 640))(&v55, v57, 0LL);
  v17 = v14 < 0;
LABEL_7:
  if ( v17 )
    v14 = -1073741823;
  UserSessionSwitchLeaveCrit(v13, v12, v15, v16);
  return (unsigned int)v14;
}
