__int64 __fastcall CResource::InternalRelease(CResource *this)
{
  volatile signed __int32 *v1; // rbx
  unsigned __int32 v2; // edi
  struct CThreadContext *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct CThreadContext *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v10; // edi
  BOOL v11; // eax
  char v12; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  struct CThreadContext *v15; // [rsp+60h] [rbp-10h] BYREF
  __int16 Response; // [rsp+A0h] [rbp+30h] BYREF
  struct CThreadContext *v17; // [rsp+A8h] [rbp+38h] BYREF
  struct CThreadContext *v18; // [rsp+B0h] [rbp+40h] BYREF
  struct CThreadContext *v19; // [rsp+B8h] [rbp+48h] BYREF

  v1 = (volatile signed __int32 *)this;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 )
    return v2;
  if ( *((int *)this + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
    goto LABEL_4;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = IsKernelDebuggerPresent();
      Response = 63;
      v10 = v9;
      if ( !v9 )
      {
        v11 = IsDebuggerPresent();
        v12 = Response;
        if ( v11 )
          v12 = 103;
        LOBYTE(Response) = v12;
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
      if ( v10 )
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
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_4;
      if ( (char)Response == 105 )
        goto LABEL_44;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_43;
        goto LABEL_41;
      }
LABEL_42:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_43:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_4;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_43;
LABEL_41:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_43;
      }
      goto LABEL_42;
    }
LABEL_44:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_4:
  _InterlockedIncrement(v1 + 2);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 32LL))(v1);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    if ( (int)CThreadContext::GetCurrent(&v17) >= 0 && *(_BYTE *)v17 )
    {
      if ( (int)CThreadContext::GetCurrent(&v18) >= 0 )
      {
        v4 = v18;
        v5 = *((_QWORD *)v18 + 2);
        if ( v5 )
        {
          *(_QWORD *)(v5 + 56) = v1;
          *((_QWORD *)v4 + 2) = v1;
        }
        else
        {
          *((_QWORD *)v18 + 2) = v1;
          *((_QWORD *)v4 + 1) = v1;
        }
      }
    }
    else
    {
      if ( (int)CThreadContext::GetCurrent(&v18) >= 0 )
        *(_BYTE *)v18 = 1;
      do
      {
        while ( 1 )
        {
          --*((_DWORD *)v1 + 2);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
          v6 = 0LL;
          if ( (int)CThreadContext::GetCurrent(&v19) < 0 )
            break;
          v7 = v19;
          v6 = *((_QWORD *)v19 + 1);
          v1 = (volatile signed __int32 *)v6;
          if ( !v6 )
            break;
          v8 = *(_QWORD *)(v6 + 56);
          *((_QWORD *)v19 + 1) = v8;
          if ( v8 )
            break;
          *((_QWORD *)v7 + 2) = 0LL;
        }
        v1 = (volatile signed __int32 *)v6;
      }
      while ( v6 );
      if ( (int)CThreadContext::GetCurrent(&v15) >= 0 )
        *(_BYTE *)v15 = 0;
    }
  }
  return v2;
}
