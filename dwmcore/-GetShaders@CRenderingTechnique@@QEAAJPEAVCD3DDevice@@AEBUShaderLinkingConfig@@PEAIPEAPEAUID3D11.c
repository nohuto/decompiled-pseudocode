/*
 * XREFs of ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C1D8
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002B000 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCShaderCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180026734 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCShaderCache@@IAEBUShaderLinkingConfig@@PEAPEAVC.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ @ 0x180029D90 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x18002C4DC (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18002CA90 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18002CD5C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CRenderingTechnique::GetShaders(
        CRenderingTechnique *this,
        struct CD3DDevice *a2,
        const struct ShaderLinkingConfig *a3,
        unsigned int *a4,
        struct ID3D11PixelShader **a5)
{
  __int128 v5; // xmm0
  __int128 v7; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  char v19; // di
  struct CLinkedShader *v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r9d
  CRenderingTechnique **v23; // r8
  unsigned int i; // edi
  int *v25; // r15
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rax
  volatile signed __int32 *v29; // rbx
  struct CLinkedShader *v30; // rax
  volatile signed __int32 *v31; // r14
  int ResourceNoRef; // eax
  unsigned int v33; // ecx
  int v34; // esi
  unsigned int v35; // edi
  struct ID3D11PixelShader *v36; // rcx
  struct ID3D11PixelShader **v37; // rax
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // r14d
  BOOL v43; // eax
  CHAR v44; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  unsigned int v47; // ecx
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct CLinkedShader *v49[2]; // [rsp+68h] [rbp-98h] BYREF
  struct ID3D11PixelShader **v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+88h] [rbp-78h]
  _OWORD v53[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v54; // [rsp+110h] [rbp+10h]
  __int128 v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+30h]

  v5 = *(_OWORD *)a3;
  v7 = *((_OWORD *)a3 + 1);
  v50 = a5;
  v53[0] = v5;
  v9 = *((_OWORD *)a3 + 2);
  v10 = *(_QWORD *)this;
  v53[1] = v7;
  v12 = *((_OWORD *)a3 + 3);
  v53[2] = v9;
  v13 = *((_OWORD *)a3 + 4);
  v53[3] = v12;
  v14 = *((_OWORD *)a3 + 5);
  v53[4] = v13;
  v15 = *((_OWORD *)a3 + 6);
  v53[5] = v14;
  v16 = *((_OWORD *)a3 + 8);
  v53[6] = v15;
  v53[7] = *((_OWORD *)a3 + 7);
  v17 = *((_OWORD *)a3 + 9);
  v18 = *((_QWORD *)a3 + 20);
  v54 = v16;
  v55 = v17;
  v56 = v18;
  BYTE10(v55) = 1;
  if ( !*(_QWORD *)(v10 + 184) )
  {
    v19 = 1;
    goto LABEL_25;
  }
  v19 = 0;
  if ( *(CRenderingTechnique **)(*(_QWORD *)(v10 + 144) + 8LL * (unsigned int)(*(_DWORD *)(v10 + 168) - 1)) != this )
  {
LABEL_25:
    LODWORD(v54) = -1;
    BYTE8(v55) = 0;
    goto LABEL_4;
  }
  BYTE11(v55) = 1;
LABEL_4:
  ShaderLinkingConfig::GetConstantBufferRequirements(v53, v49);
  v20 = v49[0];
  if ( LODWORD(v49[0]) != *((_DWORD *)this + 65) )
  {
    if ( HIDWORD(v49[0]) != *((_DWORD *)this + 66) )
    {
      CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources((CRenderingTechnique *)((char *)this + 16));
      *((_BYTE *)this + 280) = 1;
    }
    *(_QWORD *)((char *)this + 260) = v20;
  }
  if ( v19 )
  {
    i = 0;
    v25 = *(int **)(*((_QWORD *)this + 1) + 8LL);
  }
  else
  {
    v21 = *(_QWORD *)this;
    v22 = *(_DWORD *)(*(_QWORD *)this + 168LL);
    v23 = *(CRenderingTechnique ***)(*(_QWORD *)this + 144LL);
    if ( v23[v22 - 1] == this )
    {
      i = *(_DWORD *)(v21 + 192) | (v22 - 1);
    }
    else
    {
      for ( i = 0; i < v22; ++v23 )
      {
        if ( this == *v23 )
          break;
        ++i;
      }
    }
    v25 = *(int **)(v21 + 184);
  }
  ShaderLinkingConfig::GetLookupKey(v53, &v51, i);
  v26 = 0;
  if ( v25[4] <= 0 )
    goto LABEL_28;
  v27 = 0LL;
  v28 = *(_QWORD *)v25;
  while ( *(_QWORD *)v28 != v51 || *(_DWORD *)(v28 + 8) != v52 )
  {
    ++v26;
    ++v27;
    v28 += 16LL;
    if ( v27 >= v25[4] )
      goto LABEL_28;
  }
  if ( v26 == -1 )
  {
LABEL_28:
    v49[0] = 0LL;
  }
  else
  {
    v29 = *(volatile signed __int32 **)(*((_QWORD *)v25 + 1) + 8LL * v26);
    if ( v29 )
    {
      if ( *((int *)v29 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v41 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v42 = v41;
          if ( !v41 )
          {
            v43 = IsDebuggerPresent();
            v44 = Response[0];
            if ( v43 )
              v44 = 103;
            Response[0] = v44;
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
          if ( v42 )
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
          if ( Response[0] > 98 )
          {
            if ( Response[0] == 103 )
              break;
            if ( Response[0] == 105 )
              goto LABEL_62;
            if ( Response[0] != 112 )
            {
              if ( Response[0] != 116 )
                goto LABEL_61;
              goto LABEL_59;
            }
LABEL_60:
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_61:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          }
          else
          {
            if ( Response[0] == 98 || Response[0] == 66 )
            {
              __debugbreak();
              break;
            }
            if ( Response[0] == 71 )
              break;
            if ( Response[0] != 73 )
            {
              if ( Response[0] != 80 )
              {
                if ( Response[0] != 84 )
                  goto LABEL_61;
LABEL_59:
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_61;
              }
              goto LABEL_60;
            }
LABEL_62:
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          }
        }
      }
      _InterlockedIncrement(v29 + 2);
    }
    v30 = (struct CLinkedShader *)v29;
    if ( v29 )
    {
      v31 = v29 + 2;
      v30 = (struct CLinkedShader *)v29;
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v29 + 2));
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 24LL))(v29);
        v30 = (struct CLinkedShader *)v29;
        if ( _InterlockedExchangeAdd(v31, 0xFFFFFFFF) == 1 )
        {
          --*v31;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v29 + 16LL))(v29, 1LL);
          goto LABEL_20;
        }
      }
    }
    v49[0] = v30;
    v29 = (volatile signed __int32 *)v30;
    if ( v30 )
      goto LABEL_20;
  }
  v39 = CRenderingTechnique::AddShaderToCache(
          this,
          (struct CShaderCache *)v25,
          i,
          (const struct ShaderLinkingConfig *)v53,
          v49);
  v35 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x1BFu, 0LL);
    return v35;
  }
  v29 = (volatile signed __int32 *)v49[0];
LABEL_20:
  v49[0] = 0LL;
  ResourceNoRef = CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef(v29 + 8, a2, v49);
  v34 = ResourceNoRef;
  v35 = ResourceNoRef;
  if ( ResourceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, ResourceNoRef, 0x11u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v34, 0x1C2u, 0LL);
  }
  else
  {
    v36 = (struct ID3D11PixelShader *)*((_QWORD *)v49[0] + 12);
    v37 = v50;
    *a4 = *((_DWORD *)v29 + 6);
    *v37 = v36;
    if ( v36 )
      ((void (__fastcall *)(struct ID3D11PixelShader *))v36->lpVtbl->AddRef)(v36);
  }
  return v35;
}
