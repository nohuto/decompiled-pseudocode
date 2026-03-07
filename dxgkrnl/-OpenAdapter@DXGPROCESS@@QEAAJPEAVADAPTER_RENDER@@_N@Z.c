__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  int v4; // edi
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v10; // rax
  struct ADAPTER_RENDER *v11; // r14
  _QWORD *v12; // rax
  struct ADAPTER_RENDER **v13; // rcx
  int v14; // eax

  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 72, 0LL);
  *((_QWORD *)a2 + 10) = KeGetCurrentThread();
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL);
  v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7);
  if ( !v8 )
  {
    v10 = operator new[](0x98uLL, 0x4B677844u, 256LL);
    v8 = v10;
    if ( !v10 )
    {
      v4 = -1073741801;
      goto LABEL_3;
    }
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_DWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_QWORD *)(v10 + 80) = 0LL;
    *(_DWORD *)(v10 + 104) = 0;
    *(_WORD *)(v10 + 108) = 0;
    *(_QWORD *)(v10 + 112) = 0LL;
    *(_QWORD *)(v10 + 120) = 0LL;
    *(_DWORD *)(v10 + 128) = 0;
    v11 = (struct ADAPTER_RENDER *)(v10 + 88);
    *(_DWORD *)(v10 + 132) = 1;
    v12 = (_QWORD *)(v10 + 136);
    v12[1] = v12;
    *v12 = v12;
    *(_QWORD *)(v8 + 64) = this;
    *(_QWORD *)(v8 + 80) = a2;
    if ( *((struct _KTHREAD **)a2 + 10) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 4439LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_OpenAdapterLock.IsExclusiveOwner()",
        4439LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = (struct ADAPTER_RENDER **)*((_QWORD *)a2 + 38);
    if ( *v13 != (struct ADAPTER_RENDER *)((char *)a2 + 296) )
      __fastfail(3u);
    *(_QWORD *)v11 = (char *)a2 + 296;
    *(_QWORD *)(v8 + 96) = v13;
    *v13 = v11;
    *((_QWORD *)a2 + 38) = v11;
    ++*((_DWORD *)a2 + 78);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7) = v8;
  }
  ++*(_DWORD *)(v8 + 56);
  if ( a3 )
  {
    v14 = DXGPROCESS_RENDER_ADAPTER_INFO::Initialize((DXGPROCESS_RENDER_ADAPTER_INFO *)v8, this, a2);
    v4 = v14;
    if ( v14 < 0 )
      WdLogSingleEntry1(3LL, v14);
  }
LABEL_3:
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 < 0 )
    DXGPROCESS::CloseAdapter(this, (struct DXGADAPTER *const *)a2);
  return (unsigned int)v4;
}
