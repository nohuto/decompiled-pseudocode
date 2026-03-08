/*
 * XREFs of ?CheckOcclusionState@CDDisplaySwapChain@@QEAAJXZ @ 0x180285B68
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801E5044 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::CheckOcclusionState(CDDisplaySwapChain *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 46) + 48LL))(*((_QWORD *)this + 46), &v5);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v3, 0x278u, 0LL);
  }
  else if ( v5 )
  {
    v3 = 142213121;
    *((_BYTE *)this + 448) = 0;
  }
  return (unsigned int)v3;
}
