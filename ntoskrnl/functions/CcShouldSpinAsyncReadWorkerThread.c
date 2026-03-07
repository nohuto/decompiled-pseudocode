char __fastcall CcShouldSpinAsyncReadWorkerThread(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // r12
  _DWORD *v9; // rax
  ULONG_PTR v10; // rbp
  char v11; // bl
  _QWORD **v12; // rdi
  unsigned int v13; // ecx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx

  v4 = a2[2];
  v6 = a4;
  v9 = (_DWORD *)(a2[35] + 404LL * a4);
  v10 = v4 + 1160;
  v11 = 1;
  v12 = (_QWORD **)(a2[29] + 16LL * a4);
  if ( !CcEnablePerVolumeLazyWriter )
    v10 = a1 + 1224;
  v13 = 0;
  if ( CcMaxAsyncReadWorkerThreads )
  {
    while ( *v9 >= 0x3Fu )
    {
      ++v13;
      ++v9;
      if ( v13 >= CcMaxAsyncReadWorkerThreads )
        goto LABEL_8;
    }
    return 0;
  }
  else
  {
LABEL_8:
    if ( a3 )
    {
      *a3 = 0LL;
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      v15 = *v12;
      if ( *v12 != v12 )
      {
        if ( (_QWORD **)v15[1] != v12 || (v16 = (_QWORD *)*v15, *(_QWORD **)(*v15 + 8LL) != v15) )
          __fastfail(3u);
        *v12 = v16;
        v16[1] = v12;
        *a3 = v15;
        ++*(_DWORD *)(a2[30] + 4 * v6);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
          __fastfail(0xEu);
        if ( v4 && _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8)) <= 1 )
          __fastfail(0xEu);
      }
      ExReleasePushLockEx(v10, 0LL);
      if ( !*a3 )
        _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
    }
  }
  return v11;
}
