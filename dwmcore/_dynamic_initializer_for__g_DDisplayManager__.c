/*
 * XREFs of _dynamic_initializer_for__g_DDisplayManager__ @ 0x180003E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDDisplayManager@@QEAA@XZ @ 0x1800B012C (--0CDDisplayManager@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_DDisplayManager__(CDDisplayManager *a1)
{
  CDDisplayManager::CDDisplayManager(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DDisplayManager__);
}
