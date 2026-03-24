/*
 * XREFs of GreGetBitmapBits @ 0x1C00183C4
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C00182E0 (NtGdiGetBitmapBits.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0242064 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0018BA4 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
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
  __int64 v18; // rdx
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  _BYTE v21[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  char v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v28[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  _SURFOBJ v33; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v34[32]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v35; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+138h] [rbp+38h] BYREF

  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
  SURFREF::SURFREF((SURFREF *)v34, a1);
  v9 = v35;
  if ( v35 && (*(_DWORD *)(v35 + 112) & 0x4000000) != 0 )
  {
    v23 = 0LL;
    v24 = 0;
    v25 = 0;
    v10 = *(_DWORD *)(v35 + 56);
    v11 = *(_DWORD *)(v35 + 60);
    cjBits = v11
           * (((unsigned int)(v10 * *((_DWORD *)&galBitsPerPixel + *(unsigned int *)(v35 + 96)) + 15) >> 3) & 0x1FFFFFFE);
    if ( !a3 )
    {
LABEL_25:
      SURFMEM::~SURFMEM((SURFMEM *)&v23);
      goto LABEL_27;
    }
    *(_OWORD *)&v33.dhsurf = 0LL;
    v33.dhpdev = *(DHPDEV *)(v35 + 40);
    v12 = *(HDEV *)(v35 + 48);
    v33.sizlBitmap.cx = v10;
    v33.sizlBitmap.cy = v11;
    prclDest.right = v10;
    prclDest.bottom = v11;
    v33.hdev = v12;
    memset(&v33.cjBits, 0, 40);
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v26 = *(_QWORD *)(v35 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v27, (struct PDEVOBJ *)&v26);
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
    v28[0] = 0LL;
    v16 = (struct _SURFOBJ *)(v35 + 24);
    if ( !v35 )
      v16 = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v28, v16) )
    {
      if ( *(_WORD *)(v35 + 100) == 3 )
      {
        v29[3] = 0;
        v32 = 0;
        v29[0] = *(_DWORD *)(v35 + 96);
        v29[1] = *(_DWORD *)(v35 + 56);
        v29[2] = *(_DWORD *)(v35 + 60);
        v30 = 0LL;
        v31 = *(_DWORD *)(v35 + 112) & 0x40000;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)v29, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_21;
        v9 = v23;
        EngCopyBits(
          (SURFOBJ *)(-(__int64)(v23 != 0) & (v23 + 24)),
          (SURFOBJ *)((v35 + 24) & -(__int64)(v35 != 0)),
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
            v33.cjBits = a2;
            v33.lDelta = v17;
            v33.pvBits = a3;
            bDoGetSetBitmapBits(&v33, (struct _SURFOBJ *)((v9 + 24) & -(__int64)(v9 != 0)), 1);
            cjBits = v33.cjBits;
            *a4 = v17 + v33.cjBits;
            goto LABEL_22;
          }
        }
LABEL_21:
        cjBits = 0;
      }
    }
LABEL_22:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v28);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v28);
    if ( v13 )
      GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v27);
    goto LABEL_25;
  }
  EngSetLastError(6u);
LABEL_27:
  if ( v35 )
    DEC_SHARE_REF_CNT(v35, v18);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  return cjBits;
}
