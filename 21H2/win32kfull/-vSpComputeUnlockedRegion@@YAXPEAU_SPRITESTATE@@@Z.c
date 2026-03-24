/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F06FC
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C006A504 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F0648 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0281230 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C02831A0 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0283444 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02863D0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F0830 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02768A8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DxDdEnumLockedSurfaceRect @ 0x1C0276904 (DxDdEnumLockedSurfaceRect.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027DF64 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027E0B4 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpComputeUnlockedRegion(struct _SPRITESTATE *a1)
{
  __int64 v1; // rbx
  REGION *v3; // rcx
  int v4; // edi
  BOOL v5; // eax
  int v6; // r15d
  __int64 i; // rdx
  __int64 locked; // rdi
  TRACKOBJ *j; // rdi
  __int64 k; // rbx
  REGION *v11; // rdx
  REGION *v12; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D8h]
  _QWORD v14[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v19[24]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v20; // [rsp+98h] [rbp-70h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-60h]
  int v22; // [rsp+B0h] [rbp-58h]
  _QWORD v23[10]; // [rsp+B8h] [rbp-50h] BYREF
  struct _RECTL v24; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v25; // [rsp+118h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = (REGION *)*((_QWORD *)a1 + 129);
  v15 = v1;
  v24 = 0LL;
  if ( v3 )
  {
    REGION::vDeleteREGION(v3);
    *((_QWORD *)a1 + 129) = 0LL;
  }
  if ( gpto || *((_QWORD *)a1 + 130) )
  {
    v5 = 1;
  }
  else
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
    v23[8] = 0LL;
    v23[7] = 0LL;
    v23[0] = 0LL;
    v20 = 0LL;
    v22 = 1;
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(v1 + 48);
      v21 = v1;
      GreAcquireSemaphore(v20);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
    }
    v4 = *(_DWORD *)(v1 + 2640);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v20);
    v5 = v4 != 0;
  }
  if ( v5 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, 0, 1);
    if ( v12 )
    {
      v6 = 0;
      *(_QWORD *)&v24.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v15);
      RGNOBJ::vSet((RGNOBJ *)&v12, &v24);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
      if ( !v16[0] || !v14[0] )
        goto LABEL_36;
      v25 = 0LL;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = locked )
      {
        locked = DxDdEnumLockedSurfaceRect(v1, i, &v25);
        if ( !locked )
          break;
        RGNOBJ::vSet((RGNOBJ *)v16, &v25);
        RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)v16, 4u) )
          v6 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v12);
      }
      GreUnlockDisplayDevice(v1);
      v18 = ghsemWndobj;
      GreAcquireSemaphore(ghsemWndobj);
      for ( j = gpto; j; j = (TRACKOBJ *)*((_QWORD *)j + 1) )
      {
        for ( k = *((_QWORD *)j + 3); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19, (struct EWNDOBJ *)k, a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)(k + 56), 4u) )
              v6 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v12);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19);
        }
      }
      if ( *((_QWORD *)a1 + 130) )
      {
        v17 = *((_QWORD *)a1 + 130);
        RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)&v17, 8u) )
          v6 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v12);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      if ( v6 == 1 )
      {
        v11 = v12;
        *((_DWORD *)v11 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        *((_QWORD *)a1 + 129) = v12;
      }
      else
      {
LABEL_36:
        REGION::vDeleteREGION(v12);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
    }
    if ( (_DWORD)v13 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
  }
  *((_DWORD *)a1 + 29) = 0;
  vSpComputeSpriteRanges(a1);
  ++giSpriteUniqueness;
}
