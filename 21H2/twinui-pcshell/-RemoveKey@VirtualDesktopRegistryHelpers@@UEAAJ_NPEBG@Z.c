/*
 * XREFs of ?RemoveKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x1804A4A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LSTATUS __fastcall VirtualDesktopRegistryHelpers::RemoveKey(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3)
{
  LSTATUS result; // eax

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 3) )
      return 0;
  }
  else if ( !*((_QWORD *)this + 2) )
  {
    return 0;
  }
  result = RegDeleteTreeW(*((HKEY *)this + a2 + 2), a3);
  if ( !result )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
