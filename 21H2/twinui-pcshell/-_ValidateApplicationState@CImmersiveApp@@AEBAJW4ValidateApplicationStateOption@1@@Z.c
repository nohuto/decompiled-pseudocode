/*
 * XREFs of ?_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z @ 0x1801F3300
 * Callers:
 *     ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1801EBE60 (-GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::_ValidateApplicationState(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax
  char v4; // dl
  char v5; // r8

  v2 = *(_DWORD *)(a1 + 584);
  result = 0LL;
  if ( a2 || (v4 = 1, (v2 & 8) == 0) )
    v4 = 0;
  v5 = v2 & 1;
  if ( *(_BYTE *)(a1 + 736) || !v5 && !v4 )
    return 2147947423LL;
  return result;
}
