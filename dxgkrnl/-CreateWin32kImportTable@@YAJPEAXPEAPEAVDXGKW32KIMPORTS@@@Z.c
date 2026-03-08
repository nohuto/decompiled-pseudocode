/*
 * XREFs of ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C00213EC
 * Callers:
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C00157DC (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x1C0021498 (--0W32KIMPORTS@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall CreateWin32kImportTable(void *a1, struct DXGKW32KIMPORTS **a2)
{
  unsigned int v4; // ebx
  W32KIMPORTS *v5; // rax
  struct DXGKW32KIMPORTS *v6; // rax

  v4 = 0;
  v5 = (W32KIMPORTS *)operator new[](0x248uLL, 0x4B677844u, 256LL);
  if ( v5 && (v6 = W32KIMPORTS::W32KIMPORTS(v5, a1)) != 0LL )
    *a2 = v6;
  else
    return (unsigned int)-1073741801;
  return v4;
}
