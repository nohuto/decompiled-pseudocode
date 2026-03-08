/*
 * XREFs of _exception_enabled @ 0x1403D7DDC
 * Callers:
 *     _handle_error @ 0x1403D7EA0 (_handle_error.c)
 *     _handle_errorf @ 0x1403D7FDC (_handle_errorf.c)
 * Callees:
 *     _set_statfp @ 0x1403D87B0 (_set_statfp.c)
 */

_BOOL8 __fastcall exception_enabled(char a1, __int16 a2)
{
  int v3; // ebx

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    set_statfp(1LL);
    v3 &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    set_statfp(4LL);
    v3 &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    set_statfp(8LL);
    v3 &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      set_statfp(16LL);
    v3 &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    set_statfp(32LL);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}
