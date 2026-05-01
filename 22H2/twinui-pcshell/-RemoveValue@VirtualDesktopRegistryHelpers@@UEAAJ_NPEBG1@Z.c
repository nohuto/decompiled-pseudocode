/*
 * XREFs of ?RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z @ 0x1804A46D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::RemoveValue(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rdi
  bool v8; // zf
  LSTATUS v10; // eax
  unsigned int v11; // ebx
  bool v12; // cc
  HKEY phkResult[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( a2 )
    v8 = *((_QWORD *)this + 3) == 0LL;
  else
    v8 = *((_QWORD *)this + 2) == 0LL;
  if ( v8 )
    return 0LL;
  phkResult[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    phkResult,
    0LL);
  v10 = RegOpenKeyW(*((HKEY *)this + v4 + 2), a3, phkResult);
  v11 = v10;
  v12 = v10 <= 0;
  if ( v10 || (v10 = RegDeleteValueW(phkResult[0], a4), v11 = v10, v12 = v10 <= 0, v10) )
  {
    if ( !v12 )
      v11 = (unsigned __int16)v10 | 0x80070000;
  }
  else
  {
    v11 = 0;
  }
  if ( phkResult[0] )
    RegCloseKey(phkResult[0]);
  return v11;
}
