/*
 * XREFs of ?GetBehaviorFlags@CTaskWindow@@UEAA?AW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0003@@XZ @ 0x1800993A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1801F67DC (WPP_SF_qD.c)
 */

__int64 __fastcall CTaskWindow::GetBehaviorFlags(HWND *a1)
{
  unsigned int v2; // ebx
  unsigned int PropW; // eax
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = 0;
  if ( (*((__int64 (__fastcall **)(HWND *))*a1 + 4))(a1) )
  {
    if ( HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      PropW = (unsigned int)GetPropW(a1[4], (LPCWSTR)HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr));
      v2 = PropW;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, a1[4], PropW);
    }
  }
  return v2;
}
