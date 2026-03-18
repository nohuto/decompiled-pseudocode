/*
 * XREFs of ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01C6170
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BF98C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x1C01BFD54 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01C6030 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeNode(struct _KTHREAD **this, struct CInputPointerNode *a2, __int64 a3)
{
  __int64 v4; // rax
  struct CInputPointerNode **v5; // rcx
  char *v6; // rax
  __int64 v7; // rdx
  char **v8; // rcx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((struct CInputPointerNode **)a2 + 32) != (struct CInputPointerNode *)((char *)a2 + 256) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((struct CInputPointerNode **)a2 + 30) != (struct CInputPointerNode *)((char *)a2 + 240) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *(_QWORD *)a2;
  if ( *(struct CInputPointerNode **)(*(_QWORD *)a2 + 8LL) != a2 )
    goto LABEL_18;
  v5 = (struct CInputPointerNode **)*((_QWORD *)a2 + 1);
  if ( *v5 != a2 )
    goto LABEL_18;
  *v5 = (struct CInputPointerNode *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = (char *)a2 + 16;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v7 = *((_QWORD *)a2 + 2);
  if ( (struct CInputPointerNode *)v7 == (struct CInputPointerNode *)((char *)a2 + 16) )
    goto LABEL_15;
  if ( *(char **)(v7 + 8) != v6 || (v8 = (char **)*((_QWORD *)a2 + 3), *v8 != v6) )
LABEL_18:
    __fastfail(3u);
  *v8 = (char *)v7;
  *(_QWORD *)(v7 + 8) = v8;
LABEL_15:
  if ( *((_DWORD *)a2 + 18) )
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 72));
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)a2);
}
