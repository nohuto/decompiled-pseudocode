/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A6008
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C00A3AFC (-CitpStart@@YAJXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0240624 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C00B43FC (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, const char *a2)
{
  unsigned int v2; // ebx
  char v5; // r15
  unsigned __int64 v6; // rcx
  void *v7; // rax
  int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // rdi
  unsigned int v11; // edx
  char *v12; // r8
  __int64 v13; // rcx
  char *v14; // rcx
  char **v15; // rax
  char i; // cl
  PVOID v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 Pool2; // rsi
  char v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !BYTE5(qword_1C029A224) )
    return v2;
  v5 = -1;
  v6 = 96LL * (unsigned int)xmmword_1C029A204;
  if ( v6 > 0xFFFFFFFF )
  {
    v8 = -1073741675;
    v9 = 454;
    goto LABEL_45;
  }
  v7 = CitAllocZero((unsigned int)v6);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
  {
    v8 = -1073741670;
    v9 = 462;
LABEL_45:
    v2 = v8;
    CitpLogFailureWorker(v8, a2, v9);
    return v2;
  }
  v10 = (unsigned int)xmmword_1C029A204;
  v11 = 0;
  if ( (_DWORD)xmmword_1C029A204 )
  {
    v12 = (char *)a1 + 8;
    do
    {
      v13 = *(_QWORD *)a1 + 96LL * v11;
      *(_WORD *)(v13 + 32) = 1;
      *(_QWORD *)v13 = 0LL;
      *(_OWORD *)(v13 + 40) = 0LL;
      *(_OWORD *)(v13 + 56) = 0LL;
      *(_QWORD *)(v13 + 72) = 0LL;
      v14 = (char *)(v13 + 16);
      v15 = (char **)*((_QWORD *)a1 + 2);
      if ( *v15 != v12 )
        __fastfail(3u);
      *(_QWORD *)v14 = v12;
      ++v11;
      *((_QWORD *)v14 + 1) = v15;
      *v15 = v14;
      *((_QWORD *)a1 + 2) = v14;
      v10 = (unsigned int)xmmword_1C029A204;
    }
    while ( v11 < (unsigned int)xmmword_1C029A204 );
  }
  *((_DWORD *)a1 + 14) = v10;
  *((_DWORD *)a1 + 17) = v10 - ((unsigned int)v10 >> 2);
  if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
  {
    for ( i = -1; (_DWORD)v10; LODWORD(v10) = (unsigned int)v10 >> 1 )
      ++i;
    v10 = (unsigned int)(1 << i);
  }
  v17 = gpLeakTrackingAllocator;
  v18 = (unsigned int)(8 * v10);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) != 0x49637355
    || (v19 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_18:
    Pool2 = ExAllocatePool2(260LL, v18);
    goto LABEL_19;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1231254357 )
  {
    if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_18;
  }
  v21 = 0;
  if ( v18 < 0x1000 || ((8 * (_WORD)v10) & 0xFFF) != 0 )
  {
    v21 = 1;
    v18 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v18);
  if ( !Pool2 )
    goto LABEL_31;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v21 && (Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v17,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_19;
    }
    goto LABEL_30;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v17,
                           Pool2,
                           BackTrace) )
  {
LABEL_30:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_31:
    Pool2 = 0LL;
  }
LABEL_19:
  *((_QWORD *)a1 + 11) = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741670;
    v9 = 506;
    goto LABEL_45;
  }
  v22 = (unsigned __int64)a1 + 72;
  if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
  {
    for ( ; (_DWORD)v10; LODWORD(v10) = (unsigned int)v10 >> 1 )
      ++v5;
    v10 = (unsigned int)(1 << v5);
  }
  *(_DWORD *)v22 = 0;
  *((_QWORD *)a1 + 10) = Pool2;
  if ( (unsigned int)v10 > 0x4000000 )
    v10 = 0x4000000LL;
  *((_DWORD *)a1 + 19) = 32 * v10;
  v23 = v22 | 1;
  v24 = (unsigned int)v10;
  if ( Pool2 > Pool2 + 8 * v10 )
    v24 = 0LL;
  if ( v24 )
    memset64((void *)Pool2, v23, v24);
  return v2;
}
