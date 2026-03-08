/*
 * XREFs of KiDetectTsx @ 0x14038002C
 * Callers:
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

_BOOL8 KiDetectTsx()
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0LL;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 0x800) != 0 || (_RBX & 0x10) != 0;
}
