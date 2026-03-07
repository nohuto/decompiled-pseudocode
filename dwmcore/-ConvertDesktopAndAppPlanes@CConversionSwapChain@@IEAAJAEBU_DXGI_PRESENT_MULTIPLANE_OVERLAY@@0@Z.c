__int64 __fastcall CConversionSwapChain::ConvertDesktopAndAppPlanes(
        CConversionSwapChain *this,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a2,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a3)
{
  __int64 v3; // r9
  void (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  void (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  int v9; // ecx
  int *v10; // rdi
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int AppOverlayShaderResourceView; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _DWORD **v17; // r15
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, _QWORD **); // r12
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  FastRegion::Internal::CRgnData *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  FastRegion::Internal::CRgnData *v36; // rcx
  int v37; // r9d
  int v38; // r10d
  int v39; // eax
  int v40; // r11d
  FastRegion::Internal::CRgnData *v41; // rdx
  _DWORD *v42; // r8
  int v43; // eax
  int v44; // r9d
  int v45; // r10d
  int v46; // eax
  int v47; // r11d
  FastRegion::Internal::CRgnData *v48; // rdx
  _DWORD *v49; // r8
  int v50; // eax
  int v51; // edi
  struct ID3D11ShaderResourceView *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r8
  int v56; // eax
  FastRegion::Internal::CRgnData *v57; // rcx
  struct ID3D11ShaderResourceView *v59; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v60; // [rsp+68h] [rbp-98h] BYREF
  struct D2D_SIZE_U v61; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v62[8]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v63; // [rsp+80h] [rbp-80h]
  int *v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+98h] [rbp-68h]
  _BYTE v67[8]; // [rsp+A8h] [rbp-58h] BYREF
  int v68; // [rsp+B0h] [rbp-50h] BYREF
  int v69; // [rsp+B4h] [rbp-4Ch]
  int v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+BCh] [rbp-44h]
  int v72; // [rsp+C0h] [rbp-40h] BYREF
  int v73; // [rsp+C4h] [rbp-3Ch]
  int v74; // [rsp+C8h] [rbp-38h]
  int v75; // [rsp+CCh] [rbp-34h]
  int v76; // [rsp+D0h] [rbp-30h] BYREF
  int v77; // [rsp+D4h] [rbp-2Ch]
  int v78; // [rsp+D8h] [rbp-28h]
  int v79; // [rsp+DCh] [rbp-24h]
  enum DXGI_FORMAT v80[4]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v81[24]; // [rsp+F8h] [rbp-8h] BYREF
  FastRegion::Internal::CRgnData *v82; // [rsp+110h] [rbp+10h] BYREF
  int v83; // [rsp+118h] [rbp+18h] BYREF
  FastRegion::Internal::CRgnData *v84; // [rsp+160h] [rbp+60h] BYREF
  int v85; // [rsp+168h] [rbp+68h] BYREF
  void *v86[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v87[10]; // [rsp+200h] [rbp+100h] BYREF
  const void *retaddr; // [rsp+298h] [rbp+198h]

  v3 = *((_QWORD *)this + 47);
  v60 = 0LL;
  v59 = 0LL;
  v7 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8);
  (**v7)(v7, v67);
  v8 = (void (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 47)
                                              + 8LL
                                              + *(int *)(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL) + 12LL));
  (**v8)(v8, v81);
  v80[2] = *((enum DXGI_FORMAT *)a3 + 25);
  v61 = 0LL;
  v80[0] = DXGI_FORMAT_UNKNOWN;
  v80[1] = DXGI_FORMAT_R32G32B32A32_UINT;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v86, (const struct tagRECT *)((char *)a2 + 60));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v87, (const struct tagRECT *)((char *)a3 + 60));
  v9 = *((_DWORD *)a3 + 16);
  v10 = (int *)((char *)this + 760);
  v11 = *((_DWORD *)a3 + 17);
  v12 = *((_DWORD *)a3 + 18);
  v84 = (FastRegion::Internal::CRgnData *)&v85;
  v13 = *((_DWORD *)a3 + 15);
  v85 = 0;
  *((_DWORD *)this + 190) = v13;
  *((_DWORD *)this + 191) = v9;
  *((_DWORD *)this + 192) = v11;
  *((_DWORD *)this + 193) = v12;
  if ( v59 )
    ((void (__fastcall *)(struct ID3D11ShaderResourceView *))v59->lpVtbl->Release)(v59);
  AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(
                                   this,
                                   *((struct IDXGIResource **)a3 + 1),
                                   &v61,
                                   v80,
                                   &v59);
  v16 = AppOverlayShaderResourceView;
  if ( AppOverlayShaderResourceView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, AppOverlayShaderResourceView, 0x2F0u, 0LL);
  }
  else
  {
    v17 = (_DWORD **)((char *)this + 672);
    v18 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)this + 84,
            (const struct FastRegion::Internal::CRgnData **)v86);
    if ( v18 < 0 )
      ModuleFailFastForHRESULT(v18, retaddr);
    v19 = *((_QWORD *)this + 47) + *(int *)(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL) + 16LL);
    v20 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)(v19 + 8) + 48LL);
    if ( v60 )
    {
      v21 = (__int64)v60 + *(int *)(v60[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = (***((__int64 (__fastcall ****)(_QWORD, int *))this + 47))(*((_QWORD *)this + 47), &v76);
    v23 = v20(v19 + 8, v22, &v60);
    v16 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x2F6u, 0LL);
    }
    else if ( **v17 )
    {
      v83 = 0;
      v82 = (FastRegion::Internal::CRgnData *)&v83;
      v25 = FastRegion::CRegion::Copy((int **)&v82, (int **)this + 84);
      if ( v25 < 0 )
        ModuleFailFastForHRESULT(v25, retaddr);
      v26 = FastRegion::CRegion::Subtract(&v82, (const struct FastRegion::Internal::CRgnData **)v87);
      if ( v26 < 0 )
        ModuleFailFastForHRESULT(v26, retaddr);
      FastRegion::Internal::CRgnData::BeginIterator(v82, (struct FastRegion::CRegion::Iterator *)v62);
      while ( 1 )
      {
        if ( (unsigned __int64)v64 >= v63 )
        {
          FastRegion::CRegion::FreeMemory((void **)&v82);
          goto LABEL_21;
        }
        v27 = *((_DWORD *)a2 + 19);
        v69 = *v64;
        v71 = v64[2];
        v28 = 2 * v66;
        v68 = *(_DWORD *)(v65 + 4 * v28);
        v70 = *(_DWORD *)(v65 + 4 * v28 + 4);
        v72 = *((_DWORD *)a2 + 11);
        v73 = *((_DWORD *)a2 + 12);
        v74 = *((_DWORD *)a2 + 13);
        v75 = *((_DWORD *)a2 + 14);
        v76 = *((_DWORD *)a2 + 7);
        v77 = *((_DWORD *)a2 + 8);
        v78 = *((_DWORD *)a2 + 9);
        v79 = *((_DWORD *)a2 + 10);
        v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 8LL))(v60);
        v30 = CConversionSwapChain::ConvertSingleResource(this, v29, v67, v81, &v76, v27, &v72, &v68);
        v16 = v30;
        if ( v30 < 0 )
          break;
        FastRegion::Internal::CRgnData::StepIterator(v31, (struct FastRegion::CRegion::Iterator *)v62);
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v31, 0LL, 0, v30, 0x30Eu, 0LL);
LABEL_19:
      FastRegion::CRegion::FreeMemory((void **)&v82);
    }
    else
    {
LABEL_21:
      if ( !*((_BYTE *)this + 776) )
        goto LABEL_53;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v82, (const struct tagRECT *)((char *)this + 760));
      v32 = FastRegion::CRegion::Subtract(&v82, (const struct FastRegion::Internal::CRgnData **)v86);
      if ( v32 < 0 )
        ModuleFailFastForHRESULT(v32, retaddr);
      FastRegion::Internal::CRgnData::BeginIterator(v82, (struct FastRegion::CRegion::Iterator *)v62);
      while ( (unsigned __int64)v64 < v63 )
      {
        v69 = *v64;
        v71 = v64[2];
        v33 = 2 * v66;
        v68 = *(_DWORD *)(v65 + 4 * v33);
        v34 = *((_DWORD *)a3 + 19);
        v70 = *(_DWORD *)(v65 + 4 * v33 + 4);
        v76 = *((_DWORD *)a3 + 11);
        v77 = *((_DWORD *)a3 + 12);
        v78 = *((_DWORD *)a3 + 13);
        v79 = *((_DWORD *)a3 + 14);
        v72 = *((_DWORD *)a3 + 7);
        v73 = *((_DWORD *)a3 + 8);
        v74 = *((_DWORD *)a3 + 9);
        v75 = *((_DWORD *)a3 + 10);
        v35 = CConversionSwapChain::ConvertSingleResource(this, v59, &v61, v80, &v72, v34, &v76, &v68);
        v16 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v36, 0LL, 0, v35, 0x325u, 0LL);
          goto LABEL_19;
        }
        FastRegion::Internal::CRgnData::StepIterator(v36, (struct FastRegion::CRegion::Iterator *)v62);
      }
      FastRegion::CRegion::FreeMemory((void **)&v82);
      if ( *((_BYTE *)this + 776) )
      {
        v37 = *((_DWORD *)this + 192);
        v38 = *v10;
        if ( *v10 >= v37 || (v39 = *((_DWORD *)this + 191), v40 = *((_DWORD *)this + 193), v39 >= v40) )
        {
          *(_DWORD *)v84 = 0;
        }
        else
        {
          v41 = v84;
          v42 = (_DWORD *)((char *)v84 + 28);
          *(_DWORD *)v84 = 2;
          *v42 = v38;
          *((_DWORD *)v41 + 3) = v39;
          v42[1] = v37;
          *((_DWORD *)v41 + 4) = (_DWORD)v42 - ((_DWORD)v41 + 12);
          *((_DWORD *)v41 + 1) = v38;
          *((_DWORD *)v41 + 2) = v37;
          *((_DWORD *)v41 + 6) = (_DWORD)v42 - ((_DWORD)v41 + 20) + 8;
          *((_DWORD *)v41 + 5) = v40;
        }
        v43 = FastRegion::CRegion::Intersect(&v84, (const struct FastRegion::Internal::CRgnData **)v86);
        if ( v43 < 0 )
          ModuleFailFastForHRESULT(v43, retaddr);
      }
      else
      {
LABEL_53:
        if ( **v17 )
        {
          v44 = *((_DWORD *)this + 192);
          v45 = *v10;
          if ( *v10 >= v44 || (v46 = *((_DWORD *)this + 191), v47 = *((_DWORD *)this + 193), v46 >= v47) )
          {
            *(_DWORD *)v84 = 0;
          }
          else
          {
            v48 = v84;
            v49 = (_DWORD *)((char *)v84 + 28);
            *(_DWORD *)v84 = 2;
            *v49 = v45;
            *((_DWORD *)v48 + 3) = v46;
            v49[1] = v44;
            *((_DWORD *)v48 + 4) = (_DWORD)v49 - ((_DWORD)v48 + 12);
            *((_DWORD *)v48 + 1) = v45;
            *((_DWORD *)v48 + 2) = v44;
            *((_DWORD *)v48 + 6) = (_DWORD)v49 - ((_DWORD)v48 + 20) + 8;
            *((_DWORD *)v48 + 5) = v47;
          }
          v50 = FastRegion::CRegion::Intersect(&v84, (const struct FastRegion::Internal::CRgnData **)this + 84);
          if ( v50 < 0 )
            ModuleFailFastForHRESULT(v50, retaddr);
        }
      }
      FastRegion::Internal::CRgnData::BeginIterator(v84, (struct FastRegion::CRegion::Iterator *)v62);
      while ( (unsigned __int64)v64 < v63 )
      {
        v51 = *((_DWORD *)a3 + 19);
        v52 = v59;
        v69 = *v64;
        v71 = v64[2];
        v53 = 2 * v66;
        v68 = *(_DWORD *)(v65 + 4 * v53);
        v70 = *(_DWORD *)(v65 + 4 * v53 + 4);
        v76 = *((_DWORD *)a3 + 11);
        v77 = *((_DWORD *)a3 + 12);
        v78 = *((_DWORD *)a3 + 13);
        v79 = *((_DWORD *)a3 + 14);
        v72 = *((_DWORD *)a3 + 7);
        v73 = *((_DWORD *)a3 + 8);
        v74 = *((_DWORD *)a3 + 9);
        v75 = *((_DWORD *)a3 + 10);
        v54 = (*(__int64 (__fastcall **)(_QWORD *))(*v60 + 8LL))(v60);
        v56 = CConversionSwapChain::ConvertMultiResource(this, v54, v55, v81, v52, &v61, v80, &v72, v51, &v76, &v68);
        v16 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v57, 0LL, 0, v56, 0x34Au, 0LL);
          break;
        }
        FastRegion::Internal::CRgnData::StepIterator(v57, (struct FastRegion::CRegion::Iterator *)v62);
      }
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v84);
  FastRegion::CRegion::FreeMemory(v87);
  FastRegion::CRegion::FreeMemory(v86);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v59);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v60);
  return v16;
}
