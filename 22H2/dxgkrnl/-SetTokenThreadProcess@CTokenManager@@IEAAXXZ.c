/*
 * XREFs of ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C001A840
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0003A70 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::SetTokenThreadProcess(CTokenManager *this)
{
  __int64 CurrentProcess; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax

  CurrentProcess = PsGetCurrentProcess();
  if ( !*((_QWORD *)this + 2) )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 88LL))(this);
    Global = DXGGLOBAL::GetGlobal(v4, v3);
    (*(void (**)(void))(*((_QWORD *)Global + 38048) + 152LL))();
    *((_QWORD *)this + 2) = CurrentProcess;
  }
}
