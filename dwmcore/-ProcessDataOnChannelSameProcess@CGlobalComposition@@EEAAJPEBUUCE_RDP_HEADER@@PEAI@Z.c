/*
 * XREFs of ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18009B970
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18009EF00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CGlobalComposition::ProcessDataOnChannelSameProcess(
        CGlobalComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  unsigned int v4; // eax
  volatile signed __int32 *v7; // rsi
  struct _SLIST_ENTRY *v8; // rdi
  unsigned int v9; // ebp
  __int64 *Next; // rax
  __int64 ***v11; // rcx
  struct _SLIST_ENTRY *i; // rbx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rbx
  DWORD TickCount; // eax
  int v18; // eax
  int v19; // ebx
  BOOL v20; // eax
  char v21; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  unsigned int v24; // ecx
  __int16 Response; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0;
  v4 = *((_DWORD *)a2 + 4);
  if ( v4 < 0x10000
    && v4 < *((_DWORD *)this + 116)
    && (v7 = *(volatile signed __int32 **)(*((_QWORD *)this + 55) + 8LL * v4)) != 0LL )
  {
    if ( *((int *)v7 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v18 = IsKernelDebuggerPresent();
        Response = 63;
        v19 = v18;
        if ( !v18 )
        {
          v20 = IsDebuggerPresent();
          v21 = Response;
          if ( v20 )
            v21 = 103;
          LOBYTE(Response) = v21;
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
        if ( v19 )
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
            goto LABEL_40;
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_39;
            goto LABEL_37;
          }
LABEL_38:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_39:
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
                goto LABEL_39;
LABEL_37:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_39;
            }
            goto LABEL_38;
          }
LABEL_40:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
    _InterlockedIncrement(v7 + 2);
    v8 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 3);
    v9 = 0;
    if ( v8 )
    {
      Next = (__int64 *)v8[2].Next;
      if ( Next )
      {
        v11 = (__int64 ***)*((_QWORD *)&v8->Next + 1);
        if ( *v11 != (__int64 **)v8 )
          __fastfail(3u);
        *Next = (__int64)v8;
        Next[1] = (__int64)v11;
        *v11 = (__int64 **)Next;
        *((_QWORD *)&v8->Next + 1) = Next;
        v8[2].Next = 0LL;
      }
      for ( i = v8->Next; i != v8; i = i->Next )
      {
        v13 = CComposition::ProcessCommandBatch(
                this,
                &i[1].Next + 1,
                HIDWORD(i[1].Next),
                (struct CChannelContext *)v7,
                &v26);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x67u, 0LL);
          break;
        }
        *a3 += v26;
      }
      v15 = *((_QWORD *)this + 83);
      InterlockedPushEntrySList((PSLIST_HEADER)(v15 + 160), v8 + 4);
      TickCount = GetTickCount();
      *(_BYTE *)(v15 + 180) = 1;
      *(_DWORD *)(v15 + 176) = TickCount;
    }
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x741u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024809, 0x58u, 0LL);
  }
  return v9;
}
