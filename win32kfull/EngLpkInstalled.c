/*
 * XREFs of EngLpkInstalled @ 0x1C0290C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL EngLpkInstalled(void)
{
  Gre::Base *v0; // rcx

  return *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v0) + 241) + 1573012LL) != 0;
}
