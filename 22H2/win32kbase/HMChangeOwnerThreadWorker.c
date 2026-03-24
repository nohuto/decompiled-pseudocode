/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1C00A66E4
 * Callers:
 *     MarkThreadsObjects @ 0x1C0034720 (MarkThreadsObjects.c)
 *     HMChangeOwnerThread @ 0x1C00A66A0 (HMChangeOwnerThread.c)
 * Callees:
 *     _HMPheFromObject @ 0x1C002E230 (_HMPheFromObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C003492C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     LockObjectAssignment @ 0x1C0086850 (LockObjectAssignment.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C009B7E8 (EtwTraceUserUpdateHandleOwner.c)
 *     IsGetClassPtrSupported @ 0x1C00B2228 (IsGetClassPtrSupported.c)
 *     GetClassPtr @ 0x1C00B35A0 (GetClassPtr.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

LONG_PTR __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  HANDLE ThreadId; // rax
  unsigned __int8 v10; // cl
  char EtwUserHandleType; // al
  int v12; // r8d
  LONG_PTR result; // rax
  int v14; // edi
  int v15; // eax
  __int64 v17; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v19; // rax
  __int64 CurrentProcessWin32Process; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C024FA38 + dword_1C024FA40 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 1) + 424LL);
  --*(_DWORD *)(v8 + 68);
  v5[v6 + 1] = a2;
  ThreadId = PsGetThreadId(*(PETHREAD *)a2);
  v10 = v7[24];
  *((_QWORD *)v7 + 1) = ThreadId;
  EtwUserHandleType = GetEtwUserHandleType(v10);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v5[v6], EtwUserHandleType, v12);
  *(_QWORD *)(a1 + 16) = v5[v6 + 1];
  result = v5[v6 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 424) + 68LL);
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 896);
    --*(_DWORD *)(v3 + 896);
    v14 = -1073741637;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      v15 = qword_1C02567F8 ? qword_1C02567F8() : -1073741637;
      if ( v15 >= 0 )
      {
        if ( qword_1C0256800 ? qword_1C0256800(a1) : 0 )
        {
          ++*(_DWORD *)(a2 + 900);
          --*(_DWORD *)(v3 + 900);
        }
      }
    }
    if ( v3 != a2 )
    {
      if ( (*(_DWORD *)(a1 + 324) & 0x20000000) != 0 )
      {
        --*(_DWORD *)(v3 + 904);
        if ( (HMPheFromObject((_DWORD *)a1)[25] & 1) != 0 )
          *(_DWORD *)(a1 + 324) &= ~0x20000000u;
        else
          ++*(_DWORD *)(a2 + 904);
      }
      if ( a1 == *(_QWORD *)(v3 + 784) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3827LL);
    }
    result = *(_QWORD *)(v3 + 424);
    if ( *(_QWORD *)(a2 + 424) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0 )
        ClassPtr = 0LL;
      else
        ClassPtr = (__int64 *)GetClassPtr(**(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL), *(_QWORD *)(a2 + 424));
      if ( !ClassPtr )
      {
        v19 = *(_QWORD *)(a1 + 24);
        if ( v19 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 56LL) + 16LL) + 424LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (__int64 *)GetClassPtr(*((unsigned __int16 *)gpsi + 455), CurrentProcessWin32Process);
      }
      if ( qword_1C0256818 )
        v21 = qword_1C0256818();
      else
        v21 = -1073741637;
      if ( v21 >= 0 && qword_1C0256820 )
        qword_1C0256820(*(_QWORD *)(v3 + 424), a1);
      v22 = *ClassPtr;
      if ( *ClassPtr )
        v23 = *(_QWORD *)(v22 + 16);
      else
        v23 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v23;
      *(_QWORD *)(a1 + 136) = v22;
      result = (LONG_PTR)qword_1C0256828;
      if ( qword_1C0256828 )
      {
        result = qword_1C0256828();
        v14 = result;
      }
      if ( v14 >= 0 )
      {
        result = qword_1C0256830 ? qword_1C0256830(*(_QWORD *)(a1 + 136), a1) : 0LL;
        if ( !(_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 136);
          ++*(_DWORD *)(result + 72);
        }
      }
    }
  }
  else if ( v7[24] == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v3 + 456));
  }
  return result;
}
