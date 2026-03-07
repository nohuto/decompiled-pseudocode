char __fastcall DXGADAPTER::AcquireDdiSync(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v2 = *(_QWORD *)(a1 + 2928);
  v4 = a2;
  if ( !v2
    || !*(_QWORD *)(v2 + 744)
    || (LOBYTE(CurrentThread) = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(v2 + 736) + 8LL) + 72LL))(),
        !(_BYTE)CurrentThread)
    && (CurrentThread = KeGetCurrentThread(), *(struct _KTHREAD **)(a1 + 2936) != CurrentThread) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(a1 + 248)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, "g", v7, 73LL);
      KeWaitForSingleObject((PVOID)(a1 + 248), Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    if ( (_DWORD)v4 == 1 )
    {
      LOBYTE(CurrentThread) = ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 272), 1u);
    }
    else if ( (_DWORD)v4 == 2 )
    {
      LOBYTE(CurrentThread) = ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 272), 1u);
    }
    else
    {
      LOBYTE(CurrentThread) = WdLogSingleEntry1(2LL, v4);
      if ( bTracingEnabled )
      {
        LOBYTE(CurrentThread) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          LOBYTE(CurrentThread) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                                    v9,
                                    v8,
                                    v10,
                                    0,
                                    0,
                                    -1,
                                    (__int64)L"Invalid DDI synchronization level 0x%I64x",
                                    v4,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL);
      }
    }
  }
  return (char)CurrentThread;
}
