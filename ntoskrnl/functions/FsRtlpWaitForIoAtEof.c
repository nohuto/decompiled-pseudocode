char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v6; // r14
  int IoPriorityThread; // esi
  int v8; // eax
  int v9; // r9d
  KPRIORITY PriorityThread; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax
  KPRIORITY v15; // ecx
  KPRIORITY v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-38h]
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v22; // [rsp+42h] [rbp-2Eh]
  char v23; // [rsp+43h] [rbp-2Dh]
  int v24; // [rsp+44h] [rbp-2Ch]
  _QWORD v25[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v26; // [rsp+68h] [rbp-8h]
  int v27; // [rsp+6Ch] [rbp-4h]

  v19 = 0LL;
  v20 = 0LL;
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *(struct _KTHREAD **)a1;
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) )
  {
    v8 = PsGetIoPriorityThread(v6);
    if ( v8 < v9 )
    {
      PsBoostThreadIoEx(v6, 0LL, 0LL, 0LL);
      IoBoostThreadIoPriority(v6, (unsigned int)IoPriorityThread, 0LL);
      *(_BYTE *)(a1 + 36) = 1;
    }
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread(v6) )
      KeSetPriorityBoost(v6, (unsigned int)PriorityThread);
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = a1 + 8;
  while ( v11 != v12 )
  {
    v15 = *(_DWORD *)(v11 + 56);
    if ( v15 >= PriorityThread && *(_DWORD *)(v11 + 60) >= IoPriorityThread )
      break;
    v16 = PriorityThread;
    if ( PriorityThread <= v15 )
      v16 = *(_DWORD *)(v11 + 56);
    v17 = *(_DWORD *)(v11 + 60);
    *(_DWORD *)(v11 + 56) = v16;
    v18 = IoPriorityThread;
    if ( IoPriorityThread <= v17 )
      v18 = v17;
    *(_DWORD *)(v11 + 60) = v18;
    v11 = *(_QWORD *)(v11 + 8);
  }
  v24 = 0;
  v25[1] = v25;
  v25[0] = v25;
  v13 = *(_QWORD **)(a1 + 16);
  Object = 1;
  v22 = 6;
  v25[3] = CurrentThread;
  v26 = PriorityThread;
  v27 = IoPriorityThread;
  v25[2] = a3;
  if ( *v13 != v12 )
    __fastfail(3u);
  v20 = v13;
  v19 = a1 + 8;
  *v13 = &v19;
  *(_QWORD *)(a1 + 16) = &v19;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && v27 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
