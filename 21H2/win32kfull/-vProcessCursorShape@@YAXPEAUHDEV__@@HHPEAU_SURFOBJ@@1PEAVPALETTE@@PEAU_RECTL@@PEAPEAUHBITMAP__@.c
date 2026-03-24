/*
 * XREFs of ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00CAF40
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0082170 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00CAB18 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00CB2CC (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     EngEraseSurface @ 0x1C00CB520 (EngEraseSurface.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

void __fastcall vProcessCursorShape(
        HDEV a1,
        int a2,
        int a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct PALETTE *a6,
        struct _RECTL *a7,
        HBITMAP *a8)
{
  HBITMAP v8; // rcx
  LONG v9; // r12d
  LONG cy; // eax
  LONG v13; // edx
  LONG v14; // eax
  LONG cx; // ecx
  LONG v16; // edx
  HDEV hdev; // rax
  SURFOBJ *v18; // r15
  XLATEOBJ *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _RECTL *v22; // rdi
  LONG bottom; // ecx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v27; // [rsp+70h] [rbp-71h] BYREF
  char v28; // [rsp+78h] [rbp-69h]
  int v29; // [rsp+7Ch] [rbp-65h]
  LONG v30; // [rsp+80h] [rbp-61h]
  int v31; // [rsp+84h] [rbp-5Dh]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-59h] BYREF
  XLATEOBJ *v33; // [rsp+90h] [rbp-51h] BYREF
  _DWORD v34[4]; // [rsp+98h] [rbp-49h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-39h]
  int v36; // [rsp+B0h] [rbp-31h]
  int v37; // [rsp+B4h] [rbp-2Dh]
  HBITMAP *v38; // [rsp+B8h] [rbp-29h]
  RECTL prcl; // [rsp+C0h] [rbp-21h] BYREF
  RECTL v40; // [rsp+D0h] [rbp-11h] BYREF
  RECTL prclDest; // [rsp+E0h] [rbp-1h] BYREF

  v8 = *a8;
  v9 = a2 != 0 ? 3 : 0;
  v31 = a2;
  *(_QWORD *)&v40.left = a7;
  v38 = a8;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v34[3] = 0;
  v37 = 0;
  *(_QWORD *)&prcl.right = 0LL;
  prclDest = 0LL;
  if ( v8 )
  {
    GreDeleteObject(v8);
    *a8 = 0LL;
  }
  vCalculateCursorBounds(a4, 0LL, a7);
  v13 = a4->sizlBitmap.cy >> 31;
  cy = a4->sizlBitmap.cy;
  *(_QWORD *)&prcl.left = 0LL;
  v14 = __SPAIR64__(v13, cy) / 2;
  cx = a4->sizlBitmap.cx;
  v30 = v14;
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
  v34[1] = cx;
  v36 = 1;
  v34[2] = v16;
  v34[0] = 6;
  if ( psoSrc && (hdev = psoSrc[1].hdev) != 0LL )
    v35 = *(_QWORD *)hdev;
  else
    v35 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v27, (struct _DEVBITMAPINFO *)v34, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    v18 = (SURFOBJ *)((v27 + 24) & -(__int64)(v27 != 0));
    v19 = 0LL;
    v33 = 0LL;
    pxlo = 0LL;
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         (__int64 *)&v33,
                         0LL,
                         0,
                         (__int64)ppalMono,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0xFFFFFF,
                         0,
                         0) )
    {
      if ( !psoSrc )
      {
        v22 = *(struct _RECTL **)&v40.left;
LABEL_15:
        if ( v31 )
        {
          EngEraseSurface(v18, &prcl, 0);
          v24 = bShadowAlphaCursor(v18, a4, psoSrc, v33, v19, v22, a3);
        }
        else
        {
          v24 = a3;
        }
        if ( v24 )
        {
          LOBYTE(v21) = 5;
          v28 |= 1u;
          HmgSetOwner(*(_QWORD *)(v27 + 32), 0LL, v21);
          *v38 = *(HBITMAP *)(v27 + 32);
        }
        goto LABEL_19;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&pxlo,
                           0LL,
                           0,
                           (__int64)a6,
                           (__int64)gppalRGB,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0) )
      {
        v19 = pxlo;
        prclDest.right = a4->sizlBitmap.cx;
        prclDest.bottom = v30;
        EngCopyBits(v18, psoSrc, 0LL, pxlo, &prclDest, &gptlZero);
        v22 = *(struct _RECTL **)&v40.left;
        vCalculateCursorBounds(a4, v18, *(struct _RECTL **)&v40.left);
        if ( (v19->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
        {
          EngEraseSurface(v18, &prcl, 0);
          v40.right = v9 + v22->right;
          bottom = v22->bottom;
          v40.left = v9;
          v40.bottom = v9 + bottom;
          v40.top = v9;
          EngCopyBits(v18, psoSrc, 0LL, 0LL, &v40, &gptlZero);
        }
        goto LABEL_15;
      }
    }
LABEL_19:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo, v20);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v33, v25);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v27);
}
