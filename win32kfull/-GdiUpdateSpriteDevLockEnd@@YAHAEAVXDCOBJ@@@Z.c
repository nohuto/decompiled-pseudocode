__int64 __fastcall GdiUpdateSpriteDevLockEnd(HDC **a1)
{
  HDEV HDEV; // r14
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned __int8 v5; // r13
  HDC *v6; // r9
  __int64 v7; // rdi
  HDEV v8; // rsi
  int v9; // r10d
  HWND v10; // rdx
  __int64 i; // rcx
  __int64 v13; // r9
  int v14; // esi
  struct _RECTL v15; // xmm0
  unsigned int j; // ebx
  struct _RECTL *v17; // r8
  int v18; // r10d
  struct _METASPRITE *MetaSprite; // r12
  __int64 v20; // r14
  unsigned __int8 v21; // [rsp+58h] [rbp-B0h]
  struct REGION *v22; // [rsp+60h] [rbp-A8h] BYREF
  HDEV v23; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v24; // [rsp+70h] [rbp-98h] BYREF
  struct tagSIZE v25; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-88h] BYREF
  struct _RECTL v27; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v28[4]; // [rsp+98h] [rbp-70h] BYREF
  struct _RECTL v29; // [rsp+9Ch] [rbp-6Ch]
  char v30; // [rsp+ACh] [rbp-5Ch]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  __int64 v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+128h] [rbp+20h]
  unsigned int v36; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v37[20]; // [rsp+13Ch] [rbp+34h] BYREF

  HDEV = (HDEV)UserGetHDEV(a1);
  if ( !(unsigned int)GreGetBounds(**a1, &v27, 4LL) )
  {
LABEL_18:
    REGION::vDeleteREGION((REGION *)(*a1)[148]);
    (*a1)[148] = 0LL;
    return 0LL;
  }
  v23 = HDEV;
  if ( !_bittest((const signed __int32 *)HDEV + 10, 0xAu) )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v23);
    v3 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v3 = *ThreadWin32Thread) != 0 )
    {
      v5 = *(_BYTE *)(v3 + 328);
      *(_DWORD *)(v3 + 328) &= ~1u;
    }
    else
    {
      v5 = v21;
    }
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v23);
    v6 = *a1;
    v7 = v3;
    v22 = (struct REGION *)(*a1)[148];
    if ( !v22 )
    {
      if ( !_bittest((const signed __int32 *)HDEV + 10, 0xAu) )
      {
        v8 = HDEV + 20;
        v9 = *((_DWORD *)HDEV + 35);
        v10 = (HWND)v6[59];
        v25 = (struct tagSIZE)v6[64];
        v24 = 0LL;
        if ( v9 )
        {
          MetaSprite = pSpGetMetaSprite((const struct _SPRITESTATE *)(HDEV + 20), v10, 0LL, 0);
          if ( MetaSprite )
          {
            v20 = 0LL;
            if ( v18 )
            {
              do
              {
                bSpUpdateSprite(
                  *((struct SPRITE **)MetaSprite + v20 + 3),
                  0LL,
                  0LL,
                  &v25,
                  **a1,
                  &v24,
                  0,
                  0LL,
                  0x40200000u,
                  &v27);
                v20 = (unsigned int)(v20 + 1);
              }
              while ( (unsigned int)v20 < *((_DWORD *)v8 + 15) );
            }
          }
        }
        else if ( v10 )
        {
          for ( i = *((_QWORD *)HDEV + 11);
                i && (*(HWND *)(i + 72) != v10 || (*(_DWORD *)i & 0x400) != 0);
                i = *(_QWORD *)(i + 24) )
          {
            ;
          }
          if ( i )
            bSpUpdateSprite((struct SPRITE *)i, 0LL, 0LL, &v25, *v6, &v24, 0, 0LL, 0x40200000u, &v27);
        }
      }
      goto LABEL_16;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v22) == 1 )
      goto LABEL_16;
    RGNOBJ::bOffset((RGNOBJ *)&v22, (struct _POINTL *)(v13 + 8 * ((*(_DWORD *)(v13 + 40) & 1) + 127LL)));
    v32 = 0LL;
    v33 = 0;
    v34 = 1;
    v35 = 0LL;
    v31 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v28, v22, (struct ERECTL *)&v27, 1);
    memset_0(&v36, 0, 0x144uLL);
    if ( v30 )
    {
      if ( v30 != 1 )
      {
        if ( v30 == 3 )
        {
          v14 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v28, 0, 0, 4u, 0x14u);
LABEL_29:
          if ( !v14 )
            goto LABEL_31;
          do
          {
            v14 = XCLIPOBJ::bEnum((XCLIPOBJ *)v28, 0x144u, (char *)&v36, 0LL);
LABEL_31:
            for ( j = 0; j < v36; ++j )
            {
              v17 = (struct _RECTL *)&v37[j];
              if ( v17->left < v27.left )
                v17->left = v27.left;
              if ( v17->right > v27.right )
                v17->right = v27.right;
              if ( v17->top < v27.top )
                v17->top = v27.top;
              if ( v17->bottom > v27.bottom )
                v17->bottom = v27.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, (struct XDCOBJ *)a1, v17);
            }
          }
          while ( v14 );
        }
LABEL_16:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
        if ( v7 )
          *(_DWORD *)(v7 + 328) ^= (*(_DWORD *)(v7 + 328) ^ v5) & 1;
        goto LABEL_18;
      }
      v15 = v29;
    }
    else
    {
      v15 = v27;
    }
    v37[0] = v15;
    v36 = 1;
    v14 = 0;
    goto LABEL_29;
  }
  return 0LL;
}
