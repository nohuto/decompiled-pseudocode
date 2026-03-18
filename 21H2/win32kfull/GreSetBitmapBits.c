/*
 * XREFs of GreSetBitmapBits @ 0x1C00E6BE0
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C00E6B00 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00E6F5C (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetBitmapBits(HSURF a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // r14d
  unsigned __int64 v10; // rsi
  LONG v11; // r15d
  LONG v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // eax
  struct _SURFOBJ *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rcx
  int v21; // eax
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  char v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v30[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  _BYTE v34[32]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+E0h] [rbp-20h]
  struct _SURFOBJ v36; // [rsp+F0h] [rbp-10h] BYREF
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF

  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v22);
  SURFREF::SURFREF((SURFREF *)v34, a1);
  v10 = v35;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  if ( v35 && (*(_DWORD *)(v35 + 112) & 0x4000000) != 0 )
  {
    *(&v36.cjBits + 1) = 0;
    v36.iBitmapFormat = 0;
    v11 = *a4;
    *(_OWORD *)&v36.dhsurf = 0LL;
    v36.dhpdev = *(DHPDEV *)(v35 + 40);
    v36.hdev = *(HDEV *)(v35 + 48);
    v36.sizlBitmap.cx = *(_DWORD *)(v35 + 56);
    v12 = *(_DWORD *)(v35 + 60);
    v36.cjBits = a2;
    v36.pvScan0 = 0LL;
    v36.iUniq = 0;
    *(_DWORD *)&v36.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v36.sizlBitmap.cy = v12;
    v36.pvBits = a3;
    v36.lDelta = v11;
    prclDest.right = *(_DWORD *)(v35 + 56);
    prclDest.bottom = *(_DWORD *)(v35 + 60);
    v27 = *(_QWORD *)(v35 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v28, (struct PDEVOBJ *)&v27);
    v13 = 0LL;
    v14 = (v10 + 24) & ((unsigned __int128)-(__int128)v10 >> 64);
    if ( v14 )
    {
      v15 = *(_DWORD *)(((v10 + 24) & ((unsigned __int128)-(__int128)v10 >> 64)) + 0x58);
      if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
      {
        v13 = v14 - 24;
        GreLockDisplayDevice(*(_QWORD *)(((v10 + 24) & ((unsigned __int128)-(__int128)v10 >> 64)) - 24 + 0x30));
      }
    }
    v29[0] = 0LL;
    v16 = (struct _SURFOBJ *)(v35 + 24);
    if ( !v35 )
      v16 = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v29, v16) )
      goto LABEL_23;
    v17 = v35;
    if ( *(_WORD *)(v35 + 100) == 3 )
    {
      v30[3] = 0;
      v33 = 0;
      v30[0] = *(_DWORD *)(v35 + 96);
      v30[1] = *(_DWORD *)(v35 + 56);
      v30[2] = *(_DWORD *)(v35 + 60);
      v31 = 0LL;
      v32 = *(_DWORD *)(v35 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)v30, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_23;
      v10 = v24;
      if ( !v11 )
      {
        v17 = v35;
LABEL_17:
        v18 = *(_QWORD *)(v17 + 48);
        v19 = v10 + 24;
        ++*(_DWORD *)(v17 + 92);
        bDoGetSetBitmapBits((struct _SURFOBJ *)((v10 + 24) & -(__int64)(v10 != 0)), &v36, 0);
        cjBits = v36.cjBits;
        v20 = v35;
        *a4 = v11 + v36.cjBits;
        if ( *(_WORD *)(v20 + 100) == 3 )
        {
          if ( (*(_DWORD *)(v20 + 112) & 0x400) != 0 )
            v21 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, RECTL *, POINTL *))(v18 + 2816))(
                    v20 + 24,
                    v19 & -(__int64)(v10 != 0),
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          else
            v21 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                    v20 + 24,
                    v19 & -(__int64)(v10 != 0),
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          cjBits &= -(v21 != 0);
        }
        goto LABEL_23;
      }
      EngCopyBits(
        (SURFOBJ *)(-(__int64)(v24 != 0) & (v24 + 24)),
        (SURFOBJ *)((v35 + 24) & -(__int64)(v35 != 0)),
        0LL,
        0LL,
        &prclDest,
        &pptlSrc);
      v17 = v35;
    }
    if ( v11 >= 0 )
      goto LABEL_17;
LABEL_23:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v29);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v29);
    if ( v13 )
      GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v28);
    goto LABEL_27;
  }
  EngSetLastError(6u);
LABEL_27:
  SURFMEM::~SURFMEM((SURFMEM *)&v24);
  if ( v35 )
    DEC_SHARE_REF_CNT(v35);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v22);
  return cjBits;
}
