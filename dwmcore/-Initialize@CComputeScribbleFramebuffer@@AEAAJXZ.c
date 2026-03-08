/*
 * XREFs of ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x180201C54
 * Callers:
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x180201908 (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1802015BC (--1CComputeScribbleSynchronizer@@QEAA@XZ.c)
 *     ?Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180206E74 (-Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::Initialize(CComputeScribbleFramebuffer *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, _QWORD **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(_QWORD *, __int64, GUID *, char *); // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *); // r15
  unsigned int v15; // edx
  struct CD3DDevice *v16; // rcx
  int v17; // edi
  struct CComputeScribbleSynchronizer *v18; // rdx
  CComputeScribbleSynchronizer *v19; // rbx
  CComputeScribbleSynchronizer **v21; // [rsp+40h] [rbp-20h]
  struct CComputeScribbleSynchronizer *v22; // [rsp+48h] [rbp-18h] BYREF
  char v23; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  _QWORD *v25; // [rsp+80h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 3);
  v25 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, _QWORD **))(*(_QWORD *)v1 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v25);
  v4 = v3(v1, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v25);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 62LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_20;
  }
  v7 = v25;
  v8 = *((_QWORD *)this + 4);
  v9 = *v25;
  *((_QWORD *)this + 4) = 0LL;
  v10 = *(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, char *))(v9 + 72);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v4 = v10(v7, 2LL, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, (char *)this + 32);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 67LL;
    goto LABEL_7;
  }
  v11 = v25;
  v12 = *((_QWORD *)this + 5);
  v13 = *v25;
  *((_QWORD *)this + 5) = 0LL;
  v14 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *))(v13 + 96);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v4 = v14(v11, 0LL, 2LL, *((_QWORD *)this + 4), 0LL, &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455, (char *)this + 40);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 74LL;
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 77LL;
    goto LABEL_7;
  }
  v15 = *((_DWORD *)this + 61);
  v16 = (struct CD3DDevice *)*((_QWORD *)this + 2);
  v22 = 0LL;
  v21 = (CComputeScribbleSynchronizer **)((char *)this + 48);
  v23 = 1;
  v17 = CComputeScribbleSynchronizer::Create(v16, v15, &v22);
  if ( v23 )
  {
    v18 = v22;
    v19 = *v21;
    *v21 = v22;
    if ( v19 )
    {
      CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(v19, v18);
      operator delete(v19);
    }
  }
  if ( v17 >= 0 )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v17);
    v5 = v17;
  }
LABEL_20:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  return v5;
}
