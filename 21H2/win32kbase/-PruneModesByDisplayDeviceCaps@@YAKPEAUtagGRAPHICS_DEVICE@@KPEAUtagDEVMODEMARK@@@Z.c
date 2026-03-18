/*
 * XREFs of ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0069090
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0079EE0 (DrvBuildDevmodeList.c)
 * Callees:
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C0068A58 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C0069408 (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 *     UpdateMonitorDevices @ 0x1C006C2B0 (UpdateMonitorDevices.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned int a2,
        struct tagDEVMODEMARK *a3)
{
  int v3; // eax
  unsigned int v5; // esi
  unsigned int v7; // r15d
  int v8; // eax
  unsigned int v9; // eax
  PVOID v10; // r14
  unsigned __int64 v11; // rdx
  __int64 Pool2; // rbx
  __int64 v13; // rcx
  int v14; // r12d
  __int64 v15; // r14
  struct tagModeCap *v16; // r8
  unsigned int v17; // esi
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int MonitorCapability; // eax
  PVOID v24; // rcx
  bool v25; // cf
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // r14d
  __int64 v31; // r15
  __int64 v32; // r13
  struct tagModeCap *v33; // r10
  int v34; // eax
  int v35; // edx
  int v36; // r8d
  unsigned int v37; // eax
  unsigned int v39; // edx
  __int64 v40; // r9
  __int64 v41; // rax
  char v42; // r12
  struct tagModeCap *v43; // [rsp+30h] [rbp-D0h]
  struct tagModeCap *v44; // [rsp+30h] [rbp-D0h]
  unsigned int v45; // [rsp+38h] [rbp-C8h]
  unsigned int v46; // [rsp+3Ch] [rbp-C4h]
  unsigned int v47; // [rsp+40h] [rbp-C0h]
  __int128 v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h]
  unsigned int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+6Ch] [rbp-94h]
  unsigned int v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+74h] [rbp-8Ch]
  struct _DEVICE_OBJECT *v56; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[28]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 v59; // [rsp+180h] [rbp+80h]
  int v60; // [rsp+180h] [rbp+80h]
  unsigned int v63; // [rsp+198h] [rbp+98h]
  unsigned int v64; // [rsp+198h] [rbp+98h]

  v3 = *((_DWORD *)a1 + 40);
  v5 = a2;
  if ( (v3 & 0x800000) != 0 )
  {
    v59 = 1;
    v7 = 0;
  }
  else
  {
    v59 = 0;
    v7 = 56;
  }
  v50 = v7;
  v51 = -1;
  v45 = -1;
  v53 = -1;
  v47 = -1;
  v55 = -1;
  v63 = 0;
  v52 = 0;
  v46 = 0;
  v54 = 0;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  UpdateMonitorDevices(0LL);
  v8 = *((_DWORD *)a1 + 54);
  if ( v8 )
  {
    v9 = 868 * v8;
    if ( !v9 )
      return v5;
    v10 = gpLeakTrackingAllocator;
    v11 = v9;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76656447) == 0x76656447 )
    {
      v41 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v41) != 1986356295 )
        {
          if ( ++v41 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_6;
        }
        v42 = 0;
        if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
        {
          v42 = 1;
          v11 += 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v11);
        if ( Pool2 )
        {
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v42 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v10,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_7;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v10,
                                       Pool2,
                                       BackTrace) )
          {
            goto LABEL_7;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        Pool2 = 0LL;
        goto LABEL_7;
      }
    }
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, v11);
LABEL_7:
    if ( !Pool2 )
      return v5;
    v13 = *((unsigned int *)a1 + 54);
    v14 = 0;
    v15 = 0LL;
    v16 = (struct tagModeCap *)(Pool2 + 4 * v13);
    v43 = v16;
    if ( !(_DWORD)v13 )
      goto LABEL_72;
    v17 = -1;
    while ( 1 )
    {
      *(_DWORD *)(Pool2 + 4 * v15) = 0;
      v18 = *((_QWORD *)a1 + 28);
      v19 = 0LL;
      v20 = (unsigned int)v15 + 4 * v15;
      if ( (*(_BYTE *)(v18 + 4 * v20) & 3) == 3 )
      {
        v56 = 0LL;
        Object[0] = 0LL;
        v21 = v18 + 8 + 4 * v20;
        v49 = 0LL;
        v22 = *(unsigned int *)(v18 + 4 * v20 + 4);
        v48 = 0LL;
        if ( (int)((__int64 (__fastcall *)(__int64, __int64, PVOID *, struct _DEVICE_OBJECT **))qword_1C0296828)(
                    v21,
                    v22,
                    Object,
                    &v56) < 0 )
        {
          v16 = v43;
          goto LABEL_26;
        }
        MonitorCapability = GetMonitorCapability(v56, v43, (struct _FREQUENCY_RAGE *)&v48, v59);
        v24 = Object[0];
        if ( v7 <= (unsigned int)v48 )
          v7 = v48;
        v25 = v17 < DWORD1(v48);
        *(_DWORD *)(Pool2 + 4 * v15) = MonitorCapability;
        if ( !v25 )
          v17 = DWORD1(v48);
        v26 = v63;
        v50 = v7;
        if ( v63 <= DWORD2(v48) )
          v26 = DWORD2(v48);
        v63 = v26;
        v52 = v26;
        v27 = v45;
        v51 = v17;
        if ( v45 >= HIDWORD(v48) )
          v27 = HIDWORD(v48);
        v45 = v27;
        v53 = v27;
        v28 = v46;
        if ( v46 <= (unsigned int)v49 )
          v28 = v49;
        v46 = v28;
        v54 = v28;
        v29 = v47;
        if ( v47 >= HIDWORD(v49) )
          v29 = HIDWORD(v49);
        v47 = v29;
        v55 = v29;
        ObfDereferenceObject(v24);
        v19 = *(unsigned int *)(Pool2 + 4 * v15);
        v16 = v43;
      }
      v14 += v19;
      v16 = (struct tagModeCap *)((char *)v16 + 24 * v19);
      v43 = v16;
LABEL_26:
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *((_DWORD *)a1 + 54) )
      {
        v5 = a2;
        LODWORD(v13) = *((_DWORD *)a1 + 54);
        if ( v14 )
          goto LABEL_28;
LABEL_72:
        if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (void *)Pool2);
          return v5;
        }
LABEL_28:
        v30 = 0;
LABEL_29:
        if ( !v5 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (void *)Pool2);
          return v30;
        }
        --v5;
        v31 = 0LL;
        v32 = *((_QWORD *)a3 + 2 * v5 + 1);
        v33 = (struct tagModeCap *)(Pool2 + 4LL * (unsigned int)v13);
        v44 = v33;
        if ( !(_DWORD)v13 )
          goto LABEL_39;
        v34 = *((_DWORD *)a1 + 40) & 0x800000;
        v60 = v34;
        while ( 1 )
        {
          v35 = *(_DWORD *)(Pool2 + 4 * v31);
          v36 = 0;
          v64 = v35;
          if ( v35 )
          {
            v36 = PruneMode(
                    (struct _devicemodeW *)v32,
                    v33,
                    v35,
                    (struct _FREQUENCY_RAGE *)&v50,
                    *(_DWORD *)(*((_QWORD *)a1 + 28) + 20 * v31));
            v34 = v60;
            v33 = (struct tagModeCap *)((char *)v44 + 24 * v64);
            v44 = v33;
          }
          if ( v34 && *(unsigned __int16 *)(v32 + 70) + *(unsigned __int16 *)(v32 + 68) == 244 )
          {
            if ( (*(_DWORD *)(v32 + 240) & 1) == 0 )
              goto LABEL_74;
            v34 = v60;
          }
          else if ( v36 )
          {
LABEL_74:
            *((_DWORD *)a3 + 4 * v5) = 1;
            *((_DWORD *)a1 + 40) |= 0x8000000u;
            LODWORD(v13) = *((_DWORD *)a1 + 54);
LABEL_39:
            v37 = v30 + 1;
            if ( (_DWORD)v31 != (_DWORD)v13 )
              v37 = v30;
            v30 = v37;
            goto LABEL_29;
          }
          LODWORD(v13) = *((_DWORD *)a1 + 54);
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= (unsigned int)v13 )
            goto LABEL_39;
        }
      }
    }
  }
  if ( !_bittest((const signed __int32 *)a1 + 40, 0x17u) )
    return v5;
  v39 = 0;
  while ( v5 )
  {
    v40 = *((_QWORD *)a3 + 2 * --v5 + 1);
    if ( *(unsigned __int16 *)(v40 + 68) + *(unsigned __int16 *)(v40 + 70) != 244 || (*(_DWORD *)(v40 + 240) & 1) != 0 )
    {
      ++v39;
    }
    else
    {
      *((_DWORD *)a3 + 4 * v5) = 1;
      *((_DWORD *)a1 + 40) |= 0x8000000u;
    }
  }
  return v39;
}
