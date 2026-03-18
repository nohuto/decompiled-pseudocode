/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00E26E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00E28EC (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 */

int __fastcall UserValidateAndAttachQueueToInputWindowApiExt(HWND a1, struct IInputQueue *a2)
{
  return ValidateAndAttachQueueToInputWindow(a1, a2);
}
