/*
 * XREFs of ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C00B15E8
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF5A0 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall vGetSurfaceBoundsRect(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  LONG v2; // r8d
  LONG v3; // r9d
  HDEV hdev; // rax

  *(_QWORD *)&a2->left = 0LL;
  v2 = 0;
  v3 = 0;
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        v2 = *((_DWORD *)hdev + 646);
        a2->left = v2;
        v3 = *((_DWORD *)hdev + 647);
        a2->top = v3;
      }
    }
  }
  a2->right = v2 + a1->sizlBitmap.cx;
  a2->bottom = v3 + a1->sizlBitmap.cy;
}
