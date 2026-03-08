/*
 * XREFs of ?IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z @ 0x1C0098C20
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00E83C0 (EditionKeyEventLLHook.c)
 * Callees:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C00989D0 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 */

unsigned __int64 __fastcall IsUninterceptable(unsigned int *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int64 result; // rax

  v2 = a2;
  v3 = SGDGetUserSessionState(a1);
  result = (unsigned __int64)IsHotKey(*(_DWORD *)(v3 + 13792), v2);
  if ( result )
    result &= -(__int64)((*(_WORD *)(result + 34) & 0x800) != 0);
  return result;
}
