/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14036C804
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14036C9E0 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 __fastcall LdrUnloadAlternateResourceModule(__int64 a1)
{
  return LdrUnloadAlternateResourceModuleEx(a1);
}
