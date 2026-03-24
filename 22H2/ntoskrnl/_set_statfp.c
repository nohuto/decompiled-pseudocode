/*
 * XREFs of _set_statfp @ 0x1403D6168
 * Callers:
 *     _exception_enabled @ 0x1403D577C (_exception_enabled.c)
 * Callees:
 *     _set_fpsr @ 0x1403D61C0 (_set_fpsr.c)
 *     _get_fpsr @ 0x140408FE0 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
