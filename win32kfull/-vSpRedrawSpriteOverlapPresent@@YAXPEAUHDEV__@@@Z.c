void __fastcall vSpRedrawSpriteOverlapPresent(HDEV a1)
{
  HDEV v1; // rbx
  struct REGION *v2; // rdx
  struct REGION *v3; // rsi
  int v4; // r15d
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // r14d
  unsigned int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  REGION *v14; // rcx
  REGION *v15; // r14
  int v16; // edi
  struct _RECTL v17; // xmm0
  unsigned int i; // esi
  struct REGION *v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  HDEV v21; // [rsp+48h] [rbp-C0h] BYREF
  REGION *v22; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v23[192]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v24[4]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v25[4]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v26[16]; // [rsp+13Ch] [rbp+34h] BYREF
  char v27; // [rsp+14Ch] [rbp+44h]
  __int64 v28; // [rsp+170h] [rbp+68h]
  __int64 v29; // [rsp+188h] [rbp+80h]
  int v30; // [rsp+190h] [rbp+88h]
  int v31; // [rsp+1B8h] [rbp+B0h]
  __int64 v32; // [rsp+1C8h] [rbp+C0h]
  _BYTE v33[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v34[16]; // [rsp+1DCh] [rbp+D4h] BYREF
  char v35; // [rsp+1ECh] [rbp+E4h]
  __int64 v36; // [rsp+210h] [rbp+108h]
  __int64 v37; // [rsp+228h] [rbp+120h]
  int v38; // [rsp+230h] [rbp+128h]
  int v39; // [rsp+258h] [rbp+150h]
  __int64 v40; // [rsp+268h] [rbp+160h]
  int v41; // [rsp+278h] [rbp+170h] BYREF
  struct _RECTL v42; // [rsp+27Ch] [rbp+174h] BYREF
  char v43; // [rsp+28Ch] [rbp+184h]
  __int64 v44; // [rsp+2B0h] [rbp+1A8h]
  __int64 v45; // [rsp+2C8h] [rbp+1C0h]
  int v46; // [rsp+2D0h] [rbp+1C8h]
  int v47; // [rsp+2F8h] [rbp+1F0h]
  __int64 v48; // [rsp+308h] [rbp+200h]
  unsigned int v49; // [rsp+3C8h] [rbp+2C0h] BYREF
  struct _RECTL v50[20]; // [rsp+3CCh] [rbp+2C4h] BYREF

  v21 = a1;
  v1 = a1 + 20;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v23, (struct PDEVOBJ *)&v21);
  GreAcquireSemaphore(*((_QWORD *)v1 + 15));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_QWORD *)v1 + 15), 8LL);
  v2 = (struct REGION *)*((_QWORD *)v1 + 130);
  if ( !v2 )
    goto LABEL_2;
  v3 = (struct REGION *)*((_QWORD *)v1 + 131);
  if ( !v3 )
    goto LABEL_2;
  v4 = 1;
  v29 = 0LL;
  v30 = 0;
  v31 = 1;
  v32 = 0LL;
  v28 = 0LL;
  v5 = 1;
  v37 = 0LL;
  v38 = 0;
  v39 = 1;
  v40 = 0LL;
  v36 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v25, v2, (struct ERECTL *)(v1 + 10), 0);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v33, v3, (struct ERECTL *)(v1 + 10), 0);
  ERECTL::bEmpty((ERECTL *)v26);
  v6 = ERECTL::bEmpty((ERECTL *)v34);
  if ( v7 != v6 )
    goto LABEL_23;
  if ( !v27 && !v35 )
    goto LABEL_25;
  if ( v27 != v35 )
  {
LABEL_23:
    v5 = 0;
    goto LABEL_25;
  }
  memset_0(v50, 0, sizeof(v50));
  memset_0(&v42, 0, 0x140uLL);
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)v25, 0, 0, 4u, 0x64u);
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)v33, 0, 0, 4u, 0x64u);
  v8 = 1;
  while ( 1 )
  {
    v49 = 0;
    v9 = 0;
    v41 = 0;
    v10 = 0;
    if ( v4 )
    {
      v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v25, 0x144u, (char *)&v49, 0LL);
      v9 = v49;
      v4 = v11;
    }
    if ( v8 )
    {
      v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)v33, 0x144u, (char *)&v41, 0LL);
      v10 = v41;
      v8 = v12;
    }
    if ( v9 != v10 )
      break;
    v13 = 0;
    v5 = 1;
    if ( v9 )
    {
      while ( *(&v42.left + 4 * v13) == v50[v13].left
           && *(&v42.top + 4 * v13) == v50[v13].top
           && *(&v42.right + 4 * v13) == v50[v13].right
           && *(&v42.bottom + 4 * v13) == v50[v13].bottom )
      {
        if ( ++v13 >= v9 )
          goto LABEL_20;
      }
      break;
    }
LABEL_20:
    if ( !v4 && !v8 )
      goto LABEL_25;
  }
  v5 = 0;
LABEL_25:
  v14 = (REGION *)*((_QWORD *)v1 + 131);
  if ( v5 )
  {
    REGION::vDeleteREGION(v14);
    *((_QWORD *)v1 + 131) = 0LL;
    goto LABEL_2;
  }
  v15 = (REGION *)*((_QWORD *)v1 + 130);
  *((_QWORD *)v1 + 130) = v14;
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v1);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
  if ( !v20 )
    goto LABEL_43;
  if ( !v19 )
    goto LABEL_43;
  RGNOBJ::vSet((RGNOBJ *)&v20, (const struct _RECTL *const)(v1 + 10));
  v22 = v15;
  if ( !RGNOBJ::bMerge((RGNOBJ *)&v19, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v22, 4u) )
    goto LABEL_43;
  v45 = 0LL;
  v46 = 0;
  v47 = 1;
  v48 = 0LL;
  v44 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)&v41, v19, (struct ERECTL *)(v1 + 10), 1);
  memset_0(&v49, 0, 0x144uLL);
  switch ( v43 )
  {
    case 0:
      v17 = *(struct _RECTL *)(v1 + 10);
      goto LABEL_35;
    case 1:
      v17 = v42;
LABEL_35:
      v50[0] = v17;
      v49 = 1;
      v16 = 0;
      goto LABEL_36;
    case 3:
      v16 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)&v41, 0, 0, 4u, 0x14u);
LABEL_36:
      if ( !v16 )
        goto LABEL_38;
      do
      {
        v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)&v41, 0x144u, (char *)&v49, 0LL);
LABEL_38:
        for ( i = 0; i < v49; ++i )
        {
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v24, (struct _SPRITESTATE *)v1, &v50[i]);
          if ( v24[0] )
            vSpRedrawArea((struct _SPRITESTATE *)v1, &v50[i], 0);
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v24);
        }
      }
      while ( v16 );
      break;
  }
LABEL_43:
  if ( v15 )
    REGION::vDeleteREGION(v15);
  *((_QWORD *)v1 + 131) = 0LL;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
LABEL_2:
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 15));
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v23);
}
