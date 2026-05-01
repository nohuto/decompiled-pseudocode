/*
 * XREFs of wil::details::ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___::_ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___ @ 0x180251AC8
 * Callers:
 *     __lambda_3bbf153ae8ca8cd098f14c7e321b666e_::operator()_::_1_::dtor$0 @ 0x180251EE3 (__lambda_3bbf153ae8ca8cd098f14c7e321b666e_--operator()_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x1802536F2 (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x180253F0C (_CVirtualTouchpadExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x180254015 (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___::_ScopeExitFn__lambda_b21a140ee7fabd5ccbf52431080b280e___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_DWORD *)(result + 752) = 0;
  }
  return result;
}
