__int64 __fastcall bBitBltFromScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  DHPDEV dhpdev; // rdi
  unsigned int v13; // r14d
  int v14; // esi
  struct _RECTL v15; // xmm0
  int v16; // r13d
  Gre::Base *v18; // rcx
  int i; // eax
  __int64 v20; // r10
  __int64 v21; // r9
  struct _SURFOBJ *v22; // rdx
  struct _SURFOBJ *v23; // rdi
  struct _XLATEOBJ *v24; // rsi
  HDEV hdev; // rcx
  FLONG flXlate; // r11d
  int v27; // edx
  ULONG iUniq; // r8d
  __int64 v29; // r9
  ULONG *pulXlate; // r10
  ULONG v31; // esi
  int (*v32)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h]
  struct _SURFOBJ *v36; // [rsp+80h] [rbp-80h]
  struct _XLATEOBJ *v37; // [rsp+88h] [rbp-78h] BYREF
  struct _SURFOBJ *v38; // [rsp+90h] [rbp-70h]
  struct _RECTL *v39; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v40; // [rsp+A0h] [rbp-60h]
  struct _POINTL v41; // [rsp+A8h] [rbp-58h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v42; // [rsp+B0h] [rbp-50h]
  struct _POINTL *v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  _DWORD v47[14]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v48[56]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v49; // [rsp+148h] [rbp+48h]
  __int64 v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  struct _POINTL *v52; // [rsp+160h] [rbp+60h]
  _BYTE v53[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v54; // [rsp+198h] [rbp+98h]
  char v55; // [rsp+1A0h] [rbp+A0h]
  int v56; // [rsp+1A4h] [rbp+A4h]
  __int64 v57; // [rsp+1C0h] [rbp+C0h]
  struct _SURFOBJ *v58; // [rsp+1C8h] [rbp+C8h]
  struct _RECTL v59; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v60; // [rsp+1F0h] [rbp+F0h] BYREF

  v34 = 0LL;
  v46 = (__int64)a3;
  dhpdev = a2->dhpdev;
  v13 = 1;
  v45 = (__int64)a8;
  v36 = a1;
  v38 = a2;
  v60 = 0LL;
  v14 = a6->top - a7->y;
  v15 = *a6;
  v16 = a6->left - a7->x;
  v40 = a9;
  v39 = a6;
  v43 = a7;
  v44 = (__int64)a10;
  v35 = v14;
  v59 = v15;
  if ( a4 && a4->iDComplexity && !bIntersect(&a4->rclBounds, &v59, &v59) )
    return 1LL;
  v59.left -= v16;
  v59.right -= v16;
  v59.top -= v14;
  v59.bottom -= v14;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v47,
    v40,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a11 ^ (unsigned __int16)(a11 >> 4)) & 0xF0F);
  if ( !v47[0] )
    return 0LL;
  v54 = 0LL;
  v56 = 0;
  v55 = 0;
  MULTISURF::vInit((MULTISURF *)v53, v36, v39);
  v42 = Gre::Base::Globals(v18);
  for ( i = MSURF::bFindSurface((MSURF *)v48, v38, 0LL, &v59); i; i = MSURF::bNextSurface((MSURF *)v48) )
  {
    v20 = v50;
    v21 = v49;
    v22 = v36;
    if ( (*(_DWORD *)(*(_QWORD *)(v50 + 24) + 1792LL) & 0x8000000) == 0 && !IsMetaRedirectionBitmap(v36) )
    {
      v23 = v58;
LABEL_13:
      v37 = 0LL;
      v24 = a5;
      if ( *(_DWORD *)(v21 + 24) )
      {
        hdev = v23[1].hdev;
        if ( hdev )
          goto LABEL_21;
        if ( !a5 )
          goto LABEL_48;
        if ( *(_QWORD *)&a5[2].iUniq )
        {
          hdev = *(HDEV *)&a5[2].iUniq;
          goto LABEL_22;
        }
        if ( (a5->flXlate & 1) != 0 )
        {
LABEL_48:
          if ( v23 == v22 )
            hdev = v38[1].hdev;
LABEL_21:
          if ( a5 )
          {
LABEL_22:
            flXlate = a5[1].flXlate;
            v27 = *(_DWORD *)&a5[1].iSrcType;
            iUniq = a5[1].iUniq;
          }
          else
          {
            flXlate = 0;
            v27 = 0;
            iUniq = 0;
          }
          v29 = *(_QWORD *)(v20 + 104);
          if ( a5 )
          {
            pulXlate = a5[2].pulXlate;
            v31 = a5[3].iUniq;
          }
          else
          {
            pulXlate = 0LL;
            v31 = 0;
          }
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               (Gre::Base *)&v37,
                               (__int64)pulXlate,
                               v31,
                               v29,
                               (__int64)hdev,
                               *((_QWORD *)v42 + 750),
                               *((_QWORD *)v42 + 750),
                               flXlate,
                               v27,
                               iUniq,
                               0x2000) )
          {
            v24 = v37;
            v20 = v50;
            v21 = v49;
            goto LABEL_29;
          }
        }
        v13 = 0;
      }
      else
      {
LABEL_29:
        if ( *(_BYTE *)(v51 + 20) )
        {
          v34 = *(struct _POINTL *)(v51 + 4);
          v60.left = v16 + *(_DWORD *)(v51 + 4);
          v60.right = v16 + *(_DWORD *)(v51 + 12);
          v60.top = v35 + *(_DWORD *)(v51 + 8);
          v60.bottom = v35 + *(_DWORD *)(v51 + 16);
        }
        else
        {
          v34 = *v43;
          v60 = *v39;
        }
        v41 = 0LL;
        if ( a11 == 52428 )
        {
          if ( (*(_DWORD *)(v20 + 88) & 0x400) != 0 )
            v32 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v21 + 56) + 2816LL);
          else
            v32 = EngCopyBits;
          v13 &= OffCopyBitsInternal(v32, &v41, v23, v52, (struct _SURFOBJ *)v20, a4, v24, &v60, &v34);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v47, (struct _DISPSURF *)v21, (struct SURFACE *)(v20 - 24));
          if ( (*(_DWORD *)(v50 + 88) & 1) != 0 )
            v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v49 + 56) + 2808LL);
          else
            v33 = EngBitBlt;
          v13 &= OffBitBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v33,
                   (int *)&v41,
                   (__int64)v23,
                   v52,
                   v50,
                   v46,
                   a4,
                   (__int64)v24,
                   &v60.left,
                   (__int64 *)&v34,
                   v45,
                   (__int64)v40,
                   (__int64 *)v44,
                   a11);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v47, *(_DWORD *)(v49 + 16));
        }
      }
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v37);
      continue;
    }
    if ( v57 )
    {
      v23 = *(struct _SURFOBJ **)(*(_QWORD *)(v57 + 8) + 8LL * *(unsigned int *)(v21 + 16));
      if ( v23 )
        goto LABEL_13;
    }
  }
  MULTISURF::~MULTISURF((MULTISURF *)v53);
  return v13;
}
