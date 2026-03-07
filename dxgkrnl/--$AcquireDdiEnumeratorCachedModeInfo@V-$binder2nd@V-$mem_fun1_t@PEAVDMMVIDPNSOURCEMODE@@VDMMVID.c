__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DMMVIDPNSOURCEMODE *v12; // rsi
  __int64 Instance; // rbp
  int v14; // r8d

  v3 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v12 = (DMMVIDPNSOURCEMODE *)v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(v7);
      if ( !Instance )
      {
        WdLogSingleEntry1(6LL, a1);
        v3 = -1073741801;
        goto LABEL_9;
      }
      operator delete(0LL);
      *(_DWORD *)(Instance + 16) = *((_DWORD *)v12 + 6);
      v14 = *((_DWORD *)v12 + 18);
      *(_DWORD *)(Instance + 20) = v14;
      if ( v14 != 1 )
      {
        if ( v14 == 2 )
        {
          *(enum _D3DKMDT_TEXT_RENDERING_FORMAT *)(Instance + 24) = *DMMVIDPNSOURCEMODE::GetTextInfo(v12);
          goto LABEL_8;
        }
        if ( (unsigned int)(v14 - 3) >= 2 )
        {
          if ( (unsigned int)(v14 - 1) <= 3 )
            WdLogSingleEntry0(1LL);
          goto LABEL_8;
        }
      }
      *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(Instance + 24) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12);
LABEL_8:
      *a3 = Instance + 16;
LABEL_9:
      operator delete(0LL);
      return v3;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = a2;
    return 3223192394LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192352LL;
  }
}
