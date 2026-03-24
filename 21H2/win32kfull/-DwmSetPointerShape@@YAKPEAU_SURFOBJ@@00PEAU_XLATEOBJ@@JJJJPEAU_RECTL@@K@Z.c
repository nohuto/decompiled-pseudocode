/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00EB92C
 * Callers:
 *     EngSetPointerShape @ 0x1C00EB7C0 (EngSetPointerShape.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0017464 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00BFE7C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00EBDC4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00EC380 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00EC3B4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00EC5A0 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00EF4A0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0115BB0 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C016A6E4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
  unsigned int v12; // r15d
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char v16; // si
  unsigned int v17; // edi
  unsigned int v18; // r14d
  struct tagRECT *v19; // rbx
  int v20; // eax
  unsigned __int16 *SpriteInternal; // rax
  HSPRITE v22; // rbx
  struct DwmState *v23; // rcx
  HSPRITE v24; // rdx
  HSPRITE v25; // rdi
  HSPRITE NeighborSprite; // rax
  HSPRITE v27; // r14
  struct DWMSPRITE *v28; // rbx
  __int64 v29; // rdx
  HSPRITE v30; // rbx
  struct _SURFOBJ *v31; // r14
  HSPRITE v32; // rdi
  struct _XLATEOBJ *v33; // r9
  struct _RECTL *v34; // r8
  struct _RECTL *v35; // r9
  _BYTE v37[8]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v38[32]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v39; // [rsp+90h] [rbp-9h]
  struct DWMSPRITE *v40; // [rsp+E8h] [rbp+4Fh] BYREF
  struct _SURFOBJ *v41; // [rsp+F0h] [rbp+57h]
  struct _SURFOBJ *v42; // [rsp+F8h] [rbp+5Fh]
  struct _XLATEOBJ *v43; // [rsp+100h] [rbp+67h] BYREF

  v43 = a4;
  v42 = a3;
  v41 = a2;
  hdev = a1->hdev;
  v12 = 2;
  if ( *((_DWORD *)g_pDwmState + 25) )
  {
    if ( a2 || a3 )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v38);
      v16 = a10;
      v17 = ((a10 >> 8) & 0xF) + 1;
      v39 = 0LL;
      if ( (unsigned __int8)(a10 >> 12) )
        v18 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v18 = 0;
      LODWORD(v43) = 0x1000000;
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      if ( *((_DWORD *)g_pDwmState + 40) < v17 )
      {
        v19 = a9;
        do
        {
          if ( a7 == -1 && a8 == -1 || (v20 = 1, (v16 & 0x40) != 0) )
            v20 = 0;
          SpriteInternal = GreCreateSpriteInternal(a1->hdev, 0LL, v19, 0LL, 0x9900u, 1, v20, 0, 0, 0, 0LL);
          if ( !SpriteInternal )
            break;
          if ( !*((_QWORD *)g_pDwmState + 17) )
            *((_QWORD *)g_pDwmState + 17) = SpriteInternal;
          *((_QWORD *)g_pDwmState + 18) = SpriteInternal;
          ++*((_DWORD *)g_pDwmState + 40);
        }
        while ( *((_DWORD *)g_pDwmState + 40) < v17 );
      }
      while ( *((_DWORD *)g_pDwmState + 40) > v17 )
      {
        v22 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v22, 1, 0);
        GreDeleteSpriteInternal(a1->hdev, 0LL, v22, 1);
        --*((_DWORD *)g_pDwmState + 40);
      }
      *((_DWORD *)g_pDwmState + 42) = v18;
      v23 = g_pDwmState;
      v24 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
      if ( v24 )
      {
        v25 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        if ( v25 != v24 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v25, 1, 0);
            v40 = 0LL;
            v27 = NeighborSprite;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v40, v25);
            v28 = v40;
            if ( v40 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v37, (struct DWMSPRITE *)((char *)v40 + 88));
              vSpDwmUpdateSpriteVisibility(v28, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v37);
              v25 = v27;
              DEC_SHARE_REF_CNT(v28, v29);
            }
            else
            {
              v25 = v27;
            }
            v23 = g_pDwmState;
          }
          while ( v27 != *((HSPRITE *)g_pDwmState + 17) );
        }
        v30 = *(HSPRITE *)(*(_QWORD *)v23 + 144LL);
        if ( v30 )
        {
          v31 = v42;
          while ( 1 )
          {
            v32 = hspGetNeighborSprite(v30, 1, 0);
            if ( !(unsigned int)bSpDwmUpdateCursor(
                                  v30,
                                  v41,
                                  v31,
                                  v33,
                                  (struct _RECTL *)a9,
                                  (struct _BLENDFUNCTION *)((unsigned __int64)&v43 & -(__int64)((v16 & 0x40) != 0))) )
              break;
            v30 = v32;
            if ( !v32 )
              goto LABEL_37;
          }
          v12 = 0;
        }
LABEL_37:
        v34 = (struct _RECTL *)a9;
        *((_DWORD *)g_pDwmState + 38) = a5 - a9->left;
        *((_DWORD *)g_pDwmState + 39) = a6 - v34->top;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DwmMovePointer(a1, a7, a8, v35, (v16 & 0x60) != 0 ? 4 : 0);
      if ( v39 )
        _InterlockedDecrement((volatile signed __int32 *)(v39 + 12));
      v39 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v38);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v13 = hdev + 882;
      v14 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v15 = (_QWORD *)v13[1], (_QWORD *)*v15 != v13) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v13[1] = v13;
      *v13 = v13;
      if ( *((struct DwmState **)g_pDwmState + 13) == (struct DwmState *)((char *)g_pDwmState + 104)
        && *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
      {
        vSpDwmDestroyCursorSprites(a1->hdev);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
    }
  }
  return v12;
}
