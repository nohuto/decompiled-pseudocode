__int64 __fastcall MiZeroHugeRangeCore(unsigned __int16 *a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rsi
  int v6; // r14d
  unsigned int v7; // eax
  char v8; // bl
  unsigned int v9; // r13d
  _DWORD *Pool; // rax
  __int64 v11; // r8
  _DWORD *v12; // r15
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rsi
  int v17; // r12d
  _DWORD *v18; // rdi
  KPRIORITY PriorityThread; // r14d
  struct _KTHREAD *v20; // rbx
  unsigned int v21; // ebx
  __int16 v22; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v23; // [rsp+5Ch] [rbp-55h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-4Dh]
  int v26; // [rsp+68h] [rbp-49h]
  HANDLE Handle; // [rsp+70h] [rbp-41h] BYREF
  PKTHREAD Thread; // [rsp+78h] [rbp-39h]
  unsigned __int16 *v29; // [rsp+80h] [rbp-31h]
  PVOID Object; // [rsp+88h] [rbp-29h] BYREF
  __int64 v31; // [rsp+90h] [rbp-21h]
  _OWORD v32[3]; // [rsp+98h] [rbp-19h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+C8h] [rbp+17h] BYREF

  v29 = a1;
  v26 = a4;
  v31 = a2;
  v23 = 0;
  v5 = a3 & 0x3FFFFF;
  v24 = 0;
  Handle = 0LL;
  v22 = 0;
  memset(v32, 0, sizeof(v32));
  v6 = MiPageToNode(v5 << 18);
  v25 = MiSelectEngine(v6, 0, &v24, &v23);
  Thread = KeGetCurrentThread();
  v7 = MiInitializeZeroGroup(&v22, (__int64)a1, 0, v23, v6);
  v8 = v22;
  v9 = v7;
  v23 = v7;
  if ( v7 == 1 && (_BYTE)v22 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x98uLL, 0x6D5A694Du);
  v12 = Pool;
  if ( !Pool )
    return 0LL;
  v14 = v24;
  if ( !v25 && !(unsigned int)MiAllocateAcceleratorDescriptor(0LL, v24, v11, (_QWORD *)Pool + 18) )
  {
LABEL_7:
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  *v12 = 512;
  *((_QWORD *)v12 + 1) = v12 + 4;
  *((_QWORD *)v12 + 10) = v31;
  v15 = v26;
  *((_QWORD *)v12 + 11) = qword_140C67A70 + 8 * v5;
  v12[26] = v15;
  KeInitializeGate((__int64)(v12 + 28), 0);
  if ( a1 == MiSystemPartition )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = *((_QWORD *)a1 + 25);
    *((_QWORD *)v12 + 17) = v16;
  }
  v12[25] = v9 + 1;
  if ( v8 )
    --v9;
  v17 = 0;
  if ( v9 || v8 )
  {
    v18 = MiInitializeAffinityWalker(v25, v14, v6);
    if ( !v9 )
      goto LABEL_34;
    v29 = *(unsigned __int16 **)(*((_QWORD *)v29 + 25) + 120LL);
    PriorityThread = KeQueryPriorityThread(Thread);
    KeSetSystemPriorityThread((ULONG_PTR)Thread, 15);
    while ( (int)MiGetNextAffinityWalker((__int64)v18, v32) >= 0 )
    {
      if ( v16 && _InterlockedIncrement64((volatile signed __int64 *)(v16 + 32)) <= 1 )
        __fastfail(0xEu);
      if ( (int)PsCreateSystemThreadEx(
                  (__int64)&Handle,
                  0x1FFFFF,
                  0LL,
                  v29,
                  0LL,
                  (__int64)MiZeroHugeRangeWorker,
                  (__int64)v12,
                  0LL,
                  (_DWORD *)v32 + 1) < 0 )
      {
        if ( v16 )
          PsDereferencePartition(v16);
        break;
      }
      Object = 0LL;
      ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      v20 = (struct _KTHREAD *)Object;
      if ( KeQueryPriorityThread((PKTHREAD)Object) != PriorityThread )
        KeSetPriorityThread(v20, PriorityThread);
      ObfDereferenceObject(v20);
      ObCloseHandle(Handle, 0);
      if ( ++v17 >= v9 )
        goto LABEL_30;
    }
    _InterlockedExchangeAdd(v12 + 25, v17 - v9);
LABEL_30:
    v8 = v22;
    KeClearSystemPriorityThread((ULONG_PTR)Thread, 15);
    if ( v17 )
    {
LABEL_34:
      if ( !v8 )
        goto LABEL_43;
    }
    else if ( !v8 )
    {
      MiFreeNextAffinityWalker(v18);
      goto LABEL_7;
    }
    v21 = -1;
    if ( HIBYTE(v22) && (int)MiGetNextAffinityWalker((__int64)v18, v32) >= 0 )
    {
      Affinity = *(struct _GROUP_AFFINITY *)((char *)v32 + 8);
      v21 = MiSetIdealProcessorThread(&Affinity);
    }
    if ( v16 && _InterlockedIncrement64((volatile signed __int64 *)(v16 + 32)) <= 1 )
      __fastfail(0xEu);
    MiZeroHugeRangeWorker((PRTL_BITMAP)v12);
    if ( v21 != -1 )
      MiRestoreIdealProcessorThread(v21);
    goto LABEL_43;
  }
  v18 = 0LL;
LABEL_43:
  MiFreeNextAffinityWalker(v18);
  if ( v17 )
    KeWaitForGate((__int64)(v12 + 28), 0LL, 0);
  if ( *((_QWORD *)v12 + 18) )
    MiReturnUnusedHugeDescriptors((__int64)v12);
  MiDereferenceHugeIoRange(v12);
  return 1LL;
}
