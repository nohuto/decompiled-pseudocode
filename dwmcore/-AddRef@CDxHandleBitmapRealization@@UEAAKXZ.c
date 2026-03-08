/*
 * XREFs of ?AddRef@CDxHandleBitmapRealization@@UEAAKXZ @ 0x1800D9B40
 * Callers:
 *     ?AddRef@CCachedVisualImage@@$4PPPPPPPM@HAA@EAAKXZ @ 0x180117D50 (-AddRef@CCachedVisualImage@@$4PPPPPPPM@HAA@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x180117D70 (-AddRef@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x180117D90 (-AddRef@CCompositionSurfaceBitmap@@WFI@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WGA@EAAKXZ @ 0x180117DB0 (-AddRef@CCompositionSurfaceBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@$4PPPPPPPM@HNA@EAAKXZ @ 0x180119A70 (-AddRef@CCachedVisualImage@@$4PPPPPPPM@HNA@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ @ 0x18011BF30 (-AddRef@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@WHA@EAAKXZ @ 0x18011BF50 (-AddRef@CD2DBitmap@@WHA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x18011C190 (-AddRef@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x18011E030 (-AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ.c)
 *     ?AddRef@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ @ 0x18011E050 (-AddRef@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ.c)
 *     ?AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ @ 0x18011E5B0 (-AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ @ 0x18011EAD0 (-AddRef@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ.c)
 *     ?AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ @ 0x18011F270 (-AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x18011F4B0 (-AddRef@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::AddRef(CDxHandleBitmapRealization *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  if ( *((int *)this + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
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
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_1803392B0,
        word_1803392B0,
        "Function: ",
        L"CMILRefCountImpl::AddReference",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        23);
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
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        if ( (char)Response == 105 )
          goto LABEL_27;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_26;
          goto LABEL_24;
        }
LABEL_25:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_26:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( (char)Response == 98 || (char)Response == 66 )
        {
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        }
        if ( (char)Response == 71 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        if ( (char)Response != 73 )
        {
          if ( (char)Response != 80 )
          {
            if ( (char)Response != 84 )
              goto LABEL_26;
LABEL_24:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_26;
          }
          goto LABEL_25;
        }
LABEL_27:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
