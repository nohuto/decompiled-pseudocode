/*
 * XREFs of ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C0018840
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0017DB0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::SetTokenThreadProcess(CTokenManager *this)
{
  __int64 CurrentProcess; // rdi
  struct DXGGLOBAL *Global; // rax

  CurrentProcess = PsGetCurrentProcess();
  if ( !*((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 96LL))(this);
    Global = DXGGLOBAL::GetGlobal();
    (*(void (**)(void))(*((_QWORD *)Global + 38069) + 416LL))();
    *((_QWORD *)this + 3) = CurrentProcess;
  }
}
