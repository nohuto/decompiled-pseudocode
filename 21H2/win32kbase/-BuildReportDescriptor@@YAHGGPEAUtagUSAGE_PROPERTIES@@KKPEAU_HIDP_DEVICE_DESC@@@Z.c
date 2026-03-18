/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C019F1F8
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C019FD60 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C019FE90 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C019EE4C (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C019EEC0 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5,
        struct _HIDP_DEVICE_DESC *a6)
{
  struct tagUSAGE_PROPERTIES *v6; // r13
  unsigned int v7; // edi
  char v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // r12d
  PVOID v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 Pool2; // rbx
  unsigned int v19; // eax
  unsigned int v20; // r15d
  struct tagUSAGE_PROPERTIES *v21; // rsi
  __int128 v22; // xmm1
  unsigned int v23; // r12d
  int v24; // r15d
  char v25; // cl
  unsigned int v26; // esi
  unsigned int v27; // eax
  unsigned int v28; // r13d
  unsigned int v29; // edi
  char v30; // r15
  unsigned int v31; // eax
  unsigned int v32; // esi
  char v33; // r14
  __int128 v34; // xmm1
  unsigned int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // edx
  __int64 v41; // [rsp+28h] [rbp-D8h]
  unsigned int v42; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v43; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v44; // [rsp+48h] [rbp-B8h]
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-B0h]
  __int128 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h]
  _OWORD v49[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[28]; // [rsp+A0h] [rbp-60h] BYREF
  char v52; // [rsp+198h] [rbp+98h]
  unsigned int v55; // [rsp+1B0h] [rbp+B0h]

  v52 = a2;
  v6 = a3;
  v42 = 0;
  v7 = 0;
  v43 = 0;
  v8 = 0;
  v9 = *(_OWORD *)a3;
  v45 = 1;
  v10 = *((_OWORD *)a3 + 1);
  v49[0] = v9;
  v49[1] = v10;
  if ( a5 || a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v13 = 1;
    if ( a5 )
      v13 = a5;
    v55 = v13;
    v11 = 35LL * a4 * v13;
    if ( v11 > 0xFFFFFFFF )
      return 0LL;
    v12 = v13 + 13;
  }
  else
  {
    v11 = 35LL * a4;
    if ( v11 > 0xFFFFFFFF )
      return 0LL;
    v55 = 1;
    v12 = 23;
  }
  v14 = v11 + v12;
  v46 = v11 + v12;
  if ( (_DWORD)v11 + v12 )
  {
    v15 = gpLeakTrackingAllocator;
    v16 = v14;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78707355) == 0x78707355 )
    {
      v17 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 2020635477 )
        {
          if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_15;
        }
        v30 = 0;
        if ( v14 < 0x1000uLL || (v14 & 0xFFF) != 0 )
        {
          v30 = 1;
          v16 = v14 + 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v16);
        if ( !Pool2 )
          return v7;
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v30 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v15,
                 (const void *)Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
LABEL_16:
            if ( Pool2 )
              goto LABEL_17;
            return v7;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v15,
                    Pool2,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_17:
          BuildDeviceHeader((unsigned __int8 *)Pool2, v14, &v42, a1, v52);
          v19 = a4;
          v20 = 0;
          if ( a4 )
          {
            v21 = v6;
            do
            {
              if ( *(_WORD *)v21 == 1 )
              {
                v22 = *((_OWORD *)v21 + 1);
                v47 = *(_OWORD *)v21;
                v48 = v22;
                v7 = BuildMainItem((unsigned __int8 *)Pool2, v14, &v42, &v47, (__int64)v49, v41, &v45, &v43);
                if ( !v7 )
                  goto LABEL_56;
                v8 += v43;
                v19 = a4;
              }
              ++v20;
              v21 = (struct tagUSAGE_PROPERTIES *)((char *)v21 + 32);
            }
            while ( v20 < v19 );
            if ( v7 )
            {
              v23 = v42;
              v24 = 0;
              v25 = v55;
              v26 = v42 + 1;
              *(_BYTE *)(v42 + Pool2) = -64;
              v27 = v55 - 1;
              v42 = v26;
              v44 = v55 - 1;
              if ( v55 != 1 )
              {
                v28 = v46;
                while ( 1 )
                {
                  if ( !v7 )
                  {
LABEL_43:
                    v6 = a3;
                    v25 = v55;
                    v42 = v26;
                    goto LABEL_44;
                  }
                  if ( v23 <= gulCollectionOffset )
                    goto LABEL_41;
                  v29 = v23 - gulCollectionOffset + 1;
                  if ( v28 - v26 <= v29 )
                    break;
                  memmove((void *)(Pool2 + v26), (const void *)(Pool2 + gulCollectionOffset), v29);
                  v27 = v44;
                  v26 += v29;
                  v7 = 1;
LABEL_42:
                  if ( ++v24 >= v27 )
                    goto LABEL_43;
                }
                v27 = v44;
LABEL_41:
                v7 = 0;
                goto LABEL_42;
              }
LABEL_44:
              v31 = a4;
              v32 = 0;
              v33 = v25 * v8;
              do
              {
                if ( !*(_WORD *)v6 )
                {
                  v34 = *((_OWORD *)v6 + 1);
                  v47 = *(_OWORD *)v6;
                  v48 = v34;
                  v7 = BuildMainItem((unsigned __int8 *)Pool2, v46, &v42, &v47, (__int64)v49, v41, &v45, &v43);
                  if ( !v7 )
                    goto LABEL_56;
                  v33 += v43;
                  v31 = a4;
                }
                ++v32;
                v6 = (struct tagUSAGE_PROPERTIES *)((char *)v6 + 32);
              }
              while ( v32 < v31 );
              if ( v7 )
              {
                if ( (v33 & 7) != 0 )
                {
                  v35 = v42;
                  *(_BYTE *)(v42 + Pool2) = 117;
                  *(_BYTE *)(v35 + 1 + Pool2) = 8 - (v33 & 7);
                  v36 = v35 + 2;
                  *(_BYTE *)(v36 + Pool2) = -107;
                  v37 = (unsigned int)(v36 + 1);
                  *(_BYTE *)(v37 + Pool2) = 1;
                  v38 = (unsigned int)(v37 + 1);
                  *(_BYTE *)(v38 + Pool2) = -127;
                  LODWORD(v38) = v38 + 1;
                  *(_BYTE *)((unsigned int)v38 + Pool2) = 3;
                  v39 = v38 + 1;
                }
                else
                {
                  v39 = v42;
                }
                *(_BYTE *)(v39 + Pool2) = -64;
                if ( !gpfnHidP_GetCollectionDescription
                  || (v7 = 1, gpfnHidP_GetCollectionDescription((unsigned __int8 *)Pool2, v39 + 1, PagedPool, a6) < 0) )
                {
                  v7 = 0;
                }
              }
            }
          }
LABEL_56:
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (char *)Pool2);
          return v7;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return v7;
      }
    }
LABEL_15:
    Pool2 = ExAllocatePool2(260LL, v14);
    goto LABEL_16;
  }
  return 0LL;
}
