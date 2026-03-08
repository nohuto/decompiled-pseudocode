/*
 * XREFs of IsSolidColorSurface @ 0x18026FDD4
 * Callers:
 *     DebugInspectSysMemSurface_NoOpt @ 0x18026F714 (DebugInspectSysMemSurface_NoOpt.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

char __fastcall IsSolidColorSurface(char *Src, unsigned int a2, unsigned int a3, int a4, int a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned __int8 v9; // di
  int v10; // ebx
  int v11; // esi
  __int64 v12; // rcx
  _BYTE Buf1[16]; // [rsp+28h] [rbp-50h] BYREF

  PixelFormatSize = GetPixelFormatSize(a4);
  if ( (PixelFormatSize & 7) == 0 )
  {
    v9 = PixelFormatSize >> 3;
    memcpy_0(Buf1, Src, PixelFormatSize >> 3);
    v10 = 0;
    if ( !a3 )
      return 1;
    while ( 1 )
    {
      v11 = 0;
      if ( a2 )
        break;
LABEL_7:
      if ( ++v10 >= a3 )
        return 1;
    }
    v12 = (unsigned int)(a5 * v10);
    while ( !memcmp_0(Buf1, &Src[v12 + v11 * (unsigned int)v9], v9) )
    {
      v12 = (unsigned int)(a5 * v10);
      if ( ++v11 >= a2 )
        goto LABEL_7;
    }
  }
  return 0;
}
