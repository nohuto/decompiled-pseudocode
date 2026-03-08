/*
 * XREFs of ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C0286F50
 * Callers:
 *     EngCopyBits @ 0x1C008AE00 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall pfnGetRLESrcCopy(int a1, int a2))(struct BLTINFO *)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // ecx

  v2 = a2 - 1;
  if ( !v2 )
  {
    if ( a1 == 7 )
      return bSrcCopySRLE4D1;
    if ( a1 == 8 )
      return bSrcCopySRLE8D1;
    goto LABEL_10;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
LABEL_10:
    if ( a1 == 7 )
      return bSrcCopySRLE4D4;
    if ( a1 == 8 )
      return bSrcCopySRLE8D4;
    goto LABEL_12;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
LABEL_12:
    if ( a1 == 7 )
      return bSrcCopySRLE4D8;
    if ( a1 == 8 )
      return bSrcCopySRLE8D8;
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_14:
    if ( a1 == 7 )
      return bSrcCopySRLE4D16;
    if ( a1 == 8 )
      return bSrcCopySRLE8D16;
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_16:
    if ( a1 == 7 )
      return bSrcCopySRLE4D24;
    if ( a1 == 8 )
      return bSrcCopySRLE8D24;
    goto LABEL_18;
  }
  if ( v6 != 1 )
    return 0LL;
LABEL_18:
  v7 = a1 - 7;
  if ( !v7 )
    return bSrcCopySRLE4D32;
  if ( v7 != 1 )
    return 0LL;
  return bSrcCopySRLE8D32;
}
