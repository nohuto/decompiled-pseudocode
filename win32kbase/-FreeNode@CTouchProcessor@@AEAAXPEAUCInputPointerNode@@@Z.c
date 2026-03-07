void __fastcall CTouchProcessor::FreeNode(struct _KTHREAD **this, struct CInputPointerNode *a2)
{
  __int64 v3; // rax
  struct CInputPointerNode **v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rcx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10875);
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10877);
  if ( *((struct CInputPointerNode **)a2 + 32) != (struct CInputPointerNode *)((char *)a2 + 256) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10878);
  if ( *((struct CInputPointerNode **)a2 + 30) != (struct CInputPointerNode *)((char *)a2 + 240) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10879);
  v3 = *(_QWORD *)a2;
  if ( *(struct CInputPointerNode **)(*(_QWORD *)a2 + 8LL) != a2 )
    goto LABEL_18;
  v4 = (struct CInputPointerNode **)*((_QWORD *)a2 + 1);
  if ( *v4 != a2 )
    goto LABEL_18;
  *v4 = (struct CInputPointerNode *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (char *)a2 + 16;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = *((_QWORD *)a2 + 2);
  if ( (struct CInputPointerNode *)v6 == (struct CInputPointerNode *)((char *)a2 + 16) )
    goto LABEL_15;
  if ( *(char **)(v6 + 8) != v5 || (v7 = (char **)*((_QWORD *)a2 + 3), *v7 != v5) )
LABEL_18:
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
LABEL_15:
  if ( *((_DWORD *)a2 + 18) )
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 72));
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
}
