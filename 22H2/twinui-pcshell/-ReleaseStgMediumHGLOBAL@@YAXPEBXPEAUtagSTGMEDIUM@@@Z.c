/*
 * XREFs of ?ReleaseStgMediumHGLOBAL@@YAXPEBXPEAUtagSTGMEDIUM@@@Z @ 0x18015AF10
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180154944 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReleaseStgMediumHGLOBAL(const void *a1, struct tagSTGMEDIUM *a2)
{
  HBITMAP hBitmap; // rcx

  hBitmap = a2->hBitmap;
  if ( hBitmap && a2->tymed == 1 )
    GlobalUnlock(hBitmap);
  ReleaseStgMedium(a2);
}
