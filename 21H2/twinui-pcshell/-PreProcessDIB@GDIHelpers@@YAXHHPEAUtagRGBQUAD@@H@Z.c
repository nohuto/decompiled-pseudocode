/*
 * XREFs of ?PreProcessDIB@GDIHelpers@@YAXHHPEAUtagRGBQUAD@@H@Z @ 0x1804DFCBC
 * Callers:
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x1804DFD40 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GDIHelpers::PreProcessDIB(GDIHelpers *this, int a2, __int64 a3, struct tagRGBQUAD *a4)
{
  int v4; // ecx
  __int64 v5; // r10
  unsigned __int8 *v6; // r9
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // kr04_4
  int v10; // ecx

  v4 = a2 * (_DWORD)this;
  v5 = v4;
  if ( v4 > 0 )
  {
    v6 = (unsigned __int8 *)(a3 + 2);
    do
    {
      v7 = v6[1];
      if ( (_BYTE)v7 )
      {
        v8 = v7 * *(v6 - 1);
        *v6 = (v7 * (unsigned int)*v6 + 128) / 0xFF;
        v9 = v8 + 128;
        v10 = v7 * *(v6 - 2);
        *(v6 - 1) = v9 / 0xFF;
        *(v6 - 2) = (v10 + 128) / 0xFFu;
      }
      else
      {
        *(_DWORD *)(v6 - 2) = 0;
      }
      v6 += 4;
      --v5;
    }
    while ( v5 );
  }
}
