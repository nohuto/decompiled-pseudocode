/*
 * XREFs of ?vLookupScript@@YAXKPEAGK@Z @ 0x1C00BA7B4
 * Callers:
 *     cjCopyFontDataW @ 0x1C0004330 (cjCopyFontDataW.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00BA744 (vIFIMetricsToEnumLogFontExDvW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     InitializeScripts @ 0x1C03B68E8 (InitializeScripts.c)
 */

void __fastcall vLookupScript(int a1, unsigned __int16 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v7; // r8
  _DWORD *v8; // rax
  const unsigned __int16 *v9; // r8

  v5 = 0;
  if ( (unsigned int)InitializeScripts() )
  {
    v6 = a1 + 1000;
    v7 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
    v8 = (_DWORD *)(v7 + 19592);
    do
    {
      if ( *v8 == v6 )
      {
        v9 = *(const unsigned __int16 **)(v7 + 16 * (v5 + 1225LL));
        goto LABEL_5;
      }
      ++v5;
      v8 += 4;
    }
    while ( v5 < 0x13 );
    v9 = *(const unsigned __int16 **)(v7 + 19888);
LABEL_5:
    StringCchCopyW(a2, 0x20uLL, v9);
  }
}
