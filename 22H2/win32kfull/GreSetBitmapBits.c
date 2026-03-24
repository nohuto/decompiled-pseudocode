/*
 * XREFs of GreSetBitmapBits @ 0x1C00187F0
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C0018710 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0018BA4 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
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
  struct _SURFOBJ *v19; // rsi
  unsigned __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  _BYTE v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v32[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  _BYTE v36[32]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+E0h] [rbp-20h]
  struct _SURFOBJ v38; // [rsp+F0h] [rbp-10h] BYREF
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF

  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  SURFREF::SURFREF((SURFREF *)v36, a1);
  v10 = v37;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  if ( v37 && (*(_DWORD *)(v37 + 112) & 0x4000000) != 0 )
  {
    *(&v38.cjBits + 1) = 0;
    v38.iBitmapFormat = 0;
    v11 = *a4;
    *(_OWORD *)&v38.dhsurf = 0LL;
    v38.dhpdev = *(DHPDEV *)(v37 + 40);
    v38.hdev = *(HDEV *)(v37 + 48);
    v38.sizlBitmap.cx = *(_DWORD *)(v37 + 56);
    v12 = *(_DWORD *)(v37 + 60);
    v38.pvBits = a3;
    v38.pvScan0 = 0LL;
    v38.iUniq = 0;
    *(_DWORD *)&v38.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v38.sizlBitmap.cy = v12;
    v38.cjBits = a2;
    v38.lDelta = v11;
    prclDest.right = *(_DWORD *)(v37 + 56);
    prclDest.bottom = *(_DWORD *)(v37 + 60);
    v29 = *(_QWORD *)(v37 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v30, (struct PDEVOBJ *)&v29);
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
    v31[0] = 0LL;
    v16 = (struct _SURFOBJ *)(v37 + 24);
    if ( !v37 )
      v16 = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v31, v16) )
      goto LABEL_23;
    v17 = v37;
    if ( *(_WORD *)(v37 + 100) == 3 )
    {
      v32[3] = 0;
      v35 = 0;
      v32[0] = *(_DWORD *)(v37 + 96);
      v32[1] = *(_DWORD *)(v37 + 56);
      v32[2] = *(_DWORD *)(v37 + 60);
      v33 = 0LL;
      v34 = *(_DWORD *)(v37 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)v32, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_23:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
        if ( v13 )
          GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v30);
        goto LABEL_27;
      }
      v10 = v26;
      if ( v11 )
        EngCopyBits(
          (SURFOBJ *)(-(__int64)(v26 != 0) & (v26 + 24)),
          (SURFOBJ *)((v37 + 24) & -(__int64)(v37 != 0)),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      v17 = v37;
    }
    if ( v11 >= 0 )
    {
      v18 = *(_QWORD *)(v17 + 48);
      ++*(_DWORD *)(v17 + 92);
      v19 = (struct _SURFOBJ *)((v10 + 24) & -(__int64)(v10 != 0));
      bDoGetSetBitmapBits(v19, &v38, 0);
      cjBits = v38.cjBits;
      v20 = v37;
      *a4 = v11 + v38.cjBits;
      if ( *(_WORD *)(v20 + 100) == 3 )
      {
        if ( (*(_DWORD *)(v20 + 112) & 0x400) != 0 )
          v21 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))(v18 + 2840))(
                  v20 + 24,
                  v19,
                  0LL,
                  0LL,
                  &prclDest,
                  &pptlSrc);
        else
          v21 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                  v20 + 24,
                  v19,
                  0LL,
                  0LL,
                  &prclDest,
                  &pptlSrc);
        cjBits &= -(v21 != 0);
      }
    }
    goto LABEL_23;
  }
  EngSetLastError(6u);
LABEL_27:
  SURFMEM::~SURFMEM((SURFMEM *)&v26);
  if ( v37 )
    DEC_SHARE_REF_CNT(v37, v22);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v36);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
  return cjBits;
}
