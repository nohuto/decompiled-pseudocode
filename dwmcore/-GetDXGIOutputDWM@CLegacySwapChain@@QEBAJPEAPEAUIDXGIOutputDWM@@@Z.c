/*
 * XREFs of ?GetDXGIOutputDWM@CLegacySwapChain@@QEBAJPEAPEAUIDXGIOutputDWM@@@Z @ 0x180297900
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801F8740 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetDXGIOutputDWM(CLegacySwapChain *this, struct IDXGIOutputDWM **a2)
{
  __int64 *v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IDXGIOutputDWM **); // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 28);
  v4 = -2003292412;
  if ( v3 )
  {
    v5 = *v3;
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIOutputDWM **)))(v5 + 104))(
           v3,
           &v11);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x545u, 0LL);
    }
    else
    {
      v8 = (**v11)(v11, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, a2);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x547u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  }
  return v4;
}
