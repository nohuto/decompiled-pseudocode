__int64 __fastcall ulSimulateSaveScreenBits(struct _SURFOBJ *a1, int a2, SURFOBJ *a3, struct _RECTL *a4)
{
  HDEV hdev; // rbx
  int v8; // ebp
  int v9; // r12d
  __int64 (__fastcall *v10)(DHPDEV, unsigned __int64, _QWORD); // rax
  HBITMAP Bitmap; // rax
  SURFOBJ *v12; // rax
  __int64 v13; // rdi
  __int64 p_hsurf; // rax
  HSURF hsurf; // rbx
  __int64 v17; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v18[4]; // [rsp+50h] [rbp-58h] BYREF

  v17 = 0LL;
  hdev = a1->hdev;
  if ( a2 )
  {
    v13 = 1LL;
    if ( a2 == 1 )
    {
      p_hsurf = (__int64)&a1[1].hsurf;
      if ( !a1 )
        p_hsurf = 112LL;
      if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
        (*((void (__fastcall **)(struct _SURFOBJ *, SURFOBJ *, _QWORD, _QWORD, struct _RECTL *, __int64 *))hdev + 352))(
          a1,
          a3,
          0LL,
          0LL,
          a4,
          &v17);
      else
        ((void (__fastcall *)(struct _SURFOBJ *, SURFOBJ *, _QWORD, _QWORD, struct _RECTL *, __int64 *))EngCopyBits)(
          a1,
          a3,
          0LL,
          0LL,
          a4,
          &v17);
    }
    hsurf = a3->hsurf;
    EngUnlockSurface(a3);
    EngDeleteSurface(hsurf);
  }
  else
  {
    v8 = a4->right - a4->left;
    v9 = a4->bottom - a4->top;
    v10 = (__int64 (__fastcall *)(DHPDEV, unsigned __int64, _QWORD))*((_QWORD *)hdev + 343);
    if ( !v10
      || (Bitmap = (HBITMAP)v10(a1->dhpdev, __PAIR64__(v9, v8), a1->iBitmapFormat)) == 0LL
      || (_DWORD)Bitmap == -1 )
    {
      Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(v9, v8), 0, a1->iBitmapFormat, 1u, 0LL);
    }
    v12 = EngLockSurface((HSURF)Bitmap);
    v13 = (__int64)v12;
    if ( v12 )
    {
      v18[0] = 0;
      v18[1] = 0;
      v18[2] = v8;
      v18[3] = v9;
      if ( ((__int64)v12[1].hsurf & 0x400) != 0 )
        (*((void (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, _QWORD, _DWORD *, struct _RECTL *))hdev + 352))(
          v12,
          a1,
          0LL,
          0LL,
          v18,
          a4);
      else
        ((void (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, _QWORD, _DWORD *, struct _RECTL *))EngCopyBits)(
          v12,
          a1,
          0LL,
          0LL,
          v18,
          a4);
    }
  }
  return v13;
}
