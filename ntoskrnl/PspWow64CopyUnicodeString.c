/*
 * XREFs of PspWow64CopyUnicodeString @ 0x1402FCB1C
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1402FC5B8 (PspWow64ThunkProcessParameters.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall PspWow64CopyUnicodeString(void **a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_WORD *)a2 = *(_WORD *)a3;
  result = *(unsigned __int16 *)(a3 + 2);
  *(_WORD *)(a2 + 2) = result;
  if ( *(_QWORD *)(a3 + 8) )
  {
    *(_DWORD *)(a2 + 4) = *(_DWORD *)a1;
    memmove(*a1, *(const void **)(a3 + 8), *(unsigned __int16 *)(a3 + 2));
    result = *(unsigned __int16 *)(a3 + 2);
    *a1 = (char *)*a1 + result;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 0;
  }
  return result;
}
