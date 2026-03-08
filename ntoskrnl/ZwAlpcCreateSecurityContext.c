/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x1404132F0
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x1405EB160 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSecurityContext(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
