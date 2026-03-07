void __fastcall PRECOMPUTE::vInit(
        __int64 a1,
        SURFACE *a2,
        PDEVOBJ *a3,
        struct EPATHOBJ *a4,
        __int64 a5,
        struct _XFORMOBJ *a6,
        struct _LINEATTRS *a7,
        char a8,
        unsigned int a9,
        int a10)
{
  __int64 v13; // rax
  int v14; // eax
  struct _RECTL *v15; // r13
  int v16; // r9d
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  PRECOMPUTE *v21; // rcx
  PRECOMPUTE *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  __int64 v26; // rax
  void *v27; // rcx
  void *v28; // rcx
  struct _RECTL *v29; // r9
  struct _RECTL *v30; // r15
  __int64 v31; // rdx
  int v32; // eax
  PRECOMPUTE *v33; // rcx
  struct _RECTL *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v38[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h]
  struct _RECTL v40; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-18h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  *((_QWORD *)a4 + 3) = 0LL;
  *((_QWORD *)a4 + 5) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  *((_QWORD *)a4 + 6) = 0LL;
  *((_QWORD *)a4 + 8) = 0LL;
  v13 = *(_QWORD *)a3;
  v40 = 0LL;
  if ( (*(_DWORD *)(v13 + 40) & 0x8000) != 0
    || !PDEVOBJ::bAllowShareAccess(a3)
    || (v14 = SURFACE::bRedirectionBitmap(a2), v15 = 0LL, v14) )
  {
    *(_QWORD *)(a1 + 32) = a4;
    return;
  }
  if ( a10 )
  {
    if ( a10 == 1 )
    {
      if ( *(_BYTE *)(a5 + 20) == 3 || (*(_DWORD *)a4 & 0x4000) != 0 )
      {
        PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v41);
        if ( v42
          && EPATHOBJ::bClone((EPATHOBJ *)v41, a4)
          && ((v41[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v41))
          && (!a7 || EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)v41, a6, a7)) )
        {
          v40.top = 16 * *(_DWORD *)(a5 + 8);
          v40.bottom = 16 * *(_DWORD *)(a5 + 16);
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v41, a9, &v40);
          if ( (_QWORD)v37 )
          {
            *(_QWORD *)a1 = v37;
            goto LABEL_110;
          }
        }
      }
      else
      {
        v30 = 0LL;
        v31 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 48LL);
        v32 = (int)*(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL) >> 4;
        v37 = *(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL);
        if ( *(_DWORD *)(a5 + 4) > v32
          || *(_DWORD *)(a5 + 12) < (DWORD2(v37) + 15) >> 4
          || *(_DWORD *)(a5 + 8) > SHIDWORD(v31) >> 4
          || *(_DWORD *)(a5 + 16) < (HIDWORD(v37) + 15) >> 4 )
        {
          v30 = (struct _RECTL *)(a5 + 4);
        }
        PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v41);
        if ( v42
          && EPATHOBJ::bClone((EPATHOBJ *)v41, a4)
          && ((v41[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v41))
          && (!a7 || EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)v41, a6, a7))
          && (unsigned int)PRECOMPUTE::bPreComputeFast(v33, (struct EPATHOBJ *)v41, a4, v30, 1u) )
        {
          goto LABEL_110;
        }
      }
      goto LABEL_21;
    }
    if ( a10 != 2 )
      goto LABEL_112;
    v16 = *(_DWORD *)(a5 + 8);
    v17 = *(_DWORD *)(a5 + 16);
    v40.top = 16 * v16;
    v40.bottom = 16 * v17;
    if ( (a7->fl & 1) != 0 && a8 != 13 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v41);
      if ( v42 && EPATHOBJ::bClone((EPATHOBJ *)v41, a4) )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v38);
        if ( v39
          && (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v38, (struct EPATHOBJ *)v41, a6, a7)
          && EPATHOBJ::bWiden((EPATHOBJ *)v38, (struct EPATHOBJ *)v41, a6, a7)
          && ((v41[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v41)) )
        {
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v38, 2u, 0LL);
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v41, a9, 0LL);
          if ( v36 )
          {
            v18 = v37;
            if ( (_QWORD)v37 )
            {
              *(_QWORD *)(a1 + 24) = v36;
              *(_QWORD *)a1 = v18;
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v38);
LABEL_110:
              XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v41);
              goto LABEL_111;
            }
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v38);
      }
LABEL_21:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v41);
      return;
    }
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      v20 = (int)*(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL) >> 4;
      v37 = *(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v20
        || *(_DWORD *)(a5 + 12) < (DWORD2(v37) + 15) >> 4
        || v16 > SHIDWORD(v19) >> 4
        || v17 < (HIDWORD(v37) + 15) >> 4 )
      {
        v15 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v41);
      if ( !v42 || !EPATHOBJ::bClone((EPATHOBJ *)v41, a4) )
        goto LABEL_21;
      if ( (v41[0] & 1) != 0 )
      {
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v41) )
          goto LABEL_21;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v41, a9, &v40);
        if ( !(_QWORD)v37 )
          goto LABEL_21;
        *(_QWORD *)a1 = v37;
      }
      if ( !(unsigned int)PRECOMPUTE::bPreComputeFast(v21, (struct EPATHOBJ *)v41, a4, v15, 1u) )
      {
        if ( *(_QWORD *)a1 )
        {
          REGION::vDeleteREGION(*(REGION **)a1);
          *(_QWORD *)a1 = 0LL;
        }
        goto LABEL_21;
      }
      if ( (a7->fl & 1) != 0 && !EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)v41, a6, a7)
        || !(unsigned int)PRECOMPUTE::bPreComputeFast(v22, (struct EPATHOBJ *)v41, a4, v15, 2u) )
      {
        v25 = (void *)*((_QWORD *)a4 + 6);
        if ( v25 )
          Win32FreePool(v25);
        if ( *(_QWORD *)a1 )
        {
          REGION::vDeleteREGION(*(REGION **)a1);
          *(_QWORD *)a1 = 0LL;
        }
        *((_QWORD *)a4 + 6) = 0LL;
        *((_DWORD *)a4 + 14) = 0;
        goto LABEL_21;
      }
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v41, a9, &v40);
      if ( !v36 )
      {
        v23 = (void *)*((_QWORD *)a4 + 6);
        if ( v23 )
          Win32FreePool(v23);
        v24 = (void *)*((_QWORD *)a4 + 8);
        if ( v24 )
          Win32FreePool(v24);
        if ( *(_QWORD *)a1 )
        {
          REGION::vDeleteREGION(*(REGION **)a1);
          *(_QWORD *)a1 = 0LL;
        }
LABEL_48:
        *((_QWORD *)a4 + 6) = 0LL;
        *((_QWORD *)a4 + 7) = 0LL;
        *((_QWORD *)a4 + 8) = 0LL;
        goto LABEL_21;
      }
      *(_QWORD *)(a1 + 8) = v36;
      if ( a9 == 2 )
        goto LABEL_110;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v41, 2u, &v40);
      v26 = v37;
      if ( !(_QWORD)v37 )
      {
        v27 = (void *)*((_QWORD *)a4 + 6);
        if ( v27 )
          Win32FreePool(v27);
        v28 = (void *)*((_QWORD *)a4 + 8);
        if ( v28 )
          Win32FreePool(v28);
        if ( *(_QWORD *)a1 )
        {
          REGION::vDeleteREGION(*(REGION **)a1);
          *(_QWORD *)a1 = 0LL;
        }
        REGION::vDeleteREGION(*(REGION **)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        goto LABEL_48;
      }
LABEL_109:
      *(_QWORD *)(a1 + 16) = v26;
      goto LABEL_110;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v41);
    if ( !v42 || !EPATHOBJ::bClone((EPATHOBJ *)v41, a4) || (v41[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v41) )
      goto LABEL_21;
    if ( (a7->fl & 1) != 0 && !EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)v41, a6, a7) )
      goto LABEL_21;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v41, a9, &v40);
    if ( !(_QWORD)v37 )
      goto LABEL_21;
    *(_QWORD *)(a1 + 8) = v37;
    if ( a9 == 2 )
      goto LABEL_110;
    v29 = &v40;
LABEL_107:
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v41, 2u, v29);
    v26 = v36;
    if ( !v36 )
    {
      REGION::vDeleteREGION(*(REGION **)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      goto LABEL_21;
    }
    goto LABEL_109;
  }
  if ( (a7->fl & 1) != 0 )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v41);
    if ( !v42 || !EPATHOBJ::bClone((EPATHOBJ *)v41, a4) || (v41[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v41) )
      goto LABEL_21;
    if ( !EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)v41, a6, a7) )
      goto LABEL_21;
    if ( *(_BYTE *)(a5 + 20) )
    {
      v40.top = 16 * *(_DWORD *)(a5 + 8);
      v34 = &v40;
      v40.bottom = 16 * *(_DWORD *)(a5 + 16);
    }
    else
    {
      v34 = 0LL;
    }
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v41, a9, v34);
    if ( !(_QWORD)v37 )
      goto LABEL_21;
    *(_QWORD *)(a1 + 8) = v37;
    if ( a9 == 2 )
      goto LABEL_110;
    v29 = v34;
    goto LABEL_107;
  }
LABEL_111:
  *(_QWORD *)(a1 + 32) = a4;
LABEL_112:
  v35 = *(_QWORD *)(a1 + 32);
  if ( v35 )
  {
    *(_QWORD *)(v35 + 16) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = *(_QWORD *)(a1 + 24);
  }
}
