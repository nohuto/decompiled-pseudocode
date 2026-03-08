/*
 * XREFs of ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x18026A474
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800F2010 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x18026A568 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Create(
        const struct CCompositionSurfaceInfo *a1,
        void *a2,
        unsigned __int64 a3,
        struct CCompositionSwapchainStatistics **a4)
{
  CCompositionSwapchainStatistics *v8; // rax
  CCompositionSwapchainStatistics *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CCompositionSwapchainStatistics *v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v8 = (CCompositionSwapchainStatistics *)DefaultHeap::AllocClear(0x50uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v8 + 2) = 0;
  *(_QWORD *)v8 = &CCompositionSwapchainStatistics::`vftable';
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_QWORD *)v8 + 2) = a1;
  v14 = v8;
  ((void (__fastcall *)(CCompositionSwapchainStatistics *))*(&CCompositionSwapchainStatistics::`vftable' + 1))(v8);
  v10 = CCompositionSwapchainStatistics::Initialize(v9, a2, a3);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19u, 0LL);
  }
  else
  {
    v14 = 0LL;
    *a4 = v9;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v12;
}
