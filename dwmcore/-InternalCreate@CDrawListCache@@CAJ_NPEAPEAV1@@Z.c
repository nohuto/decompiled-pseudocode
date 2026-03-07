__int64 __fastcall CDrawListCache::InternalCreate(bool a1, struct CDrawListCache **a2)
{
  unsigned int v4; // edi
  int Current; // eax
  struct CThreadContext *v6; // rdx
  CDrawListCache *v7; // rcx
  int v8; // r8d
  CDrawListCache *v9; // rax
  volatile signed __int32 *v10; // rbx
  HANDLE ProcessHeap; // rax
  int v13; // eax
  int v14; // esi
  BOOL v15; // eax
  char v16; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int16 Response; // [rsp+90h] [rbp+18h] BYREF
  CDrawListCache **v21; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  Current = CThreadContext::GetCurrent((struct CThreadContext **)&v21);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v6 = (struct CThreadContext *)v21;
  v7 = 0LL;
  v8 = *((_DWORD *)v21 + 29);
  if ( v8 )
  {
    v7 = v21[15];
    v21[15] = *(CDrawListCache **)v7;
    *((_DWORD *)v6 + 29) = v8 - 1;
  }
  if ( (v7 || (ProcessHeap = GetProcessHeap(), (v7 = (CDrawListCache *)HeapAlloc(ProcessHeap, 0, 0x68uLL)) != 0LL))
    && (v9 = CDrawListCache::CDrawListCache(v7, a1), (v10 = (volatile signed __int32 *)v9) != 0LL) )
  {
    if ( *((int *)v9 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v13 = IsKernelDebuggerPresent();
        Response = 63;
        v14 = v13;
        if ( !v13 )
        {
          v15 = IsDebuggerPresent();
          v16 = Response;
          if ( v15 )
            v16 = 103;
          LOBYTE(Response) = v16;
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
        if ( v14 )
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
            goto LABEL_36;
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_35;
            goto LABEL_33;
          }
LABEL_34:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_35:
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
                goto LABEL_35;
LABEL_33:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_35;
            }
            goto LABEL_34;
          }
LABEL_36:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
    _InterlockedIncrement(v10 + 2);
    *a2 = (struct CDrawListCache *)v10;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  return v4;
}
