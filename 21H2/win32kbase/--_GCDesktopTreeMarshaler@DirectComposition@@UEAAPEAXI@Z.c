/*
 * XREFs of ??_GCDesktopTreeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00B7160
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 */

DirectComposition::CDesktopTreeMarshaler *__fastcall DirectComposition::CDesktopTreeMarshaler::`scalar deleting destructor'(
        DirectComposition::CDesktopTreeMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDesktopTreeMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
