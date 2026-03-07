void __fastcall vProcessCursorShape(
        Gre::Base *a1,
        int a2,
        int a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct PALETTE *a6,
        struct _RECTL *a7,
        HBITMAP *a8)
{
  HBITMAP v10; // rcx
  LONG v11; // r12d
  LONG cy; // eax
  LONG v13; // edx
  LONG v14; // eax
  LONG cx; // ecx
  LONG v16; // edx
  HDEV hdev; // rax
  struct _SURFOBJ *v18; // r15
  __int64 v19; // rdi
  struct _XLATEOBJ *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // r8
  struct _RECTL *v24; // rdi
  LONG v25; // ecx
  int v26; // eax
  POINTL pptlSrc; // [rsp+70h] [rbp-81h] BYREF
  __int64 v29; // [rsp+78h] [rbp-79h] BYREF
  char v30; // [rsp+80h] [rbp-71h]
  int v31; // [rsp+84h] [rbp-6Dh]
  LONG v32; // [rsp+88h] [rbp-69h]
  int v33; // [rsp+8Ch] [rbp-65h]
  struct _XLATEOBJ *v34; // [rsp+90h] [rbp-61h] BYREF
  XLATEOBJ *pxlo; // [rsp+98h] [rbp-59h] BYREF
  _DWORD v36[4]; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-41h]
  int v38; // [rsp+B8h] [rbp-39h]
  int v39; // [rsp+BCh] [rbp-35h]
  HBITMAP *v40; // [rsp+C0h] [rbp-31h]
  RECTL prcl; // [rsp+C8h] [rbp-29h] BYREF
  RECTL v42; // [rsp+D8h] [rbp-19h] BYREF
  RECTL prclDest; // [rsp+E8h] [rbp-9h] BYREF

  *(_QWORD *)&v42.left = a7;
  v40 = a8;
  v33 = a2;
  pptlSrc = (POINTL)Gre::Base::Globals(a1);
  v10 = *a8;
  v29 = 0LL;
  v11 = a2 != 0 ? 3 : 0;
  v30 = 0;
  v31 = 0;
  v36[3] = 0;
  v39 = 0;
  *(_QWORD *)&prcl.right = 0LL;
  prclDest = 0LL;
  if ( v10 )
  {
    GreDeleteObject(v10);
    *a8 = 0LL;
  }
  vCalculateCursorBounds(a4, 0LL, a7);
  v13 = a4->sizlBitmap.cy >> 31;
  cy = a4->sizlBitmap.cy;
  *(_QWORD *)&prcl.left = 0LL;
  v14 = __SPAIR64__(v13, cy) / 2;
  cx = a4->sizlBitmap.cx;
  v32 = v14;
  v16 = v14;
  prcl.bottom = v14;
  prcl.right = cx;
  if ( a2 )
  {
    cx += 9;
    v16 = v14 + 7;
    prcl.right = cx;
    prcl.bottom = v14 + 7;
  }
  v36[1] = cx;
  v38 = 1;
  v36[2] = v16;
  v36[0] = 6;
  if ( psoSrc && (hdev = psoSrc[1].hdev) != 0LL )
    v37 = *(_QWORD *)hdev;
  else
    v37 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v29, (struct _DEVBITMAPINFO *)v36, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    v18 = (struct _SURFOBJ *)((v29 + 24) & -(__int64)(v29 != 0));
    v19 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 6000LL);
    v20 = 0LL;
    v21 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 6008LL);
    v22 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 6032LL);
    pxlo = 0LL;
    v34 = 0LL;
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&pxlo, 0LL, 0, v22, v21, v19, v19, 0, 0xFFFFFF, 0, 0) )
    {
      if ( !psoSrc )
      {
LABEL_13:
        pptlSrc = 0LL;
        if ( psoSrc )
        {
          prclDest.right = a4->sizlBitmap.cx;
          prclDest.bottom = v32;
          EngCopyBits(v18, psoSrc, 0LL, v20, &prclDest, &pptlSrc);
          v24 = *(struct _RECTL **)&v42.left;
          vCalculateCursorBounds(a4, v18, *(struct _RECTL **)&v42.left);
          if ( (v20->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
          {
            EngEraseSurface(v18, &prcl, 0);
            v42.right = v11 + v24->right;
            v25 = v11 + v24->bottom;
            v42.left = v11;
            v42.bottom = v25;
            v42.top = v11;
            EngCopyBits(v18, psoSrc, 0LL, 0LL, &v42, &pptlSrc);
          }
        }
        else
        {
          v24 = *(struct _RECTL **)&v42.left;
        }
        if ( v33 )
        {
          EngEraseSurface(v18, &prcl, 0);
          v26 = bShadowAlphaCursor(v18, a4, psoSrc, pxlo, v20, v24, a3);
        }
        else
        {
          v26 = a3;
        }
        if ( v26 )
        {
          LOBYTE(v23) = 5;
          v30 |= 1u;
          HmgSetOwner(*(_QWORD *)(v29 + 32), 0LL, v23);
          *v40 = *(HBITMAP *)(v29 + 32);
        }
        goto LABEL_21;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v34, 0LL, 0, (__int64)a6, v21, v19, v19, 0, 0, 0, 0) )
      {
        v20 = v34;
        goto LABEL_13;
      }
    }
LABEL_21:
    EXLATEOBJ::vAltUnlock((Gre::Base **)&v34);
    EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v29);
}
