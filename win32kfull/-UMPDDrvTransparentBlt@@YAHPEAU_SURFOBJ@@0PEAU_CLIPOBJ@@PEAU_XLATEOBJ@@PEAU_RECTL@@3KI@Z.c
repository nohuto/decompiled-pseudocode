__int64 __fastcall UMPDDrvTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r14d
  int v12; // esi
  UMPDOBJ *v13; // rcx
  struct _SURFOBJ **v14; // r8
  UMPDOBJ *v15; // rbx
  struct _SURFOBJ *v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v21; // [rsp+90h] [rbp-80h] BYREF
  int v22; // [rsp+94h] [rbp-7Ch] BYREF
  int v23; // [rsp+98h] [rbp-78h] BYREF
  int v24; // [rsp+9Ch] [rbp-74h] BYREF
  int v25; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v26; // [rsp+A8h] [rbp-68h] BYREF
  void *v27; // [rsp+B0h] [rbp-60h] BYREF
  void *v28; // [rsp+B8h] [rbp-58h] BYREF
  void *v29; // [rsp+C0h] [rbp-50h] BYREF
  void *v30; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v31; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v32; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v33; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v34; // [rsp+E8h] [rbp-28h]
  _DWORD v35[4]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+100h] [rbp-10h]
  struct _SURFOBJ *v37; // [rsp+108h] [rbp-8h] BYREF
  struct _SURFOBJ *v38; // [rsp+110h] [rbp+0h] BYREF
  void *v39; // [rsp+118h] [rbp+8h] BYREF
  struct _XLATEOBJ *v40; // [rsp+120h] [rbp+10h] BYREF
  void *v41; // [rsp+128h] [rbp+18h] BYREF
  void *v42; // [rsp+130h] [rbp+20h] BYREF
  unsigned int v43; // [rsp+138h] [rbp+28h]
  unsigned int v44; // [rsp+13Ch] [rbp+2Ch]

  v8 = 0;
  v33 = a5;
  v34 = a6;
  v32 = a3;
  v11 = 0;
  v26 = a2;
  v12 = 0;
  v21 = 1;
  v25 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  memset_0(v35, 0, 0x50uLL);
  v15 = v31;
  if ( !v31 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v13, &v26, v14) )
    goto LABEL_20;
  v16 = v26;
  if ( !*((_DWORD *)v15 + 106) )
    goto LABEL_9;
  if ( a4 )
    v17 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 168;
  else
    v17 = 144;
  v21 = v17;
  v18 = UMPDOBJ::bThunkLargeBitmaps(
          v15,
          a1,
          v26,
          0LL,
          &v30,
          &v29,
          &v28,
          &v27,
          0LL,
          0LL,
          &v25,
          &v22,
          &v24,
          &v23,
          0LL,
          0LL,
          &v21);
  v11 = v22;
  v12 = v23;
  v8 = v18;
  v21 = v18;
  if ( v18 )
  {
    v8 = 0;
LABEL_9:
    v35[0] = 80;
    v35[1] = 74;
    v36 = *(_QWORD *)v15;
    v39 = v32;
    v41 = v33;
    v42 = v34;
    v43 = a7;
    v44 = a8;
    v37 = a1;
    v38 = v16;
    v40 = a4;
    if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), &v37) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 80), &v38) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&v39, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v15, &v40) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v41, 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v42, 0x10u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, v35, 0x50u, &v21, Size) != -1 )
                {
                  if ( v21 )
                    v8 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v15 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v15,
      (unsigned __int64)a1,
      (unsigned __int64)v16,
      0LL,
      v30,
      v29,
      v28,
      v27,
      0LL,
      0LL,
      v25,
      v11,
      v24,
      v12,
      0,
      0);
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v8;
}
