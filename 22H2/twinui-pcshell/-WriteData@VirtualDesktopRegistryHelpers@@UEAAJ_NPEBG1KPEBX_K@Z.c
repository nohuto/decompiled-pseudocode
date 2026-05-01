/*
 * XREFs of ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1804A49C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1068 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::WriteData(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        DWORD dwType,
        BYTE *lpData,
        unsigned __int64 cbData)
{
  bool v9; // zf
  HKEY v11; // rbx
  unsigned int KeyW; // eax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  HKEY phkResult[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
    v9 = *((_QWORD *)this + 3) == 0LL;
  else
    v9 = *((_QWORD *)this + 2) == 0LL;
  if ( v9 )
    return 0LL;
  phkResult[0] = 0LL;
  v11 = (HKEY)*((_QWORD *)this + a2 + 2);
  if ( a3 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      phkResult,
      0LL);
    KeyW = RegCreateKeyW(v11, a3, phkResult);
    if ( KeyW )
    {
      v13 = 74LL;
      goto LABEL_12;
    }
    v11 = phkResult[0];
  }
  KeyW = RegSetValueExW(v11, a4, 0, dwType, lpData, cbData);
  if ( !KeyW )
  {
    v14 = 0;
    goto LABEL_14;
  }
  v13 = 81LL;
LABEL_12:
  v14 = wil::details::in1diag3::Return_Win32(
          retaddr,
          v13,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
          (const char *)KeyW);
LABEL_14:
  if ( phkResult[0] )
    RegCloseKey(phkResult[0]);
  return v14;
}
