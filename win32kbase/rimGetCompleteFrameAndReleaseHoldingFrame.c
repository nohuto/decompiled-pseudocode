__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  _QWORD *HoldingFrame; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v11; // r14
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 Pool2; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r10
  char v17; // r15
  __int64 v18; // r13
  unsigned int v19; // r14d
  struct tagRIMPOINTERINFONODE *i; // r15
  __int128 v21; // xmm0
  _OWORD *v22; // rcx
  __int64 *v23; // r15
  __int64 v24; // r14
  __int64 v25; // r15
  int v26; // eax
  unsigned int v27; // eax
  unsigned __int64 v29[2]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v30; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-81h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v33; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v34; // [rsp+130h] [rbp+77h]
  __int64 v35; // [rsp+138h] [rbp+7Fh]

  v34 = a3;
  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1046);
  }
  if ( !*((_DWORD *)HoldingFrame + 4) )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1047);
  }
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1048);
  }
  if ( !*((_DWORD *)HoldingFrame + 10) )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1049);
  }
  if ( *((_DWORD *)HoldingFrame + 10) != *((_DWORD *)HoldingFrame + 11) )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1050);
  }
  ApiSetEtwTraceBeginPointerFrameCommit(v5, *((unsigned int *)HoldingFrame + 10));
  v7 = HoldingFrame[7];
  v8 = 0LL;
  while ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 4);
    v7 = *(_QWORD *)(v7 + 16);
    v8 = ((v9 + 7) & 0xFFFFFFF8) + (_DWORD)v8 + 24;
  }
  v10 = 192 * *((_DWORD *)HoldingFrame + 10);
  LODWORD(v35) = v8 + v10 + 240;
  if ( !(_DWORD)v35 )
    goto LABEL_57;
  v11 = gpLeakTrackingAllocator;
  v12 = (unsigned int)v8 + v10 + 240;
  v33 = 1717793618;
  v30 = 260LL;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  v31 = v12;
  if ( !v13 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v12, 1717793618LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
LABEL_35:
    v18 = Pool2;
    if ( !Pool2 )
      goto LABEL_57;
    goto LABEL_39;
  }
  if ( v13 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x66637352u)
      || v12 + 16 < v12 )
    {
      goto LABEL_57;
    }
    v15 = (_QWORD *)ExAllocatePool2(v30 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, v33);
    Pool2 = (__int64)v15;
    if ( !v15
      || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
          *v15 = 1717793618LL,
          Pool2 = (__int64)(v15 + 2),
          v15 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v11 + 1),
        0x66637352uLL);
    }
    goto LABEL_35;
  }
  if ( v13 != 2 )
    goto LABEL_57;
  v29[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1717793618, v29) )
  {
    v29[0] = (unsigned __int64)&v30;
    v29[1] = (unsigned __int64)&v33;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v11,
              (__int64)v29,
              &v31);
    goto LABEL_35;
  }
  v17 = 0;
  if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
  {
    v12 += 16LL;
    v17 = 1;
    v31 = v12;
  }
  Pool2 = ExAllocatePool2(v16, v12, 1717793618LL);
  if ( !Pool2 )
    goto LABEL_57;
  _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v11,
           (const void *)Pool2,
           v29[0],
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_35;
    }
LABEL_56:
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_57;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v11,
          Pool2,
          v29[0],
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_56;
  v18 = Pool2;
LABEL_39:
  v7 = Pool2 + 240;
  *(_DWORD *)Pool2 = v35;
  v19 = 0;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_DWORD *)(Pool2 + 24) = *((_DWORD *)HoldingFrame + 10);
  *(_QWORD *)(Pool2 + 32) = HoldingFrame[3];
  *(_QWORD *)(Pool2 + 48) = HoldingFrame[4];
  *(_QWORD *)(Pool2 + 232) = Pool2 + 240;
  for ( i = (struct tagRIMPOINTERINFONODE *)HoldingFrame[9];
        v19 < *((_DWORD *)HoldingFrame + 10);
        i = (struct tagRIMPOINTERINFONODE *)((char *)i + 192) )
  {
    v21 = *(_OWORD *)i;
    v22 = (_OWORD *)(192LL * v19 + v7);
    v35 = 192LL * v19;
    *v22 = v21;
    v22[1] = *((_OWORD *)i + 1);
    v22[2] = *((_OWORD *)i + 2);
    v22[3] = *((_OWORD *)i + 3);
    v22[4] = *((_OWORD *)i + 4);
    v22[5] = *((_OWORD *)i + 5);
    v22[6] = *((_OWORD *)i + 6);
    v22[7] = *((_OWORD *)i + 7);
    v22[8] = *((_OWORD *)i + 8);
    v22[9] = *((_OWORD *)i + 9);
    v22[10] = *((_OWORD *)i + 10);
    v22[11] = *((_OWORD *)i + 11);
    DbgDumpNode(v19, i);
    v7 = *(_QWORD *)(Pool2 + 232);
    if ( i == (struct tagRIMPOINTERINFONODE *)HoldingFrame[10] )
      *(_QWORD *)(Pool2 + 216) = v7 + v35;
    ++v19;
  }
  *(_DWORD *)(Pool2 + 28) = *((_DWORD *)HoldingFrame + 12);
  if ( HoldingFrame[7] )
  {
    v23 = (__int64 *)(Pool2 + 224);
    *(_QWORD *)(Pool2 + 224) = v7 + v10;
  }
  else
  {
    v23 = (__int64 *)(v18 + 224);
  }
  v24 = HoldingFrame[7];
  v25 = *v23;
  while ( v24 )
  {
    while ( 1 )
    {
      *(_DWORD *)v25 = *(_DWORD *)v24;
      *(_DWORD *)(v25 + 4) = *(_DWORD *)(v24 + 4);
      *(_QWORD *)(v25 + 8) = v25 + 24;
      memmove((void *)(v25 + 24), *(const void **)(v24 + 8), *(unsigned int *)(v24 + 4));
      v7 = 0LL;
      v26 = *(_DWORD *)(v24 + 4) + 7;
      *(_QWORD *)(v25 + 16) = 0LL;
      v27 = (v26 & 0xFFFFFFF8) + 24;
      if ( *(_QWORD *)(v24 + 16) )
      {
        v7 = v25 + v27;
        *(_QWORD *)(v25 + 16) = v7;
      }
      v24 = *(_QWORD *)(v24 + 16);
      v25 = v7;
      if ( !v7 )
        break;
      if ( !v24 )
        goto LABEL_53;
    }
    if ( !v24 )
      break;
LABEL_53:
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1204);
  }
  v3 = 1;
  *v34 = Pool2;
LABEL_57:
  rimReclaimHoldingFrame(v7, v8, HoldingFrame);
  return v3;
}
