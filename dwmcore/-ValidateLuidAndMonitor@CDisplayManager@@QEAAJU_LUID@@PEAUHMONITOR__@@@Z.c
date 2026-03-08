/*
 * XREFs of ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x18028BF74
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801ECFE8 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800CD110 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z @ 0x18028BDD8 (-InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CDisplayManager::ValidateLuidAndMonitor(CDisplayManager *this, struct _LUID a2, HMONITOR a3)
{
  int Adapter; // eax
  CDisplayManager *v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  CDisplayManager *v10; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter1 *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = this;
  v11 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, &v11);
  LODWORD(v10) = Adapter;
  v6 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, &dword_1803B6E28, 2u, Adapter, 0x18u, 0LL);
LABEL_5:
    TranslateDXGIorD3DErrorInContext(v6, 4, &v10);
    v6 = (unsigned int)v10;
    goto LABEL_6;
  }
  v7 = CDisplayManager::InternalValidateMonitor(v5, v11, a3);
  LODWORD(v10) = v7;
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1803B6E28, 2u, v7, 0x1Cu, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v6;
}
