/*
 * XREFs of IsWin32KSyscallFiltered @ 0x1C00A6E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsWin32KSyscallFiltered(unsigned int a1)
{
  unsigned int Win32KFilterSet; // eax
  __int64 v3; // r9

  Win32KFilterSet = PsGetWin32KFilterSet();
  if ( Win32KFilterSet >= 7 )
    return 1;
  _mm_lfence();
  v3 = gaWin32KFilterBitmap[Win32KFilterSet];
  return v3 && ((unsigned __int8)(1 << (a1 & 7)) & *(_BYTE *)(((unsigned __int64)a1 >> 3) + v3)) != 0;
}
