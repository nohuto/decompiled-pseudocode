/*
 * XREFs of ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01093B8
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031780 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0101580 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsInstallation(HANDLE *a1, void **a2, _BYTE *a3)
{
  __int64 v5; // r9
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  v5 = 0x7FFFLL;
  v6 = L"NetCfgInstanceId";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = (0x7FFF - v5) & -(__int64)(v5 != 0);
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    v9.Buffer = L"NetCfgInstanceId";
    v9.Length = 2 * v7;
    v9.MaximumLength = 2 * v7 + 2;
    result = KRegKey::QueryValueString(a1, &v9, a2);
  }
  if ( (_DWORD)result == -1073741772 )
  {
    *a3 = 1;
  }
  else
  {
    if ( (_DWORD)result )
      return result;
    *a3 = 0;
  }
  return 0LL;
}
