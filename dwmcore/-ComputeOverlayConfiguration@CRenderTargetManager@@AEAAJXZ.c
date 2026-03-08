/*
 * XREFs of ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051630
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004FC1C (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180033754 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800515A8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1800527B0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180052B40 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B4BA4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x1800F3798 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ?reserve_region@?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_LUID@@_K0@Z @ 0x18010066C (-reserve_region@-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@d.c)
 *     ??$?0$0?0V?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@U_LUID@@$0?0@gsl@@QEAA@AEAV?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180103070 (--$-0$0-0V-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@.c)
 *     ??1?$com_ptr_t@VICapabilitiesContributorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180103DE0 (--1-$com_ptr_t@VICapabilitiesContributorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CRenderTargetManager::ComputeOverlayConfiguration(CRenderTargetManager *this)
{
  __int64 v1; // rdx
  _BYTE *v2; // rbx
  CRenderTargetManager *v3; // rdi
  unsigned int v4; // r14d
  int v5; // r13d
  char v6; // r12
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 **v8; // r15
  unsigned int v9; // r14d
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  void *v22; // rdi
  bool v23; // zf
  __int64 v24; // rax
  CMILMatrix *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  __int64 (__fastcall ***v29)(_QWORD, char *); // rcx
  RenderTargetInfo *v30; // rax
  __int64 (__fastcall ***v31)(_QWORD, char *); // rcx
  _DWORD *v32; // rbx
  _DWORD *i; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  int v37; // esi
  BOOL v38; // eax
  CHAR v39; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v43; // rax
  CHAR Response[8]; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v45; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+88h] [rbp-80h]
  _QWORD v49[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h] BYREF
  char v51[16]; // [rsp+A8h] [rbp-60h] BYREF
  char v52[24]; // [rsp+B8h] [rbp-50h] BYREF
  char v53[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE *v54; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE *v55; // [rsp+F0h] [rbp-18h]
  _BYTE **v56; // [rsp+F8h] [rbp-10h]
  _BYTE v57[16]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE *v58; // [rsp+110h] [rbp+8h] BYREF
  _BYTE *v59; // [rsp+118h] [rbp+10h]
  __int64 *v60; // [rsp+120h] [rbp+18h]
  _BYTE v61[128]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v62; // [rsp+1A8h] [rbp+A0h] BYREF

  v1 = 0LL;
  v59 = v61;
  v2 = v61;
  v48 = 0;
  v60 = &v62;
  v3 = this;
  LOBYTE(this) = *((_BYTE *)this + 580);
  v54 = v57;
  v55 = v57;
  v56 = &v58;
  v4 = 0;
  v58 = v61;
  v5 = 0;
  v6 = 0;
  if ( (_BYTE)this )
  {
    *((_DWORD *)v3 + 139) = 1065353216;
    *((_DWORD *)v3 + 140) = 1065353216;
  }
  v7 = (volatile signed __int32 **)*((_QWORD *)v3 + 2);
  v8 = (volatile signed __int32 **)*((_QWORD *)v3 + 1);
  v49[0] = v7;
  if ( v8 != v7 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
          - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      v11 = *v8;
      v45 = 0LL;
      if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v10 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
            - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( !v10 )
        break;
      v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v11 + 40LL))(
              v11,
              &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
              &v45);
      v1 = 0LL;
      if ( v12 >= 0 )
        goto LABEL_9;
      v16 = 0LL;
      v45 = 0LL;
LABEL_13:
      if ( *((_BYTE *)v3 + 580) )
      {
        v46 = 0LL;
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                    (__int64)v11,
                    &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e,
                    &v46) >= 0 )
        {
          if ( v45 )
          {
            v26 = (CMILMatrix *)(*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 24LL))(v45);
            CMILMatrix::Get2DScaleDimensions(v26, (float *)&v47, (float *)&v47 + 1);
            if ( *(float *)&v47 > *((float *)v3 + 139) && *((float *)&v47 + 1) > *((float *)v3 + 140) )
              *(_QWORD *)((char *)v3 + 556) = v47;
            if ( (*(unsigned __int8 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 96LL))(v45) )
              v6 = 1;
          }
          v27 = v46 + *(int *)(*(_QWORD *)v46 + 8LL);
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 16LL))(v27, &v50);
          v28 = HIDWORD(v50) * v50;
          if ( HIDWORD(v50) * (int)v50 > v9 )
          {
            *((_QWORD *)v3 + 68) = v50;
            v9 = v28;
            v29 = (__int64 (__fastcall ***)(_QWORD, char *))(v46 + *(int *)(*(_QWORD *)v46 + 8LL));
            v30 = (RenderTargetInfo *)(**v29)(v29, v52);
            *((_DWORD *)v3 + 138) = RenderTargetInfo::IsHDR(v30) ? 8 : 4;
          }
          v31 = (__int64 (__fastcall ***)(_QWORD, char *))(v46 + *(int *)(*(_QWORD *)v46 + 8LL));
          v32 = (_DWORD *)(**v31)(v31, v53);
          for ( i = v54; i != (_DWORD *)v55 && (*i != *v32 || i[1] != v32[1]); i += 2 )
            ;
          if ( i == (_DWORD *)v55 )
            *(_QWORD *)detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::reserve_region(
                         &v54,
                         (v55 - v54) >> 3,
                         i,
                         i) = *(_QWORD *)v32;
        }
        wil::com_ptr_t<ICapabilitiesContributorTarget,wil::err_returncode_policy>::~com_ptr_t<ICapabilitiesContributorTarget,wil::err_returncode_policy>(&v46);
        v16 = v45;
        v1 = 0LL;
      }
      if ( v16 )
      {
        v17 = (__int64)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v1 = 0LL;
      }
      if ( ++v8 == v7 )
      {
        LOBYTE(this) = *((_BYTE *)v3 + 580);
        v2 = v58;
        v4 = v48;
        goto LABEL_18;
      }
    }
    v45 = v11;
LABEL_9:
    if ( *((int *)v11 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v36 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v37 = v36;
        if ( !v36 )
        {
          v38 = IsDebuggerPresent();
          v39 = Response[0];
          if ( v38 )
            v39 = 103;
          Response[0] = v39;
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
        if ( v37 )
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
            goto LABEL_79;
          if ( Response[0] != 112 )
          {
            if ( Response[0] != 116 )
              goto LABEL_78;
            goto LABEL_76;
          }
LABEL_77:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_78:
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
                goto LABEL_78;
LABEL_76:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_78;
            }
            goto LABEL_77;
          }
LABEL_79:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
    _InterlockedAdd(v11 + 2, 1u);
    ++v5;
    v13 = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v45 + 40LL))(v45, v1);
    v1 = 0LL;
    v14 = v13;
    if ( v13 )
    {
      v15 = (__int64 *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                         &v58,
                         (v59 - v58) >> 3,
                         1LL);
      v1 = 0LL;
      *v15 = v14;
    }
    v16 = v45;
    v7 = (volatile signed __int32 **)v49[0];
    goto LABEL_13;
  }
LABEL_18:
  *((_BYTE *)v3 + 577) = v5 == 1;
  if ( (_BYTE)this && (v55 - v54) >> 3 )
  {
    v34 = gsl::span<_LUID,-1>::span<_LUID,-1>(v51, &v54);
    LOBYTE(v35) = v6;
    CDeviceManager::UpdateFeatureLevels(v34, v35);
    v2 = v58;
    *((_BYTE *)v3 + 580) = 0;
  }
  v18 = (v59 - v2) >> 3;
  if ( v18 )
  {
    v49[0] = (v59 - v2) >> 3;
    if ( v18 == -1 || (v49[1] = v2) == 0LL )
    {
      gsl::details::terminate(this);
      JUMPOUT(0x180051AE9LL);
    }
    v19 = COverlayContext::ComputeOverlayConfiguration(v49);
    v4 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x256u, 0LL);
    v2 = v58;
  }
  v21 = (v55 - v54) >> 3;
  if ( v21 )
    v55 -= 8 * v21;
  v22 = v54;
  v23 = v54 == v57;
  v54 = 0LL;
  if ( v23 )
    v22 = 0LL;
  if ( v22 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v22);
    v2 = v58;
  }
  v24 = (v59 - v2) >> 3;
  if ( v24 )
    v59 -= 8 * v24;
  v58 = 0LL;
  if ( v2 == v61 )
    v2 = 0LL;
  if ( v2 )
  {
    v43 = GetProcessHeap();
    HeapFree(v43, 0, v2);
  }
  return v4;
}
