void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  int v5; // ebx
  int v6; // r13d
  struct _SURFOBJ *v7; // rsi
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  HDEV hdev; // r14
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rdx
  __int64 v15; // rcx
  __int64 **v16; // rdx
  __int64 v17; // rdx
  HSPRITE v18; // rdi
  struct DWMSPRITE *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // r12
  HSPRITE v24; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 v26; // rdi
  struct _RECTL *v27; // rbx
  __int64 v28; // rax
  Gre::Base *v29; // rsi
  __int64 v30; // r8
  struct DWMSPRITE *v31; // rbx
  __int64 v32; // rax
  Gre::Base *v33; // r13
  __int64 v34; // r8
  struct DWMSPRITE *v35; // rsi
  __int64 **v36; // rdx
  __int64 v37; // rcx
  __int64 **v38; // rdx
  __int64 v39; // rdi
  Gre::Base *v40; // rdi
  __int64 v41; // r8
  struct DWMSPRITE *v42; // rbx
  __int64 v43; // rax
  HDEV v44; // rcx
  __int64 v45; // [rsp+88h] [rbp-31h] BYREF
  struct tagPOINT v46; // [rsp+90h] [rbp-29h] BYREF
  struct DWMSPRITE *v47; // [rsp+98h] [rbp-21h] BYREF
  struct DWMSPRITE *v48; // [rsp+A0h] [rbp-19h] BYREF
  struct DWMSPRITE *v49; // [rsp+A8h] [rbp-11h] BYREF
  struct DWMSPRITE *v50; // [rsp+B0h] [rbp-9h] BYREF
  _BYTE v51[80]; // [rsp+B8h] [rbp-1h] BYREF
  struct _SURFOBJ *v52; // [rsp+118h] [rbp+5Fh] BYREF
  int v53; // [rsp+120h] [rbp+67h]
  int v54; // [rsp+128h] [rbp+6Fh]
  struct _RECTL *v55; // [rsp+130h] [rbp+77h] BYREF

  v55 = a4;
  v54 = a3;
  v53 = a2;
  v52 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  hdev = v7->hdev;
  v10 = v8;
  v11 = *((_QWORD *)v8 + 38);
  if ( *(_DWORD *)(v11 + 100) && *(_QWORD *)(v11 + 136) )
  {
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( *(_QWORD *)(*((_QWORD *)v10 + 38) + 144LL) == *(_QWORD *)(*((_QWORD *)v10 + 38) + 136LL) )
      goto LABEL_4;
    v22 = *((_QWORD *)v10 + 38);
    v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)(v23 - *(_DWORD *)(v22 + 164)) < *(_DWORD *)(v22 + 168) )
      goto LABEL_4;
    v24 = *(HSPRITE *)(v22 + 136);
    v45 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v45, v24);
    NeighborSprite = (HSPRITE)hspGetNeighborSprite(*(Gre::Base **)(*((_QWORD *)v10 + 38) + 136LL), 0, 0);
    v55 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v55, NeighborSprite);
    v26 = v45;
    v27 = v55;
    if ( !v45 || !v55 )
    {
LABEL_34:
      if ( v27 )
      {
        _InterlockedDecrement(&v27->bottom);
        v26 = v45;
      }
      v5 = v54;
      if ( v26 )
        _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
LABEL_4:
      v12 = (__int64 *)(hdev + 876);
      v13 = (__int64 *)*((_QWORD *)hdev + 438);
      if ( v6 == -1 )
      {
        if ( (__int64 *)v13[1] == v12 )
        {
          v36 = (__int64 **)*((_QWORD *)hdev + 439);
          if ( *v36 == v12 )
          {
            *v36 = v13;
            v13[1] = (__int64)v36;
            v37 = *((_QWORD *)v10 + 38) + 104LL;
            v38 = *(__int64 ***)(*((_QWORD *)v10 + 38) + 112LL);
            if ( *v38 == (__int64 *)v37 )
            {
              *v12 = v37;
              *((_QWORD *)hdev + 439) = v38;
              *v38 = v12;
              *(_QWORD *)(v37 + 8) = v12;
              v39 = *((_QWORD *)v10 + 38);
              if ( *(_QWORD *)(v39 + 120) == v39 + 120 )
              {
                v40 = *(Gre::Base **)(v39 + 144);
                if ( v40 )
                {
                  do
                  {
                    v49 = 0LL;
                    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v49, (HSPRITE)v40);
                    v42 = v49;
                    if ( v49 )
                      vSpDwmUpdateSpriteVisibility(v49, 0LL, v41);
                    v43 = hspGetNeighborSprite(v40, 1, 0);
                    v40 = (Gre::Base *)v43;
                    if ( v42 )
                      _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
                  }
                  while ( v43 );
                }
              }
              goto LABEL_13;
            }
          }
        }
      }
      else if ( (__int64 *)v13[1] == v12 )
      {
        v14 = (__int64 **)*((_QWORD *)hdev + 439);
        if ( *v14 == v12 )
        {
          *v14 = v13;
          v13[1] = (__int64)v14;
          v15 = *((_QWORD *)v10 + 38) + 120LL;
          v16 = *(__int64 ***)(*((_QWORD *)v10 + 38) + 128LL);
          if ( *v16 == (__int64 *)v15 )
          {
            *v12 = v15;
            *((_QWORD *)hdev + 439) = v16;
            *v16 = v12;
            *(_QWORD *)(v15 + 8) = v12;
            v17 = *((_QWORD *)v10 + 38);
            v46.x = v6 + *((_DWORD *)hdev + 640) - *(_DWORD *)(v17 + 152);
            v46.y = v5 + *((_DWORD *)hdev + 641) - *(_DWORD *)(v17 + 156);
            v18 = *(HSPRITE *)(v17 + 136);
            DrvPixelSpaceToUniformSpacePoint(&v46, &v46.y);
            GreUpdateSprite(v7->hdev, 0LL, v18, 0LL, &v46, 0LL, 0LL, 0LL, 0, 0LL, 0x40200000u, 0LL, 0LL, 1, 0, 0);
            v50 = 0LL;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v50, v18);
            v19 = v50;
            if ( v50 )
            {
              if ( (a5 & 4) != 0 )
              {
                v44 = v7->hdev;
                LODWORD(v52) = 0x1000000;
                GreUpdateSprite(
                  v44,
                  0LL,
                  v18,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0,
                  (struct _BLENDFUNCTION *)&v52,
                  0x21200002u,
                  0LL,
                  0LL,
                  1,
                  0,
                  0);
              }
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v51, (struct DWMSPRITE *)((char *)v19 + 88));
              LOBYTE(v20) = 1;
              vSpDwmUpdateSpriteVisibility(v19, v20, v21);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v51);
              if ( v19 )
                DEC_SHARE_REF_CNT(v19);
            }
LABEL_13:
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
            GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
            return;
          }
        }
      }
      __fastfail(3u);
    }
    if ( v55[3].right == *(_DWORD *)(v45 + 56) && v55[3].bottom == *(_DWORD *)(v45 + 60) )
    {
      v28 = *((_QWORD *)v10 + 38);
      v29 = *(Gre::Base **)(v28 + 144);
      if ( v29 == *(Gre::Base **)(v28 + 136) )
      {
LABEL_33:
        v7 = v52;
        *(_DWORD *)(*((_QWORD *)v10 + 38) + 164LL) = v23;
        goto LABEL_34;
      }
      while ( 1 )
      {
        v47 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v47, (HSPRITE)v29);
        v31 = v47;
        if ( v47 )
        {
          if ( (*((_DWORD *)v47 + 35) & 1) != 0 )
            break;
        }
        v29 = (Gre::Base *)hspGetNeighborSprite(v29, 1, 0);
        if ( v31 )
          _InterlockedDecrement((volatile signed __int32 *)v31 + 3);
        if ( v29 == *(Gre::Base **)(*((_QWORD *)v10 + 38) + 136LL) )
          goto LABEL_32;
      }
      vSpDwmUpdateSpriteVisibility(v47, 0LL, v30);
      _InterlockedDecrement((volatile signed __int32 *)v31 + 3);
    }
    else
    {
      v32 = *((_QWORD *)v10 + 38);
      v48 = 0LL;
      v33 = *(Gre::Base **)(v32 + 144);
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v48, (HSPRITE)v33);
      v35 = v48;
      if ( v48 )
        vSpDwmUpdateSpriteVisibility(v48, 0LL, v34);
      *(_QWORD *)(*((_QWORD *)v10 + 38) + 144LL) = hspGetNeighborSprite(v33, 1, 0);
      vSpDwmZorderSprite(v33, *(HSPRITE *)(*((_QWORD *)v10 + 38) + 136LL));
      *(_QWORD *)(*((_QWORD *)v10 + 38) + 136LL) = v33;
      v6 = v53;
      if ( !v35 )
        goto LABEL_33;
      _InterlockedDecrement((volatile signed __int32 *)v35 + 3);
    }
LABEL_32:
    v27 = v55;
    v26 = v45;
    goto LABEL_33;
  }
}
