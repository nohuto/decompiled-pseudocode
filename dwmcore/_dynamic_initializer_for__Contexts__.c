/*
 * XREFs of _dynamic_initializer_for__Contexts__ @ 0x180003D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0ContextTable@@QEAA@XZ @ 0x180103DA4 (--0ContextTable@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__Contexts__(ContextTable *a1)
{
  ContextTable::ContextTable(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Contexts__);
}
