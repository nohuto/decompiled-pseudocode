/*
 * XREFs of ?RemoveContextMenuDataForItem@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@_KI@Z @ 0x1804EC9FC
 * Callers:
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1804ECEE0 (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B380 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall ImmersiveContextMenuHelper::RemoveContextMenuDataForItem(HWND hWnd, HWND a2, unsigned int a3)
{
  LPCWSTR lpString[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(lpString, 0, 24);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              (__int64)lpString,
              L"ImmersiveContextMenuArray_%lu-%lu",
              a2,
              a3) >= 0 )
    RemovePropW(hWnd, lpString[0]);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString);
}
