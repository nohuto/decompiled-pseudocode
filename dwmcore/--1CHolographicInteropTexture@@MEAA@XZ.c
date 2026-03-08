/*
 * XREFs of ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802A6B14
 * Callers:
 *     ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x1802A7110 (--_GCHolographicInteropTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B3D00 (-clear@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CHolographicInteropTexture::~CHolographicInteropTexture(CHolographicInteropTexture *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ebx
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  int v9; // eax
  int v10; // ebx
  BOOL v11; // eax
  char v12; // cl
  HANDLE v13; // rax
  HANDLE v14; // rax
  int v15; // eax
  int v16; // ebx
  BOOL v17; // eax
  char v18; // cl
  HANDLE v19; // rax
  HANDLE v20; // rax
  CHolographicInteropTexture *v21; // rcx
  __int16 Response; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CHolographicInteropTexture::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v2 + 68) = v2 - 352;
  if ( *((_QWORD *)this + 12) && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
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
          L"!m_pVisualTree",
          "Function: ",
          L"CHolographicInteropTexture::~CHolographicInteropTexture",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
          39);
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
              goto LABEL_25;
LABEL_23:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_25;
          }
LABEL_24:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_25;
        }
LABEL_26:
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
          goto LABEL_26;
        case 'P':
          goto LABEL_24;
        case 'T':
          goto LABEL_23;
      }
LABEL_25:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
LABEL_29:
  if ( *((_DWORD *)this + 61) && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
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
          word_1803392B0,
          word_1803392B0,
          L"m_bufferCount == 0",
          "Function: ",
          L"CHolographicInteropTexture::~CHolographicInteropTexture",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
          40);
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
          goto LABEL_57;
        if ( (char)Response != 105 )
        {
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_53;
LABEL_51:
            v13 = GetCurrentThread();
            TerminateThread(v13, 0xC0000001);
            goto LABEL_53;
          }
LABEL_52:
          v14 = GetCurrentProcess();
          TerminateProcess(v14, 0xC0000001);
          goto LABEL_53;
        }
LABEL_54:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( (char)Response )
      {
        case 'b':
        case 'B':
          __debugbreak();
          goto LABEL_57;
        case 'G':
          goto LABEL_57;
        case 'I':
          goto LABEL_54;
        case 'P':
          goto LABEL_52;
        case 'T':
          goto LABEL_51;
      }
LABEL_53:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
LABEL_57:
  if ( *((_QWORD *)this + 13) && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = IsKernelDebuggerPresent();
        Response = 63;
        v16 = v15;
        if ( !v15 )
        {
          v17 = IsDebuggerPresent();
          v18 = Response;
          if ( v17 )
            v18 = 103;
          LOBYTE(Response) = v18;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          word_1803392B0,
          word_1803392B0,
          L"!m_pPendingVisual",
          "Function: ",
          L"CHolographicInteropTexture::~CHolographicInteropTexture",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
          41);
        if ( v16 )
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
          goto LABEL_85;
        if ( (char)Response != 105 )
        {
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_81;
LABEL_79:
            v19 = GetCurrentThread();
            TerminateThread(v19, 0xC0000001);
            goto LABEL_81;
          }
LABEL_80:
          v20 = GetCurrentProcess();
          TerminateProcess(v20, 0xC0000001);
          goto LABEL_81;
        }
LABEL_82:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( (char)Response )
      {
        case 'b':
        case 'B':
          __debugbreak();
          goto LABEL_85;
        case 'G':
          goto LABEL_85;
        case 'I':
          goto LABEL_82;
        case 'P':
          goto LABEL_80;
        case 'T':
          goto LABEL_79;
      }
LABEL_81:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
LABEL_85:
  FastRegion::CRegion::FreeMemory((void **)this + 42);
  detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 15);
  v21 = (CHolographicInteropTexture *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v21 == (CHolographicInteropTexture *)((char *)this + 144) )
    v21 = 0LL;
  operator delete(v21);
  CResource::~CResource(this);
}
