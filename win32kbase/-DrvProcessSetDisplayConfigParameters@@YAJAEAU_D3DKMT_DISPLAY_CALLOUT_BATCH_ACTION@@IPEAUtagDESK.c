/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018E59C
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C0194740 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0022450 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0022530 (DrvQueryDisplayConfig.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *a1,
        unsigned int a2,
        struct tagDESKTOP *a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  void *v7; // rax
  __int64 v8; // r15
  __int64 Pool2; // rbx
  __int64 v10; // rsi
  unsigned int v11; // edx
  __int64 result; // rax
  unsigned int v13; // r13d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rdi
  unsigned __int64 v18; // rbx
  int v19; // eax
  _QWORD *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r10
  char v23; // r14
  unsigned int v24; // r14d
  int v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // edx
  _DWORD *v28; // r15
  _DWORD *v29; // rcx
  unsigned int i; // edx
  __int64 v31; // rcx
  unsigned int v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+64h] [rbp-9Ch]
  unsigned int v34; // [rsp+68h] [rbp-98h]
  unsigned int v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-80h]
  unsigned __int64 v39[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v43; // [rsp+B8h] [rbp-48h]
  _BYTE *v44; // [rsp+C0h] [rbp-40h]
  struct tagDESKTOP *v45; // [rsp+C8h] [rbp-38h]
  PVOID BackTrace[20]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v47[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v48; // [rsp+190h] [rbp+90h]

  v5 = *((_OWORD *)a1 + 6);
  v37 = -1;
  v6 = *((_OWORD *)a1 + 7);
  v7 = (void *)*((_QWORD *)a1 + 2);
  v8 = *((unsigned int *)a1 + 2);
  Pool2 = 0LL;
  v10 = a2;
  v11 = (*(char *)a1 >> 31) & 4;
  v44 = a4;
  v45 = a3;
  v43 = a5;
  Src = v7;
  v33 = v8;
  v38 = v11;
  v47[0] = v5;
  v48 = *((_QWORD *)a1 + 16);
  v47[1] = v6;
  if ( (v10 & 0xF) != 0 )
  {
    if ( (v10 & 0x30) == 0 )
      return xxxUserSetDisplayConfig(
               v8,
               (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v7,
               v10,
               v11,
               (__int64)a3,
               0,
               0LL,
               0LL,
               a4,
               (__int64)a5,
               v47);
    WdLogSingleEntry2(2LL, v10);
    return 3221225485LL;
  }
  if ( !v7 )
  {
    WdLogSingleEntry3(1LL, v8, v10, a3);
    return 3221225485LL;
  }
  v32 = 0;
  v13 = (v10 & 0x20F) != 0 ? 4 : 2;
  result = DrvGetDisplayConfigBufferSizes(v13, (__int64)&v32);
  if ( (int)result >= 0 )
  {
    v14 = v32;
    v34 = v32;
    v15 = v8 + v32;
    v32 = v15;
    if ( !v15 )
    {
LABEL_37:
      v36 = v32;
      while ( 1 )
      {
        v24 = v14;
        v25 = DrvQueryDisplayConfig(v13, &v36, Pool2, (_DWORD *)((unsigned __int64)&v37 & -(__int64)((v13 & 4) != 0)));
        if ( v25 < 0 )
          break;
        if ( v36 != v34 )
        {
          v25 = -1071774893;
          break;
        }
        v26 = 0;
        if ( (_DWORD)v8 )
        {
          v27 = v32;
          v28 = Src;
          while ( v26 < v24 )
          {
            v29 = (_DWORD *)(Pool2 + 216LL * v26);
            if ( v29[4] == v28[4] && v29[5] == v28[5] )
            {
              if ( v26 < v27 - 1 )
              {
                memmove(v29, v29 + 54, 216LL * (v27 - v26 - 1));
                v27 = v32;
              }
              --v24;
            }
            else
            {
              ++v26;
            }
          }
          memmove((void *)(Pool2 + 216LL * v24), Src, 216LL * v33);
        }
        if ( (v10 & 0x10) != 0 )
        {
          for ( i = 0; i < v32; *(_QWORD *)(v31 + Pool2 + 8) = 0LL )
          {
            v31 = 216LL * i++;
            *(_QWORD *)(v31 + Pool2) &= 0x8004700000000000uLL;
          }
        }
        v25 = xxxUserSetDisplayConfig(
                v24 + v33,
                (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Pool2,
                v10,
                v38,
                (__int64)v45,
                0,
                0LL,
                0LL,
                v44,
                (__int64)v43,
                v47);
        if ( v25 != -1073741772 || (v10 & 0x10) == 0 )
          break;
        LODWORD(v8) = v33;
        v14 = v34;
        LODWORD(v10) = v10 & 0xFFFFEDCF | 0x1220;
      }
      if ( Pool2 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      return (unsigned int)v25;
    }
    v16 = 216 * v15;
    if ( !(216 * v15) )
      return 3221225495LL;
    v17 = gpLeakTrackingAllocator;
    v18 = v16;
    v35 = 1936876615;
    v40 = 260LL;
    v19 = *(_DWORD *)gpLeakTrackingAllocator;
    v41 = v16;
    switch ( v19 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, v16, 1936876615LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 14);
        goto LABEL_34;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
          && v18 + 16 >= v18 )
        {
          v20 = (_QWORD *)ExAllocatePool2(v40 & 0xFFFFFFFFFFFFFFFDuLL, v18 + 16, v35);
          Pool2 = (__int64)v20;
          if ( !v20
            || (_InterlockedIncrement64((volatile signed __int64 *)v17 + 14),
                *v20 = 1936876615LL,
                Pool2 = (__int64)(v20 + 2),
                v20 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v17 + 1),
              (const void *)0x73726447);
          }
          goto LABEL_34;
        }
        break;
      case 2:
        v39[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, v39) )
        {
          v39[0] = (unsigned __int64)&v40;
          v39[1] = (unsigned __int64)&v35;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v17,
                    (__int64)v39,
                    &v41);
LABEL_34:
          if ( !Pool2 )
            return 3221225495LL;
          v14 = v34;
          goto LABEL_37;
        }
        v23 = 0;
        if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
        {
          v18 += 16LL;
          v23 = 1;
          v41 = v18;
        }
        Pool2 = ExAllocatePool2(v22, v18, v21);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v23 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v17,
                                    Pool2,
                                    v39[0],
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_34;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v17,
                                       Pool2,
                                       v39[0],
                                       BackTrace) )
          {
            goto LABEL_34;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_34;
  }
  return result;
}
