/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01014E8
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031780 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1C014455C (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0101580 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall KRegKey::QueryValueString(__int64 a1, _WORD *a2)
{
  __int64 v3; // r9
  _WORD *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueString(a1, &v7);
  v3 = 0x7FFFLL;
  v4 = a2;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  v5 = (0x7FFF - v3) & -(__int64)(v3 != 0);
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    *((_QWORD *)&v7 + 1) = a2;
    LOWORD(v7) = 2 * v5;
    WORD1(v7) = 2 * v5 + 2;
    return KRegKey::QueryValueString(a1, &v7);
  }
  return result;
}
