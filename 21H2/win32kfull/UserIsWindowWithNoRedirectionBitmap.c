/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C00EDCCC
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 *     GreGetDxSharedSurface @ 0x1C00ED940 (GreGetDxSharedSurface.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = 0;
  v2 = HMValidateHandleNoSecure(a1, 1);
  if ( v2 )
    return (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 26LL) & 0x20) != 0;
  return v1;
}
