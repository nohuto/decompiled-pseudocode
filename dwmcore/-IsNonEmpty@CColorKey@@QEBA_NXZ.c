/*
 * XREFs of ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x1800AB21C
 * Callers:
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x1800AA18C (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x1800AB078 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorKey::IsNonEmpty(CColorKey *this)
{
  return *((float *)this + 7) >= *((float *)this + 3)
      && *((float *)this + 4) >= *(float *)this
      && *((float *)this + 5) >= *((float *)this + 1)
      && *((float *)this + 6) >= *((float *)this + 2);
}
