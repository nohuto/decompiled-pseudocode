/*
 * XREFs of ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180026018 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002BA50 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802B5050 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180026C2C (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x180026DC4 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x1800270D8 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18002CA90 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800CFF5C (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800F0048 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x1800FF64C (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$span@$$CBE$0-0@gsl@@AEBU1@@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800FFCC0 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x180102210 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x180106360 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CCommonRenderingShaderCache::GetCommonOrCubeMapRenderingShader(
        CCommonRenderingShaderCache *this,
        struct CD3DDevice *a2,
        const struct CommonRenderingShaderDesc *a3,
        char a4,
        unsigned int *a5,
        struct ID3D11PixelShader **a6)
{
  ShaderLinkingSamplerDesc *v6; // rdi
  __int64 v10; // rbx
  int v11; // ebx
  __int128 v12; // xmm1
  int v13; // eax
  bool v14; // cc
  __int128 v15; // xmm0
  unsigned __int8 v16; // r15
  bool v17; // al
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r14d
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  volatile signed __int32 *v25; // rdi
  ID3DBlob *v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // r8d
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  ID3DBlob *v31; // rbx
  size_t v33; // rdi
  __int64 ShaderLinkingBody; // rax
  int LinkedShader; // eax
  unsigned int v36; // ecx
  HRESULT v37; // ebx
  CLinkedShader *v38; // rcx
  int Resource; // eax
  unsigned int v40; // ecx
  unsigned int v41; // r12d
  struct ID3D10BlobVtbl *lpVtbl; // rdx
  ID3DBlob *v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // ecx
  void *v46; // rax
  unsigned int v47; // ecx
  int v48; // eax
  CLinkedShader *v49; // r10
  CLinkedShader *v50; // rax
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // eax
  int v54; // r12d
  BOOL v55; // eax
  CHAR v56; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  ID3DBlob *ppBlob; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v63; // [rsp+70h] [rbp-90h]
  struct CD3DDevice *v64[3]; // [rsp+78h] [rbp-88h] BYREF
  SIZE_T Size[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v66; // [rsp+A0h] [rbp-60h]
  struct ID3D11PixelShader **v67; // [rsp+A8h] [rbp-58h]
  __int128 v68; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v69[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-10h]
  _BYTE v71[56]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v72; // [rsp+130h] [rbp+30h] BYREF
  __int128 v73; // [rsp+140h] [rbp+40h] BYREF
  __int128 v74; // [rsp+150h] [rbp+50h]
  __int128 v75; // [rsp+160h] [rbp+60h]
  __int128 v76; // [rsp+170h] [rbp+70h]
  __int128 v77; // [rsp+180h] [rbp+80h]
  __int128 v78; // [rsp+190h] [rbp+90h]
  __int128 v79; // [rsp+1A0h] [rbp+A0h]
  __int128 v80; // [rsp+1B0h] [rbp+B0h]
  int v81; // [rsp+1C0h] [rbp+C0h]
  __int128 v82; // [rsp+1C8h] [rbp+C8h]
  __int128 v83; // [rsp+1D8h] [rbp+D8h]

  v6 = (ShaderLinkingSamplerDesc *)&v73;
  v66 = a5;
  v67 = a6;
  v64[0] = a2;
  v73 = 0LL;
  v10 = 4LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v6);
    v6 = (ShaderLinkingSamplerDesc *)((char *)v6 + 32);
    --v10;
  }
  while ( v10 );
  v11 = *(_DWORD *)a3;
  v12 = *(_OWORD *)((char *)a3 + 8);
  v13 = *(_DWORD *)a3;
  v81 = -1;
  v73 = v12;
  BYTE8(v74) = (v13 & 4) != 0;
  v83 = 0LL;
  BYTE1(v83) = (v11 & 0x10) != 0;
  BYTE7(v83) = *((_BYTE *)a3 + 44);
  LOBYTE(v83) = (v11 & 8) != 0;
  v14 = *((_DWORD *)a2 + 146) < 37632;
  v15 = *(_OWORD *)((char *)a3 + 24);
  BYTE6(v83) = *((_BYTE *)a3 + 45);
  BYTE8(v83) = *((_BYTE *)a3 + 46);
  v82 = v15;
  BYTE4(v83) = a4;
  if ( v14 )
  {
    v18 = v11 & 3;
    v19 = v18 | 4;
    v63 = v18 | 4;
    v16 = 0;
  }
  else
  {
    v16 = 1;
    v81 = *((_DWORD *)a3 + 10);
    v17 = (v11 & 0x20) != 0;
    v18 = v11 & 3;
    BYTE5(v74) = v17;
    v19 = v18;
    v63 = v18;
  }
  ShaderLinkingConfig::GetLookupKey(&v73, &v72, v19);
  v21 = 0;
  v22 = 0;
  if ( dword_1803E30D0 <= 0 )
    goto LABEL_22;
  v23 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    v20 = v18;
    if ( *(_QWORD *)(v24 + g_commonRenderingShaderCache) == (_QWORD)v72
      && *(_DWORD *)(v24 + g_commonRenderingShaderCache + 8) == DWORD2(v72) )
    {
      break;
    }
    ++v22;
    ++v23;
    v24 += 16LL;
    if ( v23 >= dword_1803E30D0 )
      goto LABEL_22;
  }
  if ( v22 == -1 )
  {
LABEL_22:
    ppBlob = 0LL;
    goto LABEL_23;
  }
  v25 = *(volatile signed __int32 **)(*(&g_commonRenderingShaderCache + 1) + 8LL * v22);
  if ( v25 )
  {
    if ( *((int *)v25 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v53 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v54 = v53;
        if ( !v53 )
        {
          v55 = IsDebuggerPresent();
          v56 = Response[0];
          if ( v55 )
            v56 = 103;
          Response[0] = v56;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_1803392B0,
          word_1803392B0,
          "Function: ",
          L"CMILRefCountImpl::AddReference",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          23);
        if ( v54 )
        {
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
        }
        else
        {
          DbgPrintEx(
            0x65u,
            0,
            "(No kernel debugger is present.) Respond with:\n"
            "  g                    -- Go (continue)\n"
            "  eb 0x%p 'p';g  -- terminate Process\n"
            "  eb 0x%p 't';g  -- terminate Thread\n"
            " or regular debugging.\n",
            Response,
            Response);
          __debugbreak();
        }
        switch ( Response[0] )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_12;
          case 'G':
          case 'g':
            goto LABEL_12;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_51;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_51;
          default:
LABEL_51:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_12:
    _InterlockedIncrement(v25 + 2);
  }
  v26 = (ID3DBlob *)v25;
  if ( !v25
    || (v26 = (ID3DBlob *)v25, _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) != 1)
    || (CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v25 + 2)),
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 24LL))(v25),
        v26 = (ID3DBlob *)v25,
        _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) != 1) )
  {
    ppBlob = v26;
    v25 = (volatile signed __int32 *)v26;
    if ( v26 )
      goto LABEL_16;
LABEL_23:
    CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(Size, a3, v20);
    v33 = Size[0];
    if ( Size[0] )
    {
      *(_QWORD *)&v72 = 0x200000000LL;
      ppBlob = 0LL;
      v37 = D3DCreateBlob(Size[0], &ppBlob);
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v37, 0x5Bu, 0LL);
      }
      else
      {
        v46 = (void *)((__int64 (__fastcall *)(ID3DBlob *))ppBlob->lpVtbl->GetBufferPointer)(ppBlob);
        memcpy_0(v46, (const void *)Size[1], v33);
        if ( DefaultHeap::Alloc(0x58uLL)
          && (v48 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)&v72),
              v50 = CLinkedShader::CLinkedShader(v49, ppBlob, v48),
              (v25 = (volatile signed __int32 *)v50) != 0LL) )
        {
          CMILRefCountImpl::AddReference((CLinkedShader *)((char *)v50 + 8));
          ShaderLinkingConfig::GetLookupKey(&v73, &v68, v63);
          v51 = CShaderCache::AddLinkedShader(&g_commonRenderingShaderCache, &v68, v25);
          v37 = v51;
          if ( v51 >= 0 )
          {
            CMILRefCountBaseT<IMILRefCount>::InternalRelease(v25);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppBlob);
            goto LABEL_16;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x64u, 0LL);
          CMILRefCountBaseT<IMILRefCount>::InternalRelease(v25);
        }
        else
        {
          v37 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024882, 0x61u, 0LL);
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppBlob);
    }
    else
    {
      ShaderLinkingBody = CommonRenderingShaderBody::GetShaderLinkingBody(v71, v18, v16);
      v72 = 0uLL;
      v69[0] = *(_OWORD *)ShaderLinkingBody;
      v69[1] = *(_OWORD *)(ShaderLinkingBody + 16);
      v69[2] = *(_OWORD *)(ShaderLinkingBody + 32);
      v70 = *(_QWORD *)(ShaderLinkingBody + 48);
      *(_OWORD *)Size = 0uLL;
      LinkedShader = CShaderCache::CreateLinkedShader(
                       (const void **)&g_commonRenderingShaderCache,
                       v63,
                       (__int64)&v73,
                       (__int64)v69,
                       Size,
                       (struct CLinkedShader **)&ppBlob);
      v37 = LinkedShader;
      if ( LinkedShader >= 0 )
      {
        v25 = (volatile signed __int32 *)ppBlob;
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, LinkedShader, 0x75u, 0LL);
    }
    return (unsigned int)v37;
  }
  --*((_DWORD *)v25 + 2);
  (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 16LL))(v25, 1LL);
LABEL_16:
  v27 = *((_QWORD *)v25 + 6);
  v28 = 0;
  v29 = (*((_QWORD *)v25 + 7) - v27) >> 3;
  if ( v29 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = *(ID3DBlob **)(v27 + 8 * v30);
      if ( v64[0] == (struct CD3DDevice *)v31[3].lpVtbl[2].QueryInterface )
        break;
      v30 = ++v28;
      if ( v28 >= v29 )
        goto LABEL_27;
    }
    if ( v31 )
      goto LABEL_20;
  }
LABEL_27:
  v38 = (CLinkedShader *)*((_QWORD *)v25 + 5);
  ppBlob = 0LL;
  Resource = CLinkedShader::CreateResource(v38, v64[0], (struct CD3DPixelShader **)&ppBlob);
  v41 = Resource;
  if ( Resource >= 0 )
  {
    v31 = ppBlob;
    lpVtbl = ppBlob[10].lpVtbl;
    v43 = ppBlob + 9;
    v64[0] = (struct CD3DDevice *)(v25 + 8);
    if ( lpVtbl == ppBlob[11].lpVtbl )
    {
      std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v43, lpVtbl, v64);
    }
    else
    {
      lpVtbl->QueryInterface = (HRESULT (__stdcall *)(ID3D10Blob *, const IID *const, void **))(v25 + 8);
      v43[1].lpVtbl = (struct ID3D10BlobVtbl *)((char *)v43[1].lpVtbl + 8);
    }
    v44 = (__int64)(*((_QWORD *)v25 + 7) - *((_QWORD *)v25 + 6)) >> 3;
    ppBlob = 0LL;
    *(_QWORD *)&v72 = 0LL;
    v64[0] = 0LL;
    *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 v25 + 12,
                 v44) = v31;
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v64);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v72);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&ppBlob);
    v21 = v41;
LABEL_20:
    *v66 = *((_DWORD *)v25 + 6);
    *v67 = (struct ID3D11PixelShader *)v31[12].lpVtbl;
    return v21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, Resource, 0x52u, 0LL);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&ppBlob);
  MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v41, 0x11u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v41, 0x79u, 0LL);
  return v41;
}
