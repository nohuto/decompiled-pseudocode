/*
 * XREFs of ?vLookupScript@@YAXKPEAGK@Z @ 0x1C00E4A48
 * Callers:
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00E49D8 (vIFIMetricsToEnumLogFontExDvW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0064C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     InitializeScripts @ 0x1C03921F0 (InitializeScripts.c)
 */

void __fastcall vLookupScript(int a1, char *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  _DWORD *v7; // rax
  char *v8; // r8

  v4 = InitializeScripts();
  v5 = 0;
  if ( v4 )
  {
    v6 = a1 + 1000;
    v7 = &aScripts;
    do
    {
      if ( *v7 == v6 )
        break;
      ++v5;
      v7 += 4;
    }
    while ( v5 < 0x13 );
    if ( v5 >= 0x13 )
      v8 = (char *)qword_1C03399F8;
    else
      v8 = (char *)*((_QWORD *)&aScripts + 2 * v5 + 1);
    StringCchCopyW(a2, 32LL, v8);
  }
}
