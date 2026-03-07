void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v3; // r13
  Gre::Base *v4; // rcx
  HDEV v5; // r14
  __int64 i; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // r15
  HRGN *v11; // rdi
  struct REGION *v12; // rdx
  struct REGION *v13; // rsi
  int v14; // edi
  int v15; // r9d
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  struct _POINTL *v20; // rsi
  struct REGION *v21; // r15
  Gre::Base *v22; // rcx
  __int64 v23; // rcx
  int v24; // r13d
  int v25; // r12d
  unsigned int v26; // esi
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // edx
  struct REGION *v31; // [rsp+38h] [rbp-D0h] BYREF
  struct _POINTL v32; // [rsp+40h] [rbp-C8h] BYREF
  HDEV v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  struct REGION *v36; // [rsp+60h] [rbp-A8h]
  struct _POINTL v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+88h] [rbp-80h]
  _BYTE v41[192]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v42[4]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v43[4]; // [rsp+168h] [rbp+60h] BYREF
  char v44[16]; // [rsp+16Ch] [rbp+64h] BYREF
  char v45; // [rsp+17Ch] [rbp+74h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]
  __int64 v47; // [rsp+1B8h] [rbp+B0h]
  int v48; // [rsp+1C0h] [rbp+B8h]
  int v49; // [rsp+1E8h] [rbp+E0h]
  __int64 v50; // [rsp+1F8h] [rbp+F0h]
  _BYTE v51[4]; // [rsp+208h] [rbp+100h] BYREF
  char v52[16]; // [rsp+20Ch] [rbp+104h] BYREF
  char v53; // [rsp+21Ch] [rbp+114h]
  __int64 v54; // [rsp+240h] [rbp+138h]
  __int64 v55; // [rsp+258h] [rbp+150h]
  int v56; // [rsp+260h] [rbp+158h]
  int v57; // [rsp+288h] [rbp+180h]
  __int64 v58; // [rsp+298h] [rbp+190h]
  _DWORD v59[84]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _DWORD v60[84]; // [rsp+3F8h] [rbp+2F0h] BYREF

  v33 = a1;
  v3 = a1;
  v32 = 0LL;
  memset_0(v59, 0, 0x144uLL);
  memset_0(v60, 0, 0x144uLL);
  v5 = v3 + 20;
  if ( *((_QWORD *)v3 + 11) )
  {
    if ( (a2 & 4) != 0 )
    {
      Gre::Base::Globals(v4);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(v3 + 20), 1);
    }
    for ( i = *((_QWORD *)v3 + 11); ; i = *(_QWORD *)(i + 24) )
    {
      if ( !i )
        return;
      v7 = *(_QWORD *)(i + 72);
      if ( v7 )
        break;
LABEL_31:
      ;
    }
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL)
      && ((v8 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v7,
           v10 = (_QWORD *)HMPkheFromPhe(v8),
           LOWORD(v7) = WORD1(v7) & 0x7FFF,
           (WORD1(v7) & 0x7FFF) == *(_WORD *)(v8 + 26))
       || (_WORD)v7 == 0x7FFF
       || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v9))
      && (*(_BYTE *)(v8 + 25) & 1) == 0
      && *(_BYTE *)(v8 + 24) == 1
      && *v10 )
    {
      v11 = (HRGN *)(v5 + 264);
      VisrgnFromWindow(*v10, 0LL, v5 + 264);
    }
    else
    {
      v11 = (HRGN *)(v5 + 264);
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v39, *v11, 0, 0);
    if ( !v39[0] || !v31 || !RGNOBJ::bCopy((RGNOBJ *)&v31, (struct RGNOBJ *)v39) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
LABEL_27:
      if ( !v40 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v39);
      if ( v39[0] )
        _InterlockedDecrement((volatile signed __int32 *)(v39[0] + 12LL));
      goto LABEL_31;
    }
    v32.x = -*((_DWORD *)v3 + 640);
    v32.y = -*((_DWORD *)v3 + 641);
    RGNOBJ::bOffset((RGNOBJ *)&v31, &v32);
    v12 = *(struct REGION **)(i + 184);
    v13 = v31;
    v14 = 1;
    v36 = v31;
    if ( v12 )
    {
      v15 = *(_DWORD *)(i + 116);
      v16 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v42[0] = *(_DWORD *)(i + 112);
      v42[2] = v16;
      v17 = v15 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v42[1] = v15;
      v42[3] = v17;
      v47 = 0LL;
      v48 = 0;
      v49 = 1;
      v50 = 0LL;
      v46 = 0LL;
      v55 = 0LL;
      v56 = 0;
      v57 = 1;
      v58 = 0LL;
      v54 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v43, v12, (struct ERECTL *)v42, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v51, v13, (struct ERECTL *)v42, 0);
      ERECTL::bEmpty((ERECTL *)v44);
      v18 = ERECTL::bEmpty((ERECTL *)v52);
      if ( v19 == v18 )
      {
        if ( !v45 )
        {
          v20 = (struct _POINTL *)(i + 112);
          if ( !v53 )
            goto LABEL_21;
        }
        if ( v45 == v53 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v43, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v51, 0, 0, 4u, 0x64u);
          v24 = 1;
          v25 = 1;
          while ( 1 )
          {
            v26 = 0;
            v27 = 0;
            v59[0] = 0;
            v60[0] = 0;
            if ( v24 )
            {
              v28 = XCLIPOBJ::bEnum((XCLIPOBJ *)v43, 0x144u, (char *)v59, 0LL);
              v26 = v59[0];
              v24 = v28;
            }
            if ( v25 )
            {
              v29 = XCLIPOBJ::bEnum((XCLIPOBJ *)v51, 0x144u, (char *)v60, 0LL);
              v27 = v60[0];
              v25 = v29;
            }
            if ( v26 != v27 )
              break;
            v30 = 0;
            v14 = 1;
            if ( v26 )
            {
              while ( v60[4 * v30 + 1] == v59[4 * v30 + 1]
                   && v60[4 * v30 + 2] == v59[4 * v30 + 2]
                   && v60[4 * v30 + 3] == v59[4 * v30 + 3]
                   && v60[4 * v30 + 4] == v59[4 * v30 + 4] )
              {
                if ( ++v30 >= v26 )
                  goto LABEL_53;
              }
              break;
            }
LABEL_53:
            if ( !v24 )
            {
              v20 = (struct _POINTL *)(i + 112);
              if ( !v25 )
                goto LABEL_58;
            }
          }
          v20 = (struct _POINTL *)(i + 112);
          v14 = 0;
LABEL_58:
          v3 = v33;
          goto LABEL_21;
        }
      }
      v14 = 0;
      v20 = (struct _POINTL *)(i + 112);
    }
    else
    {
      v14 = 0;
      v20 = (struct _POINTL *)(i + 112);
    }
LABEL_21:
    v35 = *(_QWORD *)(i + 184);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
    v21 = v36;
    *(_QWORD *)(i + 184) = v36;
    *((_DWORD *)v21 + 18) = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v22) + 1596);
    v34 = *(_QWORD *)v5;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v38, (struct PDEVOBJ *)&v34);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v41, (struct PDEVOBJ *)&v34);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v31, (struct _RECTL *)(v5 + 10)) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, v20, 0, 0);
    if ( *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v23) + 32) + 23664LL) )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v14 )
    {
      if ( *((_QWORD *)v5 + 129) )
      {
        v37 = 0LL;
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v5, &v37, (struct _RECTL *)(i + 80), 0LL, 1);
      }
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v41);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v38);
    goto LABEL_27;
  }
}
