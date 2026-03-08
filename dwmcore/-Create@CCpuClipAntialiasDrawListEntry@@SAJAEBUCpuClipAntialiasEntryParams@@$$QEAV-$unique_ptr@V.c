/*
 * XREFs of ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x18007BFD8
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18005BB80 (PrimitiveStorage--Alloc_16_.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasDrawListEntry@@@Z @ 0x18007C218 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasDrawListEntry@@@Z.c)
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x18007C24C (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 *     ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x18007C264 (-CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ @ 0x1800EB2C0 (--1-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800EB2E0 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D4394 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CCpuClipAntialiasDrawListEntry::Create(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rax
  char v6; // r14
  PrimitiveStorage::CInlineStorageBase *v7; // rsi
  __int64 v8; // rbx
  char v9; // r15
  PrimitiveStorage::CInlineStorageBase *v10; // rax
  struct CCpuClipAntialiasDrawListEntry *v11; // rcx
  __int128 v12; // xmm0
  int v13; // ebx
  PrimitiveStorage::CInlineStorageBase *v14; // rdx
  struct CObjectCache *ObjectCache; // rax
  char *v16; // rbx
  int v17; // edx
  PrimitiveStorage::CInlineStorageBase *v18; // rsi
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int64 *v21; // rax
  void (__fastcall ***v22)(_QWORD); // rcx
  void (__fastcall ***v23)(_QWORD); // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  PrimitiveStorage::CInlineStorageBase *v26; // rdx
  __int64 v28; // xmm0_8
  int v29; // eax
  int v30; // edi
  BOOL v31; // eax
  char v32; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  int v35; // [rsp+20h] [rbp-49h]
  char *v36; // [rsp+60h] [rbp-9h] BYREF
  __int128 v37; // [rsp+68h] [rbp-1h] BYREF
  __int64 v38; // [rsp+78h] [rbp+Fh] BYREF
  int v39; // [rsp+80h] [rbp+17h]
  __int64 v40; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int16 Response; // [rsp+D0h] [rbp+67h] BYREF
  _QWORD *v43; // [rsp+E0h] [rbp+77h]
  PrimitiveStorage::CInlineStorageBase *v44; // [rsp+E8h] [rbp+7Fh] BYREF

  v43 = a3;
  CCpuClipAntialiasSink::CalcBoundingRect(*(_QWORD *)(a1 + 48), 0LL, a1 + 56, &v37);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_BYTE *)(a1 + 80);
  v7 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v8 = *(_QWORD *)(v5 + 40);
  LODWORD(v5) = *(_DWORD *)(a1 + 72);
  v44 = 0LL;
  v39 = v5;
  v9 = *(_BYTE *)(v8 + 72);
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)&v38);
  v10 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v38);
  if ( v10 )
  {
    v12 = v37;
    *((_BYTE *)v10 + 72) = v9;
    v7 = v10;
    *((_BYTE *)v10 + 104) = v6;
    *(_OWORD *)((char *)v10 + 76) = v12;
    *(_QWORD *)((char *)v10 + 92) = *(_QWORD *)(v8 + 92);
    v13 = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, -2147024882, 0x6Eu, 0LL);
    v13 = -2147024882;
  }
  v14 = v44;
  v44 = v7;
  if ( v14 )
    std::default_delete<CDrawListPrimitive>::operator()(v11, v14);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
      (const char *)(unsigned int)v13,
      v35);
    goto LABEL_53;
  }
  ObjectCache = CThreadContext::GetObjectCache(v11);
  v16 = 0LL;
  v17 = *((_DWORD *)ObjectCache + 1);
  if ( v17 )
  {
    v16 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v16;
    *((_DWORD *)ObjectCache + 1) = v17 - 1;
  }
  if ( !v16 )
  {
    v16 = (char *)DefaultHeap::Alloc(0x78uLL);
    if ( !v16 )
    {
      v36 = 0LL;
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
        (const char *)0x8007000ELL,
        v35);
      wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v36);
LABEL_53:
      std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>(&v44);
      return (unsigned int)v13;
    }
  }
  v18 = v44;
  v44 = 0LL;
  *((_DWORD *)v16 + 2) = 0;
  *((_QWORD *)v16 + 2) = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v16 + 6) = 1065353216;
  *((_DWORD *)v16 + 7) = 1065353216;
  *((_DWORD *)v16 + 8) = 1065353216;
  *((_DWORD *)v16 + 9) = 1065353216;
  *((_DWORD *)v16 + 12) = *(_DWORD *)a1;
  v19 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)v16 + 7) = v19;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = *(_OWORD **)(a1 + 24);
  if ( v20 )
    *(_OWORD *)(v16 + 24) = *v20;
  v21 = *(__int64 **)(a1 + 32);
  if ( v21 )
  {
    v28 = *v21;
    *((_DWORD *)v16 + 12) |= 0x400u;
    *((_QWORD *)v16 + 5) = v28;
  }
  *(_QWORD *)v16 = &CHWDrawListEntry::`vftable';
  *((_QWORD *)v16 + 8) = v18;
  v22 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  *((_QWORD *)v16 + 9) = v22;
  if ( v22 )
    (**v22)(v22);
  ++CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)v16 = &CCpuClipAntialiasDrawListEntry::`vftable';
  v23 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  *((_QWORD *)v16 + 10) = v23;
  if ( v23 )
    (**v23)(v23);
  *((_QWORD *)v16 + 11) = *(_QWORD *)(a1 + 56);
  *((_DWORD *)v16 + 24) = *(_DWORD *)(a1 + 64);
  v24 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v16 + 13) = v24;
  v16[112] = *(_BYTE *)(a1 + 81);
  v16[113] = *(_BYTE *)(a1 + 82);
  v36 = v16;
  if ( *((int *)v16 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v29 = IsKernelDebuggerPresent();
      Response = 63;
      v30 = v29;
      if ( !v29 )
      {
        v31 = IsDebuggerPresent();
        v32 = Response;
        if ( v31 )
          v32 = 103;
        LOBYTE(Response) = v32;
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
      if ( v30 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
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
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          break;
        if ( (char)Response == 105 )
          goto LABEL_51;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_50;
          goto LABEL_48;
        }
LABEL_49:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_50:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( (char)Response == 98 || (char)Response == 66 )
        {
          __debugbreak();
          break;
        }
        if ( (char)Response == 71 )
          break;
        if ( (char)Response != 73 )
        {
          if ( (char)Response != 80 )
          {
            if ( (char)Response != 84 )
              goto LABEL_50;
LABEL_48:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_50;
          }
          goto LABEL_49;
        }
LABEL_51:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  v25 = v43;
  v26 = v44;
  *v43 = v36;
  if ( v26 )
    std::default_delete<CDrawListPrimitive>::operator()(v25, v26);
  return 0LL;
}
