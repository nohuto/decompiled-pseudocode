/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1C00C2298
 * Callers:
 *     MarkThreadsObjects @ 0x1C002D930 (MarkThreadsObjects.c)
 *     HMChangeOwnerThread @ 0x1C00C2280 (HMChangeOwnerThread.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C002DB2C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _HMPheFromObject @ 0x1C002FB80 (_HMPheFromObject.c)
 *     LockObjectAssignment @ 0x1C00983D0 (LockObjectAssignment.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C00AC6E8 (EtwTraceUserUpdateHandleOwner.c)
 *     IsGetClassPtrSupported @ 0x1C00C359C (IsGetClassPtrSupported.c)
 *     GetClassPtr @ 0x1C00C3B54 (GetClassPtr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  LONG_PTR result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v19; // rax
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
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
  v16 = (unsigned int)(unsigned __int8)v7[24] - 1;
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 896);
    --*(_DWORD *)(v3 + 896);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0
      && qword_1C029C548
      && (int)qword_1C029C548() >= 0
      && qword_1C029C550
      && (unsigned int)qword_1C029C550(a1) )
    {
      ++*(_DWORD *)(a2 + 900);
      --*(_DWORD *)(v3 + 900);
    }
    if ( v3 != a2 )
    {
      if ( (*(_DWORD *)(a1 + 320) & 0x20000000) != 0 )
      {
        --*(_DWORD *)(v3 + 904);
        if ( (HMPheFromObject((_DWORD *)a1)[25] & 1) != 0 )
          *(_DWORD *)(a1 + 320) &= ~0x20000000u;
        else
          ++*(_DWORD *)(a2 + 904);
      }
      if ( a1 == *(_QWORD *)(v3 + 784) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14);
    }
    result = *(_QWORD *)(v3 + 424);
    if ( *(_QWORD *)(a2 + 424) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0
        || (ClassPtr = (__int64 *)GetClassPtr(
                                    **(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL),
                                    *(_QWORD *)(a2 + 424),
                                    hModuleWin)) == 0LL )
      {
        v19 = *(_QWORD *)(a1 + 24);
        if ( v19 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 56LL) + 16LL) + 424LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (__int64 *)GetClassPtr(*((unsigned __int16 *)gpsi + 455), CurrentProcessWin32Process, hModuleWin);
      }
      if ( qword_1C029C568 && (int)qword_1C029C568() >= 0 && qword_1C029C570 )
        qword_1C029C570(*(_QWORD *)(v3 + 424), a1);
      v21 = *ClassPtr;
      if ( *ClassPtr )
        v22 = *(_QWORD *)(v21 + 16);
      else
        v22 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v22;
      *(_QWORD *)(a1 + 136) = v21;
      result = (LONG_PTR)qword_1C029C578;
      if ( qword_1C029C578 )
      {
        result = qword_1C029C578();
        if ( (int)result >= 0 )
        {
          if ( !qword_1C029C580 || (result = qword_1C029C580(*(_QWORD *)(a1 + 136), a1), !(_DWORD)result) )
          {
            result = *(_QWORD *)(a1 + 136);
            ++*(_DWORD *)(result + 72);
          }
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
