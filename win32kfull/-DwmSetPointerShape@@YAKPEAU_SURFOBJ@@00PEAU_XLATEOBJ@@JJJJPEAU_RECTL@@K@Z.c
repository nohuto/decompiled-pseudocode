/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0127FDC
 * Callers:
 *     EngSetPointerShape @ 0x1C0127EE0 (EngSetPointerShape.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00243E4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C002A9BC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C007F064 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00DDA98 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00E6724 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C012834C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0128ACC (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0128F08 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
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
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  unsigned int v15; // r15d
  struct Gre::Base::SESSION_GLOBALS *v16; // rdi
  char v17; // bp
  unsigned int v18; // esi
  unsigned int v19; // r14d
  __int64 v20; // rcx
  struct tagRECT *v21; // rbx
  int v22; // eax
  HSPRITE SpriteInternal; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  Gre::Base *v27; // rdx
  Gre::Base *v28; // rsi
  Gre::Base *v29; // rbx
  struct _SURFOBJ *v30; // r14
  __int64 v31; // rsi
  struct _XLATEOBJ *v32; // r9
  struct tagRECT *v33; // rdx
  struct _RECTL *v34; // r9
  _QWORD *v36; // rbx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  Gre::Base *v40; // rbx
  __int64 NeighborSprite; // rax
  Gre::Base *v42; // r14
  struct DWMSPRITE *v43; // rbx
  __int64 v44; // r8
  _BYTE v45[88]; // [rsp+60h] [rbp-58h] BYREF
  struct DWMSPRITE *v46; // [rsp+C0h] [rbp+8h] BYREF
  struct _SURFOBJ *v47; // [rsp+C8h] [rbp+10h]
  struct _SURFOBJ *v48; // [rsp+D0h] [rbp+18h]
  struct _XLATEOBJ *v49; // [rsp+D8h] [rbp+20h] BYREF

  v49 = a4;
  v48 = a3;
  v47 = a2;
  hdev = a1->hdev;
  v14 = Gre::Base::Globals((Gre::Base *)a1);
  v15 = 2;
  v16 = v14;
  if ( *(_DWORD *)(*((_QWORD *)v14 + 38) + 100LL) )
  {
    if ( a2 || a3 )
    {
      v17 = a10;
      v18 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        v19 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v19 = 0;
      v20 = *((_QWORD *)v14 + 9);
      LODWORD(v49) = 0x1000000;
      GreAcquireSemaphore(v20);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v16 + 9), 7LL);
      if ( *(_DWORD *)(*((_QWORD *)v16 + 38) + 160LL) < v18 )
      {
        v21 = a9;
        do
        {
          if ( a7 == -1 && a8 == -1 || (v22 = 1, (v17 & 0x40) != 0) )
            v22 = 0;
          SpriteInternal = GreCreateSpriteInternal((Gre::Base *)a1->hdev, 0LL, v21, 0LL, 0x9900u, 1, v22, 0, 0, 0, 0LL);
          if ( !SpriteInternal )
            break;
          v24 = *((_QWORD *)v16 + 38);
          if ( !*(_QWORD *)(v24 + 136) )
            *(_QWORD *)(v24 + 136) = SpriteInternal;
          *(_QWORD *)(*((_QWORD *)v16 + 38) + 144LL) = SpriteInternal;
          ++*(_DWORD *)(*((_QWORD *)v16 + 38) + 160LL);
        }
        while ( *(_DWORD *)(*((_QWORD *)v16 + 38) + 160LL) < v18 );
      }
      while ( 1 )
      {
        v25 = *((_QWORD *)v16 + 38);
        if ( *(_DWORD *)(v25 + 160) <= v18 )
          break;
        v40 = *(Gre::Base **)(v25 + 144);
        *(_QWORD *)(*((_QWORD *)v16 + 38) + 144LL) = hspGetNeighborSprite(v40, 1, 0);
        GreDeleteSpriteInternal((Gre::Base *)a1->hdev, 0LL, (HSPRITE)v40, 1);
        --*(_DWORD *)(*((_QWORD *)v16 + 38) + 160LL);
      }
      *(_DWORD *)(v25 + 168) = v19;
      v26 = *((_QWORD *)v16 + 38);
      v27 = *(Gre::Base **)(v26 + 136);
      if ( v27 )
      {
        v28 = *(Gre::Base **)(v26 + 144);
        if ( v28 != v27 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v28, 1, 0);
            v46 = 0LL;
            v42 = (Gre::Base *)NeighborSprite;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v46, (HSPRITE)v28);
            v43 = v46;
            if ( v46 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v45, (struct DWMSPRITE *)((char *)v46 + 88));
              vSpDwmUpdateSpriteVisibility(v43, 0LL, v44);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v45);
            }
            v28 = v42;
            if ( v43 )
              DEC_SHARE_REF_CNT(v43);
            v26 = *((_QWORD *)v16 + 38);
          }
          while ( v42 != *(Gre::Base **)(v26 + 136) );
        }
        v29 = *(Gre::Base **)(v26 + 144);
        if ( v29 )
        {
          v30 = v48;
          while ( 1 )
          {
            v31 = hspGetNeighborSprite(v29, 1, 0);
            if ( !(unsigned int)bSpDwmUpdateCursor(
                                  (HSPRITE)v29,
                                  v47,
                                  v30,
                                  v32,
                                  (struct _RECTL *)a9,
                                  (struct _BLENDFUNCTION *)((unsigned __int64)&v49 & -(__int64)((v17 & 0x40) != 0))) )
              break;
            v29 = (Gre::Base *)v31;
            if ( !v31 )
              goto LABEL_21;
          }
          v15 = 0;
        }
LABEL_21:
        v33 = a9;
        *(_DWORD *)(*((_QWORD *)v16 + 38) + 152LL) = a5 - a9->left;
        *(_DWORD *)(*((_QWORD *)v16 + 38) + 156LL) = a6 - v33->top;
      }
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
      GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 9));
      DwmMovePointer(a1, a7, a8, v34, (v17 & 0x60) != 0 ? 4 : 0);
    }
    else
    {
      GreAcquireSemaphore(*((_QWORD *)v14 + 9));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v16 + 9), 7LL);
      v36 = hdev + 876;
      v37 = *v36;
      if ( *(_QWORD **)(*v36 + 8LL) != v36 || (v38 = (_QWORD *)v36[1], (_QWORD *)*v38 != v36) )
        __fastfail(3u);
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
      v36[1] = v36;
      *v36 = v36;
      v39 = *((_QWORD *)v16 + 38);
      if ( *(_QWORD *)(v39 + 104) == v39 + 104 && *(_QWORD *)(v39 + 120) == v39 + 120 )
        vSpDwmDestroyCursorSprites(a1->hdev);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
      GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 9));
    }
  }
  return v15;
}
