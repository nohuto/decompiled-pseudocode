/*
 * XREFs of SetTouchInputStatus @ 0x1C0168090
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C01680C0 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetTouchInputStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  __int64 result; // rax

  v4 = (_DWORD)a1 != 0;
  result = SGDGetUserSessionState(a1, a2, a3, a4);
  *(_BYTE *)(result + 368) = v4;
  return result;
}
