/*
 * XREFs of UserIsWindowOnDesktopAndComposed @ 0x1C007EF48
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C007CDBC (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowOnDesktopAndComposed(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2);
  if ( v4 && v2 == ***(_QWORD ***)(*(_QWORD *)(v4 + 24) + 8LL) )
    return (unsigned int)IsWindowDesktopComposed(v4) != 0;
  return v3;
}
