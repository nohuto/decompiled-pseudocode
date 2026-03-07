__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
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
  void *Instance; // rax
  char *v14; // rdi
  int v15; // r8d
  _DWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v12 = (DMMVIDPNSOURCEMODE *)v7;
    if ( v7 )
    {
      v17 = 0LL;
      Instance = (void *)Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(v7);
      auto_ptr<Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>>::reset((void **)&v17, Instance);
      if ( !v17 )
      {
        WdLogSingleEntry1(6LL, a1);
        v3 = -1073741801;
        goto LABEL_9;
      }
      v14 = (char *)(v17 + 4);
      v17[4] = *((_DWORD *)v12 + 6);
      v15 = *((_DWORD *)v12 + 18);
      *((_DWORD *)v14 + 1) = v15;
      if ( v15 != 1 )
      {
        if ( v15 == 2 )
        {
          *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v14 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(v12);
          goto LABEL_8;
        }
        if ( (unsigned int)(v15 - 3) >= 2 )
        {
          if ( (unsigned int)(v15 - 1) <= 3 )
            WdLogSingleEntry0(1LL);
          goto LABEL_8;
        }
      }
      *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v14 + 8) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12);
LABEL_8:
      *a3 = v14;
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
