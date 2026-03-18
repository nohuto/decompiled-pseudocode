/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0134710
 * Callers:
 *     EngpMovePointer @ 0x1C0133898 (EngpMovePointer.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0133A6C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C005AD50 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00A71EC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00AE284 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C8A3C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00D4F20 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     GreUpdateSprite @ 0x1C00D5F08 (GreUpdateSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  HDEV hdev; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  HSPRITE v14; // rdi
  HSPRITE NeighborSprite; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  Gre::Base *v18; // rdi
  _BYTE *v19; // rcx
  Gre::Base *v20; // rdi
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 **v23; // rdx
  __int64 v24; // rcx
  __int64 **v25; // rdx
  __int64 v26; // rbx
  Gre::Base *v27; // rbx
  __int64 **v28; // rdx
  __int64 v29; // rcx
  __int64 **v30; // rdx
  __int64 v31; // rdx
  HSPRITE v32; // rdi
  struct DWMSPRITE *v33; // rbx
  HDEV v34; // rcx
  struct DWMSPRITE *v35; // [rsp+80h] [rbp-80h] BYREF
  char v36[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[32]; // [rsp+90h] [rbp-70h] BYREF
  struct DWMSPRITE *v38; // [rsp+B0h] [rbp-50h]
  _BYTE v39[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-28h]
  _BYTE v41[32]; // [rsp+E0h] [rbp-20h] BYREF
  struct DWMSPRITE *v42; // [rsp+100h] [rbp+0h]
  _BYTE v43[32]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v44; // [rsp+128h] [rbp+28h]
  _BYTE v45[32]; // [rsp+130h] [rbp+30h] BYREF
  struct DWMSPRITE *v46; // [rsp+150h] [rbp+50h]
  struct tagPOINT v47; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL *v48; // [rsp+1B8h] [rbp+B8h] BYREF

  v48 = a4;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  hdev = a1->hdev;
  v10 = v8;
  v11 = *((_QWORD *)v8 + 38);
  if ( *(_DWORD *)(v11 + 100) && *(_QWORD *)(v11 + 136) )
  {
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( *(_QWORD *)(*((_QWORD *)v10 + 38) + 144LL) != *(_QWORD *)(*((_QWORD *)v10 + 38) + 136LL) )
    {
      v12 = *((_QWORD *)v10 + 38);
      v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v13 - *(_DWORD *)(v12 + 164)) >= *(_DWORD *)(v12 + 168) )
      {
        v14 = *(HSPRITE *)(v12 + 136);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v43);
        v44 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v43, v14);
        NeighborSprite = (HSPRITE)hspGetNeighborSprite(*(Gre::Base **)(*((_QWORD *)v10 + 38) + 136LL), 0, 0);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v39);
        v40 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v39, NeighborSprite);
        v16 = v40;
        if ( v44 && v40 )
        {
          if ( *(_DWORD *)(v40 + 56) == *(_DWORD *)(v44 + 56) && *(_DWORD *)(v40 + 60) == *(_DWORD *)(v44 + 60) )
          {
            v17 = *((_QWORD *)v10 + 38);
            v18 = *(Gre::Base **)(v17 + 144);
            while ( v18 != *(Gre::Base **)(v17 + 136) )
            {
              UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v37);
              v38 = 0LL;
              DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v37, (HSPRITE)v18);
              if ( v38 && (*((_DWORD *)v38 + 35) & 1) != 0 )
              {
                vSpDwmUpdateSpriteVisibility(v38, 0);
                if ( v38 )
                  _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
                v38 = 0LL;
                v19 = v37;
                goto LABEL_24;
              }
              v18 = (Gre::Base *)hspGetNeighborSprite(v18, 1, 0);
              if ( v38 )
                _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
              v38 = 0LL;
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
              v17 = *((_QWORD *)v10 + 38);
            }
          }
          else
          {
            v20 = *(Gre::Base **)(*((_QWORD *)v10 + 38) + 144LL);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v41);
            v42 = 0LL;
            DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v41, (HSPRITE)v20);
            if ( v42 )
              vSpDwmUpdateSpriteVisibility(v42, 0);
            *(_QWORD *)(*((_QWORD *)v10 + 38) + 144LL) = hspGetNeighborSprite(v20, 1, 0);
            vSpDwmZorderSprite((HSPRITE)v20, *(HSPRITE *)(*((_QWORD *)v10 + 38) + 136LL));
            *(_QWORD *)(*((_QWORD *)v10 + 38) + 136LL) = v20;
            if ( v42 )
              _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
            v42 = 0LL;
            v19 = v41;
LABEL_24:
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
          }
          *(_DWORD *)(*((_QWORD *)v10 + 38) + 164LL) = v13;
          v16 = v40;
        }
        if ( v16 )
          _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
        v40 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v39);
        if ( v44 )
          _InterlockedDecrement((volatile signed __int32 *)(v44 + 12));
        v44 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v43);
      }
    }
    v21 = (__int64 *)(hdev + 876);
    v22 = (__int64 *)*((_QWORD *)hdev + 438);
    if ( a2 == -1 )
    {
      if ( (__int64 *)v22[1] == v21 )
      {
        v23 = (__int64 **)*((_QWORD *)hdev + 439);
        if ( *v23 == v21 )
        {
          *v23 = v22;
          v22[1] = (__int64)v23;
          v24 = *((_QWORD *)v10 + 38) + 104LL;
          v25 = *(__int64 ***)(*((_QWORD *)v10 + 38) + 112LL);
          if ( *v25 == (__int64 *)v24 )
          {
            *v21 = v24;
            *((_QWORD *)hdev + 439) = v25;
            *v25 = v21;
            *(_QWORD *)(v24 + 8) = v21;
            v26 = *((_QWORD *)v10 + 38);
            if ( *(_QWORD *)(v26 + 120) == v26 + 120 )
            {
              v27 = *(Gre::Base **)(v26 + 144);
              while ( v27 )
              {
                UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v45);
                v46 = 0LL;
                DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v45, (HSPRITE)v27);
                if ( v46 )
                  vSpDwmUpdateSpriteVisibility(v46, 0);
                v27 = (Gre::Base *)hspGetNeighborSprite(v27, 1, 0);
                if ( v46 )
                  _InterlockedDecrement((volatile signed __int32 *)v46 + 3);
                v46 = 0LL;
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v45);
              }
            }
LABEL_52:
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
            GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
            return;
          }
        }
      }
    }
    else if ( (__int64 *)v22[1] == v21 )
    {
      v28 = (__int64 **)*((_QWORD *)hdev + 439);
      if ( *v28 == v21 )
      {
        *v28 = v22;
        v22[1] = (__int64)v28;
        v29 = *((_QWORD *)v10 + 38) + 120LL;
        v30 = *(__int64 ***)(*((_QWORD *)v10 + 38) + 128LL);
        if ( *v30 == (__int64 *)v29 )
        {
          *v21 = v29;
          *((_QWORD *)hdev + 439) = v30;
          *v30 = v21;
          *(_QWORD *)(v29 + 8) = v21;
          v31 = *((_QWORD *)v10 + 38);
          v47.x = a2 + *((_DWORD *)hdev + 640) - *(_DWORD *)(v31 + 152);
          v47.y = a3 + *((_DWORD *)hdev + 641) - *(_DWORD *)(v31 + 156);
          v32 = *(HSPRITE *)(v31 + 136);
          DrvPixelSpaceToUniformSpacePoint(&v47, &v47.y);
          GreUpdateSprite(a1->hdev, 0LL, v32, 0LL, &v47, 0LL, 0LL, 0LL, 0, 0LL, 0x40200000u, 0LL, 0LL, 1, 0, 0);
          v35 = 0LL;
          DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v35, v32);
          v33 = v35;
          if ( v35 )
          {
            if ( (a5 & 4) != 0 )
            {
              v34 = a1->hdev;
              LODWORD(v48) = 0x1000000;
              GreUpdateSprite(
                v34,
                0LL,
                v32,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                0,
                (struct _BLENDFUNCTION *)&v48,
                0x21200002u,
                0LL,
                0LL,
                1,
                0,
                0);
            }
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v36, (struct DWMSPRITE *)((char *)v33 + 88));
            vSpDwmUpdateSpriteVisibility(v33, 1u);
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v36);
            if ( v33 )
              DEC_SHARE_REF_CNT(v33);
          }
          goto LABEL_52;
        }
      }
    }
    __fastfail(3u);
  }
}
