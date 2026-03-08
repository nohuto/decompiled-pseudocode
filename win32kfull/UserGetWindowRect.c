/*
 * XREFs of UserGetWindowRect @ 0x1C001F208
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C001DFD0 (GreUpdateSpriteClipRgn.c)
 *     DxgkEngGetWindowRect @ 0x1C00F66D0 (DxgkEngGetWindowRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    v4 = *(_QWORD *)(result + 40);
    result = 1LL;
    *v2 = *(_OWORD *)(v4 + 88);
  }
  return result;
}
