__int64 __fastcall CCpuClipAntialiasSinkContext::AddDrawList(
        __int64 a1,
        __int64 a2,
        float a3,
        int a4,
        __int64 (__fastcall ***a5)(_QWORD),
        __int64 (__fastcall ***a6)(_QWORD))
{
  __int64 (__fastcall ***v9)(_QWORD); // r14
  char v10; // r15
  bool v11; // di
  _QWORD *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD); // rcx
  int v16; // eax
  int v17; // r12d
  BOOL v18; // eax
  char v19; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+B0h] [rbp+18h] BYREF

  if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
  {
    a3 = *(float *)&FLOAT_1_0;
    a4 = 5;
    v9 = 0LL;
  }
  else
  {
    v9 = a5;
  }
  v10 = 0;
  if ( CCommonRegistryData::CpuClipAASinkEnableOcclusion && (a4 == 5 || a3 == 1.0 && *(_BYTE *)(a2 + 113)) )
    v10 = 1;
  v11 = 1;
  if ( *(_BYTE *)(a2 + 112) )
  {
    if ( a4 != 5 )
      v11 = a4 == 0;
  }
  else
  {
    v11 = 0;
  }
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL + 432LL * *(unsigned __int16 *)(a2 + 88));
  result = detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
             v12,
             0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v12[1] - *v12) >> 3),
             1LL);
  v14 = result;
  *(_QWORD *)result = a2;
  if ( *(int *)(a2 + 8) < 0 )
  {
    if ( IsDebuggerPresent() || (result = IsKernelDebuggerPresent(), (_DWORD)result) )
    {
      while ( 1 )
      {
        v16 = IsKernelDebuggerPresent();
        Response = 63;
        v17 = v16;
        if ( !v16 )
        {
          v18 = IsDebuggerPresent();
          v19 = Response;
          if ( v18 )
            v19 = 103;
          LOBYTE(Response) = v19;
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
        if ( v17 )
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
        result = (unsigned int)(char)Response;
        if ( (int)result > 98 )
        {
          if ( (_DWORD)result == 103 )
            break;
          if ( (_DWORD)result == 105 )
            goto LABEL_43;
          if ( (_DWORD)result != 112 )
          {
            if ( (_DWORD)result != 116 )
              goto LABEL_42;
            goto LABEL_40;
          }
LABEL_41:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_42:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
        }
        else
        {
          if ( (_DWORD)result == 98 || (_DWORD)result == 66 )
          {
            __debugbreak();
            break;
          }
          if ( (_DWORD)result == 71 )
            break;
          if ( (_DWORD)result != 73 )
          {
            if ( (_DWORD)result != 80 )
            {
              if ( (_DWORD)result != 84 )
                goto LABEL_42;
LABEL_40:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_42;
            }
            goto LABEL_41;
          }
LABEL_43:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  *(float *)(v14 + 8) = a3;
  *(_DWORD *)(v14 + 12) = a4;
  *(_QWORD *)(v14 + 16) = v9;
  if ( v9 )
    result = (**v9)(v9);
  v15 = a6;
  *(_QWORD *)(v14 + 24) = a6;
  if ( v15 )
    result = (**v15)(v15);
  *(_BYTE *)(v14 + 32) = v11;
  *(_BYTE *)(v14 + 33) = v10;
  return result;
}
