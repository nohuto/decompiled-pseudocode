/*
 * XREFs of ?GetClipILIndexFromName@@YAIPEAGI@Z @ 0x1C01FEC34
 * Callers:
 *     InitClipboardILDef @ 0x1C012BCF0 (InitClipboardILDef.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetClipILIndexFromName(wchar_t *Str2, unsigned int a2)
{
  unsigned int v2; // ebx
  size_t v3; // rsi
  __int64 i; // rdi

  v2 = 0;
  v3 = (unsigned __int64)a2 >> 1;
  for ( i = 0LL; _wcsnicmp(*(const wchar_t **)(i + *(_QWORD *)gaClipILDef), Str2, v3); i += 24LL )
  {
    if ( ++v2 >= 5 )
      return 0xFFFFFFFFLL;
  }
  return v2;
}
