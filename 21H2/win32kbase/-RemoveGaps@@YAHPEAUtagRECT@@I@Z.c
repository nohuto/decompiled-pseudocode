/*
 * XREFs of ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1C0210788
 * Callers:
 *     AlignRects @ 0x1C0077068 (AlignRects.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C02104B8 (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1C02106E0 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall RemoveGaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 Pool2; // rbx
  PVOID v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  char v9; // si
  unsigned int v10; // r11d
  _QWORD *v11; // rsi
  struct tagRECT *v12; // rdi
  _QWORD *v13; // r9
  struct tagRECT *v14; // r10
  unsigned int v15; // edx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  struct tagRECT *v18; // r14
  struct tagRECT **v19; // rsi
  unsigned __int64 v20; // rdi
  struct tagRECT **ContiguousRectangle; // rax
  struct tagRECT *v22; // rdx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-158h] BYREF
  struct tagRECT *v24[16]; // [rsp+C0h] [rbp-B8h] BYREF

  v2 = a2;
  memset(v24, 0, sizeof(v24));
  Pool2 = (__int64)v24;
  if ( (unsigned int)v2 <= 0x10 )
    goto LABEL_19;
  v5 = gpLeakTrackingAllocator;
  v6 = (unsigned int)(8 * v2);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74727355) != 0x74727355
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, v6);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1953657685 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  v9 = 0;
  if ( v6 < 0x1000 || ((8 * (_WORD)v2) & 0xFFF) != 0 )
  {
    v9 = 1;
    v6 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v6);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v9 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v5,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_19;
    }
LABEL_18:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v5,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_18;
  Pool2 += 16LL;
LABEL_7:
  if ( !Pool2 )
    return 0LL;
LABEL_19:
  CenterRectangles(a1, v2);
  v10 = -1;
  v11 = (_QWORD *)Pool2;
  v12 = &a1[v2];
  v13 = (_QWORD *)Pool2;
  v14 = a1;
  if ( a1 < v12 )
  {
    do
    {
      *v11 = v14;
      v15 = abs32(v14->top + (v14->bottom - v14->top) / 2) + abs32((v14->right - v14->left) / 2 + v14->left);
      v16 = v11;
      if ( v15 >= v10 )
        v16 = v13;
      ++v11;
      ++v14;
      v13 = v16;
      if ( v15 >= v10 )
        v15 = v10;
      v10 = v15;
    }
    while ( v14 < v12 );
    if ( v16 != (_QWORD *)Pool2 )
    {
      v17 = *v16;
      *v16 = *(_QWORD *)Pool2;
      *(_QWORD *)Pool2 = v17;
    }
  }
  v18 = a1 + 1;
  v19 = (struct tagRECT **)(Pool2 + 8);
  if ( v18 < v12 )
  {
    v20 = ((unsigned __int64)((char *)v12 - (char *)v18 - 1) >> 4) + 1;
    do
    {
      ContiguousRectangle = AddNextContiguousRectangle((struct tagRECT **)Pool2, v19, v2);
      if ( ContiguousRectangle != v19 )
      {
        v22 = *ContiguousRectangle;
        *ContiguousRectangle = *v19;
        *v19 = v22;
      }
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  if ( (struct tagRECT **)Pool2 != v24 )
  {
    if ( Pool2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
  }
  return 1LL;
}
