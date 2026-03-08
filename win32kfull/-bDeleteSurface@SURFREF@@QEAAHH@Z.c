/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C00F5830
 * Callers:
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C007FD18 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z @ 0x1C01251C4 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this, unsigned int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*(_QWORD *)this, 0LL, a2);
  if ( (_DWORD)result )
    *(_QWORD *)this = 0LL;
  return result;
}
