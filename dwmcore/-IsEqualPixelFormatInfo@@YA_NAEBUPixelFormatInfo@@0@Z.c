/*
 * XREFs of ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800A5750
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5320 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     <none>
 */

char __fastcall IsEqualPixelFormatInfo(const struct PixelFormatInfo *a1, const struct PixelFormatInfo *a2)
{
  int v2; // eax
  char v3; // r9
  char v4; // r8
  char v5; // cl

  v2 = *(_DWORD *)a2;
  v3 = 0;
  v4 = 1;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
    goto LABEL_6;
  if ( *(_DWORD *)a1 == 88 && v2 == 87 )
  {
    if ( *((_DWORD *)a2 + 1) != 3 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( v2 == 88 && *(_DWORD *)a1 == 87 && *((_DWORD *)a1 + 1) == 3 )
LABEL_6:
    v3 = 1;
LABEL_7:
  v5 = (*((_DWORD *)a2 + 1) == 1) ^ (*((_DWORD *)a1 + 1) == 1);
  if ( !v3 || v5 )
    return 0;
  return v4;
}
