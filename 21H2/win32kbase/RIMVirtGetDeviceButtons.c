/*
 * XREFs of RIMVirtGetDeviceButtons @ 0x1C0196BA4
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMVirtGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  _DWORD *v7; // rsi
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 Pool2; // rbx
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rax
  char v19; // r15
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  char v28; // r15
  __int64 v29; // rcx
  PVOID v30; // rsi
  unsigned int v31; // r15d
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbx
  char v36; // di
  __int64 v37; // [rsp+28h] [rbp-E0h]
  PVOID BackTrace[20]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v39[20]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v40[20]; // [rsp+178h] [rbp+70h] BYREF

  v6 = *(unsigned __int16 *)(a4 + 46);
  v7 = gpLeakTrackingAllocator;
  v8 = 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
  {
    v9 = 12LL * *(unsigned int *)(a2 + 768);
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78647352) != 0x78647352
      || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_6:
      Pool2 = ExAllocatePool2(260LL, v9);
      goto LABEL_7;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 2019849042 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_6;
    }
    v19 = 0;
    if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
    {
      v19 = 1;
      v9 += 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v9);
    if ( !Pool2 )
      goto LABEL_15;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v7,
             (const void *)Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_7;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v7,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_7:
      *(_QWORD *)(a2 + 1024) = Pool2;
      if ( Pool2 )
      {
        v12 = *(_DWORD *)(a2 + 768);
        v13 = 0;
        for ( *(_DWORD *)(a2 + 1036) = v12; v13 < *(_DWORD *)(a2 + 1036); *(_DWORD *)(v18 + 4 * v16 + 8) = v17 )
        {
          v14 = *(_QWORD *)(a5 + 1312);
          v15 = v13++;
          v16 = 3 * v15;
          v17 = *(_DWORD *)(v14 + 12 * v15 + 8);
          v37 = *(_QWORD *)(v14 + 12 * v15);
          v18 = *(_QWORD *)(a2 + 1024);
          *(_QWORD *)(v18 + 4 * v16) = v37;
        }
      }
      else
      {
        v8 = -1073741668;
      }
      goto LABEL_46;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_15:
    Pool2 = 0LL;
    goto LABEL_7;
  }
  v20 = *(unsigned __int16 *)(a4 + 46);
  *(_DWORD *)(a2 + 1036) = *(_DWORD *)(a5 + 1320);
  v21 = 12 * v6;
  if ( (v7[10] & 0x78647352) != 0x78647352 || (v22 = 0LL, !v7[11]) )
  {
LABEL_27:
    v23 = ExAllocatePool2(260LL, v21);
    goto LABEL_28;
  }
  while ( v7[v22] != 2019849042 )
  {
    if ( ++v22 >= (unsigned __int64)(unsigned int)v7[11] )
      goto LABEL_27;
  }
  v28 = 0;
  if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
  {
    v28 = 1;
    v21 += 16LL;
  }
  v23 = ExAllocatePool2(260LL, v21);
  if ( v23 )
  {
    memset(v39, 0, sizeof(v39));
    RtlCaptureStackBackTrace(0, 0x14u, v39, 0LL);
    if ( v28 && (unsigned __int64)(v23 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v7,
             (const void *)v23,
             (struct NSInstrumentation::CBackTrace *)v39) )
      {
        v23 += 16LL;
        goto LABEL_38;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v7,
                v23,
                (struct NSInstrumentation::CBackTrace *)v39) )
    {
      goto LABEL_38;
    }
    ExFreePoolWithTag((PVOID)v23, 0);
  }
  v23 = 0LL;
LABEL_38:
  v20 = v6;
LABEL_28:
  *(_QWORD *)(a2 + 1024) = v23;
  if ( v23 )
  {
    if ( (_WORD)v6 )
    {
      v24 = 0LL;
      do
      {
        v25 = *(_QWORD *)(a5 + 1312);
        v26 = *(_DWORD *)(v24 + v25 + 8);
        v27 = *(_QWORD *)(a2 + 1024);
        *(_QWORD *)(v27 + v24) = *(_QWORD *)(v24 + v25);
        *(_DWORD *)(v27 + v24 + 8) = v26;
        v24 += 12LL;
        --v20;
      }
      while ( v20 );
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741668;
  }
LABEL_46:
  v29 = *(unsigned int *)(a5 + 1324);
  *(_DWORD *)(a2 + 1040) = v29;
  *(_DWORD *)(a2 + 384) = *(_DWORD *)(a5 + 624);
  if ( !(_DWORD)v29 )
    return (unsigned int)-1073741668;
  if ( v8 == -1073741668 )
    return v8;
  v30 = gpLeakTrackingAllocator;
  v31 = v8;
  v32 = 2 * v29;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65687352) != 0x65687352
    || (v33 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_53:
    v34 = ExAllocatePool2(260LL, v32);
    goto LABEL_54;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v33) != 1701344082 )
  {
    if ( ++v33 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_53;
  }
  v36 = 0;
  if ( v32 < 0x1000 || (v32 & 0xFFF) != 0 )
  {
    v36 = 1;
    v32 += 16LL;
  }
  v34 = ExAllocatePool2(260LL, v32);
  if ( !v34 )
    goto LABEL_61;
  memset(v40, 0, sizeof(v40));
  RtlCaptureStackBackTrace(0, 0x14u, v40, 0LL);
  if ( v36 && (unsigned __int64)(v34 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v30,
           (const void *)v34,
           (struct NSInstrumentation::CBackTrace *)v40) )
    {
      v34 += 16LL;
      goto LABEL_54;
    }
LABEL_67:
    ExFreePoolWithTag((PVOID)v34, 0);
LABEL_61:
    v34 = 0LL;
    goto LABEL_54;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v30,
          v34,
          (struct NSInstrumentation::CBackTrace *)v40) )
    goto LABEL_67;
LABEL_54:
  *(_QWORD *)(a2 + 816) = v34;
  v8 = v31;
  if ( !v34 )
    return (unsigned int)-1073741668;
  return v8;
}
