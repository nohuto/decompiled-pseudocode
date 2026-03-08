/*
 * XREFs of PiSwValidatePropertyArray @ 0x1407859F8
 * Callers:
 *     PiSwIrpPropertySet @ 0x1407857F8 (PiSwIrpPropertySet.c)
 *     PiSwValidateCreateData @ 0x14080780C (PiSwValidateCreateData.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x140808A64 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x140686FC8 (_PnpValidatePropertyData.c)
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
