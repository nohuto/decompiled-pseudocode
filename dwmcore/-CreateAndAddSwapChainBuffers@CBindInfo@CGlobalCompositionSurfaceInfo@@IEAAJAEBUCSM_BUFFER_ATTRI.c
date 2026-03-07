__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        unsigned int a3)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  CDecodeBitmap *v14; // rax
  unsigned int v15; // ecx
  CDecodeBitmap *v16; // rsi
  CDecodeBitmap *v17; // rax
  CDecodeBitmap *v18; // rsi
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  unsigned __int64 v22; // rax
  __int64 v23; // r15
  struct ISwapChainRealization *v24; // rsi
  unsigned __int64 v25; // r14
  struct ISwapChainRealization *v26; // r13
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edi
  __int64 v31; // rsi
  void *v32; // rcx
  struct ISwapChainRealization *v34; // [rsp+30h] [rbp-39h] BYREF
  __int64 v35; // [rsp+38h] [rbp-31h]
  struct ISwapChainRealization *v36; // [rsp+40h] [rbp-29h] BYREF
  __int64 v37; // [rsp+48h] [rbp-21h]
  __int128 v38; // [rsp+50h] [rbp-19h] BYREF
  __int64 v39; // [rsp+60h] [rbp-9h]
  __int128 v40; // [rsp+68h] [rbp-1h] BYREF
  __int64 v41; // [rsp+78h] [rbp+Fh]
  char v42; // [rsp+D0h] [rbp+67h]
  unsigned int v44; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v45; // [rsp+E8h] [rbp+7Fh]

  v44 = a3;
  v42 = 1;
  v41 = 0LL;
  v4 = 0;
  v40 = 0LL;
  std::vector<CSM_REALIZATION_INFO>::_Resize<std::_Value_init_tag>(&v40, a3);
  v5 = (__int64 *)((char *)this + 72);
  v39 = 0LL;
  v38 = 0LL;
  if ( &v38 == (__int128 *)((char *)this + 72) )
  {
    v7 = *((_QWORD *)&v38 + 1);
    v6 = v38;
  }
  else
  {
    v6 = *v5;
    v7 = *((_QWORD *)this + 10);
    v8 = *((_QWORD *)this + 11);
    *(_QWORD *)&v38 = *v5;
    *((_QWORD *)&v38 + 1) = v7;
    v39 = v8;
    *v5 = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v9 = *(_QWORD *)this;
  v10 = v40;
  *((_BYTE *)this + 96) = 0;
  v35 = v6;
  v11 = *(_QWORD *)(v9 + 32);
  v37 = v7;
  v45 = 0LL;
  v12 = NtOpenCompositionSurfaceRealizationInfo(v11, (char *)this + 24, &v44, v10);
  if ( v12 < 0 )
  {
    v4 = v12 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180354768, 4u, v12 | 0x10000000, 0x514u, 0LL);
    goto LABEL_42;
  }
  if ( v44 <= 1 && *((_DWORD *)this + 8) != 3 )
  {
    v42 = 0;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 1) )
  {
LABEL_18:
    v21 = 0;
    if ( v44 )
    {
      while ( 1 )
      {
        v22 = v45;
        v23 = v10 + 40LL * v21;
        v24 = 0LL;
        v34 = 0LL;
        if ( *(_QWORD *)(v23 + 24) )
        {
          v25 = (v7 - v6) >> 3;
          while ( v22 < v25 )
          {
            v26 = *(struct ISwapChainRealization **)(v6 + 8 * v22);
            v36 = v26;
            *(_QWORD *)(v35 + 8 * v22) = 0LL;
            v45 = v22 + 1;
            if ( (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v26 + 176LL))(v26) == *(_QWORD *)(v23 + 24) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *, __int64))(*(_QWORD *)v26 + 8LL))(
                     v26,
                     v23) )
              {
                v36 = 0LL;
                v24 = v26;
                v34 = v26;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
                  McTemplateU0x_EventWriteTransfer(v27, &CompSurfInfo_ReuseRealization, *(_QWORD *)(v23 + 24));
              }
              else if ( *(_DWORD *)(*(_QWORD *)this + 416LL) )
              {
                *(_BYTE *)(*(_QWORD *)this + 420LL) = 1;
              }
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
              if ( !v24 )
              {
                v22 = v45;
                break;
              }
              goto LABEL_34;
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
            v22 = v45;
            v6 = v35;
          }
        }
        v34 = 0LL;
        v45 = v22;
        v28 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                (struct _LUID **)this,
                a2,
                (const struct CSM_REALIZATION_INFO *)v23,
                v42,
                &v34);
        v4 = v28;
        if ( v28 < 0 )
          break;
        *(_QWORD *)(v23 + 8) = 0LL;
        v24 = v34;
LABEL_34:
        CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v24);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
        v6 = v35;
        ++v21;
        v7 = v37;
        v10 = v40;
        if ( v21 >= v44 )
          goto LABEL_35;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v29, &dword_180354768, 4u, v28, 0x563u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
    }
    else
    {
LABEL_35:
      if ( v44 > 1 )
        CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(this);
    }
    goto LABEL_37;
  }
  *((_QWORD *)this + 1) = 0LL;
  v14 = (CDecodeBitmap *)operator new(0x108uLL);
  v16 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x108uLL);
    v17 = CDecodeBitmap::CDecodeBitmap(v16);
    v18 = v17;
    if ( v17 )
    {
      CMILRefCountImpl::AddReference((CDecodeBitmap *)((char *)v17 + 8));
      goto LABEL_15;
    }
  }
  else
  {
    v18 = 0LL;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x13u, 0LL);
LABEL_15:
  v36 = 0LL;
  *((_QWORD *)this + 1) = v18;
  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::~com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>(&v36);
  if ( v4 >= 0 )
  {
    v10 = v40;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v4, 0x634u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_180354768, 4u, v4, 0x51Bu, 0LL);
LABEL_37:
  v30 = 0;
  if ( v44 )
  {
    v31 = v40;
    do
    {
      v32 = *(void **)(v31 + 40LL * v30 + 8);
      if ( v32 )
        CloseHandle(v32);
      ++v30;
    }
    while ( v30 < v44 );
  }
LABEL_42:
  std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(&v38);
  std::vector<CSM_REALIZATION_INFO>::~vector<CSM_REALIZATION_INFO>(&v40);
  return (unsigned int)v4;
}
