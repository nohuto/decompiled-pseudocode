_QWORD *__fastcall CreateInputContext(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v3 + 488) & 0x2000000) != 0 )
    return 0LL;
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  v6 = v3 + 792;
  if ( a1 )
  {
    if ( !*(_QWORD *)v6 )
      return 0LL;
  }
  v7 = *(_QWORD *)(v3 + 456);
  if ( !v7 )
    return 0LL;
  LOBYTE(v5) = 17;
  v8 = HMAllocObject(v3, v7, v5);
  v9 = (_QWORD *)v8;
  if ( !v8 )
    return 0LL;
  if ( a1 )
  {
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(v8 + 56, *(_QWORD *)(*(_QWORD *)v6 + 56LL));
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(*(_QWORD *)v6 + 56LL, v9);
  }
  else
  {
    v11[0] = v3 + 792;
    v11[1] = v8;
    HMAssignmentLock(v11, 0LL);
    *(_QWORD *)(*(_QWORD *)(v3 + 480) + 256LL) = v9[6];
    *(_QWORD *)(v9[5] + 16LL) = 0LL;
    v9[7] = 0LL;
  }
  *(_QWORD *)(v9[5] + 24LL) = a1;
  return v9;
}
