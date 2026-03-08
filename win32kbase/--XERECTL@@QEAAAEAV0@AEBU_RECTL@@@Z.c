/*
 * XREFs of ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0078860
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0075590 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

int *__fastcall ERECTL::operator*=(int *a1, int *a2)
{
  int v2; // eax
  int v4; // r8d
  int v5; // eax
  int v6; // r10d
  int v7; // eax
  int v8; // edx
  int v9; // r11d
  int v10; // eax

  v2 = *a2;
  v4 = *a1;
  if ( *a2 > *a1 )
  {
    *a1 = v2;
    v4 = v2;
  }
  v5 = a2[1];
  v6 = a1[1];
  if ( v5 > v6 )
  {
    a1[1] = v5;
    v6 = v5;
  }
  v7 = a2[2];
  v8 = a1[2];
  if ( v7 < v8 )
  {
    a1[2] = v7;
    v8 = v7;
  }
  v9 = a2[3];
  v10 = a1[3];
  if ( v9 < v10 )
  {
    a1[3] = v9;
    v10 = v9;
  }
  if ( v8 < v4 )
  {
    *a1 = v8;
  }
  else if ( v10 < v6 )
  {
    a1[1] = v10;
  }
  return a1;
}
