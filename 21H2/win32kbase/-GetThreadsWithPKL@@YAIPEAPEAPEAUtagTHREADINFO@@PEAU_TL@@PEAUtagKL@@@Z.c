/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0050170
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0050088 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     UserReAllocPool @ 0x1C008AE00 (UserReAllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  PVOID v3; // rsi
  __int64 v4; // rdi
  struct tagKL *v5; // rbp
  struct _TL *v6; // r15
  struct tagTHREADINFO ***v7; // r14
  int v8; // r13d
  __int64 v9; // rdx
  __int64 Pool2; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 i; // rbp
  _QWORD *j; // r14
  _QWORD *v16; // r15
  PVOID *v17; // rcx
  __int64 k; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  PVOID BackTrace[27]; // [rsp+20h] [rbp-D8h] BYREF

  v3 = gpLeakTrackingAllocator;
  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 128;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69747355) != 0x69747355
    || (v20 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 1024LL);
LABEL_3:
    if ( !Pool2 )
      return 0LL;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v20) != 1769239381 )
  {
    if ( ++v20 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 1040LL);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v3,
                             Pool2,
                             BackTrace) )
      goto LABEL_38;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           BackTrace) )
  {
LABEL_38:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
LABEL_4:
  v13 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v13 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          v16 = j - 93;
          if ( j != (_QWORD *)744 && (!a3 || a3 == (struct tagKL *)v16[55]) )
          {
            v17 = (PVOID *)v16[53];
            if ( *v17 == gpepCSRSS || *(_QWORD *)v16[53] == PsGetCurrentProcess(v17, v9, v11, v12) )
            {
              if ( (_DWORD)v4 == v8 )
              {
                v8 += 128;
                v21 = UserReAllocPool((void *)Pool2, 8LL * (unsigned int)v4);
                if ( !v21 )
                  goto LABEL_45;
                Pool2 = v21;
              }
              *(_QWORD *)(Pool2 + 8 * v4) = v16;
              v4 = (unsigned int)(v4 + 1);
            }
          }
        }
      }
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
    v5 = a3;
    v7 = a1;
    v6 = a2;
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 320); k; k = *(_QWORD *)(k + 664) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(k + 440) )
    {
      if ( (_DWORD)v4 == v8 )
      {
        v8 += 128;
        v22 = UserReAllocPool((void *)Pool2, 8LL * (unsigned int)v4);
        if ( !v22 )
        {
LABEL_45:
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (void *)Pool2);
          return 0LL;
        }
        Pool2 = v22;
      }
      *(_QWORD *)(Pool2 + 8 * v4) = k;
      v4 = (unsigned int)(v4 + 1);
    }
  }
  if ( (_DWORD)v4 && v7 )
  {
    *v7 = (struct tagTHREADINFO **)Pool2;
    if ( qword_1C029BD10 )
      qword_1C029BD10(Pool2, v6, Win32FreePool);
  }
  else
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
  }
  return (unsigned int)v4;
}
