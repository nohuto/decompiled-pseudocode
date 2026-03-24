/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C011919C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00EA5BC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EAF9C (GreTransferDwmStateToSpriteState.c)
 *     GreGetDxSharedSurface @ 0x1C0118EDC (GreGetDxSharedSurface.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = 0;
  v2 = HMValidateHandleNoSecure(a1, 1);
  if ( v2 )
    return (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 26LL) & 0x20) != 0;
  return v1;
}
