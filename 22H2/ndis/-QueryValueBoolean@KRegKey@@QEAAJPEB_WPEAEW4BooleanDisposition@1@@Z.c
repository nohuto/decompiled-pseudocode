/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C01094D8
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031780 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0123D78 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ndisBindBuilderLoadSettings @ 0x1C014455C (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C0109478 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        wchar_t *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  __int64 v5; // r10
  wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueBoolean(this, &v9, a3, a4);
  v5 = 0x7FFFLL;
  v6 = a2;
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
    v9.Buffer = a2;
    v9.Length = 2 * v7;
    v9.MaximumLength = 2 * v7 + 2;
    return KRegKey::QueryValueBoolean(this, &v9, a3, a4);
  }
  return result;
}
