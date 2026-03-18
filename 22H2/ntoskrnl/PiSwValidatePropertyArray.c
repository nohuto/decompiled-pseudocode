/*
 * XREFs of PiSwValidatePropertyArray @ 0x14079CE08
 * Callers:
 *     PiSwIrpPropertySet @ 0x14079CC08 (PiSwIrpPropertySet.c)
 *     PiSwValidateCreateData @ 0x14081C3AC (PiSwValidateCreateData.c)
 *     PiSwIrpInterfaceRegister @ 0x14081D314 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14081D6A4 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1407973C8 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiSwValidatePropertyArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 i; // rbx

  result = 0LL;
  v3 = 0;
  if ( a2 )
  {
    for ( i = a1 + 32; !*(_DWORD *)(i - 12); i += 48LL )
    {
      result = PnpValidatePropertyData(*(__int64 **)(i + 8), *(_DWORD *)(i + 4), *(_DWORD *)i);
      if ( (int)result < 0 )
        break;
      if ( ++v3 >= a2 )
        return result;
    }
    return 3221225485LL;
  }
  return result;
}
