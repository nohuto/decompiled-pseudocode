/*
 * XREFs of ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x1C011C724
 * Callers:
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 * Callees:
 *     <none>
 */

bool __fastcall DLODCOBJ::bValid(DLODCOBJ *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_BYTE *)this + 49) != 0;
  return result;
}
