/*
 * XREFs of DxgkEngGetWindowRect @ 0x1C00F66D0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetWindowRect @ 0x1C001F208 (UserGetWindowRect.c)
 */

__int64 __fastcall DxgkEngGetWindowRect(__int64 a1, _OWORD *a2)
{
  return UserGetWindowRect(a1, a2);
}
