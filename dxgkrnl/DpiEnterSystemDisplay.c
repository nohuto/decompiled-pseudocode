/*
 * XREFs of DpiEnterSystemDisplay @ 0x1C001BC60
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0041FA0 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01801F4 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0180708 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiEnterSystemDisplay(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ecx
  unsigned int i; // r13d
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  ADAPTER_DISPLAY *v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rcx
  _BYTE *v16; // rsi
  __int64 v17; // rcx
  int (__fastcall *v18)(__int64, __int64, int *, int *, int *, int *); // rax
  int v19; // edx
  int v20; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+44h] [rbp-54h] BYREF
  int v22; // [rsp+48h] [rbp-50h] BYREF
  int v23; // [rsp+4Ch] [rbp-4Ch] BYREF
  unsigned int v24; // [rsp+50h] [rbp-48h] BYREF
  PRKMUTEX Mutex; // [rsp+58h] [rbp-40h]
  int v26; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v27; // [rsp+B0h] [rbp+18h]
  unsigned int v28; // [rsp+B8h] [rbp+20h] BYREF

  v27 = a3;
  v28 = -1;
  v20 = 3;
  v23 = 0;
  v21 = 0;
  v5 = 0LL;
  v22 = 0;
  v26 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( byte_1C013B810 )
  {
    v6 = 640;
    *(_DWORD *)(a2 + 16) = 5;
    v7 = 480;
LABEL_4:
    *(_WORD *)a2 = 0;
    *(_QWORD *)(a2 + 32) = DpiSystemDisplayWrite;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_DWORD *)(a2 + 8) = v6;
    *(_DWORD *)(a2 + 4) = v7;
    *(_DWORD *)(a2 + 12) = v6;
    if ( a3 )
      *a3 = DpiLeaveSystemDisplay;
    return 0LL;
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  for ( i = 0; i < 4; ++i )
  {
    v10 = qword_1C013B4C8;
    if ( *(_QWORD *)v10 == v10 )
      continue;
    while ( *(_DWORD *)(v10 + 28) < 0x3004u || !*(_QWORD *)(v10 + 744) )
    {
LABEL_63:
      v10 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 == qword_1C013B4C8 )
        goto LABEL_47;
    }
    Mutex = (PRKMUTEX)(v10 + 72);
    if ( !a1 )
      KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v11 = *(_QWORD *)(v10 + 56);
    if ( *(_QWORD *)v11 == v11 )
      goto LABEL_61;
    do
    {
      if ( *(_DWORD *)(v11 + 16) != 1953656900
        || *(_DWORD *)(v11 + 20) != 2
        || i == 3 && *(_BYTE *)(v11 + 1154) && *(_BYTE *)(v11 + 480) )
      {
        goto LABEL_39;
      }
      v5 = v11;
      if ( !a1 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v11 + 484) )
          DpiCheckForOutstandingD3Requests(v11);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 168), 1u);
      }
      if ( (*(_BYTE *)(v11 + 3920) & 4) == 0 )
      {
        if ( !a1 )
          goto LABEL_35;
        goto LABEL_38;
      }
      if ( !a1 )
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v11 + 3912), 2LL);
      v12 = *(_QWORD *)(v11 + 3912);
      if ( v12 )
      {
        v13 = *(ADAPTER_DISPLAY **)(v12 + 2920);
        if ( v13 )
        {
          ADAPTER_DISPLAY::GetPrimaryPath(v13, &v24, &v28, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v20);
          if ( v20 == i )
            break;
        }
      }
      if ( !a1 )
      {
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v11 + 3912), 2LL);
LABEL_35:
        if ( *(_BYTE *)(v11 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
        KeLeaveCriticalRegion();
      }
LABEL_38:
      v5 = 0LL;
LABEL_39:
      v11 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 != *(_QWORD *)(v10 + 56) );
    if ( !v5 )
    {
LABEL_61:
      if ( !a1 )
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      goto LABEL_63;
    }
    v14 = v28;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, int *, int *, int *, int *))(v10 + 744))(
           *(_QWORD *)(v5 + 48),
           v28,
           &v23,
           &v21,
           &v22,
           &v26) >= 0 )
    {
      v19 = v26;
      if ( !v26 && qword_1C013B748 && v5 == *(_QWORD *)(qword_1C013B748 + 64) )
        *(_DWORD *)(a2 + 16) = 1;
      else
        *(_DWORD *)(a2 + 16) = 5;
LABEL_60:
      v7 = v22;
      a3 = v27;
      dword_1C013B828 = v20;
      v6 = v21;
      dword_1C013B830 = v21;
      byte_1C013B811 = a1;
      qword_1C013B818 = v10;
      qword_1C013B820 = v5;
      dword_1C013B82C = v14;
      dword_1C013B834 = v22;
      dword_1C013B838 = v19;
      goto LABEL_4;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3912), 2LL);
      if ( *(_BYTE *)(v5 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex(Mutex, 0);
      _InterlockedExchange64(&qword_1C013B4D8, 0LL);
      KeReleaseMutex(::Mutex, 0);
    }
    v5 = 0LL;
LABEL_47:
    ;
  }
  if ( qword_1C013B740 )
  {
    v15 = *(_QWORD *)(qword_1C013B740 + 64);
    if ( *(_DWORD *)(v15 + 236) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v15 + 40) + 240LL))(*(_QWORD *)(v15 + 48));
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  if ( qword_1C013B748 )
  {
    v5 = *(_QWORD *)(qword_1C013B748 + 64);
    v10 = *(_QWORD *)(v5 + 40);
    v16 = (_BYTE *)(v5 + 484);
    if ( !a1 )
    {
      KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( *v16 )
        DpiCheckForOutstandingD3Requests(v5);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3912), 2LL);
    }
    v17 = *(_QWORD *)(v5 + 48);
    v18 = *(int (__fastcall **)(__int64, __int64, int *, int *, int *, int *))(v10 + 744);
    v20 = 3;
    v28 = -1;
    if ( v18(v17, 0xFFFFFFFFLL, &v23, &v21, &v22, &v26) >= 0 )
    {
      v19 = v26;
      v14 = v28;
      *(_DWORD *)(a2 + 16) = v26 != 0 ? 5 : 1;
      goto LABEL_60;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3912), 2LL);
      if ( *v16 )
        DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      _InterlockedExchange64(&qword_1C013B4D8, 0LL);
      KeReleaseMutex(::Mutex, 0);
    }
  }
  return 3221225473LL;
}
