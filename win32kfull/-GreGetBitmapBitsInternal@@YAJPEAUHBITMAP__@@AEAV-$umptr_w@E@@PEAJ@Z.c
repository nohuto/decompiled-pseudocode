/*
 * XREFs of ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02B04AC
 * Callers:
 *     GreGetBitmapBits @ 0x1C02B07CC (GreGetBitmapBits.c)
 *     NtGdiGetBitmapBits @ 0x1C02C4AF0 (NtGdiGetBitmapBits.c)
 * Callees:
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0029258 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C008AE00 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBitsInternal(__int64 a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v4; // rdi
  ULONG cjBits; // esi
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  LONG v11; // ecx
  LONG v12; // edx
  _DWORD *v13; // r13
  __int64 v14; // rax
  HDEV v15; // rax
  int v16; // eax
  int v17; // eax
  struct _SURFOBJ *v18; // rdx
  int v19; // eax
  ULONG v20; // ecx
  unsigned int v21; // r14d
  void *v22; // rax
  char v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  HDEV v29; // [rsp+80h] [rbp-80h] BYREF
  char v30[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v32[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  struct _SURFOBJ v36; // [rsp+C0h] [rbp-40h] BYREF
  RECTL prclDest; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  LOBYTE(v8) = 5;
  v9 = (_DWORD *)HmgShareLockCheck(a1, v8);
  v10 = v9;
  if ( v9 && (v9[28] & 0x4000000) != 0 )
  {
    v11 = v9[14];
    v12 = v9[15];
    v13 = v9;
    v14 = (unsigned int)v9[24];
    v26 = 0LL;
    v27 = 0;
    v28 = 0;
    cjBits = v12 * (((unsigned int)(*(_DWORD *)&gaulConvert[2 * v14] * v11 + 15) >> 3) & 0x1FFFFFFE);
    if ( !*(_QWORD *)a2 )
    {
LABEL_26:
      SURFMEM::~SURFMEM((SURFMEM *)&v26);
LABEL_28:
      DEC_SHARE_REF_CNT(v10);
      goto LABEL_29;
    }
    v36.dhpdev = (DHPDEV)*((_QWORD *)v10 + 5);
    v15 = (HDEV)*((_QWORD *)v10 + 6);
    v36.sizlBitmap.cx = v11;
    v36.sizlBitmap.cy = v12;
    prclDest.right = v11;
    prclDest.bottom = v12;
    v36.hdev = v15;
    v29 = v15;
    memset(&v36.cjBits, 0, 40);
    *(_OWORD *)&v36.dhsurf = 0LL;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v30, (struct PDEVOBJ *)&v29);
    if ( v10 != (_DWORD *)-24LL )
    {
      v16 = v10[28];
      if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
      {
        v4 = v10;
        GreLockDisplayDevice(*((_QWORD *)v10 + 6));
      }
    }
    v31[0] = 0LL;
    v17 = SURFREFVIEW::bMap((SURFREFVIEW *)v31, (struct _SURFOBJ *)(v10 + 6));
    v18 = 0LL;
    if ( v17 )
    {
      if ( *((_WORD *)v10 + 50) == 3 )
      {
        v32[0] = v10[24];
        v32[1] = v10[14];
        v32[2] = v10[15];
        v19 = v10[28] & 0x40000;
        v32[3] = 0;
        v35 = 0;
        v33 = 0LL;
        v34 = v19;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)v32, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          cjBits = 0;
          goto LABEL_23;
        }
        v13 = v26;
        EngCopyBits(
          (SURFOBJ *)((unsigned __int64)(v26 + 6) & -(__int64)(v26 != 0LL)),
          (SURFOBJ *)(v10 + 6),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
        v18 = 0LL;
      }
      if ( cjBits )
      {
        v20 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16);
        v21 = *a3;
        if ( (*a3 & 0x80000000) != 0 || v21 >= cjBits )
          goto LABEL_22;
        if ( v20 + v21 > cjBits )
          v20 = cjBits - v21;
        if ( v20 )
        {
          v22 = (void *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 16));
          v36.cjBits = v20;
          v36.lDelta = v21;
          v36.pvBits = v22;
          if ( v13 )
            v18 = (struct _SURFOBJ *)(v13 + 6);
          bDoGetSetBitmapBits(&v36, v18, 1);
          cjBits = v36.cjBits;
          *a3 = v21 + v36.cjBits;
        }
        else
        {
LABEL_22:
          cjBits = 0;
        }
      }
    }
LABEL_23:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
    if ( v4 )
      GreUnlockDisplayDevice(*((_QWORD *)v4 + 6));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v30);
    goto LABEL_26;
  }
  EngSetLastError(6u);
  if ( v10 )
    goto LABEL_28;
LABEL_29:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  return cjBits;
}
