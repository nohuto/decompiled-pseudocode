/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801CE680
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801CE9E0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CTelemetryFrameStatistics@@QEAA@XZ @ 0x1801EE9EC (--1CTelemetryFrameStatistics@@QEAA@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  CComposition *v2; // rcx
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  v2 = (CComposition *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CComposition::OnShutdown(v2);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8)) )
    {
      if ( IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent() )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v3 = IsKernelDebuggerPresent();
            Response = 63;
            v4 = v3;
            if ( !v3 )
            {
              v5 = IsDebuggerPresent();
              v6 = Response;
              if ( v5 )
                v6 = 103;
              LOBYTE(Response) = v6;
            }
            DbgPrintEx(
              0x65u,
              0,
              "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
              word_1803392B0,
              word_1803392B0,
              L"false",
              "Function: ",
              L"CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler",
              ", ",
              L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
              106);
            if ( v4 )
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
              goto LABEL_29;
            if ( (char)Response != 105 )
            {
              if ( (char)Response != 112 )
              {
                if ( (char)Response != 116 )
                  goto LABEL_26;
LABEL_24:
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_26;
              }
LABEL_25:
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_26;
            }
LABEL_27:
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          }
          switch ( (char)Response )
          {
            case 'b':
            case 'B':
              __debugbreak();
              goto LABEL_29;
            case 'G':
              goto LABEL_29;
            case 'I':
              goto LABEL_27;
            case 'P':
              goto LABEL_25;
            case 'T':
              goto LABEL_24;
          }
LABEL_26:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
        }
      }
LABEL_29:
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 5LL);
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CloseHandle(*((HANDLE *)this + 3));
  v12 = (void *)*((_QWORD *)this + 1170);
  if ( v12 )
    operator delete(v12);
  v13 = *((_QWORD *)this + 1162);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 1162) = 0LL;
  }
  v14 = *((_QWORD *)this + 1161);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    *((_QWORD *)this + 1161) = 0LL;
  }
  CTelemetryFrameStatistics::~CTelemetryFrameStatistics((CPartitionVerticalBlankScheduler *)((char *)this + 4560));
  `vector destructor iterator'((char *)this + 96, 256LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::~CFrameInfo);
  *(_QWORD *)this = &ICompositorScheduler::`vftable';
}
