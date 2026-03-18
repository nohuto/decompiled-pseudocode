/*
 * XREFs of DwmAsyncSetBlurredWallpaperSurface @ 0x1C0272DC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncSetBlurredWallpaperSurface(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  _DWORD v9[20]; // [rsp+20h] [rbp-78h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v9, 0, 0x44uLL);
    v7 = *a3;
    v9[0] = 4456476;
    LOWORD(v9[1]) = 0x8000;
    v9[10] = 1073741915;
    *(_OWORD *)&v9[13] = v7;
    *(_QWORD *)&v9[11] = a2;
    v6 = LpcRequestPort(Object, v9);
    ObfDereferenceObject(Object);
  }
  return v6;
}
