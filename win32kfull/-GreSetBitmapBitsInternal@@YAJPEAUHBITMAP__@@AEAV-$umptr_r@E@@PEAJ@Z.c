__int64 __fastcall GreSetBitmapBitsInternal(__int64 a1, __int64 a2, LONG *a3)
{
  int v3; // esi
  ULONG v7; // esi
  ULONG cjBits; // r12d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  LONG v12; // edx
  LONG v13; // ecx
  LONG v14; // r13d
  __int64 v15; // r14
  HDEV v16; // r8
  void *v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rsi
  int v22; // eax
  char v23[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  char v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  HDEV v28; // [rsp+80h] [rbp-80h] BYREF
  LONG *v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  char v31[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v33[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  _SURFOBJ v37; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  v29 = a3;
  v7 = v3 - *(_DWORD *)(a2 + 16);
  if ( !v7 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v25 = 0LL;
  v11 = v10;
  v26 = 0;
  v27 = 0;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
  {
    v12 = *(_DWORD *)(v10 + 56);
    v13 = *(_DWORD *)(v10 + 60);
    v14 = *a3;
    v15 = v10;
    v16 = *(HDEV *)(v10 + 48);
    v37.dhpdev = *(DHPDEV *)(v10 + 40);
    v17 = (void *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 16));
    v37.cjBits = v7;
    v37.sizlBitmap.cx = v12;
    v37.sizlBitmap.cy = v13;
    prclDest.right = v12;
    prclDest.bottom = v13;
    v37.pvBits = v17;
    *(&v37.cjBits + 1) = 0;
    *(_QWORD *)&v37.iUniq = 0LL;
    *(_OWORD *)&v37.dhsurf = 0LL;
    v37.hdev = v16;
    v37.pvScan0 = 0LL;
    v37.lDelta = v14;
    *(_DWORD *)&v37.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v28 = v16;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v31, (struct PDEVOBJ *)&v28);
    v18 = 0LL;
    if ( v11 != -24 )
    {
      v19 = *(_DWORD *)(v11 + 112);
      if ( (v19 & 0x80004000) != 0 && (v19 & 0x200) == 0 )
      {
        v18 = v11;
        GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
      }
    }
    v32[0] = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v32, (struct _SURFOBJ *)(v11 + 24)) )
      goto LABEL_12;
    if ( *(_WORD *)(v11 + 100) == 3 )
    {
      v33[0] = *(_DWORD *)(v11 + 96);
      v33[1] = *(_DWORD *)(v11 + 56);
      v33[2] = *(_DWORD *)(v11 + 60);
      v35 = *(_DWORD *)(v11 + 112) & 0x40000;
      v33[3] = 0;
      v36 = 0;
      v34 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v25, (struct _DEVBITMAPINFO *)v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_12;
      v15 = v25;
      if ( !v14 )
      {
LABEL_11:
        ++*(_DWORD *)(v11 + 92);
        v20 = *(_QWORD *)(v11 + 48);
        v30 = v15 + 24;
        bDoGetSetBitmapBits((struct _SURFOBJ *)((v15 + 24) & -(__int64)(v15 != 0)), &v37, 0);
        cjBits = v37.cjBits;
        *v29 = v37.cjBits + v14;
        if ( *(_WORD *)(v11 + 100) == 3 )
        {
          if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
            v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, RECTL *, POINTL *))(v20 + 2816))(
                    v11 + 24,
                    v30 & -(__int64)(v15 != 0),
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          else
            v22 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                    v11 + 24,
                    v30 & -(__int64)(v15 != 0),
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          cjBits &= -(v22 != 0);
        }
        goto LABEL_12;
      }
      EngCopyBits((SURFOBJ *)((v25 + 24) & -(__int64)(v25 != 0)), (SURFOBJ *)(v11 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
    }
    if ( v14 >= 0 )
      goto LABEL_11;
LABEL_12:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
    if ( v18 )
      GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v31);
    goto LABEL_15;
  }
  EngSetLastError(6u);
LABEL_15:
  SURFMEM::~SURFMEM((SURFMEM *)&v25);
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
  return cjBits;
}
