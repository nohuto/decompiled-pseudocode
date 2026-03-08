/*
 * XREFs of ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C012C640
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall SharedPointerBase<unsigned short>::operator!=(_QWORD *a1)
{
  return *a1 != 0LL;
}
