/*
 * XREFs of ??_ECDrawNineGridInstruction@@MEAAPEAXI@Z @ 0x18000D070
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawNineGridInstruction@@MEAA@XZ @ 0x18000D0B8 (--1CDrawNineGridInstruction@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CDrawNineGridInstruction *__fastcall CDrawNineGridInstruction::`vector deleting destructor'(
        CDrawNineGridInstruction *this,
        char a2)
{
  CDrawNineGridInstruction::~CDrawNineGridInstruction(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDrawNineGridInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
