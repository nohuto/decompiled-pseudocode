__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 Instance; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  int v18; // eax

  v3 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v12 = v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(v7);
      if ( Instance )
      {
        operator delete(0LL);
        v14 = Instance + 16;
        *(_DWORD *)v14 = *(_DWORD *)(v12 + 24);
        *(_OWORD *)(v14 + 8) = *(_OWORD *)(v12 + 72);
        *(_OWORD *)(v14 + 24) = *(_OWORD *)(v12 + 88);
        *(_OWORD *)(v14 + 40) = *(_OWORD *)(v12 + 104);
        *(_QWORD *)(v14 + 56) = *(_QWORD *)(v12 + 120);
        *(_DWORD *)(v14 + 64) = *(_DWORD *)(v12 + 128);
        if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v12) )
        {
          *(_QWORD *)(v14 + 68) = *(_QWORD *)(v12 + 144);
        }
        else
        {
          v15 = *(_QWORD *)(a1 + 112);
          if ( !*(_QWORD *)(v15 + 40) )
            WdLogSingleEntry0(1LL);
          v16 = *(_QWORD *)(v15 + 40);
          if ( !*(_QWORD *)(v16 + 72) )
            WdLogSingleEntry0(1LL);
          v17 = *(_QWORD *)(*(_QWORD *)(v16 + 72) + 48LL);
          if ( !*(_QWORD *)(v17 + 8) )
            WdLogSingleEntry0(1LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 24LL) & 0x20) != 0 )
            v18 = -2;
          else
            v18 = -1;
          *(_DWORD *)(v14 + 72) = v18;
          *(_DWORD *)(v14 + 68) = v18;
        }
        *a3 = v14;
      }
      else
      {
        WdLogSingleEntry1(6LL, a1);
        v3 = -1073741801;
      }
      operator delete(0LL);
      return v3;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = a2;
      return 3223192394LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192352LL;
  }
}
