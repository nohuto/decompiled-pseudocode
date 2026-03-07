__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IDeviceTarget *a2)
{
  __int64 *v2; // r15
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rsi
  char *v16; // rcx
  char *v17; // rcx
  __int64 v18; // rax
  CD3DDevice *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  struct IDeviceTarget *v22; // r8
  CD2DContext *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r14d
  BOOL v32; // eax
  CHAR v33; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CD3DDevice *v36; // rcx
  CHAR Response[8]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v38; // [rsp+68h] [rbp+Fh] BYREF

  v2 = (__int64 *)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v27 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  }
  v6 = *((_QWORD *)a2 + 1);
  v38 = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD))((char *)a2 + *(int *)(v6 + 8) + 8);
  v8 = (**v7)(v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Eu, 0LL);
LABEL_48:
    wil::com_ptr_t<IDeviceTarget,wil::err_returncode_policy>::operator=(v2, v4);
    if ( *v2 )
    {
      CDrawingContext::UpdateRenderTargetInfo(this);
    }
    else
    {
      v36 = (CD3DDevice *)*((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = 0LL;
      if ( v36 )
        CD3DDevice::Release(v36);
    }
    goto LABEL_15;
  }
  *((_BYTE *)this + 8169) = 1;
  v11 = *((_QWORD *)this + 113);
  if ( v11 == *((_QWORD *)this + 112) || !*(_QWORD *)(v11 - 184) )
    v38 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  else
    CBaseClipStack::Top((char *)this + 3184, &v38);
  v12 = (void *)detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::reserve_region(
                  (char *)this + 896,
                  0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 113) - *((_QWORD *)this + 112)) >> 3));
  memset_0(v12, 0, 0xB8uLL);
  v13 = *((_QWORD *)this + 113);
  *(_BYTE *)(v13 - 8) = 0;
  CMILMatrix::SetToIdentity((CMILMatrix *)(v13 - 152));
  CMILMatrix::SetToIdentity((CMILMatrix *)(v14 - 84));
  *((_BYTE *)this + 8170) = 0;
  v15 = *v2;
  *v2 = (__int64)a2;
  v16 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 8LL))(v16);
  if ( v15 )
  {
    v28 = v15 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v17 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
    v18 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
    v19 = (CD3DDevice *)*((_QWORD *)this + 5);
    v20 = v18;
    *((_QWORD *)this + 5) = v18;
    if ( v18 )
    {
      if ( *(int *)(v18 + 8) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v30 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v31 = v30;
          if ( !v30 )
          {
            v32 = IsDebuggerPresent();
            v33 = Response[0];
            if ( v32 )
              v33 = 103;
            Response[0] = v33;
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
          if ( v31 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
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
              Response,
              Response);
            __debugbreak();
          }
          if ( Response[0] > 98 )
          {
            if ( Response[0] == 103 )
              break;
            if ( Response[0] == 105 )
              goto LABEL_44;
            if ( Response[0] != 112 )
            {
              if ( Response[0] != 116 )
                goto LABEL_43;
              goto LABEL_41;
            }
LABEL_42:
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_43:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          }
          else
          {
            if ( Response[0] == 98 || Response[0] == 66 )
            {
              __debugbreak();
              break;
            }
            if ( Response[0] == 71 )
              break;
            if ( Response[0] != 73 )
            {
              if ( Response[0] != 80 )
              {
                if ( Response[0] != 84 )
                  goto LABEL_43;
LABEL_41:
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_43;
              }
              goto LABEL_42;
            }
LABEL_44:
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          }
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    }
    if ( v19 )
      CD3DDevice::Release(v19);
  }
  v21 = (**(__int64 (__fastcall ***)(__int64, __int128 *))*v2)(*v2, &v38);
  v22 = (struct IDeviceTarget *)*v2;
  v23 = (CD2DContext *)(*((_QWORD *)this + 5) + 16LL);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v21;
  *((_QWORD *)this + 9) = *(_QWORD *)(v21 + 16);
  v24 = CD2DContext::PushTarget(v23, (CDrawingContext *)((char *)this + 24), v22);
  v10 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x93u, 0LL);
    CDrawingContext::PopClippingScope(this, 0);
    goto LABEL_48;
  }
LABEL_15:
  if ( v4 )
  {
    v29 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return v10;
}
