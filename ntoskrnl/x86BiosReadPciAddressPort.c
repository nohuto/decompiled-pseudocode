/*
 * XREFs of x86BiosReadPciAddressPort @ 0x140506224
 * Callers:
 *     x86BiosReadIoSpace @ 0x1403BC880 (x86BiosReadIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall x86BiosReadPciAddressPort(int a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int v5; // ecx

  v2 = 0;
  if ( !XmPciBiosPresent )
    return 0LL;
  if ( a2 + a1 > 3 )
    a1 = 3 - a2;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          return (unsigned int)XmPCIConfigAddress;
      }
      else
      {
        return (HIBYTE(XmPCIConfigAddress) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&XmPCIConfigAddress + a2);
      }
    }
    else
    {
      return *(unsigned __int16 *)((char *)&XmPCIConfigAddress + a2);
    }
  }
  else
  {
    return *((unsigned __int8 *)&XmPCIConfigAddress + a2);
  }
  return v2;
}
