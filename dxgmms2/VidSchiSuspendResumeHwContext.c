__int64 __fastcall VidSchiSuspendResumeHwContext(LARGE_INTEGER a1, char a2)
{
  __int64 v2; // r13
  DWORD v4; // r15d
  __int64 v5; // rsi
  struct _VIDSCH_NODE **v6; // r14
  struct _VIDSCH_NODE *v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v9; // rbx
  ADAPTER_DISPLAY *v10; // rcx
  DWORD v11; // eax
  struct _VIDSCH_NODE *v12; // rcx
  _QWORD **v13; // rdi
  _QWORD *i; // rbx
  ADAPTER_DISPLAY *v15; // rcx
  _QWORD **v16; // rdi
  _QWORD *j; // rbx
  _QWORD v19[4]; // [rsp+28h] [rbp-59h] BYREF
  __int16 v20; // [rsp+48h] [rbp-39h]
  _QWORD v21[2]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-21h] BYREF
  __int16 v23; // [rsp+80h] [rbp-1h]
  _QWORD v24[4]; // [rsp+88h] [rbp+7h] BYREF
  __int16 v25; // [rsp+A8h] [rbp+27h]
  LARGE_INTEGER *v26; // [rsp+E8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1.QuadPart + 8);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  if ( a2 )
  {
    v23 = 0;
    v22[0] = v5 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v22);
    v6 = (struct _VIDSCH_NODE **)(a1.QuadPart + 16);
    if ( *(_QWORD *)(a1.QuadPart + 160) == *(_QWORD *)(a1.QuadPart + 168) )
    {
      ++*(_DWORD *)(v5 + 72);
      ++*((_DWORD *)*v6 + 430);
    }
    v7 = *v6;
    ++*(_QWORD *)(a1.QuadPart + 160);
    v26 = (LARGE_INTEGER *)(*((_QWORD *)v7 + 23) + 112LL * *((unsigned int *)v7 + 49));
    memset(v26, 0, 0x70uLL);
    *((_DWORD *)v7 + 49) = (*((_DWORD *)v7 + 49) + 1) & (*((_DWORD *)v7 + 48) - 1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = v26;
    v26[1] = PerformanceCounter;
    v9->LowPart = 11;
    v9[2] = a1;
    v9[3] = *(LARGE_INTEGER *)(a1.QuadPart + 160);
    AcquireSpinLock::Release((AcquireSpinLock *)v22);
    if ( *(_DWORD *)(v5 + 2556) == 2
      || (_InterlockedExchange((volatile __int32 *)*v6 + 122, 1),
          v10 = *(ADAPTER_DISPLAY **)(v5 + 8),
          v21[1] = *(_QWORD *)(a1.QuadPart + 160),
          v21[0] = *(_QWORD *)(a1.QuadPart + 48),
          v11 = DxgCoreInterface[43](v10, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v21),
          v9[5].LowPart = v11,
          v4 = v11,
          v11 != 259) )
    {
      v24[0] = v5 + 1728;
      v25 = 0;
      AcquireSpinLock::Acquire((Acquire *)v24);
      if ( *(_QWORD *)(a1.QuadPart + 168) != *(_QWORD *)(a1.QuadPart + 160) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)*v6 + 216);
        --*(_DWORD *)(v5 + 72);
        --*((_DWORD *)*v6 + 430);
        v12 = *v6;
        *(_QWORD *)(a1.QuadPart + 168) = *(_QWORD *)(a1.QuadPart + 160);
        VidSchiCheckHwSchNodeProgress(v12, 0);
        VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 168));
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v24);
    }
    v20 = 0;
    v19[0] = v5 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v19);
    if ( !*(_BYTE *)(a1.QuadPart + 92) )
    {
      *(_BYTE *)(a1.QuadPart + 92) = 1;
      v13 = (_QWORD **)(a1.QuadPart + 224);
      for ( i = *v13; i != v13; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)i + 29) == 1 )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)(i - 1));
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(v5 + 2556) != 2 )
    {
      VidSchiEnsureRootPageTableUpdated((void *)a1.QuadPart);
      v15 = *(ADAPTER_DISPLAY **)(v5 + 8);
      v26 = *(LARGE_INTEGER **)(a1.QuadPart + 48);
      v4 = DxgCoreInterface[44](v15, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v26);
    }
    v20 = 0;
    v19[0] = v5 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v19);
    if ( *(_BYTE *)(a1.QuadPart + 92) )
    {
      *(_BYTE *)(a1.QuadPart + 92) = 0;
      v16 = (_QWORD **)(a1.QuadPart + 224);
      for ( j = *v16; j != v16; j = (_QWORD *)*j )
      {
        if ( *((_DWORD *)j + 29) == 1 )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)(j - 1));
      }
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v19);
  return v4;
}
