void __fastcall LpcVerifyOutgoingPayloadSize(const struct _PORT_MESSAGE *a1)
{
  int v1; // eax
  int v2; // ebx
  BOOL v3; // eax
  char v4; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  if ( a1->u1.s1.TotalLength > 512 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v1 = IsKernelDebuggerPresent();
        Response = 63;
        v2 = v1;
        if ( !v1 )
        {
          v3 = IsDebuggerPresent();
          v4 = Response;
          if ( v3 )
            v4 = 103;
          LOBYTE(Response) = v4;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          &word_140010B90,
          &word_140010B90,
          L"pMsg->u1.s1.TotalLength <= 512",
          "Function: ",
          L"LpcVerifyOutgoingPayloadSize",
          ", ",
          L"onecoreuap\\windows\\DWM\\common\\shared\\lpcshared.h",
          310);
        if ( v2 )
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
              goto LABEL_24;
LABEL_22:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_24;
          }
LABEL_23:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_24;
        }
LABEL_25:
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
          goto LABEL_25;
        case 'P':
          goto LABEL_23;
        case 'T':
          goto LABEL_22;
      }
LABEL_24:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
}
