NTSTATUS __fastcall ObpSetDeviceMap(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, __int64 *a6)
{
  __int64 v8; // rbx
  NTSTATUS result; // eax
  _QWORD *v10; // rsi
  __int64 Pool2; // rax
  __int64 v12; // rdi
  NTSTATUS v13; // ebp
  _QWORD *v14; // rbp
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v17; // r12
  volatile signed __int64 *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  struct _KTHREAD *v21; // rax
  bool v22; // zf
  int v23; // ebx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  Objecta = 0LL;
  v8 = 0LL;
  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  v10 = Objecta;
  if ( result < 0 )
    return result;
  if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
  {
    v23 = -1073741811;
LABEL_37:
    ObfDereferenceObject(v10);
    return v23;
  }
  Pool2 = ExAllocatePool2(256LL, 296LL, 1833198159LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v23 = -1073741670;
    goto LABEL_37;
  }
  *(_QWORD *)(Pool2 + 240) = 1LL;
  *(_QWORD *)Pool2 = v10;
  v13 = ObOpenObjectByPointer(v10, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)(Pool2 + 248));
  if ( v13 < 0 )
  {
    ObfDereferenceObject(v10);
    ExFreePoolWithTag((PVOID)v12, 0x6D44624Fu);
    return v13;
  }
  else
  {
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      *(_QWORD *)(v12 + 16) = Object;
    }
    v14 = 0LL;
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)Object);
    CurrentThread = KeGetCurrentThread();
    v17 = (volatile signed __int64 *)ServerSiloGlobals;
    --CurrentThread->SpecialApcDisable;
    v18 = (volatile signed __int64 *)(ServerSiloGlobals + 120);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 120), 0LL);
    v19 = v10[38];
    if ( v19 )
    {
      v14 = (_QWORD *)v12;
      v12 = v10[38];
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 240), 1uLL) <= 0 )
        __fastfail(0xEu);
    }
    else
    {
      if ( (a5 & 1) != 0 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        *v17 = v12 + 15;
      }
      v10[38] = v12;
      if ( (a5 & 2) != 0 )
      {
        v20 = *v17 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v10 != *(_QWORD **)v20 )
        {
          *(_QWORD *)(v12 + 8) = *(_QWORD *)v20;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 240), 1uLL) <= 0 )
            __fastfail(0xEu);
          *(_QWORD *)(v12 + 24) = v20;
        }
      }
    }
    if ( a2 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      v8 = _InterlockedExchange64((volatile __int64 *)(a2 + 1416), (v12 | 0xF) & -(__int64)(v12 != 0));
    }
    if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17 + 15);
    KeAbPostRelease((ULONG_PTR)(v17 + 15));
    v21 = KeGetCurrentThread();
    v22 = v21->SpecialApcDisable++ == -1;
    if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
      KiCheckForKernelApcDelivery();
    if ( v14 )
    {
      --v14[30];
      ObpDeleteDeviceMap(v14);
    }
    if ( v8 )
      ObDereferenceDeviceMap((volatile signed __int64 *)(v8 & 0xFFFFFFFFFFFFFFF0uLL), (v8 & 0xF) + 1);
    if ( a6 )
      *a6 = v12;
    else
      ObDereferenceDeviceMap((volatile signed __int64 *)v12, 1u);
    return 0;
  }
}
