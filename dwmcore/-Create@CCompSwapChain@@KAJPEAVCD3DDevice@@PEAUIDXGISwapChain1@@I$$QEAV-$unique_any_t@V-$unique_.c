/*
 * XREFs of ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18029AC58
 * Callers:
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x180289464 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x18029A5E8 (--0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_sto.c)
 *     ??4?$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompSwapChain@@@Z @ 0x18029A9A0 (--4-$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompSwapChain@.c)
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x18029AFF0 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Create(
        __int64 a1,
        __int64 *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        CCompSwapChain **a7)
{
  CCompSwapChain *v7; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  volatile signed __int32 *v16; // rax
  __int64 v17; // rcx
  CCompSwapChain *v18; // rax
  CCompSwapChain *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-81h]
  CCompSwapChain *v22; // [rsp+50h] [rbp-51h] BYREF
  __int64 v23; // [rsp+58h] [rbp-49h]
  __int64 v24; // [rsp+60h] [rbp-41h]
  __int128 v25; // [rsp+68h] [rbp-39h] BYREF
  __int128 v26; // [rsp+78h] [rbp-29h]
  __int128 v27; // [rsp+88h] [rbp-19h]

  v7 = 0LL;
  v24 = a5;
  v23 = a6;
  *a7 = 0LL;
  v12 = *a2;
  v22 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v12 + 144))(a2, &v25);
  v15 = v13;
  if ( v13 < 0 )
  {
    v21 = 30;
    goto LABEL_10;
  }
  v16 = (volatile signed __int32 *)DefaultHeap::Alloc(0x1C0uLL);
  if ( v16 )
    v16 = (volatile signed __int32 *)CCompSwapChain::CCompSwapChain(
                                       (__int64)v16,
                                       a1,
                                       (__int64)a2,
                                       a3,
                                       a4,
                                       v24,
                                       v23,
                                       SHIDWORD(v26));
  wil::com_ptr_t<CCompSwapChain,wil::err_returncode_policy>::operator=((volatile signed __int32 **)&v22, v16);
  v7 = v22;
  if ( v22 )
  {
    v13 = CCompSwapChain::Initialize(v22);
    v15 = v13;
    if ( v13 >= 0 )
    {
      v18 = v7;
      v7 = 0LL;
      v22 = 0LL;
      *a7 = v18;
      goto LABEL_11;
    }
    v21 = 44;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v21, 0LL);
    goto LABEL_11;
  }
  v15 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x2Au, 0LL);
LABEL_11:
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 4, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CCompSwapChain *)((char *)v7 + 16));
      (*(void (__fastcall **)(CCompSwapChain *))(*(_QWORD *)v22 + 88LL))(v22);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 4, 0xFFFFFFFF) == 1 )
      {
        v19 = v22;
        --*((_DWORD *)v7 + 4);
        (*(void (__fastcall **)(CCompSwapChain *, __int64))(*(_QWORD *)v19 + 80LL))(v19, 1LL);
      }
    }
  }
  return v15;
}
