/*
 * XREFs of ?get_WindowReuseAllowed@CImmersiveWindowFactoryBase@@UEAAJPEAE@Z @ 0x1804F5F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::get_WindowReuseAllowed(
        CImmersiveWindowFactoryBase *this,
        unsigned __int8 *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 )
    *a2 = *((_BYTE *)this + 105);
  else
    return (unsigned int)-2147467261;
  return v2;
}
