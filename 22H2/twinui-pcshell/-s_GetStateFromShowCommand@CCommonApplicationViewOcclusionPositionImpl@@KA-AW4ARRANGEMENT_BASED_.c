/*
 * XREFs of ?s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA?AW4ARRANGEMENT_BASED_VIEW_STATE@@I@Z @ 0x1802F1234
 * Callers:
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x1802E68C0 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x18045CD10 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::s_GetStateFromShowCommand(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 3LL;
    v4 = v3 - 1;
    if ( v4 )
      return v4 == 2;
  }
  return 2LL;
}
