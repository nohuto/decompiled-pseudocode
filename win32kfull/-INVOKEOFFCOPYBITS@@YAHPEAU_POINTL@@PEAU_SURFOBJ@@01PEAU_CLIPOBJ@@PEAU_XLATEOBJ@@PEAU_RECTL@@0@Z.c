__int64 __fastcall INVOKEOFFCOPYBITS(
        struct _POINTL *a1,
        struct _SURFOBJ *a2,
        struct _POINTL *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8)
{
  bool v8; // zf
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r14
  LONG x; // r12d
  LONG v15; // esi
  LONG v16; // edi
  int v17; // ecx
  unsigned int v18; // r12d
  _QWORD *ThreadWin32Thread; // rax
  __int64 v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 *v28; // rax
  LONG v29; // edi
  LONG v30; // esi
  HDEV hdev; // rax
  struct _POINTL *v32; // [rsp+40h] [rbp-51h] BYREF
  struct _POINTL *v33; // [rsp+48h] [rbp-49h] BYREF
  HDEV v34; // [rsp+50h] [rbp-41h] BYREF
  LONG y; // [rsp+58h] [rbp-39h]
  struct _RECTL *v36; // [rsp+60h] [rbp-31h]
  struct _POINTL *v37; // [rsp+68h] [rbp-29h]
  struct _XLATEOBJ *v38; // [rsp+70h] [rbp-21h]
  _DWORD v39[4]; // [rsp+78h] [rbp-19h] BYREF

  v8 = ((__int64)a2[1].hsurf & 0x400) == 0;
  v38 = a6;
  v36 = a7;
  v37 = a8;
  v33 = a3;
  v32 = a1;
  if ( v8 && a4->hdev )
  {
    if ( a4->iType == 1
      && (unsigned int)bAllowShareAccess(a4)
      && W32GetThreadWin32Thread(KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
    {
      v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
      goto LABEL_7;
    }
    if ( a4->iType == 1
      && (unsigned int)bAllowShareAccess(a4)
      && W32GetThreadWin32Thread(KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
      || ((__int64)a4[1].hsurf & 0x400) == 0 )
    {
LABEL_6:
      v13 = EngCopyBits;
      goto LABEL_7;
    }
    hdev = a4->hdev;
LABEL_39:
    v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 164);
    goto LABEL_7;
  }
  if ( a2->iType != 1 )
    goto LABEL_58;
  v34 = a2->hdev;
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v34) )
    goto LABEL_58;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_58;
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  if ( !*(_QWORD *)(v21 + 280) )
    goto LABEL_58;
  v23 = 0LL;
  v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v24 )
    v23 = *v24;
  if ( !*(_DWORD *)(v23 + 104) && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
    goto LABEL_58;
  v25 = 0LL;
  v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v26 )
    v25 = *v26;
  if ( (*(_DWORD *)(*(_QWORD *)(v25 + 280) + 20LL) & 0x400) == 0 )
  {
LABEL_58:
    if ( a2->iType == 1
      && (unsigned int)bAllowShareAccess(a2)
      && W32GetThreadWin32Thread(KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
      || ((__int64)a2[1].hsurf & 0x400) == 0 )
    {
      goto LABEL_6;
    }
    hdev = a2->hdev;
    goto LABEL_39;
  }
  v27 = 0LL;
  v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v28 )
    v27 = *v28;
  v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v27 + 280)
                                                                                             + 80LL);
LABEL_7:
  x = a3->x;
  v15 = a1->x;
  y = v33->y;
  v16 = v32->y;
  if ( a5 )
  {
    v32 = 0LL;
    if ( v15 || v16 )
    {
      a5->rclBounds.left += v15;
      a5->rclBounds.right += v15;
      a5->rclBounds.top += v16;
      a5->rclBounds.bottom += v16;
      if ( a5->iDComplexity )
      {
        LODWORD(v32) = v15;
        HIDWORD(v32) = v16;
        RGNOBJ::bOffset((RGNOBJ *)&a5[2].rclBounds.top, (struct _POINTL *)&v32);
      }
    }
  }
  v39[0] = v15 + v36->left;
  v39[2] = v15 + v36->right;
  v39[1] = v16 + v36->top;
  v39[3] = v16 + v36->bottom;
  v17 = x + v37->x;
  HIDWORD(v33) = v37->y + y;
  v18 = 0;
  LODWORD(v33) = v17;
  if ( v13 )
    v18 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, struct _POINTL **))v13)(
            a2,
            a4,
            a5,
            v38,
            v39,
            &v33);
  if ( a5 )
  {
    v29 = -v16;
    v30 = -v15;
    if ( v30 || v29 )
    {
      a5->rclBounds.left += v30;
      a5->rclBounds.right += v30;
      a5->rclBounds.top += v29;
      a5->rclBounds.bottom += v29;
      if ( a5->iDComplexity )
      {
        LODWORD(v34) = v30;
        HIDWORD(v34) = v29;
        RGNOBJ::bOffset((RGNOBJ *)&a5[2].rclBounds.top, (struct _POINTL *)&v34);
      }
    }
  }
  return v18;
}
