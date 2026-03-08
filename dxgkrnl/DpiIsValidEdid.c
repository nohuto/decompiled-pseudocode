/*
 * XREFs of DpiIsValidEdid @ 0x1C001F86C
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C02014BC (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0201AEC (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C0399218 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 * Callees:
 *     ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x1C001F8A0 (-DpiEdidCheckSum@@YAEPEADK@Z.c)
 */

unsigned __int8 __fastcall DpiIsValidEdid(__int64 a1)
{
  unsigned int v1; // edx

  if ( *(_DWORD *)a1 == -256 && *(_DWORD *)(a1 + 4) == 0xFFFFFF )
  {
    v1 = 128;
    return DpiEdidCheckSum((char *)a1, v1);
  }
  if ( (*(_BYTE *)a1 & 0xF0) == 0x20 )
  {
    v1 = 256;
    return DpiEdidCheckSum((char *)a1, v1);
  }
  return 0;
}
