/*
 * XREFs of ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18020FAD0
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EF4C0 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5D20 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x18020FF3C (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     FlushAndWait @ 0x180210388 (FlushAndWait.c)
 *     TransitionResourceBarrier @ 0x180210804 (TransitionResourceBarrier.c)
 */

__int64 __fastcall DebugInspectSurface(
        struct ID3D12CommandQueue *a1,
        struct ID3D12Resource *a2,
        enum D3D12_RESOURCE_STATES a3)
{
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetDevice)(ID3D12CommandQueue *, const IID *const, void **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  struct ID3D12CommandQueueVtbl *v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // esi
  __int64 (__fastcall *v17)(__int64, _QWORD, GUID *, __int64 *); // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  void *v27; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+88h] [rbp-78h] BYREF
  __int128 v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A8h] [rbp-58h]
  _QWORD v31[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-38h]
  __int128 v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v35; // [rsp+ECh] [rbp-14h]
  int v36; // [rsp+F4h] [rbp-Ch]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+104h] [rbp+4h]
  __int64 v40; // [rsp+10Ch] [rbp+Ch]
  int v41; // [rsp+114h] [rbp+14h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  _QWORD v43[2]; // [rsp+120h] [rbp+20h] BYREF
  int v44; // [rsp+130h] [rbp+30h] BYREF
  __int128 v45; // [rsp+134h] [rbp+34h]
  __int128 v46; // [rsp+148h] [rbp+48h] BYREF
  __int128 v47; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v48[4]; // [rsp+168h] [rbp+68h]
  _BYTE v49[8]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v50; // [rsp+180h] [rbp+80h]
  unsigned int v51; // [rsp+188h] [rbp+88h]
  unsigned int v52; // [rsp+190h] [rbp+90h]
  enum DXGI_FORMAT v53; // [rsp+198h] [rbp+98h]
  _BYTE v54[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  lpVtbl = a1->lpVtbl;
  v22 = 0LL;
  GetDevice = lpVtbl->GetDevice;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v7 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, GUID *, __int64 **))GetDevice)(
         a1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 265LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v9);
    goto LABEL_24;
  }
  ((void (__fastcall *)(struct ID3D12Resource *, _BYTE *))a2->lpVtbl->GetDesc)(a2, v49);
  v50 = 0LL;
  v25 = 0LL;
  (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64 *))(*v22 + 304))(
    v22,
    v49,
    0LL,
    1LL,
    0LL,
    &v47,
    0LL,
    0LL,
    &v25);
  if ( (unsigned __int64)(v25 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = -2147024809;
    v10 = 278LL;
    v9 = 2147942487LL;
    goto LABEL_23;
  }
  v37 = v25;
  v45 = 0LL;
  v44 = 3;
  v35 = 0LL;
  v36 = 0;
  v40 = 1LL;
  v42 = 0LL;
  v34 = 1;
  v38 = 1;
  v39 = 65537LL;
  v41 = 1;
  v11 = *v22;
  v23 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, int *, _QWORD, int *, int, _QWORD, GUID *, __int64 *))(v11 + 216))(
          v22,
          &v44,
          0LL,
          &v34,
          1024,
          0LL,
          &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
          &v23);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v13 = a1->lpVtbl;
    v24 = 0LL;
    v21 = 0LL;
    v14 = (unsigned int *)((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _BYTE *))v13->GetDesc)(a1, v54);
    v15 = (__int64)v22;
    v16 = *v14;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*v22 + 72);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v18 = v17(v15, v16, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, &v24);
    v8 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, _QWORD, GUID *, __int64 *))(*v22 + 96))(
              v22,
              0LL,
              v16,
              v24,
              0LL,
              &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
              &v21);
      v8 = v18;
      if ( v18 >= 0 )
      {
        v29 = 0LL;
        v28 = (unsigned __int64)a2;
        v30 = 0LL;
        LODWORD(v29) = 0;
        v31[1] = 1LL;
        v32 = v47;
        v31[0] = v23;
        v33 = *(_OWORD *)v48;
        TransitionResourceBarrier(v21, a2, 0LL, 2048LL);
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, _DWORD, __int128 *, _QWORD))(*(_QWORD *)v21 + 128LL))(
          v21,
          v31,
          0LL,
          0LL,
          0,
          &v28,
          0LL);
        TransitionResourceBarrier(v21, a2, 2048LL, 0LL);
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21);
        v8 = v18;
        if ( v18 >= 0 )
        {
          v26 = v21;
          ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a1->lpVtbl->ExecuteCommandLists)(
            a1,
            1LL,
            &v26);
          v18 = FlushAndWait(a1);
          v8 = v18;
          if ( v18 >= 0 )
          {
            v43[1] = v25;
            v43[0] = 0LL;
            v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, void **))(*(_QWORD *)v23 + 64LL))(
                    v23,
                    0LL,
                    v43,
                    &v27);
            v8 = v18;
            if ( v18 >= 0 )
            {
              DebugInspectSysMemSurface(v27, v51, v52, v53, v48[2]);
              v46 = 0LL;
              (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v23 + 72LL))(v23, 0LL, &v46);
              v8 = 0;
              goto LABEL_20;
            }
            v19 = 340LL;
          }
          else
          {
            v19 = 333LL;
          }
        }
        else
        {
          v19 = 328LL;
        }
      }
      else
      {
        v19 = 311LL;
      }
    }
    else
    {
      v19 = 309LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v18);
LABEL_20:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12C,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v12);
LABEL_21:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
LABEL_24:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  return v8;
}
