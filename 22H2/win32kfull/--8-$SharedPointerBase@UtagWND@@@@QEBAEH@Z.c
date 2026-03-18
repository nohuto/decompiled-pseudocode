/*
 * XREFs of ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C0138BE0
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall SharedPointerBase<tagWND>::operator==(_QWORD *a1)
{
  return *a1 == 0LL;
}
