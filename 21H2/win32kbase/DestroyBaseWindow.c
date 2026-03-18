/*
 * XREFs of DestroyBaseWindow @ 0x1C01662F0
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyObject @ 0x1C004E3A0 (HMDestroyObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     CleanupInputDelegation @ 0x1C0097BF0 (CleanupInputDelegation.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C0166160 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8A20 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C01E7C30 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rdx
  char **v6; // rsi
  char *v7; // rdi
  __int64 v8; // rax
  char *v9; // rdx
  char *v10; // rdx

  a1[7] |= 0x80u;
  if ( a1[18] )
    CleanupInputDelegation(a1);
  if ( qword_1C029D730 )
    qword_1C029D730(a1);
  if ( *((_QWORD *)a1 + 10) )
  {
    DeleteBaseWindowProperties((struct tagBWND *)a1, a2, a3, a4);
    v5 = (char *)*((_QWORD *)a1 + 10);
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v5);
    *((_QWORD *)a1 + 10) = 0LL;
  }
  v6 = (char **)(a1 + 24);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (char *)v6 )
      break;
    if ( *((char ***)v7 + 1) != v6 || (v8 = *(_QWORD *)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *((_QWORD *)v7 + 2), 7LL, v7);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
  }
  v9 = (char *)*((_QWORD *)a1 + 15);
  if ( v9 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v9);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  v10 = (char *)*((_QWORD *)a1 + 17);
  if ( v10 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v10);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  return HMDestroyObject(a1);
}
