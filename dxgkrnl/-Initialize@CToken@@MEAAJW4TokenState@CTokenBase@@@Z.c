/*
 * XREFs of ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C0077F70
 * Callers:
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C0078EB4 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0078FE8 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::Initialize(__int64 a1, int a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = a2;
  Global = DXGGLOBAL::GetGlobal();
  result = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Global + 38069) + 32LL))(a1 + 80);
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 24) = 6;
  return result;
}
