/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x18009C188
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800F58CC (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CNotificationResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  unsigned int v3; // eax
  __int64 v5; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  unsigned int *v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rax
  volatile signed __int32 *v12; // rsi
  int v14; // eax
  int v15; // edi
  BOOL v16; // eax
  char v17; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  unsigned int v20; // ecx
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v5 = *((_QWORD *)this + 2);
  if ( v3 >= 0x10000
    || v3 >= *(_DWORD *)(v5 + 464)
    || (v7 = *(volatile signed __int32 **)(*(_QWORD *)(v5 + 440) + 8LL * v3)) == 0LL )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0x741u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024809, 0x53u, 0LL);
    return v10;
  }
  if ( *((int *)v7 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v14 = IsKernelDebuggerPresent();
      Response = 63;
      v15 = v14;
      if ( !v14 )
      {
        v16 = IsDebuggerPresent();
        v17 = Response;
        if ( v16 )
          v17 = 103;
        LOBYTE(Response) = v17;
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
      if ( v15 )
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
          goto LABEL_39;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_38;
          goto LABEL_36;
        }
LABEL_37:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_38:
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
              goto LABEL_38;
LABEL_36:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_38;
          }
          goto LABEL_37;
        }
LABEL_39:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  _InterlockedIncrement(v7 + 2);
  v8 = *((_QWORD *)this + 6);
  if ( !v8 || !*(_DWORD *)(v8 + 76) )
    goto LABEL_14;
  if ( v7 != (volatile signed __int32 *)v8 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x5Bu, 0LL);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v8 + 76) )
  {
    v9 = (unsigned int *)((char *)this + 64);
    if ( *((_DWORD *)this + 16) )
      CMessageConversationHost::FlushCallbackId(
        *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1240LL),
        *(_DWORD *)(v8 + 76),
        *v9);
  }
  else
  {
LABEL_14:
    v9 = (unsigned int *)((char *)this + 64);
  }
  v10 = 0;
  *v9 = *((_DWORD *)a3 + 2);
  v11 = *(_QWORD *)this;
  *((_QWORD *)this + 6) = v7;
  (*(void (__fastcall **)(CNotificationResource *))(v11 + 184))(this);
LABEL_12:
  v12 = v7 + 2;
  if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
    {
      --*v12;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 16LL))(v7, 1LL);
    }
  }
  return v10;
}
