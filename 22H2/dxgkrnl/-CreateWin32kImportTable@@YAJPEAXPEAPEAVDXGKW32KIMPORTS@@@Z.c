/*
 * XREFs of ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C0023C5C
 * Callers:
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C0019C64 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x1C0023CC4 (--0W32KIMPORTS@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall CreateWin32kImportTable(void *a1, struct DXGKW32KIMPORTS **a2)
{
  unsigned int v4; // ebx
  W32KIMPORTS *v5; // rax
  struct DXGKW32KIMPORTS *v6; // rax

  v4 = 0;
  v5 = (W32KIMPORTS *)operator new[](0x140uLL, 0x4B677844u, PagedPool);
  if ( v5 )
    v6 = W32KIMPORTS::W32KIMPORTS(v5, a1);
  else
    v6 = 0LL;
  if ( v6 )
    *a2 = v6;
  else
    return (unsigned int)-1073741801;
  return v4;
}
