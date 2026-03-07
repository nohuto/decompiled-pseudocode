__int64 __fastcall UMPDDrvStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r15d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // esi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  void *v21; // [rsp+50h] [rbp-B0h] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v24; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ *v25; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v26; // [rsp+78h] [rbp-88h]
  struct _POINTL *v27; // [rsp+80h] [rbp-80h]
  _DWORD v28[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v30; // [rsp+A8h] [rbp-58h] BYREF
  void *v31; // [rsp+B0h] [rbp-50h] BYREF
  void *v32; // [rsp+B8h] [rbp-48h] BYREF
  struct _XFORMOBJ *v33; // [rsp+C0h] [rbp-40h] BYREF
  void *v34; // [rsp+C8h] [rbp-38h] BYREF
  void *v35; // [rsp+D0h] [rbp-30h] BYREF
  struct _LINEATTRS *v36; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v37; // [rsp+E8h] [rbp-18h]

  v8 = 0;
  v26 = a5;
  v27 = a6;
  v11 = 0;
  v25 = a4;
  v24 = a3;
  v18 = 1;
  v20 = 0;
  v19 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v23);
  v21 = 0LL;
  v22 = 0LL;
  memset_0(v28, 0, 0x60uLL);
  v12 = v23;
  if ( v23 )
  {
    if ( !*((_DWORD *)v23 + 106)
      || (!a7 ? (v13 = 176) : (v13 = ((4 * a7->cstyle + 7) & 0xFFFFFFF8) + 216),
          v18 = v13,
          v14 = UMPDOBJ::bThunkLargeBitmap(v23, a1, &v21, &v22, &v20, &v19, &v18),
          v11 = v19,
          v15 = v14,
          (v18 = v14) != 0) )
    {
      v28[0] = 96;
      v28[1] = 14;
      v29 = *(_QWORD *)v12;
      v32 = v24;
      v33 = v25;
      v34 = v26;
      v35 = v27;
      v37 = a8;
      v30 = a1;
      v31 = a2;
      v36 = a7;
      if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), &v30)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 224), (const void **)&v31, 8u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&v32, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::pxo(v12, &v33)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&v34, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v35, 8u)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS((char **)v12, &v36)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v28, 0x60u, &v18, Size) == -1)
        || (v15 = 1, !v18) )
      {
        v15 = 0;
      }
    }
    if ( v20 )
    {
      if ( v11 )
        UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
      a1->pvBits = v21;
      a1->pvScan0 = v22;
    }
    v8 = v15;
  }
  XUMPDOBJ::~XUMPDOBJ(&v23);
  return v8;
}
