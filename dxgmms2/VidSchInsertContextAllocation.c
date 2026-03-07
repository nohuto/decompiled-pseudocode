__int64 __fastcall VidSchInsertContextAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax

  v9 = operator new(32LL, 0x31366956u, 256LL);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 24) = a4;
    v11 = a2 + 840;
    v12 = *a4;
    v13 = a2 + 808;
    if ( (*(_DWORD *)(*(_QWORD *)v12 + 68LL) & 0x20000000) == 0 )
    {
      v11 = a3 + 336;
      v13 = a3 + 304;
    }
    v10[2] = v13;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v14 = *(_QWORD **)(v11 + 8);
    if ( *v14 != v11 )
      __fastfail(3u);
    *v10 = v11;
    v10[1] = v14;
    *v14 = v10;
    *(_QWORD *)(v11 + 8) = v10;
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)(a1 + 52) = 1;
    *a5 = v10;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    *a5 = 0LL;
    return 3221225495LL;
  }
}
