__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        DXGADAPTER **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  DXGADAPTER **v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // r12
  __int64 *v9; // r13
  __int64 v10; // r15
  unsigned __int8 v11; // al
  DXGADAPTER *v12; // rcx
  __int64 v14; // rdx
  char *v15; // rbx
  DXGADAPTER *v16; // rax
  const wchar_t *v17; // r9
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // r15d
  struct DXGADAPTERALLOCATION *v22; // r10
  unsigned int *v23; // r12
  int v24; // eax
  int v25; // eax
  void *v26; // [rsp+90h] [rbp+8h] BYREF
  struct DXGADAPTERALLOCATION *v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v4 = (DXGADAPTER **)(this + 2);
  v5 = a3;
  v6 = (__int64)this;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->IsCoreResourceExclusiveOwner()",
      2811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 96) )
  {
    WdLogSingleEntry1(1LL, 2812LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      2812LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *v4 != a2[235] )
  {
    WdLogSingleEntry1(1LL, 2813LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
      2813LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = (__int64 *)*((_QWORD *)a2[2] + 2);
  v10 = v9[366];
  if ( !v10 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v10 + 16)) )
  {
    WdLogSingleEntry1(1LL, 2819LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && pRenderAdapter->IsRenderAdapter() && pRenderCore->IsCoreResourceExclusiveOwner()",
      2819LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)*v4 + 366) )
  {
    if ( *v4 != (DXGADAPTER *)v9 )
    {
      WdLogSingleEntry1(1LL, 2826LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"this->GetAdapter() == pRenderAdapter",
        2826LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v9[366]);
  }
  ADAPTER_RENDER::FlushScheduler(v10, 8u, v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable(*v4, v5) )
    return 0LL;
  v11 = DXGADAPTER::UsingSetTimingsFromVidPn(*v4);
  v12 = *v4;
  if ( v11 )
  {
    if ( *((_QWORD *)v12 + 366) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 736) + 8LL) + 888LL))(
        *(_QWORD *)(v10 + 744),
        (unsigned int)v5);
    }
    else
    {
      v14 = *(_QWORD *)(*((_QWORD *)v12 + 365) + 448LL);
      if ( v14 )
        _InterlockedExchange((volatile __int32 *)(2920 * v5 + *(_QWORD *)(v14 + 8) + 960), 1);
    }
LABEL_17:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)v6, v5);
    return (unsigned int)v8;
  }
  if ( !*((_QWORD *)v12 + 366) )
    goto LABEL_31;
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(&v26);
  v15 = (char *)v26;
  if ( v26 )
  {
    v22 = v27;
    if ( !v27 )
    {
      WdLogSingleEntry1(1LL, 2880LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPrimaryAllocation != NULL", 2880LL, 0LL, 0LL, 0LL, 0LL);
      v22 = v27;
    }
    v23 = (unsigned int *)(v15 + 8);
    *(_DWORD *)v15 = v5;
    *((_QWORD *)v15 + 2) = *((_QWORD *)v22 + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 760) + 8LL) + 208LL))(
      *(_QWORD *)(v9[366] + 768),
      *((_QWORD *)v22 + 1),
      v15 + 4,
      v15 + 8,
      0LL);
    *((_DWORD *)v15 + 138) |= 1u;
    v24 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(v10 + 736) + 8LL) + 816LL))(
            *(_QWORD *)(v10 + 744),
            v15);
    v21 = v24;
    if ( v24 < 0 )
    {
      v18 = v5;
      v6 = v24;
      WdLogSingleEntry4(2LL, v24, *v4, v5, *v23);
      v16 = *v4;
      v17 = L"Status=0x%I64x Adapter 0x%I64x: DdiSetVidPnSourceAddress failed 0x%I64x 0x%I64x";
      v20 = *v23;
      v19 = 0x40000;
      goto LABEL_29;
    }
    operator delete(v15);
LABEL_31:
    v25 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v6, v5, 1u, 32, 0);
    v8 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry3(2LL, v25, *v4, v5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Status=0x%I64x Adapter 0x%I64x: SetVidPnSourceVisibility TRUE failed 0x%I64x",
        v8,
        (__int64)*v4,
        v5,
        0LL,
        0LL);
    }
    goto LABEL_17;
  }
  WdLogSingleEntry1(6LL, v6);
  v16 = 0LL;
  v17 = L"Adapter 0x%I64x: Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS";
  v18 = 0LL;
  v19 = 262145;
  v20 = 0LL;
  v21 = -1073741801;
LABEL_29:
  DxgkLogInternalTriageEvent(0LL, v19, -1, (__int64)v17, v6, (__int64)v16, v18, v20, 0LL);
  operator delete(v15);
  return v21;
}
