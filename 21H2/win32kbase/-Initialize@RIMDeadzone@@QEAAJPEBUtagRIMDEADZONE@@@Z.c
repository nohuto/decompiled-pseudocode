/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C01A1FA4
 * Callers:
 *     RIMCreatePointerDeviceDeadzone @ 0x1C01888D0 (RIMCreatePointerDeviceDeadzone.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C01A2980 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  __int64 v8; // r11
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _DWORD *v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 Pool2; // rdi
  char v16; // r12
  unsigned int v17; // r12d
  _DWORD *v18; // r13
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int i; // r9d
  __int64 v24; // r8
  char v25; // r12
  __int128 v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D0h]
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v30[20]; // [rsp+E0h] [rbp-20h] BYREF
  int v31; // [rsp+1B0h] [rbp+B0h]

  v3 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  ++*((_DWORD *)this + 1);
  if ( !a2 )
    goto LABEL_59;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v3;
    }
LABEL_59:
    v3 = -1073741811;
    goto LABEL_60;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_59;
  v6 = *((_DWORD *)a2 + 4);
  v7 = 0;
  if ( v6 )
  {
    v8 = *((_QWORD *)a2 + 1);
    do
    {
      v9 = _mm_cvtsi128_si32(*(__m128i *)(v8 + 24LL * v7));
      v27 = *(_OWORD *)(v8 + 24LL * v7);
      v28 = *(_QWORD *)(v8 + 24LL * v7 + 16);
      if ( v9 > 0x168 || DWORD1(v27) > 0x168 || v9 == DWORD1(v27) )
        goto LABEL_59;
      v10 = 0;
      if ( (_DWORD)v28 )
      {
        while ( *(_DWORD *)(*((_QWORD *)&v27 + 1) + 8LL * v10 + 4) >= *(_DWORD *)(*((_QWORD *)&v27 + 1) + 8LL * v10) )
        {
          if ( ++v10 >= (unsigned int)v28 )
            goto LABEL_14;
        }
        goto LABEL_59;
      }
LABEL_14:
      ;
    }
    while ( ++v7 < v6 );
  }
  v11 = gpLeakTrackingAllocator;
  *((_DWORD *)this + 4) = 2;
  v12 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v12;
  v13 = 24 * v12;
  if ( (v11[10] & 0x6E7A4452) == 0x6E7A4452 && (v14 = 0LL, v11[11]) )
  {
    while ( v11[v14] != 1853506642 )
    {
      if ( ++v14 >= (unsigned __int64)(unsigned int)v11[11] )
        goto LABEL_19;
    }
    v16 = 0;
    if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
    {
      v16 = 1;
      v13 += 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v13);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v11,
               (const void *)Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_20;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v11,
                  Pool2,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_20;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
  }
  else
  {
LABEL_19:
    Pool2 = ExAllocatePool2(260LL, v13);
  }
LABEL_20:
  *((_QWORD *)this + 3) = Pool2;
  if ( !Pool2 )
  {
LABEL_21:
    v3 = -1073741801;
LABEL_60:
    RIMDeadzone::Release(this);
    return v3;
  }
  v17 = 0;
  v31 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v18 = gpLeakTrackingAllocator;
      v19 = 3LL * v17;
      *(_QWORD *)(Pool2 + 8 * v19) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v17);
      *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v19 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 24LL * v17 + 16);
      v20 = 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 24LL * v17 + 16);
      if ( (v18[10] & 0x6E7A4452) == 0x6E7A4452 )
      {
        v21 = 0LL;
        if ( v18[11] )
          break;
      }
LABEL_38:
      v22 = ExAllocatePool2(260LL, v20);
LABEL_39:
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v19 + 8) = v22;
      Pool2 = *((_QWORD *)this + 3);
      if ( !*(_QWORD *)(Pool2 + 8 * v19 + 8) )
        goto LABEL_21;
      for ( i = 0; i < *(_DWORD *)(Pool2 + 8 * v19 + 16); Pool2 = *((_QWORD *)this + 3) )
      {
        v24 = i++;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v19 + 8) + 8 * v24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v19 + 8)
                                                                                            + 8 * v24);
      }
      v31 = ++v17;
      if ( v17 >= *((_DWORD *)this + 8) )
        goto LABEL_43;
    }
    while ( v18[v21] != 1853506642 )
    {
      if ( ++v21 >= (unsigned __int64)(unsigned int)v18[11] )
        goto LABEL_38;
    }
    v25 = 0;
    if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
    {
      v25 = 1;
      v20 += 16LL;
    }
    v22 = ExAllocatePool2(260LL, v20);
    if ( v22 )
    {
      memset(v30, 0, sizeof(v30));
      RtlCaptureStackBackTrace(0, 0x14u, v30, 0LL);
      if ( v25 && (unsigned __int64)(v22 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v18,
               (const void *)v22,
               (struct NSInstrumentation::CBackTrace *)v30) )
        {
          v22 += 16LL;
          goto LABEL_49;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v18,
                  v22,
                  (struct NSInstrumentation::CBackTrace *)v30) )
      {
        goto LABEL_49;
      }
      ExFreePoolWithTag((PVOID)v22, 0);
    }
    v22 = 0LL;
LABEL_49:
    v17 = v31;
    goto LABEL_39;
  }
LABEL_43:
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v3;
}
