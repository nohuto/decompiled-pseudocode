__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  char *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  void ***v15; // rdx
  int v16; // eax
  void **v17; // rcx
  void **v18; // rax
  void *v19; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0LL;
  v2 = *(_QWORD *)(ThreadWin32Thread + 24);
  if ( v2 )
  {
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    v1 = v2;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v4 = -*(_QWORD *)CurrentProcessWin32Process;
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    GreAcquireHmgrSemaphore(v4);
    if ( !*(_QWORD *)(v5 + 40) )
    {
      v19 = 0LL;
      v7 = (char *)HmgAllocateSecureUserMemory(&v19);
      if ( v7 )
      {
        v8 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
               gpLeakTrackingAllocator,
               0x104uLL,
               0x70uLL,
               0x66636447u);
        if ( !v8 )
        {
          HmgFreeAllocateSecureUserMemory(v7, v19);
          GreReleaseHmgrSemaphore(v9);
          return 0LL;
        }
        v11 = (_QWORD *)(v5 + 192);
        v12 = *(_QWORD *)(v5 + 192);
        if ( *(_QWORD *)(v12 + 8) != v5 + 192 )
          __fastfail(3u);
        *v8 = v12;
        v8[1] = v11;
        *(_QWORD *)(v12 + 8) = v8;
        v13 = 11LL;
        *v11 = v8;
        v6 = v8 + 3;
        *((_DWORD *)v8 + 4) = 11;
        *(_QWORD *)(v5 + 40) = v7 + 3600;
        do
        {
          *v6 = v7;
          v7 += 360;
          ++v6;
          --v13;
        }
        while ( v13 );
      }
    }
    if ( *(_QWORD *)(v5 + 40) )
    {
      v1 = *(_QWORD *)(v5 + 40);
      v14 = v5 + 192;
      v15 = *(void ****)(v5 + 192);
      v16 = *((_DWORD *)v15 + 4) - 1;
      *((_DWORD *)v15 + 4) = v16;
      if ( v16 )
      {
        *(_QWORD *)(v5 + 40) = v15[(unsigned int)(v16 - 1) + 3];
      }
      else
      {
        v17 = *v15;
        if ( (*v15)[1] != v15 || (v18 = v15[1], *v18 != v15) )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = v18;
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
        if ( *(_QWORD *)v14 == v14 )
          v6 = 0LL;
        else
          v6 = *(_QWORD **)(*(_QWORD *)v14 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v14 + 16LL) - 1) + 24);
        *(_QWORD *)(v5 + 40) = v6;
      }
    }
    GreReleaseHmgrSemaphore((__int64)v6);
  }
  if ( (unsigned int)Feature_Servicing_CFONTPrintLeak__private_IsEnabledDeviceUsage() )
  {
    if ( v1 )
      *(_QWORD *)(v1 + 352) = 0LL;
  }
  return v1;
}
