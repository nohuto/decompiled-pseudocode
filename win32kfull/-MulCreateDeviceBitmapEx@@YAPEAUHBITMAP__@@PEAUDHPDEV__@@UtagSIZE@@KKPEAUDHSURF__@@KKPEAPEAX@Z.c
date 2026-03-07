HBITMAP __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        ULONG a3,
        unsigned int a4,
        DHSURF a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  __int64 v8; // rbx
  DHSURF dhsurf; // r12
  HBITMAP RedirectionDeviceBitmap; // rbp
  __int64 v12; // rdi
  ULONG v13; // r10d
  unsigned int v14; // r15d
  struct DHPDEV__ *v15; // r8
  _QWORD *v16; // r13
  _QWORD *i; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(_QWORD, SIZEL, _QWORD); // rax
  HSURF v23; // rax
  HSURF v24; // rbx
  SURFOBJ *v25; // r15
  DHSURF v26; // rax
  SURFOBJ *v27; // rdx
  void *v28; // rcx
  __int64 (__fastcall *v29)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **); // rax
  HSURF v30; // rax
  SURFOBJ *v31; // rax
  HSURF v32; // rcx
  int v34; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+54h] [rbp-54h]
  void *v36; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v37[8]; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v40; // [rsp+C8h] [rbp+20h]

  v40 = a4;
  v8 = *((_QWORD *)a1 + 4);
  dhsurf = 0LL;
  RedirectionDeviceBitmap = 0LL;
  v12 = 0LL;
  v13 = a3;
  v14 = a4;
  v15 = a1;
  if ( _bittest((const signed __int32 *)(v8 + 40), 0x1Au) )
  {
    if ( (a4 & 2) != 0 || !(unsigned int)GreDwmUseDeviceBitmapsForMultiAdapter() )
      return 0LL;
    v36 = 0LL;
    v15 = a1;
    v13 = a3;
  }
  else
  {
    v36 = 0LL;
    if ( (a4 & 2) != 0 && a8 )
      v36 = *a8;
  }
  v16 = 0LL;
  if ( _bittest((const signed __int32 *)(v8 + 40), 0x1Au) )
  {
    for ( i = *(_QWORD **)v15; i; i = (_QWORD *)*i )
    {
      v18 = *(_QWORD *)(i[7] + 2552LL);
      if ( v18 && *(_DWORD *)(v18 + 240) == *((_DWORD *)v15 + 26) && *(_DWORD *)(v18 + 244) == *((_DWORD *)v15 + 27) )
      {
        v16 = i;
        break;
      }
    }
    v19 = *(_QWORD *)(v8 + 1768);
    if ( v19 )
      *(_QWORD *)(v19 + 104) = 0LL;
    if ( v16 )
    {
      v20 = v16;
      goto LABEL_22;
    }
  }
  v20 = *(_QWORD **)v15;
  if ( !*(_QWORD *)v15 )
  {
LABEL_67:
    if ( a8 )
    {
      if ( (v14 & 2) == 0 )
        *a8 = v36;
    }
    return RedirectionDeviceBitmap;
  }
  while ( 1 )
  {
LABEL_22:
    v21 = v20[6];
    v34 = 0;
    v37[0] = v21;
    if ( (*(_DWORD *)(v21 + 1792) & 0x8000000) != 0 )
    {
      if ( (*(_DWORD *)(v21 + 2096) & 0x8000) == 0 )
        goto LABEL_65;
      v22 = *(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD))(v21 + 2744);
      if ( !v22 )
        goto LABEL_65;
      v23 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v22)(*(_QWORD *)(v21 + 1768), a2, v13);
      v24 = v23;
      if ( !v23 )
        break;
      v25 = EngLockSurface(v23);
      v34 = 1;
      goto LABEL_27;
    }
    v29 = *(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **))(v21 + 3416);
    if ( !v29 )
      goto LABEL_65;
    v30 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))v29)(
                   *(_QWORD *)(v21 + 1768),
                   a2,
                   v13,
                   v14,
                   a5,
                   a6,
                   a7,
                   &v36);
    v24 = v30;
    if ( !v30 )
      break;
    v31 = EngLockSurface(v30);
    v25 = v31;
    if ( v31 )
    {
      v12 = *(_QWORD *)&v31[6].iBitmapFormat;
      a5 = v31->dhsurf;
      goto LABEL_28;
    }
LABEL_27:
    if ( !v25 )
      break;
LABEL_28:
    if ( dhsurf )
      goto LABEL_38;
    v35 = 0;
    v26 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
    dhsurf = v26;
    if ( !v26 || (RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v26, a2, a3)) == 0LL )
    {
      if ( RedirectionDeviceBitmap )
      {
LABEL_57:
        EngDeleteSurface((HSURF)RedirectionDeviceBitmap);
        if ( !v35 )
          goto LABEL_58;
      }
      else
      {
LABEL_58:
        if ( dhsurf )
          EngFreeMem(dhsurf);
      }
      EngUnlockSurface(v25);
      v32 = v24;
LABEL_61:
      EngDeleteSurface(v32);
      return 0LL;
    }
    if ( !EngModifySurface(
            (HSURF)RedirectionDeviceBitmap,
            *((HDEV *)a1 + 4),
            *((_DWORD *)a1 + 17),
            3u,
            dhsurf,
            0LL,
            0,
            0LL) )
      goto LABEL_57;
    v35 = 1;
    v27 = EngLockSurface((HSURF)RedirectionDeviceBitmap);
    if ( !v27 )
      goto LABEL_57;
    *(_QWORD *)dhsurf = a1;
    *((_QWORD *)dhsurf + 1) = dhsurf + 6;
    dhsurf[4] = (struct DHSURF__)v20[2];
    v28 = v36;
    LODWORD(v27[1].hsurf) |= 0x800000u;
    *(_QWORD *)&v27[6].lDelta = v28;
    *(_QWORD *)&v27[6].iBitmapFormat = v12;
    HIDWORD(v27[1].dhpdev) = a6;
    if ( (v40 & 0x10) != 0 )
    {
      if ( (HIDWORD(v25[1].hsurf) & 0x2000) != 0 )
        HIDWORD(v27[1].hsurf) |= 0x2000u;
      v40 &= ~0x10u;
    }
    EngUnlockSurface(v27);
LABEL_38:
    *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *((unsigned int *)v20 + 4)) = v25;
    if ( v34 )
    {
      LODWORD(v25[1].hsurf) |= 0x80000u;
      HIDWORD(v25[1].hsurf) |= 1u;
    }
    else if ( (v40 & 1) != 0 )
    {
      HIDWORD(v25[1].hsurf) |= 1u;
      *(_QWORD *)&v25[6].lDelta = v36;
      HIDWORD(v25[1].dhpdev) = a6;
      *(_QWORD *)&v25[6].iBitmapFormat = v12;
    }
    else if ( (v40 & 2) != 0 )
    {
      HIDWORD(v25[1].hsurf) |= 8u;
    }
    HIDWORD(v25[1].hsurf) |= 4u;
    *(_QWORD *)&v25[1].cjBits = RedirectionDeviceBitmap;
    vSetupDevBitmap((struct PDEVOBJ *)v37, (struct SURFACE *)&v25[-1].pvScan0);
    LODWORD(v25[1].hsurf) |= 0x800000u;
    GreMarkUndeletableBitmap(v25->hsurf);
    if ( !v16 || (v20 != v16 ? (v20 = (_QWORD *)*v20) : (v20 = *(_QWORD **)a1), v20 == v16) )
      v20 = (_QWORD *)*v20;
    v14 = v40;
    if ( !v20 )
      goto LABEL_67;
    v13 = a3;
  }
  if ( v24 )
    EngDeleteSurface(v24);
LABEL_65:
  if ( RedirectionDeviceBitmap )
  {
    v32 = (HSURF)RedirectionDeviceBitmap;
    goto LABEL_61;
  }
  return 0LL;
}
