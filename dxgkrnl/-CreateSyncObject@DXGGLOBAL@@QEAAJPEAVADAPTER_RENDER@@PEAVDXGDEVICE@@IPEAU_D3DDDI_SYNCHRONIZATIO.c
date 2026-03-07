__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        __int64 a1,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        bool a7,
        struct DXGPAGINGQUEUE *a8,
        __int64 *a9,
        struct DXGDEVICESYNCOBJECT **a10,
        unsigned int *a11,
        struct DXGADAPTERSYNCOBJECT **a12)
{
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rax
  int v19; // edi
  int v20; // eax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v26; // [rsp+50h] [rbp-48h]

  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 2606LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObjectInfo != NULL", 2606LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a9 )
  {
    *a9 = 0LL;
    if ( !a10 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( a10 )
  {
LABEL_5:
    *a10 = 0LL;
    goto LABEL_6;
  }
  WdLogSingleEntry1(1LL, 2607LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"ppSyncObject != NULL || ppDeviceSyncObject != NULL",
    2607LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_6:
  if ( a11 )
    *a11 = 0;
  if ( (*(_DWORD *)(a5 + 4) & 4) != 0 )
  {
    v24 = operator new[](0x140uLL, 0x4B677844u, 64LL);
    v16 = v24;
    if ( v24 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v24, a1, a5, a6);
      v25[39] = 0LL;
      v25[38] = v25 + 37;
      v25[37] = v25 + 37;
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
    {
LABEL_11:
      *(_DWORD *)(v16 + 284) ^= (*(_DWORD *)(v16 + 284) ^ (2 * *(unsigned __int8 *)(*((_QWORD *)a2 + 2) + 209LL))) & 2;
      Current = DXGPROCESS::GetCurrent();
      DXGSYNCOBJECT::SetVmSyncObject((DXGSYNCOBJECT *)v16, Current);
      v19 = DXGSYNCOBJECT::Initialize((DXGSYNCOBJECT *)v16, a8, a3);
      if ( v19 >= 0 )
      {
        if ( !a11 && (unsigned int)(*(_DWORD *)(v16 + 200) - 5) > 1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 24));
          goto LABEL_16;
        }
        v26.0 = *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E *)(a5 + 4);
        if ( *(_DWORD *)(v16 + 200) == 6 )
          v20 = DXGSYNCOBJECT::Open(
                  (DXGSYNCOBJECT *)v16,
                  a2,
                  a3,
                  a10,
                  a11,
                  (void **)(a5 + 24),
                  (unsigned __int64 *)(a5 + 32),
                  a4,
                  a12,
                  a7,
                  v26);
        else
          v20 = DXGSYNCOBJECT::Open(
                  (DXGSYNCOBJECT *)v16,
                  a2,
                  a3,
                  a10,
                  a11,
                  (void **)(a5 + 16),
                  (unsigned __int64 *)(a5 + 24),
                  a4,
                  a12,
                  a7,
                  v26);
        v19 = v20;
        if ( v20 >= 0 )
        {
LABEL_16:
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 536));
          v21 = (__int64 *)(a1 + 584);
          v22 = *(_QWORD *)(a1 + 584);
          if ( *(_QWORD *)(v22 + 8) != a1 + 584 )
            __fastfail(3u);
          *(_QWORD *)v16 = v22;
          *(_QWORD *)(v16 + 8) = v21;
          *(_QWORD *)(v22 + 8) = v16;
          *v21 = v16;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 536));
          if ( a9 )
            *a9 = v16;
          return (unsigned int)v19;
        }
      }
      DXGSYNCOBJECT::Destroy((DXGSYNCOBJECT *)v16);
      return (unsigned int)v19;
    }
  }
  else
  {
    v15 = operator new[](0x158uLL, 0x4B677844u, 64LL);
    v16 = v15;
    if ( v15 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v15, a1, a5, a6);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v17 + 296), a2);
      goto LABEL_11;
    }
  }
  WdLogSingleEntry1(6LL, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Out of memory allocating DXGSYNCOBJECT class, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
