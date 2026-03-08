/*
 * XREFs of FONTOBJ_pwszFontFilePaths @ 0x1C029B150
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

LPWSTR __stdcall FONTOBJ_pwszFontFilePaths(FONTOBJ *pfo, ULONG *pcwc)
{
  WCHAR *v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  *pcwc = 0;
  if ( pfo )
  {
    v3 = *(_QWORD *)pfo[1].pvProducer;
    if ( (*(_DWORD *)(v3 + 52) & 0x30) == 0 )
    {
      v2 = *(WCHAR **)(v3 + 24);
      *pcwc = *(_DWORD *)(v3 + 32);
    }
  }
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v2;
}
