__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  HDEV hdev; // rax
  int v6; // ecx
  int v7; // ecx
  __int128 v9; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  if ( a1 )
  {
    if ( a3 && a3->iDComplexity )
      p_rclBounds = &a3->rclBounds;
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v4 = 0;
      v9 = (__int128)*p_rclBounds;
      if ( SLODWORD(a1[1].hsurf) < 0 )
      {
        hdev = a1->hdev;
        if ( hdev )
        {
          if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
          {
            v6 = *((_DWORD *)hdev + 640);
            p_rclBounds = (struct _RECTL *)&v9;
            LODWORD(v9) = v9 - v6;
            DWORD2(v9) -= v6;
            v7 = *((_DWORD *)hdev + 641);
            DWORD1(v9) -= v7;
            HIDWORD(v9) -= v7;
          }
        }
      }
      if ( v4
        && (p_rclBounds->right > a1->sizlBitmap.cx
         || p_rclBounds->left < 0
         || p_rclBounds->bottom > a1->sizlBitmap.cy
         || p_rclBounds->top < 0) )
      {
        return 0;
      }
    }
  }
  return v4;
}
