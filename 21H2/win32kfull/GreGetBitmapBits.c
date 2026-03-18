/*
 * XREFs of GreGetBitmapBits @ 0x1C00E67A4
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C00E66C0 (NtGdiGetBitmapBits.c)
 *     ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1C023A208 (-GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023E168 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00E6F5C (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapBits(HSURF a1, ULONG a2, void *a3, unsigned int *a4)
{
  ULONG cjBits; // edi
  unsigned __int64 v9; // rsi
  LONG v10; // ecx
  LONG v11; // edx
  HDEV v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // eax
  struct _SURFOBJ *v16; // rdx
  unsigned int v17; // r14d
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  char v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  _SURFOBJ v31; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[32]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+138h] [rbp+38h] BYREF

  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v19);
  SURFREF::SURFREF((SURFREF *)v32, a1);
  v9 = v33;
  if ( v33 && (*(_DWORD *)(v33 + 112) & 0x4000000) != 0 )
  {
    v21 = 0LL;
    v22 = 0;
    v23 = 0;
    v10 = *(_DWORD *)(v33 + 56);
    v11 = *(_DWORD *)(v33 + 60);
    cjBits = v11
           * (((unsigned int)(v10 * *((_DWORD *)&galBitsPerPixel + *(unsigned int *)(v33 + 96)) + 15) >> 3) & 0x1FFFFFFE);
    if ( !a3 )
    {
LABEL_25:
      SURFMEM::~SURFMEM((SURFMEM *)&v21);
      goto LABEL_27;
    }
    *(_OWORD *)&v31.dhsurf = 0LL;
    v31.dhpdev = *(DHPDEV *)(v33 + 40);
    v12 = *(HDEV *)(v33 + 48);
    v31.sizlBitmap.cx = v10;
    v31.sizlBitmap.cy = v11;
    prclDest.right = v10;
    prclDest.bottom = v11;
    v31.hdev = v12;
    memset(&v31.cjBits, 0, 40);
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v24 = *(_QWORD *)(v33 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v25, (struct PDEVOBJ *)&v24);
    v13 = 0LL;
    v14 = (v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64);
    if ( v14 )
    {
      v15 = *(_DWORD *)(((v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64)) + 0x58);
      if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
      {
        v13 = v14 - 24;
        GreLockDisplayDevice(*(_QWORD *)(((v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64)) - 24 + 0x30));
      }
    }
    v26[0] = 0LL;
    v16 = (struct _SURFOBJ *)(v33 + 24);
    if ( !v33 )
      v16 = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v26, v16) )
    {
      if ( *(_WORD *)(v33 + 100) == 3 )
      {
        v27[3] = 0;
        v30 = 0;
        v27[0] = *(_DWORD *)(v33 + 96);
        v27[1] = *(_DWORD *)(v33 + 56);
        v27[2] = *(_DWORD *)(v33 + 60);
        v28 = 0LL;
        v29 = *(_DWORD *)(v33 + 112) & 0x40000;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v21, (struct _DEVBITMAPINFO *)v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_21;
        v9 = v21;
        EngCopyBits(
          (SURFOBJ *)(-(__int64)(v21 != 0) & (v21 + 24)),
          (SURFOBJ *)((v33 + 24) & -(__int64)(v33 != 0)),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      if ( cjBits )
      {
        v17 = *a4;
        if ( (*a4 & 0x80000000) == 0 && v17 < cjBits )
        {
          if ( a2 + v17 > cjBits )
            a2 = cjBits - v17;
          if ( a2 )
          {
            v31.cjBits = a2;
            v31.lDelta = v17;
            v31.pvBits = a3;
            bDoGetSetBitmapBits(&v31, (struct _SURFOBJ *)((v9 + 24) & -(__int64)(v9 != 0)), 1);
            cjBits = v31.cjBits;
            *a4 = v17 + v31.cjBits;
            goto LABEL_22;
          }
        }
LABEL_21:
        cjBits = 0;
      }
    }
LABEL_22:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v26);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v26);
    if ( v13 )
      GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v25);
    goto LABEL_25;
  }
  EngSetLastError(6u);
LABEL_27:
  if ( v33 )
    DEC_SHARE_REF_CNT(v33);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v19);
  return cjBits;
}
