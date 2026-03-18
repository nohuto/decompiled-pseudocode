/*
 * XREFs of ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C00E0D68
 * Callers:
 *     GreSetBitmapBits @ 0x1C00E0D30 (GreSetBitmapBits.c)
 *     NtGdiSetBitmapBits @ 0x1C015CF70 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngCopyBits @ 0x1C0030980 (EngCopyBits.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00E16E0 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetBitmapBitsInternal(HSURF a1, __int64 a2, LONG *a3)
{
  ULONG v6; // edi
  ULONG cjBits; // r14d
  unsigned __int64 v9; // rsi
  LONG v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  struct _SURFOBJ *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r8
  int v19; // eax
  _BYTE v20[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v28[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  _BYTE v32[32]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+E0h] [rbp-20h]
  _SURFOBJ v34; // [rsp+F0h] [rbp-10h] BYREF
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF

  v6 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16);
  if ( !v6 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
  SURFREF::SURFREF((SURFREF *)v32, a1);
  v9 = v33;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( v33 && (*(_DWORD *)(v33 + 112) & 0x4000000) != 0 )
  {
    v10 = *a3;
    *(&v34.cjBits + 1) = 0;
    v34.iBitmapFormat = 0;
    *(_OWORD *)&v34.dhsurf = 0LL;
    v34.dhpdev = *(DHPDEV *)(v33 + 40);
    v34.hdev = *(HDEV *)(v33 + 48);
    v34.sizlBitmap = *(SIZEL *)(v33 + 56);
    v34.pvBits = (PVOID)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 16));
    v34.cjBits = v6;
    v34.pvScan0 = 0LL;
    v34.lDelta = v10;
    v34.iUniq = 0;
    *(_DWORD *)&v34.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = *(_DWORD *)(v33 + 56);
    prclDest.bottom = *(_DWORD *)(v33 + 60);
    v25 = *(_QWORD *)(v33 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v26, (struct PDEVOBJ *)&v25);
    v11 = 0LL;
    v12 = (v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64);
    if ( v12 )
    {
      v13 = *(_DWORD *)(((v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64)) + 0x58);
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v11 = v12 - 24;
        GreLockDisplayDevice(*(_QWORD *)(((v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64)) - 24 + 0x30));
      }
    }
    v27[0] = 0LL;
    v14 = (struct _SURFOBJ *)(v33 + 24);
    if ( !v33 )
      v14 = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v27, v14) )
      goto LABEL_23;
    v15 = v33;
    if ( *(_WORD *)(v33 + 100) == 3 )
    {
      v28[3] = 0;
      v31 = 0;
      v28[0] = *(_DWORD *)(v33 + 96);
      v28[1] = *(_DWORD *)(v33 + 56);
      v28[2] = *(_DWORD *)(v33 + 60);
      v29 = 0LL;
      v30 = *(_DWORD *)(v33 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v22, (struct _DEVBITMAPINFO *)v28, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_23;
      v9 = v22;
      if ( !v10 )
      {
        v15 = v33;
LABEL_17:
        v16 = *(_QWORD *)(v15 + 48);
        v17 = v9 + 24;
        ++*(_DWORD *)(v15 + 92);
        bDoGetSetBitmapBits((struct _SURFOBJ *)((v9 + 24) & -(__int64)(v9 != 0)), &v34, 0);
        cjBits = v34.cjBits;
        v18 = v33;
        *a3 = v10 + v34.cjBits;
        if ( *(_WORD *)(v18 + 100) == 3 )
        {
          if ( (*(_DWORD *)(v18 + 112) & 0x400) != 0 )
            v19 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, RECTL *, POINTL *))(v16 + 2816))(
                    (v18 + 24) & -(__int64)(v18 != 0),
                    v17 & -(__int64)(v9 != 0),
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          else
            v19 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                    (v18 + 24) & -(__int64)(v18 != 0),
                    v17 & -(__int64)(v9 != 0),
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          cjBits &= -(v19 != 0);
        }
        goto LABEL_23;
      }
      EngCopyBits(
        (SURFOBJ *)(-(__int64)(v22 != 0) & (v22 + 24)),
        (SURFOBJ *)((v33 + 24) & -(__int64)(v33 != 0)),
        0LL,
        0LL,
        &prclDest,
        &pptlSrc);
      v15 = v33;
    }
    if ( v10 >= 0 )
      goto LABEL_17;
LABEL_23:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v27);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v27);
    if ( v11 )
      GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v26);
    goto LABEL_27;
  }
  EngSetLastError(6u);
LABEL_27:
  SURFMEM::~SURFMEM((SURFMEM *)&v22);
  if ( v33 )
    DEC_SHARE_REF_CNT(v33);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
  return cjBits;
}
