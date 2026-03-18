/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00FF310
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00FF328 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 */

int __fastcall UserValidateAndAttachQueueToInputWindowApiExt(HWND a1, struct IInputQueue *a2)
{
  return ValidateAndAttachQueueToInputWindow(a1, a2);
}
