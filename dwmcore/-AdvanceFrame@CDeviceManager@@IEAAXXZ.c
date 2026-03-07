void __fastcall CDeviceManager::AdvanceFrame(CDeviceManager *this)
{
  char *v1; // r12
  __int64 v2; // rcx
  __int64 v3; // r14
  CD3DDevice **v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // eax
  struct CComposition *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r15
  unsigned int v14; // esi
  unsigned int v15; // esi
  __int64 *v16; // r10
  __int64 *i; // rdx
  void **v18; // r14
  void **k; // rbx
  void **v20; // r14
  __int64 v21; // rbx
  _BYTE *v22; // rbx
  _BYTE *v23; // r14
  PSLIST_ENTRY v24; // rsi
  char v25; // al
  CDeviceManager *v26; // rcx
  CD3DDevice **v27; // rdi
  __int64 v28; // r14
  unsigned int v29; // edx
  unsigned int j; // eax
  __int64 v31; // r9
  struct _SLIST_ENTRY *v32; // rbx
  __int64 v33; // r8
  int v34; // r9d
  int v35; // eax
  bool v36; // zf
  __int64 v37; // r14
  void **m; // rsi
  void **v39; // rsi
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // esi
  struct CComposition *v43; // rbx
  CD3DDevice **v44; // rbx
  CD3DDevice *v45; // rsi
  CD3DDevice *v46; // rcx
  RTL_SRWLOCK *v47; // rcx
  __int64 v48; // [rsp+30h] [rbp-48h]
  char v49[8]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v50; // [rsp+40h] [rbp-38h] BYREF
  char *v51; // [rsp+50h] [rbp-28h]
  void *v52[2]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v53; // [rsp+68h] [rbp-10h]
  void *retaddr; // [rsp+B8h] [rbp+40h]
  char v55; // [rsp+C0h] [rbp+48h]
  __int64 v56; // [rsp+C8h] [rbp+50h]
  __int64 v57; // [rsp+D0h] [rbp+58h]
  __int64 v58; // [rsp+D8h] [rbp+60h] BYREF

  v50 = 0LL;
  v1 = 0LL;
  v51 = 0LL;
  EnterCriticalSection(&stru_1803E7020);
  v3 = qword_1803E7048;
  v4 = 0LL;
  v56 = qword_1803E7048;
  v48 = xmmword_1803E7050;
  if ( qword_1803E7048 != (_QWORD)xmmword_1803E7050 )
  {
    while ( 1 )
    {
      v5 = 0LL;
      v6 = *(_QWORD *)v3;
      v57 = 0LL;
      if ( g_pComposition )
      {
        v5 = *((_QWORD *)g_pComposition + 62);
        v57 = v5;
      }
      v55 = *(_BYTE *)(v6 + 1507);
      if ( v5 != *(_QWORD *)(v6 + 1480) )
        break;
LABEL_19:
      if ( *(_QWORD *)(v6 + 1472) != v5 )
      {
        v11 = g_pComposition;
        v12 = (_QWORD *)(v6 + 464);
        *(_QWORD *)(v6 + 1472) = v5;
        v13 = 0LL;
        if ( v11 )
          v13 = *((_QWORD *)v11 + 62);
        v14 = *(_DWORD *)(v6 + 488);
        while ( v14 )
        {
          v28 = *(_QWORD *)(*v12 + 8LL * --v14);
          if ( (unsigned __int64)(v13 - *(_QWORD *)(v28 + 168)) >= 0x20 )
          {
            DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v6 + 464, v14);
            *(_BYTE *)(v28 + 176) = 0;
            CMILRefCountBaseT<IUnknown>::InternalRelease(v28);
          }
        }
        v15 = *(_DWORD *)(v6 + 488);
        if ( v15 )
        {
          v29 = *(_DWORD *)(v6 + 488);
          do
          {
            if ( v29 <= 0x20 )
              break;
            v37 = *(_QWORD *)(*v12 + 8LL * --v15);
            if ( v13 != *(_QWORD *)(v37 + 168) )
            {
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v6 + 464, v15);
              *(_BYTE *)(v37 + 176) = 0;
              CMILRefCountBaseT<IUnknown>::InternalRelease(v37);
              v29 = *(_DWORD *)(v6 + 488);
            }
          }
          while ( v15 );
        }
        v16 = *(__int64 **)(v6 + 520);
        for ( i = *(__int64 **)(v6 + 512); i != v16; ++i )
        {
          v2 = *i;
          if ( *(_DWORD *)(*i + 32) )
          {
            for ( j = 0; j < *(_DWORD *)(v2 + 24); ++j )
            {
              v31 = *(_QWORD *)(v2 + 16);
              if ( *(_QWORD *)(v31 + 8LL * j) == -1LL )
                *(_QWORD *)(v31 + 8LL * j) = 0LL;
            }
            *(_DWORD *)(v2 + 28) += *(_DWORD *)(v2 + 32);
            *(_DWORD *)(v2 + 32) = 0;
          }
        }
        v18 = *(void ***)(v6 + 1456);
        for ( k = *(void ***)(v6 + 1448);
              k != v18 && !(unsigned __int8)lambda_fd8985d72d553019ef56328af04f2137_::operator()(v2, k);
              ++k )
        {
          ;
        }
        if ( k != v18 )
        {
          for ( m = k + 1; m != v18; ++m )
          {
            if ( !(unsigned __int8)lambda_fd8985d72d553019ef56328af04f2137_::operator()(v2, m) )
              std::unique_ptr<ICheckMPOCache>::operator=<std::default_delete<ICheckMPOCache>,0>(k++, m);
          }
        }
        v20 = *(void ***)(v6 + 1456);
        if ( k != v20 )
        {
          v39 = k;
          do
          {
            if ( *v39 )
              operator delete(*v39, 8uLL);
            ++v39;
          }
          while ( v39 != v20 );
          *(_QWORD *)(v6 + 1456) = k;
        }
        v53 = 0LL;
        v21 = *(_QWORD *)(v6 + 1200);
        *(_OWORD *)v52 = 0LL;
        while ( v21 != *(_QWORD *)(v6 + 1208) )
        {
          if ( *(_DWORD *)(v21 + 28) )
          {
            v21 += 32LL;
          }
          else
          {
            std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
              v52,
              v21);
            v58 = v21;
            v21 = *(_QWORD *)detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
                               v6 + 1200,
                               v49,
                               &v58);
          }
        }
        v22 = v52[0];
        v23 = v52[1];
        if ( v52[0] != v52[1] )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
            McTemplateU0q_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &Pinning_D3DUnpinStart,
              ((char *)v52[1] - (char *)v52[0]) >> 3);
          v40 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, signed __int64))(**(_QWORD **)(v6 + 544) + 32LL))(
                  *(_QWORD *)(v6 + 544),
                  v22,
                  (v23 - v22) >> 3);
          v42 = v40;
          if ( v40 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x3E2u, 0LL);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
            McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &Pinning_D3DUnpinStop, v42);
          if ( v42 )
            CD3DDevice::TranslateDXGIorD3DErrorInContext(v6, v42, 0);
        }
        if ( v22 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(v22);
          std::_Deallocate<16,0>(v22, (v53 - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        while ( 1 )
        {
          v24 = InterlockedFlushSList((PSLIST_HEADER)(v6 + 1120));
          if ( !v24 )
            break;
          do
          {
            v32 = v24 - 3;
            v24 = v24->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v6 + 1104), (struct CD3DResource *)v32);
            v33 = *(int *)(*((_QWORD *)&v32->Next + 1) + 4LL);
            ((void (__fastcall *)(__int64))(*(struct _SLIST_ENTRY **)((char *)&v32->Next + v33 + 8))[1].Next)((__int64)&v32->Next + v33 + 8);
          }
          while ( v24 );
        }
        if ( *(_QWORD *)(v6 + 1488) != v57 )
        {
          CAtlasManager::CompactAtlases((CAtlasManager *)(v6 + 512));
          v3 = v56;
          v25 = 1;
          goto LABEL_39;
        }
        v3 = v56;
      }
      v25 = v55;
LABEL_39:
      if ( *(_BYTE *)(v6 + 1507) )
      {
        CD3DDevice::Flush((CD3DDevice *)v6);
      }
      else if ( !v25 )
      {
        goto LABEL_44;
      }
      if ( *(int *)(v6 + 1088) >= 0 )
      {
        if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 552) + 312LL))(*(_QWORD *)(v6 + 552)) < 0 )
          *(_DWORD *)(v6 + 1088) = -2003304307;
LABEL_44:
        if ( *(int *)(v6 + 1088) >= 0 )
        {
          if ( *(_BYTE *)(v6 + 1508) )
            CD3DDevice::Trim((CD3DDevice *)v6);
          if ( *(int *)(v6 + 1088) >= 0 )
            goto LABEL_48;
        }
      }
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(*(_QWORD *)v3 + 8LL));
      if ( v4 == (CD3DDevice **)v1 )
      {
        std::vector<CD3DDevice *>::_Emplace_reallocate<CD3DDevice * const &>(&v50, v4, v3);
        v1 = v51;
        v4 = (CD3DDevice **)*((_QWORD *)&v50 + 1);
      }
      else
      {
        *v4++ = *(CD3DDevice **)v3;
        *((_QWORD *)&v50 + 1) = v4;
      }
LABEL_48:
      v3 += 16LL;
      v56 = v3;
      if ( v3 == v48 )
        goto LABEL_49;
    }
    *(_BYTE *)(v6 + 1507) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v6 + 224) + 152LL))(
           *(_QWORD *)(v6 + 224),
           *(_QWORD *)(v6 + 576),
           v5);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x9Du, 0LL);
    v2 = *(unsigned int *)(v6 + 1088);
    v10 = v2;
    if ( !(_DWORD)v2 && (v9 == -2005532292 || v9 == -2147024882 || v9 == -2005270523) )
    {
      v10 = 0;
      if ( *(_DWORD *)(v6 + 448) )
      {
        if ( v9 != -2005270523
          || (v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 552) + 312LL))(
                      *(_QWORD *)(v6 + 552),
                      0LL),
              *(_DWORD *)(v6 + 1088) = -2003304307,
              v36 = v35 == -2005270480,
              v10 = -2003304307,
              (v2 = v36) != 0) )
        {
          CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v6 + 16));
          v10 = *(_DWORD *)(v6 + 1088);
        }
      }
    }
    if ( v9 < 0 && v10 < 0 )
    {
LABEL_18:
      *(_QWORD *)(v6 + 1480) = v5;
      *(_BYTE *)(v6 + 1507) = 0;
      goto LABEL_19;
    }
    if ( (unsigned int)(v9 + 2005270523) <= 0x1B && (v2 = 134217733LL, _bittest((const int *)&v2, v9 + 2005270523))
      || v9 == -2003238900 )
    {
      v9 = -2003304307;
      v34 = -2003304307;
    }
    else
    {
      if ( v9 != -2005270494 )
        goto LABEL_16;
      v34 = -2003304442;
      v9 = -2003304442;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v34, 0xB38u, 0LL);
LABEL_16:
    if ( v9 == -2003304307 )
      *(_DWORD *)(v6 + 1088) = -2003304307;
    goto LABEL_18;
  }
LABEL_49:
  LeaveCriticalSection(&stru_1803E7020);
  v27 = (CD3DDevice **)v50;
  if ( (CD3DDevice **)v50 != v4 )
  {
    v43 = g_pComposition;
    AcquireSRWLockExclusive((PSRWLOCK)g_pComposition + 84);
    *((_DWORD *)v43 + 170) = GetCurrentThreadId();
    v44 = v27;
    do
    {
      if ( CDeviceManager::s_bXbox )
        ModuleFailFastForHRESULT(2289696775LL, retaddr);
      v45 = *v44;
      if ( !*((_BYTE *)*v44 + 1506) )
      {
        v46 = *v44;
        *((_BYTE *)v45 + 1506) = 1;
        CD3DDevice::DestroyAllResources(v46);
        std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::erase(
          &xmmword_1803E32E0,
          (char *)v45 + 896);
      }
      CD3DDevice::Release(*v44++);
    }
    while ( v44 != v4 );
    v47 = (RTL_SRWLOCK *)((char *)g_pComposition + 672);
    *((_DWORD *)g_pComposition + 170) = 0;
    ReleaseSRWLockExclusive(v47);
  }
  CDeviceManager::DeleteUnusedDevices(v26);
  if ( v27 )
    std::_Deallocate<16,0>(v27, (v1 - (char *)v27) & 0xFFFFFFFFFFFFFFF8uLL);
}
