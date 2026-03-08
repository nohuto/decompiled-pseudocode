/*
 * XREFs of ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C012C630
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall SharedPointerBase<tagWND>::operator==(_QWORD *a1)
{
  return *a1 == 0LL;
}
