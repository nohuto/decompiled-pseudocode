void __fastcall vGetSurfaceBoundsRect(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  LONG v2; // r8d
  LONG v3; // r9d
  HDEV hdev; // rax

  v2 = 0;
  *(_QWORD *)&a2->left = 0LL;
  v3 = 0;
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        v3 = *((_DWORD *)hdev + 640);
        a2->left = v3;
        v2 = *((_DWORD *)hdev + 641);
        a2->top = v2;
      }
    }
  }
  a2->right = v3 + a1->sizlBitmap.cx;
  a2->bottom = v2 + a1->sizlBitmap.cy;
}
