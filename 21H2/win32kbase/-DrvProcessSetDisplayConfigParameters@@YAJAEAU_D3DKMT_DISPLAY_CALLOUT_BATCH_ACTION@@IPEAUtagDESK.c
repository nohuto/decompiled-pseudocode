/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171294
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C01749FC (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0070630 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00706F0 (DrvQueryDisplayConfig.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
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
  __int64 v8; // r12
  __int64 Pool2; // rbx
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 result; // rax
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  PVOID v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // r13
  unsigned int v21; // r14d
  int v22; // esi
  unsigned int v23; // esi
  _DWORD *v24; // rcx
  char v25; // r14
  unsigned int i; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-9Ch]
  unsigned int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-90h]
  unsigned int v34; // [rsp+74h] [rbp-8Ch]
  void *Src; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36; // [rsp+80h] [rbp-80h]
  _BYTE *v37; // [rsp+88h] [rbp-78h]
  struct tagDESKTOP *v38; // [rsp+90h] [rbp-70h]
  PVOID BackTrace[20]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v40[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v41; // [rsp+160h] [rbp+60h]

  v5 = *((_OWORD *)a1 + 6);
  v32 = -1;
  v6 = *((_OWORD *)a1 + 7);
  v7 = (void *)*((_QWORD *)a1 + 2);
  v8 = *((unsigned int *)a1 + 2);
  Pool2 = 0LL;
  v10 = a2;
  v11 = (*(char *)a1 >> 31) & 4;
  v37 = a4;
  v38 = a3;
  v36 = a5;
  Src = v7;
  v33 = v11;
  v40[0] = v5;
  v41 = *((_QWORD *)a1 + 16);
  v40[1] = v6;
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
               (__int64)v40);
    WdLogSingleEntry2(2LL, v10, a3);
    return 3221225485LL;
  }
  if ( !v7 )
  {
    WdLogSingleEntry3(1LL, v8, v10, a3);
    return 3221225485LL;
  }
  v29 = 0;
  v13 = (v10 & 0x20F) != 0 ? 4 : 2;
  v34 = v13;
  result = DrvGetDisplayConfigBufferSizes(v13, (__int64)&v29);
  if ( (int)result >= 0 )
  {
    v14 = v29;
    v30 = v29;
    v15 = v8 + v29;
    v29 = v15;
    if ( !v15 )
      goto LABEL_18;
    if ( !(216 * v15) )
      return 3221225495LL;
    v17 = gpLeakTrackingAllocator;
    v16 = 216 * v15;
    v18 = 216 * v15;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
      || (v19 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_15:
      Pool2 = ExAllocatePool2(260LL, v16);
      goto LABEL_16;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1936876615 )
    {
      if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_15;
    }
    v25 = 0;
    if ( v16 < 0x1000uLL || (v18 & 0xFFF) != 0 )
    {
      v25 = 1;
      v18 = v16 + 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v18);
    if ( !Pool2 )
      goto LABEL_32;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v17,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_16;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v17,
                                 Pool2,
                                 BackTrace) )
    {
LABEL_16:
      if ( Pool2 )
      {
        v15 = v29;
        v14 = v30;
LABEL_18:
        v31 = v15;
        v20 = (_DWORD *)((unsigned __int64)&v32 & -(__int64)((v13 & 4) != 0));
        while ( 1 )
        {
          v21 = v14;
          v22 = DrvQueryDisplayConfig(v13, &v31, Pool2, v20);
          if ( v22 < 0 )
            break;
          if ( v31 != v30 )
          {
            v22 = -1071774893;
            break;
          }
          v23 = 0;
          if ( (_DWORD)v8 )
          {
            while ( v23 < v21 )
            {
              v24 = (_DWORD *)(Pool2 + 216LL * v23);
              if ( v24[4] == *((_DWORD *)Src + 4) && v24[5] == *((_DWORD *)Src + 5) )
              {
                if ( v23 < v29 - 1 )
                  memmove(v24, v24 + 54, 216LL * (v29 - v23 - 1));
                --v21;
              }
              else
              {
                ++v23;
              }
            }
            memmove((void *)(Pool2 + 216LL * v21), Src, 216 * v8);
          }
          if ( (v10 & 0x10) != 0 )
          {
            for ( i = 0; i < v29; *(_QWORD *)(v28 + Pool2 + 8) = 0LL )
            {
              v27 = i++;
              v28 = 216 * v27;
              *(_QWORD *)(v28 + Pool2) &= 0x8004700000000000uLL;
            }
          }
          v22 = xxxUserSetDisplayConfig(
                  v21 + (unsigned int)v8,
                  (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Pool2,
                  v10,
                  v33,
                  (__int64)v38,
                  0,
                  0LL,
                  0LL,
                  v37,
                  (__int64)v36,
                  (__int64)v40);
          if ( v22 != -1073741772 || (v10 & 0x10) == 0 )
            break;
          v13 = v34;
          v14 = v30;
          LODWORD(v10) = v10 & 0xFFFFEDCF | 0x1220;
        }
        if ( Pool2 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (char *)Pool2);
        return (unsigned int)v22;
      }
      return 3221225495LL;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_32:
    Pool2 = 0LL;
    goto LABEL_16;
  }
  return result;
}
