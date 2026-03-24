/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00EBA74
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00EB5DC (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     EngpMovePointer @ 0x1C0136230 (EngpMovePointer.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0017464 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BCDE8 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BCE1C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00BE06C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00BE408 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00EC030 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0115830 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0169E84 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  HDEV hdev; // rbx
  unsigned __int64 v9; // rsi
  HSPRITE v10; // rdi
  HSPRITE NeighborSprite; // rdi
  struct DwmState *v12; // rcx
  HSPRITE v13; // rdi
  _BYTE *v14; // rcx
  HSPRITE v15; // rdi
  struct DwmState *v16; // rax
  __int64 v17; // rcx
  struct DwmState **v18; // rdx
  struct DwmState **v19; // rdx
  HSPRITE v20; // rbx
  struct DwmState **v21; // rdx
  struct DwmState **v22; // rdx
  HSPRITE v23; // rdi
  struct DWMSPRITE *v24; // rbx
  HDEV v25; // rcx
  __int64 v26; // rdx
  struct DWMSPRITE *v27; // [rsp+80h] [rbp-80h] BYREF
  char v28[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[32]; // [rsp+90h] [rbp-70h] BYREF
  struct DWMSPRITE *v30; // [rsp+B0h] [rbp-50h]
  _BYTE v31[32]; // [rsp+B8h] [rbp-48h] BYREF
  struct DWMSPRITE *v32; // [rsp+D8h] [rbp-28h]
  _BYTE v33[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h]
  _BYTE v35[32]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v36; // [rsp+128h] [rbp+28h]
  _BYTE v37[32]; // [rsp+130h] [rbp+30h] BYREF
  struct DWMSPRITE *v38; // [rsp+150h] [rbp+50h]
  struct tagPOINT v39; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL *v40; // [rsp+1B8h] [rbp+B8h] BYREF

  v40 = a4;
  hdev = a1->hdev;
  if ( *((_DWORD *)g_pDwmState + 25) && *((_QWORD *)g_pDwmState + 17) )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( *((_QWORD *)g_pDwmState + 18) == *((_QWORD *)g_pDwmState + 17) )
      goto LABEL_31;
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)(v9 - *((_DWORD *)g_pDwmState + 41)) < *((_DWORD *)g_pDwmState + 42) )
      goto LABEL_31;
    v10 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v35);
    v36 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v35, v10);
    NeighborSprite = hspGetNeighborSprite(*((HSPRITE *)g_pDwmState + 17), 0, 0);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v33);
    v34 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v33, NeighborSprite);
    if ( v36 )
    {
      if ( !v34 )
      {
LABEL_28:
        v34 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v33);
        if ( v36 )
          _InterlockedDecrement((volatile signed __int32 *)(v36 + 12));
        v36 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v35);
LABEL_31:
        v16 = (struct DwmState *)(hdev + 882);
        v17 = *((_QWORD *)hdev + 441);
        if ( a2 == -1 )
        {
          if ( *(struct DwmState **)(v17 + 8) == v16 )
          {
            v18 = (struct DwmState **)*((_QWORD *)hdev + 442);
            if ( *v18 == v16 )
            {
              *v18 = (struct DwmState *)v17;
              *(_QWORD *)(v17 + 8) = v18;
              v19 = (struct DwmState **)*((_QWORD *)g_pDwmState + 14);
              if ( *v19 == (struct DwmState *)((char *)g_pDwmState + 104) )
              {
                *(_QWORD *)v16 = (char *)g_pDwmState + 104;
                *((_QWORD *)hdev + 442) = v19;
                *v19 = v16;
                *((_QWORD *)g_pDwmState + 14) = v16;
                if ( *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
                {
                  v20 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
                  while ( v20 )
                  {
                    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v37);
                    v38 = 0LL;
                    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v37, v20);
                    if ( v38 )
                      vSpDwmUpdateSpriteVisibility(v38, 0);
                    v20 = hspGetNeighborSprite(v20, 1, 0);
                    if ( v38 )
                      _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
                    v38 = 0LL;
                    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
                  }
                }
LABEL_51:
                EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
                GreReleaseSemaphoreInternal(ghsemDwmState);
                return;
              }
            }
          }
        }
        else if ( *(struct DwmState **)(v17 + 8) == v16 )
        {
          v21 = (struct DwmState **)*((_QWORD *)hdev + 442);
          if ( *v21 == v16 )
          {
            *v21 = (struct DwmState *)v17;
            *(_QWORD *)(v17 + 8) = v21;
            v22 = (struct DwmState **)*((_QWORD *)g_pDwmState + 16);
            if ( *v22 == (struct DwmState *)((char *)g_pDwmState + 120) )
            {
              *(_QWORD *)v16 = (char *)g_pDwmState + 120;
              *((_QWORD *)hdev + 442) = v22;
              *v22 = v16;
              *((_QWORD *)g_pDwmState + 16) = v16;
              v39.x = a2 + *((_DWORD *)hdev + 646) - *((_DWORD *)g_pDwmState + 38);
              v39.y = a3 + *((_DWORD *)hdev + 647) - *((_DWORD *)g_pDwmState + 39);
              v23 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
              DrvPixelSpaceToUniformSpacePoint(&v39, &v39.y);
              GreUpdateSprite(a1->hdev, 0LL, v23, 0LL, &v39, 0LL, 0LL, 0LL, 0, 0LL, 0x40200000u, 0LL, 0LL, 1, 0);
              v27 = 0LL;
              DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v27, v23);
              v24 = v27;
              if ( v27 )
              {
                if ( (a5 & 4) != 0 )
                {
                  v25 = a1->hdev;
                  LODWORD(v40) = 0x1000000;
                  GreUpdateSprite(
                    v25,
                    0LL,
                    v23,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    0,
                    (struct _BLENDFUNCTION *)&v40,
                    0x21200002u,
                    0LL,
                    0LL,
                    1,
                    0);
                }
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v28, (struct DWMSPRITE *)((char *)v24 + 88));
                vSpDwmUpdateSpriteVisibility(v24, 1);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v28);
                DEC_SHARE_REF_CNT(v24, v26);
              }
              goto LABEL_51;
            }
          }
        }
        __fastfail(3u);
      }
      if ( *(_DWORD *)(v34 + 56) == *(_DWORD *)(v36 + 56) && *(_DWORD *)(v34 + 60) == *(_DWORD *)(v36 + 60) )
      {
        v12 = g_pDwmState;
        v13 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        while ( v13 != *((HSPRITE *)v12 + 17) )
        {
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v29);
          v30 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v29, v13);
          if ( v30 && (*((_DWORD *)v30 + 41) & 1) != 0 )
          {
            vSpDwmUpdateSpriteVisibility(v30, 0);
            if ( v30 )
              _InterlockedDecrement((volatile signed __int32 *)v30 + 3);
            v30 = 0LL;
            v14 = v29;
            goto LABEL_24;
          }
          v13 = hspGetNeighborSprite(v13, 1, 0);
          if ( v30 )
            _InterlockedDecrement((volatile signed __int32 *)v30 + 3);
          v30 = 0LL;
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v29);
          v12 = g_pDwmState;
        }
      }
      else
      {
        v15 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v31);
        v32 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v31, v15);
        if ( v32 )
          vSpDwmUpdateSpriteVisibility(v32, 0);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v15, 1, 0);
        vSpDwmZorderSprite(v15, *((HSPRITE *)g_pDwmState + 17));
        *((_QWORD *)g_pDwmState + 17) = v15;
        if ( v32 )
          _InterlockedDecrement((volatile signed __int32 *)v32 + 3);
        v32 = 0LL;
        v14 = v31;
LABEL_24:
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
      }
      *((_DWORD *)g_pDwmState + 41) = v9;
    }
    if ( v34 )
      _InterlockedDecrement((volatile signed __int32 *)(v34 + 12));
    goto LABEL_28;
  }
}
