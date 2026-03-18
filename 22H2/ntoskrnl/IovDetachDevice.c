/*
 * XREFs of IovDetachDevice @ 0x140AC26AC
 * Callers:
 *     IoDetachDevice @ 0x140365990 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140AD3398 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
