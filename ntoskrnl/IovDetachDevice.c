/*
 * XREFs of IovDetachDevice @ 0x140ABE6AC
 * Callers:
 *     IoDetachDevice @ 0x1402F0C40 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140ACF398 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
