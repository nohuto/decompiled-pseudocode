/*
 * XREFs of RIMVirtAssignTouchType @ 0x1C01BA330
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMVirtAssignTouchType(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  unsigned int v6; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  int v8; // eax
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  BOOL v11; // eax
  int v12; // eax
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  NSInstrumentation::CLeakTrackingAllocator *v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v20; // rax
  char v21; // si
  __int64 v22; // r13
  __int64 i; // r12
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int16 v26; // r9
  __int16 v27; // r10
  __int16 v28; // r11
  __int16 v29; // bx
  __int16 v30; // di
  __int64 v31; // rcx
  int v32; // r8d
  unsigned __int64 v34; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int128 v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  PVOID BackTrace[20]; // [rsp+90h] [rbp-70h] BYREF
  PVOID v45[26]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v46; // [rsp+210h] [rbp+110h] BYREF
  __int64 v47; // [rsp+218h] [rbp+118h] BYREF
  __int64 v48; // [rsp+220h] [rbp+120h]
  unsigned __int64 v49; // [rsp+228h] [rbp+128h] BYREF

  v48 = a3;
  v47 = a2;
  v5 = *(_DWORD *)(a1 + 360) & 0xFFFFFFFD | (*(_DWORD *)(a3 + 540) != 0 ? 2 : 0);
  *(_DWORD *)(a1 + 360) = v5;
  *(_WORD *)(a1 + 776) = *(_WORD *)(a3 + 1160);
  v6 = v5 & 0xFFFFFFDF | (*(_DWORD *)(a3 + 556) != 0 ? 0x20 : 0);
  *(_DWORD *)(a1 + 360) = v6;
  if ( (v6 & 2) != 0 )
  {
    v7 = gpLeakTrackingAllocator;
    LODWORD(v47) = 1903194962;
    v35 = 260LL;
    v43 = 40LL;
    v8 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 40LL, 1903194962LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
      goto LABEL_20;
    }
    if ( v8 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x71707352u) )
      {
        v10 = (_QWORD *)ExAllocatePool2(v35 & 0xFFFFFFFFFFFFFFFDuLL, 56LL, (unsigned int)v47);
        Pool2 = (__int64)v10;
        if ( !v10
          || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
              *v10 = 1903194962LL,
              Pool2 = (__int64)(v10 + 2),
              v10 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v7 + 1),
            0x71707352uLL);
        }
LABEL_20:
        *(_QWORD *)(a1 + 760) = Pool2;
        *(_DWORD *)(a1 + 24) = 3;
        if ( !Pool2 )
          return 3221225628LL;
        LODWORD(v40) = *(_DWORD *)(a3 + 1112);
        WORD2(v40) = *(_WORD *)(a3 + 1116);
        WORD3(v40) = *(_WORD *)(a3 + 1120);
        WORD4(v40) = *(_WORD *)(a3 + 1124);
        WORD5(v40) = *(_WORD *)(a3 + 1128);
        HIDWORD(v40) = *(_DWORD *)(a3 + 1132);
        v11 = *(_DWORD *)(a3 + 1144) != 0;
        v46 = 1903194962;
        LODWORD(v42) = v11;
        v12 = *(_DWORD *)(a3 + 1148);
        *(_OWORD *)Pool2 = v40;
        HIDWORD(v42) = v12;
        v13 = v42;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        v36 = 260LL;
        *(_QWORD *)(Pool2 + 32) = v13;
        v14 = *(_QWORD *)(a1 + 760);
        v15 = gpLeakTrackingAllocator;
        v41 = 0LL;
        v16 = *(unsigned int *)(v14 + 12);
        v17 = *(_DWORD *)gpLeakTrackingAllocator;
        v18 = 24 * v16;
        v37 = 24 * v16;
        switch ( v17 )
        {
          case 0:
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               260LL,
                                                                                               24 * v16,
                                                                                               1903194962LL);
            if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
            goto LABEL_44;
          case 1:
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x71707352u)
              && v18 + 16 >= v18 )
            {
              v20 = (_QWORD *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v18 + 16, v46);
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v20;
              if ( !v20
                || (_InterlockedIncrement64((volatile signed __int64 *)v15 + 14),
                    *v20 = 1903194962LL,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v20 + 2),
                    v20 == (_QWORD *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v15 + 1),
                  0x71707352uLL);
              }
              goto LABEL_44;
            }
            break;
          case 2:
            v34 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1903194962, &v34) )
            {
              *(_QWORD *)&v38 = &v36;
              *((_QWORD *)&v38 + 1) = &v46;
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                 (__int64)v15,
                                                                                                 (__int64)&v38,
                                                                                                 &v37);
LABEL_44:
              *(_QWORD *)(*(_QWORD *)(a1 + 760) + 16LL) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              v22 = *(_QWORD *)(a1 + 760);
              if ( *(_QWORD *)(v22 + 16) )
              {
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v22 + 12); v22 = *(_QWORD *)(a1 + 760) )
                {
                  v24 = 3 * i;
                  v38 = 0LL;
                  v25 = *(_QWORD *)(v48 + 1136) + 48 * i;
                  v39 = 0LL;
                  v26 = *(_WORD *)(v25 + 4);
                  v27 = *(_WORD *)(v25 + 8);
                  v28 = *(_WORD *)(v25 + 12);
                  v29 = *(_WORD *)(v25 + 16);
                  i = (unsigned int)(i + 1);
                  v30 = *(_WORD *)(v25 + 20);
                  v31 = *(_QWORD *)(v22 + 16);
                  v32 = (*(_DWORD *)(v25 + 32) << 9) | (unsigned __int8)*(_DWORD *)(v25 + 24) | (*(_DWORD *)(v25 + 28) != 0
                                                                                               ? 0x100
                                                                                               : 0);
                  *(_WORD *)(v31 + 8 * v24) = *(_WORD *)v25;
                  *(_WORD *)(v31 + 8 * v24 + 2) = v26;
                  *(_WORD *)(v31 + 8 * v24 + 4) = v27;
                  *(_WORD *)(v31 + 8 * v24 + 6) = v28;
                  *(_WORD *)(v31 + 8 * v24 + 8) = v29;
                  *(_WORD *)(v31 + 8 * v24 + 10) = v30;
                  *(_DWORD *)(v31 + 8 * v24 + 12) = v32;
                  *(_QWORD *)(v31 + 8 * v24 + 16) = 0LL;
                }
                return 0LL;
              }
              if ( v22 )
              {
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)(a1 + 760));
                *(_QWORD *)(a1 + 760) = 0LL;
              }
              return 3221225628LL;
            }
            v21 = 0;
            if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
            {
              v18 += 16LL;
              v21 = 1;
              v37 = v18;
            }
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               260LL,
                                                                                               v18,
                                                                                               1903194962LL);
            if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v15 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(v45);
              if ( v21
                && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
                 + 16 < 0x1000 )
              {
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                       (__int64)v15,
                       (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                       v34,
                       (struct NSInstrumentation::CBackTrace *)v45) )
                {
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                  goto LABEL_44;
                }
              }
              else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          (__int64)v15,
                          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                          v34,
                          (struct NSInstrumentation::CBackTrace *)v45) )
              {
                goto LABEL_44;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v15 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            }
            break;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
        goto LABEL_44;
      }
    }
    else if ( v8 == 2 )
    {
      v49 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1903194962, &v49) )
      {
        *(_QWORD *)&v38 = &v35;
        *((_QWORD *)&v38 + 1) = &v47;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v7,
                  (__int64)&v38,
                  &v43);
        goto LABEL_20;
      }
      Pool2 = ExAllocatePool2(260LL, 56LL, 1903194962LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v7,
                 Pool2,
                 v49,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_20;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v7,
                    (const void *)Pool2,
                    v49,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_20;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    Pool2 = 0LL;
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 760) = 0LL;
  return 0LL;
}
