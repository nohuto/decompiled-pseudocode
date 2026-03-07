__int64 __fastcall CDrawListCacheSet::GetCache(
        CDrawListCacheSet *this,
        int a2,
        int a3,
        const struct IDeviceTarget *a4,
        struct CDrawListCache **a5)
{
  struct CDrawListCache *v5; // rdi
  int v8; // r14d
  volatile signed __int32 *v9; // rsi
  char *v10; // rcx
  __int64 v11; // rax
  struct CDrawListCache *v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r14
  char *v16; // rcx
  unsigned int v17; // ebx
  struct CDrawListCache *v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  char *v24; // rcx
  int v25; // ebx
  __int64 v26; // rax
  int v27; // eax
  int v28; // ebx
  BOOL v29; // eax
  CHAR v30; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v33; // rcx
  char *v34; // rcx
  int v35; // ecx
  CHAR Response[8]; // [rsp+60h] [rbp-41h] BYREF
  struct CDrawListCache *v37; // [rsp+68h] [rbp-39h] BYREF
  int v38; // [rsp+70h] [rbp-31h] BYREF
  __int64 v39; // [rsp+78h] [rbp-29h] BYREF
  int v40; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v41[16]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v42[16]; // [rsp+98h] [rbp-9h] BYREF
  _BYTE v43[16]; // [rsp+A8h] [rbp+7h] BYREF

  v5 = 0LL;
  v40 = a2;
  v38 = a3;
  v8 = a3;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 12LL) + 8;
  v11 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v10)(v10, v41);
  v12 = (struct CDrawListCache *)*((_QWORD *)this + 1);
  v13 = *(_QWORD *)this;
  v37 = v12;
  v14 = *(_DWORD *)(v11 + 8);
  *(_DWORD *)Response = v14;
  while ( (struct CDrawListCache *)v13 != v12 )
  {
    if ( *(_DWORD *)v13 == v40 && *(_DWORD *)(v13 + 4) == v8 && *(_DWORD *)(v13 + 8) == v14 )
    {
      v15 = *(_QWORD *)(v13 + 16);
      v16 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 8LL) + 8;
      if ( *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v16 + 8LL))(v16) + 568) )
      {
        if ( *(_BYTE *)(v15 + 101) )
        {
LABEL_8:
          v9 = *(volatile signed __int32 **)(v13 + 16);
          v8 = v38;
          break;
        }
      }
      else if ( !*(_BYTE *)(v15 + 102) )
      {
        goto LABEL_8;
      }
      v8 = v38;
      v12 = v37;
      v14 = *(_DWORD *)Response;
    }
    v13 += 24LL;
  }
  v37 = (struct CDrawListCache *)v9;
  if ( !v9 )
    goto LABEL_25;
  if ( *((int *)v9 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v27 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v28 = v27;
      if ( !v27 )
      {
        v29 = IsDebuggerPresent();
        v30 = Response[0];
        if ( v29 )
          v30 = 103;
        Response[0] = v30;
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
      if ( v28 )
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
          goto LABEL_11;
        case 'G':
        case 'g':
          goto LABEL_11;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_46;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_46;
        default:
LABEL_46:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_11:
  _InterlockedIncrement(v9 + 2);
  v9 = (volatile signed __int32 *)v37;
  if ( v37 )
  {
    v17 = 0;
  }
  else
  {
LABEL_25:
    v37 = 0LL;
    if ( v9 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v9);
    v22 = CDrawListCache::InternalCreate(0, &v37);
    LODWORD(v39) = v22;
    v17 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1Cu, 0LL);
      v5 = v37;
      goto LABEL_15;
    }
    v9 = (volatile signed __int32 *)v37;
    if ( !*((_BYTE *)v37 + 101) || *((_BYTE *)v37 + 102) )
    {
      CMILRefCountImpl::AddReference((struct CDrawListCache *)((char *)v37 + 8));
      v24 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 12LL) + 8;
      v25 = *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v24)(v24, v43) + 8);
      v26 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
              this,
              0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3));
      *(_DWORD *)v26 = v40;
      *(_DWORD *)(v26 + 4) = v38;
      *(_DWORD *)(v26 + 8) = v25;
      *(_QWORD *)(v26 + 16) = v9;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 2));
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v9);
      v17 = v39;
    }
    else
    {
      CMILRefCountImpl::AddReference((struct CDrawListCache *)((char *)v37 + 8));
      v33 = *((_QWORD *)a4 + 1);
      v37 = (struct CDrawListCache *)v9;
      v34 = (char *)a4 + *(int *)(v33 + 12) + 8;
      v35 = *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v34)(v34, v42) + 8);
      v39 = *(_QWORD *)this;
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,enum DXGI_COLOR_SPACE_TYPE,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        (_DWORD)this,
        (unsigned int)&v40,
        (unsigned int)&v39,
        v40,
        v8,
        v35,
        (__int64)&v37);
    }
  }
  v18 = *(struct CDrawListCache **)this;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) > 1 )
  {
    while ( v18 != *((struct CDrawListCache **)this + 1) )
    {
      v20 = *((_QWORD *)v18 + 2);
      if ( (volatile signed __int32 *)v20 == v9 )
        goto LABEL_23;
      v21 = 0LL;
      if ( g_pComposition )
        v21 = *((_QWORD *)g_pComposition + 62);
      if ( (unsigned __int64)(v21 - *(_QWORD *)(v20 + 24)) <= 0x1E )
      {
LABEL_23:
        v18 = (struct CDrawListCache *)((char *)v18 + 24);
      }
      else
      {
        v37 = v18;
        v18 = *(struct CDrawListCache **)detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::erase(
                                           this,
                                           &v38,
                                           &v37);
      }
    }
  }
  *a5 = (struct CDrawListCache *)v9;
LABEL_15:
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v5);
  return v17;
}
