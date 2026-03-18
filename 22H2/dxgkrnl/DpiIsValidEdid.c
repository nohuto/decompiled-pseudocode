/*
 * XREFs of DpiIsValidEdid @ 0x1C001FACC
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C021003C (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C021066C (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C039DAFC (DpiFdoValidateIntegratedDisplayDescriptor.c)
 * Callees:
 *     ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x1C001FB00 (-DpiEdidCheckSum@@YAEPEADK@Z.c)
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
