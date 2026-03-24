/*
 * XREFs of _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023F640
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___ @ 0x1C023F398 (CWindowGroupManager--_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___.c)
 * Callees:
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C023FA5C (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C02406C8 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C024081C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0240998 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

__int64 __fastcall lambda_a3dfffe89e22da34bf9580289d018c81_::operator()(_QWORD *a1, CWindow *a2)
{
  unsigned int v4; // edi
  bool CanTransferForeground; // al
  __int64 v6; // rcx

  if ( *((_DWORD *)a2 + 6) == 1 )
  {
    v4 = 0;
    *(_QWORD *)a1[2] = CWindowGroup::_GetWindowFromRole(*a1, 2LL);
    if ( *(_QWORD *)a1[2] )
    {
      CanTransferForeground = CWindow::CanTransferForeground(a2);
      if ( (unsigned __int8)CWindowGroup::_TemplateWindow(v6, *(_QWORD *)a1[2], a2, !CanTransferForeground) )
        CWindowGroup::_UpdateWindowRole(*a1, *(_QWORD *)a1[2], 1LL);
      else
        *(_BYTE *)a1[1] = 0;
    }
  }
  else
  {
    return (unsigned int)-1073740759;
  }
  return v4;
}
