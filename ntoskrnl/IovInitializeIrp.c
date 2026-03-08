/*
 * XREFs of IovInitializeIrp @ 0x140ABE758
 * Callers:
 *     IoInitializeIrp @ 0x1402CABC0 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x140ACA99C (VfIoInitializeIrp.c)
 */

__int64 __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoInitializeIrp(a1, a4, 0LL);
  return result;
}
