/*
 * XREFs of ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800526C0
 * Callers:
 *     ?QueryInterface@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118A30 (-QueryInterface@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118A50 (-QueryInterface@CCompositionSurfaceBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118A70 (-QueryInterface@CCompositionSurfaceBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::QueryInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  int v5; // esi
  __int64 v6; // rax
  int v8; // eax
  int v9; // edi
  BOOL v10; // eax
  char v11; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+90h] [rbp+18h] BYREF

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)this + 40LL))(this);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = this;
      v5 = 0;
    }
    if ( *((int *)this + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v8 = IsKernelDebuggerPresent();
        Response = 63;
        v9 = v8;
        if ( !v8 )
        {
          v10 = IsDebuggerPresent();
          v11 = Response;
          if ( v10 )
            v11 = 103;
          LOBYTE(Response) = v11;
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
        if ( v9 )
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
            goto LABEL_35;
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_34;
            goto LABEL_32;
          }
LABEL_33:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_34:
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
                goto LABEL_34;
LABEL_32:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_34;
            }
            goto LABEL_33;
          }
LABEL_35:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
  }
  return (unsigned int)v5;
}
