/*
 * XREFs of ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x1801CA244
 * Callers:
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C9334 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4SuperWetStroke@CSuperWetInkManager@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801C8684 (--4SuperWetStroke@CSuperWetInkManager@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 104; i != v3; i += 104LL )
    CSuperWetInkManager::SuperWetStroke::operator=(i - 104, i);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(*(_QWORD *)(a1 + 8) - 96LL);
  *(_QWORD *)(a1 + 8) -= 104LL;
  result = a2;
  *a2 = a3;
  return result;
}
