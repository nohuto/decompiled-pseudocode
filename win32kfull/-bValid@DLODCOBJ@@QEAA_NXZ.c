/*
 * XREFs of ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x1C0051088
 * Callers:
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 * Callees:
 *     <none>
 */

bool __fastcall DLODCOBJ::bValid(DLODCOBJ *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_BYTE *)this + 17) != 0;
  return result;
}
