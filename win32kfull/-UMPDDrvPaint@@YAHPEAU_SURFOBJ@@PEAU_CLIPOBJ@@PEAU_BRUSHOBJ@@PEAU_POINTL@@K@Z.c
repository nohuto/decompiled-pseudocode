__int64 __fastcall UMPDDrvPaint(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        struct _POINTL *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // r15d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // eax
  int v12; // esi
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v15; // [rsp+40h] [rbp-91h] BYREF
  int v16; // [rsp+44h] [rbp-8Dh] BYREF
  int v17; // [rsp+48h] [rbp-89h] BYREF
  void *v18; // [rsp+50h] [rbp-81h] BYREF
  void *v19; // [rsp+58h] [rbp-79h] BYREF
  UMPDOBJ *v20; // [rsp+60h] [rbp-71h] BYREF
  struct _POINTL *v21; // [rsp+68h] [rbp-69h]
  _DWORD v22[4]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v23; // [rsp+80h] [rbp-51h]
  struct _SURFOBJ *v24; // [rsp+88h] [rbp-49h] BYREF
  void *v25; // [rsp+98h] [rbp-39h] BYREF
  void *v26; // [rsp+A8h] [rbp-29h] BYREF
  void *v27; // [rsp+B0h] [rbp-21h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp-9h]

  v5 = 0;
  v21 = a4;
  v17 = 0;
  v16 = 0;
  v7 = 0;
  v15 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v18 = 0LL;
  v19 = 0LL;
  memset_0(v22, 0, 0x60uLL);
  v10 = v20;
  if ( v20 )
  {
    if ( !*((_DWORD *)v20 + 106)
      || (v15 = 160,
          v11 = UMPDOBJ::bThunkLargeBitmap(v20, a1, &v18, &v19, &v17, &v16, &v15),
          v7 = v16,
          v12 = v11,
          (v15 = v11) != 0) )
    {
      v22[0] = 96;
      v22[1] = 17;
      v23 = *(_QWORD *)v10;
      v27 = v21;
      v28 = a5;
      v24 = a1;
      v25 = a2;
      v26 = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), &v24)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 112), (const void **)&v25, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 144), (const void **)&v26, 0x18u, 0LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v27, 8u)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v10, v22, 0x60u, &v15, Size) == -1)
        || (v12 = 1, !v15) )
      {
        v12 = 0;
      }
    }
    if ( v17 )
    {
      if ( v7 )
        UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
      a1->pvBits = v18;
      a1->pvScan0 = v19;
    }
    v5 = v12;
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v5;
}
