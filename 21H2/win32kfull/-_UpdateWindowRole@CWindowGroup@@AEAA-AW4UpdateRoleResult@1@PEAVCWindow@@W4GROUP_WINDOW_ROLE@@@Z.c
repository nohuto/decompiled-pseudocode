/*
 * XREFs of ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0240F58
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023FC00 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C023FC9C (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0240E5C (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0240C88 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

__int64 __fastcall CWindowGroup::_UpdateWindowRole(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 WindowFromRole; // rax

  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 == a3 )
    return 1LL;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v3 - 1) + 40) = 0LL;
    *(_DWORD *)(a2 + 24) = 0;
  }
  WindowFromRole = CWindowGroup::_GetWindowFromRole(a1, a3);
  if ( WindowFromRole )
    *(_DWORD *)(WindowFromRole + 24) = 0;
  *(_DWORD *)(a2 + 24) = a3;
  if ( a3 )
    *(_QWORD *)(a1 + 8LL * (unsigned int)(a3 - 1) + 40) = (unsigned __int16)*(_DWORD *)(a2 + 16);
  return 0LL;
}
