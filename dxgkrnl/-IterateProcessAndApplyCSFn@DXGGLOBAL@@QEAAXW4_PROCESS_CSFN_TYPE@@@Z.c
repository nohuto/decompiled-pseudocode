void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, int a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  DXGPROCESS *Current; // rax
  DXGPROCESS *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *i; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+58h] [rbp+17h] BYREF
  _BYTE v15[16]; // [rsp+68h] [rbp+27h] BYREF
  _BYTE v16[16]; // [rsp+78h] [rbp+37h] BYREF
  _QWORD v17[2]; // [rsp+88h] [rbp+47h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v14[1] = v14;
  v4 = a1 + 432;
  v14[0] = v14;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 432, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 448));
  v5 = *(_QWORD **)(a1 + 416);
  v17[0] = a1 + 416;
  while ( 1 )
  {
    v17[1] = v5;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v17);
    v7 = Current;
    if ( !Current )
      break;
    DXGPROCESS::AcquireReference(Current);
    v8 = (_QWORD *)operator new[](0x18uLL, 0x4B677844u, 256LL);
    if ( !v8 )
    {
      WdLogSingleEntry1(6LL, 655LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"IterateProcessAndApplyCSFn: Failed to allocate ProcessListEntry",
        655LL,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
    }
    *v8 = v7;
    v9 = v14[0];
    v10 = v8 + 1;
    if ( *(_QWORD **)(v14[0] + 8LL) != v14 )
LABEL_17:
      __fastfail(3u);
    *v10 = v14[0];
    v10[1] = v14;
    *(_QWORD *)(v9 + 8) = v10;
    v14[0] = v10;
    v5 = (_QWORD *)*v5;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  for ( i = (_QWORD *)v14[0]; i != v14; i = (_QWORD *)*i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(*(i - 1) + 104LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    DXGPROCESS::ApplyCsFunction(*(i - 1), a2);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  while ( 1 )
  {
    v12 = v14[0];
    if ( (_QWORD *)v14[0] == v14 )
      break;
    if ( *(_QWORD **)(v14[0] + 8LL) != v14 )
      goto LABEL_17;
    v13 = *(_QWORD *)v14[0];
    if ( *(_QWORD *)(*(_QWORD *)v14[0] + 8LL) != v14[0] )
      goto LABEL_17;
    v14[0] = *(_QWORD *)v14[0];
    *(_QWORD *)(v13 + 8) = v14;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v12 - 8));
    operator delete((void *)(v12 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
