/*
 * XREFs of NtUserDelegateCapturePointers @ 0x1C01F7A40
 * Callers:
 *     <none>
 * Callees:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F5FA4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 */

__int64 __fastcall NtUserDelegateCapturePointers(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  return (int)DelegateCapturePointersMitOn(a1, a2, a3);
}
