void __fastcall CcAsyncReadWorkerThread(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  _QWORD *v9; // rax

  v1 = *(unsigned int *)(a1 + 36);
  v3 = *(_QWORD **)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = (__int64 *)(v4 + 1160);
  v7 = v3[35] + 404 * v1;
  v8 = v3[29] + 16 * v1;
  if ( !CcEnablePerVolumeLazyWriter )
    v6 = (__int64 *)(v5 + 1224);
  if ( *(_DWORD *)(a1 + 32) == 3 )
  {
    *(_DWORD *)(v7 + 4LL * *(unsigned int *)(a1 + 40)) = 0;
    CcAsyncReadWorker((_DWORD *)a1);
    *(_DWORD *)(v7 + 4LL * *(unsigned int *)(a1 + 40)) = -1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    v9 = *(_QWORD **)(v8 + 8);
    if ( *v9 != v8 )
      __fastfail(3u);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *v9 = a1;
    *(_QWORD *)(v8 + 8) = a1;
    --*(_DWORD *)(v3[30] + 4 * v1);
    ExReleasePushLockEx(v6, 0LL);
    CcDereferencePartition(v5);
    if ( v4 )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v4 + 8)) <= -1 )
        __fastfail(0xEu);
    }
  }
}
