/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B68CC
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0085DF4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00B6818 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027EEA4 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C028099C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0280C40 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0282B00 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B69FC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02741B4 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DxDdEnumLockedSurfaceRect @ 0x1C02741E0 (DxDdEnumLockedSurfaceRect.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027BAD4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027BC24 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpComputeUnlockedRegion(struct _SPRITESTATE *a1)
{
  __int64 v1; // rbx
  REGION *v3; // rcx
  int v4; // edi
  int v5; // r14d
  __int64 i; // rdx
  __int64 locked; // rdi
  TRACKOBJ *j; // rdi
  __int64 k; // rbx
  REGION *v10; // rdx
  REGION *v11; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h]
  _QWORD v13[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v19; // [rsp+98h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+B0h] [rbp-58h]
  _QWORD v22[10]; // [rsp+B8h] [rbp-50h] BYREF
  struct _RECTL v23; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v24; // [rsp+118h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = (REGION *)*((_QWORD *)a1 + 129);
  v14 = v1;
  v23 = 0LL;
  if ( v3 )
  {
    REGION::vDeleteREGION(v3);
    *((_QWORD *)a1 + 129) = 0LL;
  }
  if ( gpto || *((_QWORD *)a1 + 130) )
    goto LABEL_9;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v22);
  v22[8] = 0LL;
  v22[7] = 0LL;
  v22[0] = 0LL;
  v19 = 0LL;
  v21 = 1;
  if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(v1 + 48);
    v20 = v1;
    GreAcquireSemaphore(v19);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v19, 11LL);
  }
  v4 = *(_DWORD *)(v1 + 2616);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v19);
  if ( v4 )
  {
LABEL_9:
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11, 0, 1);
    if ( v11 )
    {
      v5 = 0;
      *(_QWORD *)&v23.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v14);
      RGNOBJ::vSet((RGNOBJ *)&v11, &v23);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
      if ( !v15[0] || !v13[0] )
        goto LABEL_34;
      v24 = 0LL;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = locked )
      {
        locked = DxDdEnumLockedSurfaceRect(v1, i, &v24);
        if ( !locked )
          break;
        RGNOBJ::vSet((RGNOBJ *)v15, &v24);
        RGNOBJ::bCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v11);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)v13, (struct RGNOBJ *)v15, 4u) )
          v5 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v11);
      }
      GreUnlockDisplayDevice(v1);
      v17 = ghsemWndobj;
      GreAcquireSemaphore(ghsemWndobj);
      for ( j = gpto; j; j = (TRACKOBJ *)*((_QWORD *)j + 1) )
      {
        for ( k = *((_QWORD *)j + 3); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v18, (struct EWNDOBJ *)k, a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v11);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)v13, (struct RGNOBJ *)(k + 56), 4u) )
              v5 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v11);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v18);
        }
      }
      if ( *((_QWORD *)a1 + 130) )
      {
        v16 = *((_QWORD *)a1 + 130);
        RGNOBJ::bCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v11);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)v13, (struct RGNOBJ *)&v16, 8u) )
          v5 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v11);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v17);
      if ( v5 == 1 )
      {
        v10 = v11;
        *((_DWORD *)v10 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        *((_QWORD *)a1 + 129) = v11;
      }
      else
      {
LABEL_34:
        REGION::vDeleteREGION(v11);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
    }
    if ( (_DWORD)v12 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
  }
  *((_DWORD *)a1 + 29) = 0;
  vSpComputeSpriteRanges(a1);
  ++giSpriteUniqueness;
}
