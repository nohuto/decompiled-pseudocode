/*
 * XREFs of x86BiosReadIoSpace @ 0x140399800
 * Callers:
 *     XmInOp @ 0x140396720 (XmInOp.c)
 *     XmInsOp @ 0x1404E6560 (XmInsOp.c)
 * Callees:
 *     x86BiosReadPciDataPort @ 0x1403CA6B8 (x86BiosReadPciDataPort.c)
 *     x86BiosReadCmosPort @ 0x1404BF490 (x86BiosReadCmosPort.c)
 *     x86BiosReadPciAddressPort @ 0x1404BF55C (x86BiosReadPciAddressPort.c)
 */

unsigned __int32 __fastcall x86BiosReadIoSpace(unsigned int a1, __int16 a2)
{
  unsigned __int16 v2; // dx
  unsigned __int32 result; // eax

  if ( XmPciBiosPresent )
  {
    if ( (unsigned __int16)(a2 - 3320) <= 3u )
      return x86BiosReadPciAddressPort(a1, (unsigned __int16)(a2 - 3320));
    if ( XmPCIConfigAddress < 0 && (unsigned __int16)(a2 - 3324) <= 3u )
      return x86BiosReadPciDataPort(a1, (unsigned __int16)(a2 - 3324));
  }
  if ( (unsigned __int16)(a2 - 112) <= 1u )
    return x86BiosReadCmosPort(a1);
  v2 = x86BiosIoSpace + a2;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      return __indword(v2);
    }
    else
    {
      LOWORD(result) = __inword(v2);
      return (unsigned __int16)result;
    }
  }
  else
  {
    LOBYTE(result) = __inbyte(v2);
    return (unsigned __int8)result;
  }
}
