/*
 * XREFs of ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180203D50
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180201A10 (--$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180202120 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x180203B20 (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 */

char __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::ProcessWindowBool(
        __int64 a1,
        HWND a2)
{
  int v2; // eax
  char *v6; // rcx
  RECT v7; // [rsp+30h] [rbp-238h] BYREF
  WCHAR ClassName[264]; // [rsp+40h] [rbp-228h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 0 )
  {
    if ( a2 == *(HWND *)(a1 + 8) )
      *(_DWORD *)(a1 + 4) = 0;
    return 1;
  }
  if ( v2 > 4 )
    return 1;
  *(_DWORD *)(a1 + 4) = v2 + 1;
  if ( GetClassNameW(a2, ClassName, 260) )
  {
    if ( *(int *)(a1 + 4) > 4 )
    {
      if ( CompareStringOrdinal((LPCWCH)(a1 + 64), -1, ClassName, -1, 0) != 2 )
        return 1;
    }
    else
    {
      if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(a2) )
        return 0;
      v7 = *(RECT *)(a1 + 16);
      if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
                  &v7,
                  a2,
                  1,
                  (_DWORD *)(a1 + 584)) < 0 )
        return 0;
      v6 = (char *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 4) == 1 )
      {
        if ( (int)StringCchCopyW(v6, 260LL, (char *)ClassName) < 0 )
          return 0;
        goto LABEL_14;
      }
      if ( CompareStringOrdinal((LPCWCH)v6, -1, ClassName, -1, 0) == 2 )
      {
LABEL_14:
        *(_QWORD *)(a1 + 8LL * *(int *)(a1 + 4) + 24) = a2;
        return 1;
      }
    }
  }
  return 0;
}
