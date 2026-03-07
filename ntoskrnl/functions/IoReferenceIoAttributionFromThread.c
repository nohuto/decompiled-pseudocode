__int64 __fastcall IoReferenceIoAttributionFromThread(__int64 a1, __int64 a2)
{
  __int64 WorkOnBehalfThread; // rax
  void *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(a1, &v9);
  v5 = (void *)WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    v6 = *(_QWORD *)(WorkOnBehalfThread + 544);
  else
    v6 = *(_QWORD *)(a1 + 544);
  v7 = IopReferenceIoAttributionFromProcess(v6, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDeleteWithTag(v5, 0x746C6644u);
  return v7;
}
