/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000E39C
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000E1AC (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x14000E2D0 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x14000E328 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x14000E654 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

void __fastcall MilInstrumentationBreak(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl
  int v3; // eax
  int v4; // ebx
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  unsigned int Response; // [rsp+78h] [rbp+10h] BYREF

  LOBYTE(Response) = (_BYTE)a2;
  v2 = (char)a1;
  if ( !g_fDisableInstrumentationBreaks )
  {
    Response = 0;
    if ( RegGetHKLMDword(a1, a2, &Response)
      && !Response
      && ((v2 & 8) == 0
       || (unsigned int)IsKernelDebuggerPresent()
       || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled())
      && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v3 = IsKernelDebuggerPresent();
          LOWORD(Response) = 63;
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
            L"Unexpected HRESULT in MilInstrumentation* caller",
            &word_140010B90,
            &word_140010B90,
            "Function: ",
            L"MilInstrumentationBreak",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
            214);
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
            return;
          if ( (char)Response != 105 )
          {
            if ( (char)Response != 112 )
            {
              if ( (char)Response != 116 )
                goto LABEL_30;
LABEL_28:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_30;
            }
LABEL_29:
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_30;
          }
LABEL_31:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
        if ( (((char)Response - 66) & 0xFFFFFFDF) == 0 )
        {
          __debugbreak();
          return;
        }
        switch ( (char)Response )
        {
          case 'G':
            return;
          case 'I':
            goto LABEL_31;
          case 'P':
            goto LABEL_29;
          case 'T':
            goto LABEL_28;
        }
LABEL_30:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
    }
  }
}
