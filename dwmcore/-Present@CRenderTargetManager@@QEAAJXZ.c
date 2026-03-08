/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJXZ @ 0x18004D1E0
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18004D304 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Present(struct CRenderTarget ***this)
{
  unsigned int v2; // esi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v4; // rdx
  struct IMonitorTarget *v5; // r14
  struct CRenderTarget **v6; // r12
  struct CRenderTarget **i; // rdi
  struct CRenderTarget *v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  __int64 v13; // rax
  struct CRenderTarget **v14; // rbp
  struct CRenderTarget **j; // rdi
  __int64 *v16; // rbp
  __int64 *k; // rdi
  __int64 result; // rax

  v2 = 142213121;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget((CRenderTargetManager *)this);
  *((_BYTE *)this + 581) = 1;
  v5 = PrimaryMonitorTarget;
  *((_BYTE *)this + 576) = 1;
  v6 = this[2];
  for ( i = this[1]; i != v6; ++i )
  {
    v8 = *i;
    v9 = (__int64)*i + *(int *)(*((_QWORD *)*i + 10) + 12LL) + 80;
    LOBYTE(v4) = *((_BYTE *)this + 582);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, v4);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x92u, 0LL);
    }
    else if ( v10 == 142213121 )
    {
      goto LABEL_6;
    }
    *((_BYTE *)this + 581) = 0;
LABEL_6:
    v4 = (__int64)v8 + *(int *)(*((_QWORD *)v8 + 10) + 12LL) + 80;
    if ( v5 )
      v13 = (__int64)v5 + *(int *)(*((_QWORD *)v5 + 1) + 12LL) + 8;
    else
      v13 = 0LL;
    if ( v4 == v13 )
      v2 = v12;
  }
  *((_BYTE *)this + 576) = 0;
  v14 = this[8];
  for ( j = this[7]; j != v14; ++j )
    CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)this, *j);
  v16 = (__int64 *)this[8];
  for ( k = (__int64 *)this[7]; k != v16; ++k )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(k);
  result = v2;
  this[8] = this[7];
  *((_BYTE *)this + 582) = 0;
  return result;
}
