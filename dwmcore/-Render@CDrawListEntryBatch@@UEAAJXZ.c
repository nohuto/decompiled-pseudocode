__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rcx
  const struct CRenderingEffect *v10; // rbx
  CRenderingBatchCommand **v11; // r14
  CRenderingBatchCommand **v12; // r13
  CRenderingBatchCommand *v13; // rdi
  __int64 v14; // rsi
  bool v15; // al
  _QWORD *v16; // rsi
  const struct CRenderingEffect *v17; // rdi
  const struct CRenderingEffect *v18; // rsi
  int v19; // eax
  __int64 v20; // rsi
  CD3DDynamicAppendBuffer *v21; // rbx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // r14d
  unsigned int v30; // ebx
  int *v31; // rdi
  int v32; // ecx
  __int64 v33; // rcx
  int v34; // eax
  __int64 result; // rax
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // ebx
  unsigned int v52; // ecx
  int v53; // eax
  int v54; // ebx
  BOOL v55; // eax
  char v56; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned int v59; // [rsp+28h] [rbp-E0h]
  unsigned int v60; // [rsp+28h] [rbp-E0h]
  _QWORD v61[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+78h] [rbp-90h]
  __int64 v63; // [rsp+80h] [rbp-88h]
  _QWORD *v64; // [rsp+88h] [rbp-80h]
  int v65; // [rsp+90h] [rbp-78h]
  __int128 v66; // [rsp+98h] [rbp-70h]
  int v67; // [rsp+A8h] [rbp-60h]
  unsigned int v68; // [rsp+ACh] [rbp-5Ch]
  int *v69; // [rsp+B0h] [rbp-58h]
  __int16 v70; // [rsp+B8h] [rbp-50h]
  char v71; // [rsp+BAh] [rbp-4Eh]
  __int64 v72; // [rsp+BCh] [rbp-4Ch]
  __int128 v73; // [rsp+C4h] [rbp-44h]
  char *v74; // [rsp+D8h] [rbp-30h]
  __int64 v75; // [rsp+E0h] [rbp-28h]
  void *retaddr; // [rsp+120h] [rbp+18h]
  int *Response; // [rsp+128h] [rbp+20h] BYREF
  CDrawListEntryBatch *v78; // [rsp+130h] [rbp+28h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)(v1 + 168) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *(_QWORD *)(v1 + 168) = this;
  v3 = *((_QWORD *)this + 3);
  v61[0] = &CD3DBatchExecutionContext::`vftable';
  v61[1] = v3;
  v62 = *(_QWORD *)(v3 + 560);
  v63 = *(_QWORD *)(v3 + 568);
  v64 = (_QWORD *)*((_QWORD *)this + 13);
  LOWORD(Response) = 0;
  HIDWORD(Response) = -1;
  v69 = Response;
  v74 = (char *)this + 72;
  v4 = *((_DWORD *)this + 24);
  ++dword_1803E29C8;
  v65 = 0;
  v66 = 0LL;
  v67 = 24;
  v68 = 0x80000000;
  v70 = 0;
  v71 = 3;
  v72 = 0LL;
  v73 = 0uLL;
  v75 = v4;
  if ( CCommonRegistryData::EnableMegaRects )
  {
    v5 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CDrawListEntryBatch *)((char *)this + 112));
    v7 = v5;
    if ( v5 < 0 )
    {
      v59 = 242;
LABEL_108:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v59, 0LL);
      goto LABEL_39;
    }
  }
  CD3DBatchExecutionContext::StartExecution(
    (CD3DBatchExecutionContext *)v61,
    (CDrawListEntryBatch *)((char *)this + 56),
    *((const struct ClipPlaneInfoRef **)this + 4));
  v8 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)(v8 + 160) )
  {
    v5 = CDrawListEntryBatch::RenderLoop<0>(this, v61);
    v7 = v5;
    if ( v5 >= 0 )
      goto LABEL_35;
    v59 = 253;
    goto LABEL_108;
  }
  v9 = *(_QWORD *)(v8 + 24);
  v7 = 0;
  v10 = 0LL;
  v11 = (CRenderingBatchCommand **)(v9 + 8LL * *((unsigned int *)this + 12));
  v12 = (CRenderingBatchCommand **)(v9 + 8LL * *((unsigned int *)this + 13));
  if ( v11 == v12 )
    goto LABEL_34;
  while ( 1 )
  {
    v13 = *v11;
    LODWORD(v9) = *(_DWORD *)*v11;
    if ( (_DWORD)v9 == 1 )
    {
      if ( *((_BYTE *)v13 + 92) )
      {
        v15 = 1;
      }
      else
      {
        v14 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 64LL);
        if ( *(float *)(v14 + 84) <= *(float *)(v14 + 76) || *(float *)(v14 + 88) <= *(float *)(v14 + 80) )
        {
          v15 = 0;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v61[0] + 8LL))(v61, *((unsigned int *)v13 + 21));
          (*(void (__fastcall **)(_QWORD *, _QWORD))(v61[0] + 24LL))(v61, *(unsigned __int8 *)(v14 + 72));
          v15 = 1;
        }
      }
      goto LABEL_11;
    }
    v41 = v9 - 2;
    if ( !v41 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))v61[0])(v61, *((_QWORD *)v13 + 1));
      goto LABEL_31;
    }
    v42 = v41 - 1;
    if ( !v42 )
      break;
    if ( (unsigned int)(v42 - 1) > 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    v15 = CRenderingBatchCommand::ApplyRenderState(*v11, (struct IDrawListStateSink *)v61);
LABEL_11:
    if ( v15 )
      goto LABEL_12;
LABEL_31:
    if ( ++v11 == v12 )
      goto LABEL_32;
  }
  if ( *((_DWORD *)v13 + 4) != 24 )
    (*(void (__fastcall **)(_QWORD *))(v61[0] + 8LL))(v61);
  if ( *((_BYTE *)v13 + 20) != 3 )
    (*(void (__fastcall **)(_QWORD *))(v61[0] + 24LL))(v61);
  (*(void (__fastcall **)(_QWORD *, CRenderingBatchCommand *))(v61[0] + 16LL))(v61, v13);
LABEL_12:
  v16 = v64;
  v65 |= 0x80000000;
  if ( v64[5] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v64[2] + 560LL) + 120LL))(
      *(_QWORD *)(v64[2] + 560LL),
      v64[3],
      0LL);
    v16[5] = 0LL;
    *((_DWORD *)v16 + 12) = 0;
    if ( !v71 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v16[8] + 560LL) + 120LL))(
        *(_QWORD *)(v16[8] + 560LL),
        v16[9],
        0LL);
      v16[11] = 0LL;
      *((_DWORD *)v16 + 24) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v62 + 96LL))(
        v62,
        DWORD2(v73),
        HIDWORD(v72),
        0LL);
      goto LABEL_15;
    }
    if ( v71 == 2 )
    {
      CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v64 + 14));
      CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v16 + 8));
      v7 = 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v62 + 160LL))(
        v62,
        DWORD2(v73),
        HIDWORD(v73),
        HIDWORD(v72),
        0,
        v73);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v62 + 104LL))(v62, DWORD1(v73), (unsigned int)v72);
LABEL_15:
      v7 = 0;
    }
    ++HIDWORD(v75);
    *(_QWORD *)((char *)&v73 + 4) = 0LL;
    HIDWORD(v73) = 0;
  }
  else
  {
    v7 = 0;
  }
  switch ( *(_DWORD *)v13 )
  {
    case 1:
LABEL_18:
      v17 = (const struct CRenderingEffect *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v13 + 1) + 40LL))(*((_QWORD *)v13 + 1));
      goto LABEL_19;
    case 2:
      v18 = v10;
      v17 = 0LL;
      v10 = 0LL;
      break;
    case 3:
      v17 = (const struct CRenderingEffect *)*((_QWORD *)v13 + 1);
LABEL_19:
      v18 = v10;
      v10 = v17;
      if ( v17 )
        (**(void (__fastcall ***)(const struct CRenderingEffect *))v17)(v17);
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)v13 - 4) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      goto LABEL_18;
  }
  if ( v18 )
    (*(void (__fastcall **)(const struct CRenderingEffect *))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = CD3DBatchExecutionContext::SetRenderingEffectState((CD3DBatchExecutionContext *)v61, v17);
  if ( v19 < 0 )
  {
    v60 = 313;
    goto LABEL_119;
  }
  if ( !v17 )
    goto LABEL_27;
  v20 = *((_QWORD *)&v66 + 1);
  if ( *((_QWORD *)&v66 + 1) )
  {
    v43 = 0LL;
    if ( *(_DWORD *)(*((_QWORD *)&v66 + 1) + 24LL) )
    {
      while ( 1 )
      {
        v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, CRenderingBatchCommand *))(**(_QWORD **)(v20 + 8) + 40LL))(
                *(_QWORD *)(v20 + 8),
                v61,
                v11[v43 + 1]);
        v7 = v44;
        if ( v44 < 0 )
          break;
        v43 = (unsigned int)(v43 + 1);
        if ( (unsigned int)v43 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_27;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v44, 0x53u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v7, 0x1EEu, 0LL);
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, _QWORD *, CRenderingBatchCommand *))(*(_QWORD *)v17 + 40LL))(
            v17,
            v61,
            *v11);
    v7 = v19;
    if ( v19 >= 0 )
      goto LABEL_27;
    v60 = 499;
LABEL_119:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v19, v60, 0LL);
  }
LABEL_27:
  if ( *((_QWORD *)&v66 + 1) )
  {
    v45 = *(unsigned int *)(*((_QWORD *)&v66 + 1) + 24LL);
    ++dword_1803E29D0;
    dword_1803E29D4 += v45;
    *((_QWORD *)&v66 + 1) = 0LL;
    v11 += v45;
  }
  if ( v7 >= 0 )
  {
    v65 = 0;
    goto LABEL_31;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x169u, 0LL);
LABEL_32:
  if ( v10 )
    (*(void (__fastcall **)(const struct CRenderingEffect *))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_34:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0xF9u, 0LL);
  }
  else
  {
LABEL_35:
    v65 |= 0x2000u;
    if ( v64[5] )
    {
      v21 = (CD3DDynamicAppendBuffer *)(v64 + 8);
      CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v64 + 2));
      if ( v71 )
      {
        if ( v71 == 2 )
        {
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v64 + 14));
          CD3DDynamicAppendBuffer::EndAppend(v21);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v62 + 160LL))(
            v62,
            DWORD2(v73),
            HIDWORD(v73),
            HIDWORD(v72),
            0,
            v73);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v62 + 104LL))(
            v62,
            DWORD1(v73),
            (unsigned int)v72);
        }
      }
      else
      {
        CD3DDynamicAppendBuffer::EndAppend(v21);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v62 + 96LL))(
          v62,
          DWORD2(v73),
          HIDWORD(v72),
          0LL);
      }
      ++HIDWORD(v75);
      *(_QWORD *)((char *)&v73 + 4) = 0LL;
      HIDWORD(v73) = 0;
    }
  }
LABEL_39:
  if ( HIDWORD(v75) )
    dword_1803E2AE0 += HIDWORD(v75);
  if ( v64[5] )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v64 + 2));
  if ( v64[11] )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v64 + 8));
  if ( v64[17] )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v64 + 14));
  v22 = *((_QWORD *)this + 4);
  if ( v22 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  }
  v23 = *((_DWORD *)this + 12);
  v24 = *((_DWORD *)this + 13);
  if ( v23 != v24 )
    dword_1803E29CC += v24 - v23;
  dword_1803E2AEC += *((_DWORD *)this + 36);
  std::deque<CMegaRect>::_Tidy((char *)this + 112);
  v26 = *((_QWORD *)this + 3);
  if ( *(CDrawListEntryBatch **)(v26 + 168) != this )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *(_QWORD *)(v26 + 168) = 0LL;
  v27 = *(_DWORD *)(v26 + 128);
  v78 = this;
  v28 = v27 + 1;
  if ( v27 + 1 < v27 )
  {
    v51 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_146;
  }
  if ( v28 > *(_DWORD *)(v26 + 124) )
  {
    v49 = DynArrayImpl<0>::AddMultipleAndSet(v26 + 104, 8LL, 1LL, &v78);
    v51 = v49;
    if ( v49 >= 0 )
      goto LABEL_55;
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0xC0u, 0LL);
LABEL_146:
    ModuleFailFastForHRESULT(v51, retaddr);
  }
  *(_QWORD *)(*(_QWORD *)(v26 + 104) + 8LL * v27) = this;
  *(_DWORD *)(v26 + 128) = v28;
LABEL_55:
  if ( *((int *)this + 4) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v53 = IsKernelDebuggerPresent();
      LOWORD(Response) = 63;
      v54 = v53;
      if ( !v53 )
      {
        v55 = IsDebuggerPresent();
        v56 = (char)Response;
        if ( v55 )
          v56 = 103;
        LOBYTE(Response) = v56;
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
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_56;
        case 'G':
        case 'g':
          goto LABEL_56;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_142;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_142;
        default:
LABEL_142:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_56:
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
  v29 = *((_DWORD *)this + 13);
  v30 = *((_DWORD *)this + 12);
  if ( v30 < v29 )
  {
    while ( 2 )
    {
      v31 = *(int **)(*(_QWORD *)(v26 + 24) + 8LL * v30);
      v32 = *v31;
      if ( *v31 == 1 )
      {
        v33 = *((_QWORD *)v31 + 1);
        if ( v33 )
          goto LABEL_59;
        goto LABEL_60;
      }
      if ( !v32 )
        goto LABEL_60;
      v37 = v32 - 2;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( !v38 )
          goto LABEL_70;
        v39 = (unsigned int)(v38 - 1);
        if ( !(_DWORD)v39 )
        {
          v40 = *((_QWORD *)v31 + 12);
          if ( v40 )
            std::default_delete<CDrawListPrimitive>::operator()(v39, v40);
LABEL_70:
          v33 = *((_QWORD *)v31 + 1);
          if ( v33 )
LABEL_59:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
LABEL_60:
          *v31 = 0;
          Response = v31;
          v34 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v26 + 64, &Response, 1LL);
          if ( v34 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v34, retaddr);
          if ( ++v30 >= v29 )
            goto LABEL_62;
          continue;
        }
        if ( (_DWORD)v39 != 1 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
      }
      break;
    }
    wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)v31 + 1);
    goto LABEL_60;
  }
LABEL_62:
  if ( (*(_DWORD *)(v26 + 176))-- == 1 )
  {
    v46 = *(_DWORD *)(v26 + 60);
    if ( v46 <= *(_DWORD *)(v26 + 48) - *(_DWORD *)(v26 + 56) )
      v46 = *(_DWORD *)(v26 + 48) - *(_DWORD *)(v26 + 56);
    *(_DWORD *)(v26 + 60) = v46;
    v47 = *(_DWORD *)(v26 + 100);
    if ( v47 <= *(_DWORD *)(v26 + 88) - *(_DWORD *)(v26 + 96) )
      v47 = *(_DWORD *)(v26 + 88) - *(_DWORD *)(v26 + 96);
    *(_DWORD *)(v26 + 100) = v47;
    v48 = *(_DWORD *)(v26 + 140);
    if ( v48 <= *(_DWORD *)(v26 + 128) - *(_DWORD *)(v26 + 136) )
      v48 = *(_DWORD *)(v26 + 128) - *(_DWORD *)(v26 + 136);
    *(_DWORD *)(v26 + 140) = v48;
    *(_DWORD *)(v26 + 48) = 0;
    *(_DWORD *)(v26 + 56) = 0;
  }
  result = (unsigned int)v7;
  *((_QWORD *)this + 6) = -1LL;
  return result;
}
