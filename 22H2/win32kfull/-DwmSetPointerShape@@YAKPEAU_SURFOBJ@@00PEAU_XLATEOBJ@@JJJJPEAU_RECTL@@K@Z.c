/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0133A6C
 * Callers:
 *     EngSetPointerShape @ 0x1C0133970 (EngSetPointerShape.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C005AD50 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00A71EC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00AE284 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C8FF0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00CD42C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0133EB8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0134710 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0135018 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall DwmSetPointerShape(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagRECT *a9,
        unsigned int a10)
{
  HDEV hdev; // rbx
  struct _SURFOBJ *v13; // r13
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  struct Gre::Base::SESSION_GLOBALS *v15; // rdi
  unsigned int v16; // r12d
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  char v21; // r14
  unsigned int v22; // esi
  unsigned int v23; // r15d
  __int64 v24; // rcx
  struct _RECTL *v25; // rbx
  int v26; // eax
  struct SPRITE *SpriteInternal; // rax
  __int64 v28; // rcx
  Gre::Base *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  Gre::Base *v32; // rdx
  Gre::Base *v33; // rsi
  __int64 NeighborSprite; // rax
  Gre::Base *v35; // r15
  struct DWMSPRITE *v36; // rbx
  Gre::Base *v37; // rbx
  __int64 v38; // rsi
  struct _XLATEOBJ *v39; // r9
  struct tagRECT *v40; // rdx
  struct _RECTL *v41; // r9
  struct DWMSPRITE *v43; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v44[8]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v45[32]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v46; // [rsp+98h] [rbp-11h]
  struct _XLATEOBJ *v50; // [rsp+110h] [rbp+67h] BYREF

  v50 = a4;
  hdev = a1->hdev;
  v13 = a1;
  v14 = Gre::Base::Globals((Gre::Base *)a1);
  v15 = v14;
  v16 = 2;
  if ( *(_DWORD *)(*((_QWORD *)v14 + 38) + 100LL) )
  {
    if ( a2 || a3 )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v45);
      v21 = a10;
      v46 = 0LL;
      v22 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        v23 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v23 = 0;
      v24 = *((_QWORD *)v15 + 9);
      LODWORD(v50) = 0x1000000;
      GreAcquireSemaphore(v24);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v15 + 9), 7LL);
      if ( *(_DWORD *)(*((_QWORD *)v15 + 38) + 160LL) < v22 )
      {
        v25 = (struct _RECTL *)a9;
        do
        {
          if ( a7 == -1 && a8 == -1 || (v26 = 1, (v21 & 0x40) != 0) )
            v26 = 0;
          SpriteInternal = GreCreateSpriteInternal((Gre::Base *)v13->hdev, 0LL, v25, 0LL, 0x9900u, 1, v26, 0, 0, 0, 0LL);
          if ( !SpriteInternal )
            break;
          v28 = *((_QWORD *)v15 + 38);
          if ( !*(_QWORD *)(v28 + 136) )
            *(_QWORD *)(v28 + 136) = SpriteInternal;
          *(_QWORD *)(*((_QWORD *)v15 + 38) + 144LL) = SpriteInternal;
          ++*(_DWORD *)(*((_QWORD *)v15 + 38) + 160LL);
        }
        while ( *(_DWORD *)(*((_QWORD *)v15 + 38) + 160LL) < v22 );
      }
      while ( 1 )
      {
        v30 = *((_QWORD *)v15 + 38);
        if ( *(_DWORD *)(v30 + 160) <= v22 )
          break;
        v29 = *(Gre::Base **)(v30 + 144);
        *(_QWORD *)(*((_QWORD *)v15 + 38) + 144LL) = hspGetNeighborSprite(v29, 1, 0);
        GreDeleteSpriteInternal((Gre::Base *)v13->hdev, 0LL, (HSPRITE)v29, 1);
        --*(_DWORD *)(*((_QWORD *)v15 + 38) + 160LL);
      }
      *(_DWORD *)(v30 + 168) = v23;
      v31 = *((_QWORD *)v15 + 38);
      v32 = *(Gre::Base **)(v31 + 136);
      if ( v32 )
      {
        v33 = *(Gre::Base **)(v31 + 144);
        if ( v33 != v32 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v33, 1, 0);
            v43 = 0LL;
            v35 = (Gre::Base *)NeighborSprite;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v43, (HSPRITE)v33);
            v36 = v43;
            if ( v43 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v44, (struct DWMSPRITE *)((char *)v43 + 88));
              vSpDwmUpdateSpriteVisibility(v36, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v44);
            }
            v33 = v35;
            if ( v36 )
              DEC_SHARE_REF_CNT(v36);
            v31 = *((_QWORD *)v15 + 38);
          }
          while ( v35 != *(Gre::Base **)(v31 + 136) );
        }
        v37 = *(Gre::Base **)(v31 + 144);
        if ( v37 )
        {
          while ( 1 )
          {
            v38 = hspGetNeighborSprite(v37, 1, 0);
            if ( !(unsigned int)bSpDwmUpdateCursor(
                                  (HSPRITE)v37,
                                  a2,
                                  a3,
                                  v39,
                                  (struct _RECTL *)a9,
                                  (struct _BLENDFUNCTION *)((unsigned __int64)&v50 & -(__int64)((v21 & 0x40) != 0))) )
              break;
            v37 = (Gre::Base *)v38;
            if ( !v38 )
              goto LABEL_39;
          }
          v16 = 0;
        }
LABEL_39:
        v40 = a9;
        v13 = a1;
        *(_DWORD *)(*((_QWORD *)v15 + 38) + 152LL) = a5 - a9->left;
        *(_DWORD *)(*((_QWORD *)v15 + 38) + 156LL) = a6 - v40->top;
      }
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
      GreReleaseSemaphoreInternal(*((_QWORD *)v15 + 9));
      DwmMovePointer(v13, a7, a8, v41, (v21 & 0x60) != 0 ? 4 : 0);
      if ( v46 )
        _InterlockedDecrement((volatile signed __int32 *)(v46 + 12));
      v46 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v45);
    }
    else
    {
      GreAcquireSemaphore(*((_QWORD *)v14 + 9));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v15 + 9), 7LL);
      v17 = hdev + 876;
      v18 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 || (v19 = (_QWORD *)v17[1], (_QWORD *)*v19 != v17) )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v17[1] = v17;
      *v17 = v17;
      v20 = *((_QWORD *)v15 + 38);
      if ( *(_QWORD *)(v20 + 104) == v20 + 104 && *(_QWORD *)(v20 + 120) == v20 + 120 )
        vSpDwmDestroyCursorSprites(v13->hdev);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
      GreReleaseSemaphoreInternal(*((_QWORD *)v15 + 9));
    }
  }
  return v16;
}
