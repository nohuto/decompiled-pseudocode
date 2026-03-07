__int64 __fastcall bBitBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  DHPDEV dhpdev; // rbx
  unsigned int v13; // esi
  unsigned int v14; // r14d
  _QWORD *v15; // r12
  Gre::Base *v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rdi
  unsigned int v19; // r12d
  int v20; // eax
  __int64 pulXlate; // r10
  SURFOBJ *v22; // rax
  struct _SURFOBJ *v23; // r14
  __int64 v24; // rbx
  LONG v25; // esi
  LONG v26; // r14d
  ULONG v27; // r8d
  SURFOBJ *v28; // rax
  SURFOBJ *v29; // r8
  __int64 v30; // rcx
  int (*v31)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  int v32; // eax
  struct _XLATEOBJ *v33; // r11
  __int64 v34; // rbx
  struct _XLATEOBJ *v35; // rsi
  int v36; // ecx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  struct PALETTE *v40; // rax
  int v41; // r8d
  int flXlate; // edi
  int v43; // ecx
  int iUniq; // edx
  __int64 v45; // rax
  USHORT fjBitmap; // di
  int (*v47)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v49; // rbx
  _QWORD *v50; // rax
  unsigned int v52; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v53; // [rsp+70h] [rbp-90h]
  __int16 v54; // [rsp+78h] [rbp-88h]
  unsigned int v55; // [rsp+7Ch] [rbp-84h]
  struct _POINTL v56; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h]
  struct _POINTL *v58; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v59; // [rsp+98h] [rbp-68h]
  SIZEL sizl; // [rsp+A0h] [rbp-60h]
  struct _XLATEOBJ *v61; // [rsp+A8h] [rbp-58h] BYREF
  SURFOBJ *pso; // [rsp+B0h] [rbp-50h]
  struct _POINTL v63; // [rsp+B8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  HSURF hsurf; // [rsp+D0h] [rbp-30h]
  _QWORD *v67; // [rsp+D8h] [rbp-28h]
  _QWORD *v68; // [rsp+E0h] [rbp-20h]
  const struct _RECTL *v69; // [rsp+E8h] [rbp-18h]
  struct Gre::Base::SESSION_GLOBALS *v70; // [rsp+F0h] [rbp-10h]
  struct _SURFOBJ *v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  void *v76[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD *v77; // [rsp+130h] [rbp+30h]
  _DWORD v78[12]; // [rsp+138h] [rbp+38h] BYREF
  struct _RECTL v79; // [rsp+168h] [rbp+68h] BYREF
  struct _RECTL v80; // [rsp+178h] [rbp+78h] BYREF
  RECTL rclBounds; // [rsp+188h] [rbp+88h] BYREF

  v64 = a4;
  dhpdev = a1->dhpdev;
  v13 = a5->left - a6->x;
  v14 = a5->top - a6->y;
  v74 = (__int64)a7;
  v72 = (__int64)a9;
  v75 = (__int64)a2;
  v69 = a5;
  v73 = (__int64)a8;
  v79 = 0LL;
  v56 = 0LL;
  sizl = 0LL;
  pso = 0LL;
  v80 = 0LL;
  v52 = 1;
  rclBounds = 0LL;
  v57 = v13;
  v55 = v14;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)v76, (struct _VDEV *)dhpdev, v13, v14);
  v15 = v77;
  v68 = v77;
  if ( !v77
    || (MULTIBRUSH::MULTIBRUSH(
          (MULTIBRUSH *)v78,
          a8,
          *((_DWORD *)dhpdev + 4),
          (struct _VDEV *)dhpdev,
          *((struct _SURFOBJ **)dhpdev + 6),
          ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F),
        !v78[0]) )
  {
    MULTISORTBLTORDER::~MULTISORTBLTORDER(v76);
    return 0LL;
  }
  if ( a3 )
    rclBounds = a3->rclBounds;
  v54 = a1->fjBitmap & 0x40;
  v70 = Gre::Base::Globals(v16);
  do
  {
    v17 = v15[1];
    v67 = v15;
    v18 = v17;
    v19 = v52;
    while ( 1 )
    {
      v79.left = v13 + *(_DWORD *)(v18 + 28);
      v79.right = v13 + *(_DWORD *)(v18 + 36);
      v79.top = v14 + *(_DWORD *)(v18 + 32);
      v79.bottom = v14 + *(_DWORD *)(v18 + 40);
      if ( bIntersect(v69, &v79, &v79) )
      {
        v20 = bIntersect(&v79, (const struct _RECTL *)(v17 + 28), &v79);
        pulXlate = 0LL;
        if ( v20 )
        {
          v58 = (struct _POINTL *)(v18 + 72);
          v56.x = v79.left - v13;
          hsurf = 0LL;
          v56.y = v79.top - v14;
          v22 = *(SURFOBJ **)(v18 + 64);
          v23 = *(struct _SURFOBJ **)(v17 + 64);
          v53 = v22;
          v59 = v23;
          v63 = 0LL;
          if ( v22 == v23 )
            goto LABEL_17;
          if ( *(_DWORD *)(v18 + 20) )
          {
            v24 = *(_QWORD *)(v18 + 48);
            v25 = v79.right - v79.left;
            v26 = v79.bottom - v79.top;
            sizl.cx = v79.right - v79.left;
            v27 = *(_DWORD *)(v24 + 2076);
            sizl.cy = v79.bottom - v79.top;
            hsurf = (HSURF)EngCreateBitmap(sizl, 0, v27, 0, 0LL);
            v28 = EngLockSurface(hsurf);
            pulXlate = 0LL;
            pso = v28;
            v29 = v28;
            if ( v28 )
            {
              v30 = *(_QWORD *)(v24 + 2528);
              *(_QWORD *)&v80.left = 0LL;
              v80.right = v25;
              v80.bottom = v26;
              if ( (*(_DWORD *)(v30 + 112) & 0x400) != 0 )
                v31 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v24 + 2816);
              else
                v31 = EngCopyBits;
              v32 = OffCopyBitsInternal(v31, &v63, v28, v58, v53, 0LL, 0LL, &v80, &v56);
              v29 = pso;
              v19 &= v32;
              pulXlate = 0LL;
            }
            v56 = 0LL;
            v23 = v59;
            v22 = v29;
            v53 = v29;
            v58 = &v63;
LABEL_17:
            if ( v22 )
            {
              v33 = v64;
              v34 = *(_QWORD *)(v17 + 48);
              v35 = v64;
              v61 = 0LL;
              if ( v23 == v22 )
                goto LABEL_31;
              v36 = *(_DWORD *)(v17 + 24);
              if ( !v36 && !*(_DWORD *)(v18 + 24) )
                goto LABEL_31;
              v37 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 2528LL);
              v38 = *(_QWORD *)(v17 + 56);
              v71 = (struct _SURFOBJ *)*((_QWORD *)v70 + 750);
              v59 = v71;
              v39 = *(_QWORD *)(v38 + 2528);
              v65 = v39;
              if ( v36 && (*(_DWORD *)(v34 + 2140) & 0x100) != 0 )
              {
                v40 = DrvRealizeHalftonePalette((Gre::Base *)v34, 0);
                v33 = v64;
                pulXlate = 0LL;
                v59 = (struct _SURFOBJ *)v40;
                v39 = v65;
              }
              v41 = 32 * (*(_DWORD *)(*(_QWORD *)(v18 + 56) + 2140LL) & 0x100);
              if ( v33 )
              {
                flXlate = v33[1].flXlate;
                v43 = *(_DWORD *)&v33[1].iSrcType;
                iUniq = v33[1].iUniq;
              }
              else
              {
                flXlate = 0;
                v43 = 0;
                iUniq = 0;
              }
              v45 = *(_QWORD *)(v39 + 128);
              if ( v33 )
              {
                pulXlate = (__int64)v33[2].pulXlate;
                LODWORD(v33) = v33[3].iUniq;
              }
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   (Gre::Base *)&v61,
                                   pulXlate,
                                   (int)v33,
                                   *(_QWORD *)(v37 + 128),
                                   v45,
                                   (__int64)v71,
                                   (__int64)v59,
                                   flXlate,
                                   v43,
                                   iUniq,
                                   v41) )
              {
                v35 = v61;
LABEL_31:
                if ( !a3 || bIntersect(&rclBounds, &v79, &a3->rclBounds) )
                {
                  if ( a10 == 52428 )
                  {
                    fjBitmap = v23->fjBitmap;
                    if ( v54 )
                      v23->fjBitmap = fjBitmap | 0x40;
                    if ( (*(_DWORD *)(*(_QWORD *)(v34 + 2528) + 112LL) & 0x400) != 0 )
                      v47 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v34 + 2816);
                    else
                      v47 = EngCopyBits;
                    v19 &= OffCopyBitsInternal(v47, (struct _POINTL *)(v17 + 72), v23, v58, v53, a3, v35, &v79, &v56);
                    v23->fjBitmap = fjBitmap;
                  }
                  else
                  {
                    MULTIBRUSH::LoadElement(
                      (MULTIBRUSH *)v78,
                      (struct _DISPSURF *)v17,
                      (struct SURFACE *)&v23[-1].pvScan0);
                    if ( (*(_DWORD *)(*(_QWORD *)(v34 + 2528) + 112LL) & 1) != 0 )
                      v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v34 + 2808);
                    else
                      v48 = EngBitBlt;
                    v19 &= OffBitBlt(
                             (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v48,
                             (int *)(v17 + 72),
                             (__int64)v23,
                             v58,
                             (__int64)v53,
                             v75,
                             a3,
                             (__int64)v35,
                             &v79.left,
                             (__int64 *)&v56,
                             v74,
                             v73,
                             (__int64 *)v72,
                             a10);
                    MULTIBRUSH::StoreElement((MULTIBRUSH *)v78, *(_DWORD *)(v17 + 16));
                  }
                }
                else
                {
                  a3->rclBounds = rclBounds;
                }
              }
              else
              {
                v19 = 0;
              }
              EXLATEOBJ::vAltUnlock((Gre::Base **)&v61);
            }
            v49 = hsurf;
            if ( hsurf )
            {
              EngUnlockSurface(pso);
              EngDeleteSurface(v49);
            }
            v13 = v57;
          }
          v14 = v55;
        }
      }
      v50 = (_QWORD *)*v67;
      v67 = v50;
      if ( !v50 )
        break;
      v18 = v50[1];
    }
    v52 = v19;
    v15 = (_QWORD *)*v68;
    v68 = v15;
  }
  while ( v15 );
  if ( a3 )
    a3->rclBounds = rclBounds;
  if ( v76[0] )
    Win32FreePool(v76[0]);
  return v52;
}
