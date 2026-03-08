/*
 * XREFs of ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1801B06C0
 * Callers:
 *     ??1CSuperWetInkManager@@QEAA@XZ @ 0x1801B1210 (--1CSuperWetInkManager@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1801C8438 (--$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSup.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x1801CA138 (-_Change_array@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuper.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v3 + 8);
      v3 += 104LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
