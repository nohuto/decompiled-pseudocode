/*
 * XREFs of UserGetWindowRect @ 0x1C011F388
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C00BA178 (GreUpdateSpriteClipRgn.c)
 *     DxgkEngGetWindowRect @ 0x1C011F370 (DxgkEngGetWindowRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(unsigned __int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v4 = *(_QWORD *)(result + 40);
    result = 1LL;
    *a2 = *(_OWORD *)(v4 + 88);
  }
  return result;
}
