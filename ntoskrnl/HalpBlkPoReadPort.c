/*
 * XREFs of HalpBlkPoReadPort @ 0x140B12F4C
 * Callers:
 *     HalpBlkPoPerformPpmOperationForIoPort @ 0x140B12E4C (HalpBlkPoPerformPpmOperationForIoPort.c)
 * Callees:
 *     <none>
 */

unsigned __int32 __fastcall HalpBlkPoReadPort(unsigned __int16 a1, __int16 a2)
{
  unsigned __int32 result; // eax

  switch ( a2 )
  {
    case 1:
      LOBYTE(result) = __inbyte(a1);
      return (unsigned __int8)result;
    case 2:
      LOWORD(result) = __inword(a1);
      return (unsigned __int16)result;
    case 4:
      return __indword(a1);
    default:
      result = 0;
      __debugbreak();
      break;
  }
  return result;
}
