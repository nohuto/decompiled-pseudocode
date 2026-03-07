__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        ULONG a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  SPRITERANGELOCK *v10; // r12
  ULONG v11; // edi
  __int64 v12; // rcx
  signed int v13; // r14d
  signed int v14; // r15d
  struct _SURFOBJ *Surface; // rcx
  __int64 v16; // r14
  LONG left; // r10d
  int v18; // eax
  __int64 v19; // rdi
  int v20; // edx
  _DWORD *v21; // r11
  LONG v22; // r9d
  LONG top; // ecx
  LONG right; // r8d
  LONG bottom; // edx
  LONG v26; // ebx
  LONG v27; // r10d
  int v28; // eax
  LONG v29; // edi
  LONG v30; // r11d
  int v31; // ecx
  struct _SURFOBJ *v33; // r13
  __int64 v34; // rax
  HDEV v35; // rbx
  int (*v36)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r15
  int v37; // eax
  struct _SURFOBJ *v38; // rcx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  unsigned int v41; // [rsp+50h] [rbp-B0h]
  struct _POINTL v42; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v43[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  struct _XLATEOBJ *v46; // [rsp+88h] [rbp-78h]
  struct _RECTL v47; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v48[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-38h]
  char v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D4h] [rbp-2Ch]
  struct _SURFOBJ *v52; // [rsp+F8h] [rbp-8h]
  struct _POINTL *v53; // [rsp+100h] [rbp+0h]
  struct _RECTL v54; // [rsp+110h] [rbp+10h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 120LL);
  v11 = a7;
  v12 = *(_QWORD *)v10;
  v46 = a4;
  v43[0] = a3;
  v42 = (struct _POINTL)a2;
  v44[0] = a9;
  v41 = 0;
  GreAcquireSemaphore(v12);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)v10, 8LL);
  v45 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v45);
  *((_QWORD *)a1 + 18) = a6;
  v13 = a5->right - a5->left;
  v14 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 72LL);
  Surface = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( Surface
    && (!Surface->iType && (Surface->fjBitmap & 0x20) == 0 || !a8)
    && Surface->iBitmapFormat == v11
    && Surface->sizlBitmap.cx >= v13
    && Surface->sizlBitmap.cy >= v14 )
  {
    goto LABEL_11;
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( Surface->iBitmapFormat != v11 )
    {
      EngUnlockSurface(Surface);
      v34 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 16) = 0LL;
      *(_DWORD *)a1 &= ~0x40u;
      Surface = 0LL;
      *((_QWORD *)a1 + 30) = 0LL;
      if ( v34 )
        *(_DWORD *)(v34 + 16) &= ~0x40u;
    }
  }
  else
  {
    vSpDeleteSurface(Surface);
    Surface = 0LL;
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 || !*((_QWORD *)a1 + 30) || !a8 )
  {
    if ( Surface )
      goto LABEL_47;
LABEL_46:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v13, v14);
    goto LABEL_47;
  }
  Surface = EngLockSurface(*((HSURF *)a1 + 30));
  if ( !Surface )
    goto LABEL_46;
  *(_DWORD *)a1 |= 0x40u;
LABEL_47:
  *((_QWORD *)a1 + 16) = Surface;
LABEL_11:
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*(_QWORD *)v10);
  GreAcquireSemaphoreSharedInternal(*(_QWORD *)v10);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)v10);
  v16 = *((_QWORD *)a1 + 16);
  if ( !v16 )
    goto LABEL_32;
  left = a5->left;
  v41 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v18 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  v19 = 0LL;
  *((_DWORD *)a1 + 35) = v18;
  if ( a6 )
    v20 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v20 = 0;
  v21 = (_DWORD *)v44[0];
  *((_DWORD *)a1 + 39) = v20;
  v22 = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v54.left = a5->left;
  v54.top = top;
  v54.right = right;
  v54.bottom = bottom;
  if ( v21 )
  {
    v26 = left + *v21;
    v27 = v21[2] + left;
    v28 = *((_DWORD *)a1 + 35);
    v29 = v21[1] - v28;
    v30 = v21[3] - v28;
    if ( v26 > v22 )
    {
      v22 = v26;
      v54.left = v26;
    }
    if ( v29 > top )
      top = v29;
    if ( v27 < right )
    {
      right = v27;
      v54.right = v27;
    }
    if ( v30 < bottom )
      bottom = v30;
    v54.bottom = bottom;
    if ( right < v22 )
      goto LABEL_32;
    if ( bottom < top )
      top = bottom;
    v19 = 0LL;
    v54.top = top;
  }
  if ( v22 == right || top == bottom )
  {
LABEL_32:
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(*(_QWORD *)v10);
    return v41;
  }
  v31 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) == 0 )
  {
    v33 = v43[0];
    goto LABEL_50;
  }
  if ( (v31 & 0x200) == 0 || (v33 = v43[0], *(HSURF *)(v16 + 320) != v43[0]->hsurf) )
  {
    *(_DWORD *)a1 = v31 | 0x80;
    goto LABEL_32;
  }
LABEL_50:
  v47 = v54;
  ERECTL::bOffsetAdd((ERECTL *)&v47, *(const struct _POINTL **)&v42, 0);
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  MULTISURF::vInit((MULTISURF *)v48, v33, &v47);
  v43[0] = 0LL;
  v44[0] = 0LL;
  if ( !_bittest((const signed __int32 *)(v16 + 88), 0xAu) )
  {
    if ( _bittest((const signed __int32 *)&v33[1].hsurf, 0xAu) )
      v36 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)v33->hdev + 352);
    else
      v36 = EngCopyBits;
    goto LABEL_57;
  }
  v35 = *(HDEV *)(v16 + 24);
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v48, v35) )
  {
    v36 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)v35 + 352);
LABEL_57:
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v43, v52) && SURFREFVIEW::bMap((SURFREFVIEW *)v44, (struct _SURFOBJ *)v16) )
    {
      v37 = *(_DWORD *)(v16 + 88);
      if ( (v37 & 0x80004000) != 0 && (v37 & 0x200) == 0 )
      {
        v19 = v16 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v16 - 24 + 48));
      }
      v38 = v52;
      p_pvScan0 = 0LL;
      if ( v52 )
      {
        hsurf = (int)v52[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v52[-1].pvScan0;
          GreLockDisplayDevice(v52->hdev);
          v38 = v52;
        }
      }
      v42 = 0LL;
      OffCopyBitsInternal(v36, (struct _POINTL *)a1 + 17, (struct _SURFOBJ *)v16, &v42, v38, 0LL, v46, &v54, v53);
      if ( (*(_DWORD *)a1 & 0x200) != 0 && *((_QWORD *)a1 + 16) == v16 && *(HSURF *)(v16 + 320) == v33->hsurf )
        *(_DWORD *)a1 |= 0x80u;
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
      if ( v19 )
        GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
    }
    else
    {
      v41 = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
    MULTISURF::~MULTISURF((MULTISURF *)v48);
    goto LABEL_32;
  }
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockExclusive(v10);
  vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlock(v10);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
  MULTISURF::~MULTISURF((MULTISURF *)v48);
  return 0LL;
}
