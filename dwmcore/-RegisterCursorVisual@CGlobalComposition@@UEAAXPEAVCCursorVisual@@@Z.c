/*
 * XREFs of ?RegisterCursorVisual@CGlobalComposition@@UEAAXPEAVCCursorVisual@@@Z @ 0x1801EF8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCCursorVisual@@@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@QEAAPEAPEAVCCursorVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801EF26C (--$_Emplace_reallocate@AEBQEAVCCursorVisual@@@-$vector@PEAVCCursorVisual@@V-$allocator@PEAVCCurs.c)
 */

void __fastcall CGlobalComposition::RegisterCursorVisual(CGlobalComposition *this, struct CCursorVisual *a2)
{
  _BYTE *v3; // rdx
  struct CCursorVisual *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = (_BYTE *)*((_QWORD *)this + 171);
  if ( v3 == *((_BYTE **)this + 172) )
  {
    std::vector<CCursorVisual *>::_Emplace_reallocate<CCursorVisual * const &>((_QWORD *)this + 170, v3, &v4);
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this + 171) += 8LL;
  }
}
