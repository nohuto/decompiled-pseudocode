/*
 * XREFs of ??_ECSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0005920
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

DirectComposition::CSharedClientProjectedShadowCasterMarshaler *__fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedClientProjectedShadowCasterMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
