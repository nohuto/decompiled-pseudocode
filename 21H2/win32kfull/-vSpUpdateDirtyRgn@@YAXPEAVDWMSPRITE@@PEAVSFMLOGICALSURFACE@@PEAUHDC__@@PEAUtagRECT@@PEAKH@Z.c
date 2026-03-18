/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0038B90
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0037EE0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00840D8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BF68 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026C2D4 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026CCEC (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0082950 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0113C58 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015D5DC (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C026B3F8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02C0668 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02C09F4 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C02C0D34 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  int v9; // r13d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rdx
  struct REGION *v18; // rdx
  __int64 v19; // rsi
  LONG v20; // ecx
  struct REGION **v21; // rsi
  struct REGION *v22; // rbx
  int v23; // eax
  REGION *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  REGION *v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v31; // ecx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  struct REGION *v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h] BYREF
  int v42; // [rsp+88h] [rbp-80h]
  struct REGION *v43; // [rsp+90h] [rbp-78h] BYREF
  __int64 v44; // [rsp+98h] [rbp-70h] BYREF
  int v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  _BYTE v48[32]; // [rsp+B8h] [rbp-50h] BYREF
  struct _RECTL v49; // [rsp+D8h] [rbp-30h] BYREF
  struct _RECTL v50; // [rsp+E8h] [rbp-20h] BYREF

  v9 = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v50);
    v11 = v50.right == 1;
    *((_QWORD *)a2 + 16) = *(_QWORD *)&v50.left;
    if ( v11 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v50);
    v12 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = *(_QWORD *)&v50.left;
    EtwTraceLifetimeAccum(v12, 1LL);
    v9 = 1;
    if ( v50.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v35 = (struct REGION *)*((_QWORD *)a2 + 16);
    RGNOBJ::vSet((RGNOBJ *)&v35);
    if ( *((_QWORD *)a2 + 10) )
    {
      v38 = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v38);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v43 = (struct REGION *)*((_QWORD *)a2 + 16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v44);
  if ( v43 && v39 && v41 && v44 )
  {
    v13 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v39, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 || !a3 )
      goto LABEL_37;
    v46 = 0LL;
    v47 = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v48);
    LOBYTE(v14) = 1;
    v15 = HmgShareLockEx(a3, v14, 0LL);
    v46 = v15;
    v16 = v15;
    if ( !v15 )
    {
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
LABEL_37:
      if ( a1 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
        v49.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
        v20 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
        *(_QWORD *)&v49.left = 0LL;
        v49.bottom = v20;
        if ( v36 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v36, &v49);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)&v39, (struct RGNOBJ *)&v36, 8u) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)&v39);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
            goto LABEL_43;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
      }
      RGNOBJ::vSet((RGNOBJ *)&v39);
LABEL_43:
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)&v43, (struct RGNOBJ *)&v39, 0xEu) )
      {
LABEL_74:
        if ( *((_QWORD *)a2 + 10) )
        {
          v35 = (struct REGION *)*((_QWORD *)a2 + 10);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v44, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v39, 0xEu) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v44, (struct RGNOBJ *)&v35);
            v26 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v35;
            EtwTraceLifetimeAccum(v26, 1LL);
          }
          if ( !v9 && *((_DWORD *)v35 + 21) != 1 && *((_DWORD *)v35 + 20) <= 0x38u )
          {
            v50 = 0LL;
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
            if ( v36 )
            {
              v27 = (REGION *)*((_QWORD *)a2 + 10);
              v50 = (struct _RECTL)*((_OWORD *)v35 + 6);
              REGION::vDeleteREGION(v27);
              RGNOBJ::vSet((RGNOBJ *)&v36, &v50);
              v28 = *(_QWORD *)a2;
              *((_QWORD *)a2 + 10) = v36;
              EtwTraceLifetimeAccum(v28, 1LL);
            }
            if ( (_DWORD)v37 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
          }
        }
        goto LABEL_84;
      }
      RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)&v43);
      v21 = (struct REGION **)((char *)a2 + 128);
      if ( a6 )
      {
        EtwTranslationUpdateOffset(*(_QWORD *)a2, (unsigned int)*((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
        EtwTranslationUpdate(
          *(_QWORD *)a2,
          (unsigned int)a4->left,
          (unsigned int)a4->top,
          (unsigned int)a4->right,
          a4->bottom);
        v22 = v43;
        v23 = METAREGION::vApplyMoveData(
                (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
                (struct _RECTL *)a2 + 7,
                (struct _POINTL *)a2 + 13,
                *((struct REGION **)a2 + 12));
        *v21 = v22;
        if ( v23 )
          METAREGION::vCalculateNoMoveDirty((struct SFMLOGICALSURFACE *)((char *)a2 + 128));
        goto LABEL_72;
      }
      EtwDirtyRectUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v11 = *((_DWORD *)a2 + 42) == 0;
      *v21 = v43;
      if ( v11 )
      {
LABEL_72:
        v25 = *((_DWORD *)a2 + 63);
        if ( (v25 & 2) == 0 )
        {
          *((_DWORD *)a2 + 63) = v25 | 2;
          *a5 |= 1u;
        }
        goto LABEL_74;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v49);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
      v35 = (struct REGION *)*((_QWORD *)a2 + 20);
      if ( RGNOBJ::bCopy((RGNOBJ *)&v36, (struct RGNOBJ *)&v35)
        && RGNOBJ::bOffset((RGNOBJ *)&v36, (struct _POINTL *)a2 + 19) )
      {
        RGNOBJ::vSet((RGNOBJ *)&v49, a4);
        if ( !*(_QWORD *)&v49.left
          || !v36
          || !v38
          || !RGNOBJ::iCombine((RGNOBJ *)&v38, (struct RGNOBJ *)&v49, (struct RGNOBJ *)&v36, 1)
          || (v50 = *(struct _RECTL *)(v38 + 96), ERECTL::bEmpty((ERECTL *)&v50))
          || (unsigned int)METAREGION::bTrimMoveWithRegion(
                             (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
                             *(struct REGION **)&v49.left,
                             1) )
        {
LABEL_58:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v49);
          if ( *((_DWORD *)a2 + 42) )
          {
            v35 = *v21;
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
            v24 = (REGION *)*((_QWORD *)a2 + 17);
            v38 = *((_QWORD *)a2 + 20);
            if ( v24 )
            {
              REGION::vDeleteREGION(v24);
              *((_QWORD *)a2 + 17) = 0LL;
            }
            if ( RGNOBJ::bCopy((RGNOBJ *)&v36, (struct RGNOBJ *)&v38)
              && RGNOBJ::bOffset((RGNOBJ *)&v36, (struct _POINTL *)a2 + 19) )
            {
              RGNOBJ::vSet((RGNOBJ *)&v49);
              if ( v35
                && v36
                && *(_QWORD *)&v49.left
                && RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v36, 4) )
              {
                *((_QWORD *)a2 + 17) = *(_QWORD *)&v49.left;
              }
              else
              {
                METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
              }
            }
            else
            {
              METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
            if ( v49.right == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
          }
          goto LABEL_72;
        }
        EtwLogicalSurfRemovedTranslationFromDirtyEvent(
          *((_QWORD *)a2 + 22),
          (unsigned int)a4->left,
          (unsigned int)a4->top,
          (unsigned int)a4->right,
          a4->bottom);
        EtwTraceMoveRegion(*((_QWORD *)a2 + 20), 0LL, 0LL, *((_QWORD *)a2 + 20));
      }
      METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
      goto LABEL_58;
    }
    if ( (*(_DWORD *)(v15 + 36) & 1) == 0 )
    {
LABEL_33:
      if ( v16 )
      {
        LODWORD(v38) = 0;
        v19 = *(_QWORD *)v16;
        HmgDecrementShareReferenceCountEx(v16, &v38);
        if ( (_DWORD)v38 )
          bDeleteDCInternalEx(v19, 0LL);
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
      if ( v13 )
        goto LABEL_43;
      goto LABEL_37;
    }
    v17 = *(_QWORD *)(v15 + 1168);
    if ( !v17 || (*(_DWORD *)(v15 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v15) )
    {
      if ( !*(_QWORD *)(v16 + 1152) )
      {
        v18 = DC::prgnVisSnap((DC *)v16);
        goto LABEL_28;
      }
      if ( !v17 )
      {
LABEL_26:
        v18 = *(struct REGION **)(v16 + 1152);
        goto LABEL_28;
      }
    }
    if ( (*(_DWORD *)(v16 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v16) )
      goto LABEL_26;
LABEL_28:
    v35 = v18;
    if ( v18 )
    {
      if ( RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v39, 8u) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)&v39);
        v13 = 1;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v41);
      }
      v16 = v46;
    }
    goto LABEL_33;
  }
LABEL_84:
  v29 = *((_DWORD *)a2 + 63);
  if ( (v29 & 0x20) != 0 )
  {
    if ( (v29 & 4) != 0 )
    {
      *a5 |= 2u;
      v29 = *((_DWORD *)a2 + 63);
    }
    *((_DWORD *)a2 + 63) = v29 & 0xFFFFFFDF;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 35) & 2) != 0 && (*a5 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
      {
        v31 = *(_DWORD *)(CurrentProcessWin32Process + 288);
        if ( (v31 & 4) == 0 )
        {
          *(_DWORD *)(CurrentProcessWin32Process + 288) = v31 | 4;
          if ( (unsigned int)dword_1C03263F8 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
            {
              *(_QWORD *)&v49.left = 0x2000000LL;
              LODWORD(v38) = 1;
              LODWORD(v35) = 1;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                v32,
                (unsigned int)&unk_1C02F23FF,
                v33,
                v34,
                (__int64)&v35,
                (__int64)&v38,
                (__int64)&v49);
            }
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v44);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
  if ( v45 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v41);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  if ( v42 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v39);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
  if ( (_DWORD)v40 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
}
