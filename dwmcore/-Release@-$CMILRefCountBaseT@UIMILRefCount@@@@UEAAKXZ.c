/*
 * XREFs of ?Release@?$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ @ 0x1800D42F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILRefCountBaseT<IMILRefCount>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  BOOL v7; // eax
  char v8; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  v2 = _InterlockedDecrement(a1 + 2);
  if ( v2 )
    return v2;
  if ( *((int *)a1 + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
    goto LABEL_4;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = IsKernelDebuggerPresent();
      Response = 63;
      v6 = v5;
      if ( !v5 )
      {
        v7 = IsDebuggerPresent();
        v8 = Response;
        if ( v7 )
          v8 = 103;
        LOBYTE(Response) = v8;
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
      if ( v6 )
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
        goto LABEL_30;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_29;
        goto LABEL_27;
      }
LABEL_28:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_29:
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
          goto LABEL_29;
LABEL_27:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_30:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_4:
  _InterlockedIncrement(a1 + 2);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 )
  {
    v4 = *(_QWORD *)a1;
    --*((_DWORD *)a1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v4 + 16))(a1, 1LL);
  }
  return v2;
}
