/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x18043AA4C
 * Callers:
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x18043BE2C (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
