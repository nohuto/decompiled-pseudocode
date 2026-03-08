/*
 * XREFs of SetRedrawProp @ 0x1C0100E8C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100930 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x1C01011B8 (UserGetGlobalAtomTableOfWindow.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 */

__int64 __fastcall SetRedrawProp(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int16 AtomFromAtomTable; // ax

  v2 = a2;
  result = UserGetGlobalAtomTableOfWindow(a1);
  if ( result )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(result, L"SysSetRedraw");
    return InternalSetProp(a1, AtomFromAtomTable, v2, 0LL);
  }
  return result;
}
