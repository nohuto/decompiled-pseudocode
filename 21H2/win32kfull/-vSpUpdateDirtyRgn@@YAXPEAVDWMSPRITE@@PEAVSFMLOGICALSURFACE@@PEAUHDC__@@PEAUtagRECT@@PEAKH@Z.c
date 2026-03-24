/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0091470
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0016490 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0090830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00EA5BC (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026E1F4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026E5E0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026EFCC (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0015BD8 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C01256D8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C016A654 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C026D678 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02C1CCC (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02C2058 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C02C2398 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  int v8; // r13d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  LONG v22; // ecx
  __int64 *v23; // rsi
  __int64 v24; // rbx
  int v25; // eax
  REGION *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  REGION *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v33; // r8d
  int v34; // r9d
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h] BYREF
  int v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h] BYREF
  __int64 v46; // [rsp+98h] [rbp-70h] BYREF
  int v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  _BYTE v50[32]; // [rsp+B8h] [rbp-50h] BYREF
  struct _RECTL v51; // [rsp+D8h] [rbp-30h] BYREF
  struct _RECTL v52; // [rsp+E8h] [rbp-20h] BYREF

  v8 = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v52);
    v11 = v52.right == 1;
    *((_QWORD *)a2 + 16) = *(_QWORD *)&v52.left;
    if ( v11 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v52);
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v52);
    v12 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = *(_QWORD *)&v52.left;
    EtwTraceLifetimeAccum(v12, 1LL);
    v8 = 1;
    if ( v52.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v52);
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v37 = *((_QWORD *)a2 + 16);
    RGNOBJ::vSet((RGNOBJ *)&v37);
    if ( *((_QWORD *)a2 + 10) )
    {
      v40 = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v40);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v45 = *((_QWORD *)a2 + 16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v46);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v46);
  if ( v45 && v41 && v43 && v46 )
  {
    v14 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v41, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 || !a3 )
      goto LABEL_108;
    v48 = 0LL;
    v49 = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v50);
    LOBYTE(v15) = 1;
    v16 = HmgShareLockEx(a3, v15, 0LL);
    v48 = v16;
    v17 = v16;
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
      {
        v18 = *(_QWORD *)(v16 + 1176);
        if ( !v18
          || (*(_DWORD *)(v16 + 40) & 2) == 0
          || (v11 = (unsigned int)DC::bDpiScaledSurface((DC *)v16) == 0, v19 = v18, v11) )
        {
          v19 = *(_QWORD *)(v17 + 1160);
        }
        if ( v19 )
        {
          if ( !v18 || (*(_DWORD *)(v17 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v17) )
            v20 = *(_QWORD *)(v17 + 1160);
        }
        else if ( !*(_QWORD *)(v17 + 1168)
               || (*(_DWORD *)(v17 + 40) & 2) == 0
               || !(unsigned int)DC::bDpiScaledSurface((DC *)v17) )
        {
          v20 = *(_QWORD *)(v17 + 1152);
        }
        v37 = v20;
        if ( v20 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v43, (struct RGNOBJ *)&v37, (struct RGNOBJ *)&v41, 8u) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v43, (struct RGNOBJ *)&v41);
            v14 = 1;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)&v43);
          }
          v17 = v48;
        }
      }
      if ( v17 )
      {
        LODWORD(v40) = 0;
        v21 = *(_QWORD *)v17;
        HmgDecrementShareReferenceCountEx(v17, &v40);
        if ( (_DWORD)v40 )
          bDeleteDCInternalEx(v21, 0LL);
      }
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v50);
    if ( !v14 )
    {
LABEL_108:
      if ( !a1 )
        goto LABEL_45;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
      v51.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v22 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v51.left = 0LL;
      v51.bottom = v22;
      if ( v38 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v38, &v51);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v43, (struct RGNOBJ *)&v41, (struct RGNOBJ *)&v38, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v43, (struct RGNOBJ *)&v41);
          v14 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
      if ( !v14 )
LABEL_45:
        RGNOBJ::vSet((RGNOBJ *)&v41);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v43, (struct RGNOBJ *)&v45, (struct RGNOBJ *)&v41, 0xEu) )
      goto LABEL_77;
    RGNOBJ::vSwap((RGNOBJ *)&v43, (struct RGNOBJ *)&v45);
    v23 = (__int64 *)((char *)a2 + 128);
    if ( a6 )
    {
      EtwTranslationUpdateOffset(*(_QWORD *)a2, (unsigned int)*((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v24 = v45;
      v25 = METAREGION::vApplyMoveData(
              (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v23 = v24;
      if ( v25 )
        METAREGION::vCalculateNoMoveDirty((struct SFMLOGICALSURFACE *)((char *)a2 + 128));
      goto LABEL_75;
    }
    EtwDirtyRectUpdate(
      *(_QWORD *)a2,
      (unsigned int)a4->left,
      (unsigned int)a4->top,
      (unsigned int)a4->right,
      a4->bottom);
    v11 = *((_DWORD *)a2 + 42) == 0;
    *v23 = v45;
    if ( v11 )
    {
LABEL_75:
      v27 = *((_DWORD *)a2 + 63);
      if ( (v27 & 2) == 0 )
      {
        *((_DWORD *)a2 + 63) = v27 | 2;
        *a5 |= 1u;
      }
LABEL_77:
      if ( *((_QWORD *)a2 + 10) )
      {
        v37 = *((_QWORD *)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v46, (struct RGNOBJ *)&v37, (struct RGNOBJ *)&v41, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v46, (struct RGNOBJ *)&v37);
          v28 = *(_QWORD *)a2;
          *((_QWORD *)a2 + 10) = v37;
          EtwTraceLifetimeAccum(v28, 1LL);
        }
        if ( !v8 && *(_DWORD *)(v37 + 84) != 1 && *(_DWORD *)(v37 + 80) <= 0x38u )
        {
          v52 = 0LL;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
          if ( v38 )
          {
            v29 = (REGION *)*((_QWORD *)a2 + 10);
            v52 = *(struct _RECTL *)(v37 + 96);
            REGION::vDeleteREGION(v29);
            RGNOBJ::vSet((RGNOBJ *)&v38, &v52);
            v30 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v38;
            EtwTraceLifetimeAccum(v30, 1LL);
          }
          if ( (_DWORD)v39 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
        }
      }
      goto LABEL_87;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v51);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
    v37 = *((_QWORD *)a2 + 20);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v38, (struct RGNOBJ *)&v37)
      && RGNOBJ::bOffset((RGNOBJ *)&v38, (struct _POINTL *)a2 + 19) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v51, a4);
      if ( !*(_QWORD *)&v51.left
        || !v38
        || !v40
        || !RGNOBJ::iCombine((RGNOBJ *)&v40, (struct RGNOBJ *)&v51, (struct RGNOBJ *)&v38, 1)
        || (v52 = *(struct _RECTL *)(v40 + 96), (unsigned int)ERECTL::bEmpty((ERECTL *)&v52))
        || (unsigned int)METAREGION::bTrimMoveWithRegion(
                           (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
                           *(struct REGION **)&v51.left,
                           1) )
      {
LABEL_61:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v51);
        if ( *((_DWORD *)a2 + 42) )
        {
          v37 = *v23;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
          v26 = (REGION *)*((_QWORD *)a2 + 17);
          v40 = *((_QWORD *)a2 + 20);
          if ( v26 )
          {
            REGION::vDeleteREGION(v26);
            *((_QWORD *)a2 + 17) = 0LL;
          }
          if ( RGNOBJ::bCopy((RGNOBJ *)&v38, (struct RGNOBJ *)&v40)
            && RGNOBJ::bOffset((RGNOBJ *)&v38, (struct _POINTL *)a2 + 19) )
          {
            RGNOBJ::vSet((RGNOBJ *)&v51);
            if ( v37
              && v38
              && *(_QWORD *)&v51.left
              && RGNOBJ::iCombine((RGNOBJ *)&v51, (struct RGNOBJ *)&v37, (struct RGNOBJ *)&v38, 4) )
            {
              *((_QWORD *)a2 + 17) = *(_QWORD *)&v51.left;
            }
            else
            {
              METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
            }
          }
          else
          {
            METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
          if ( v51.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
        }
        goto LABEL_75;
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
    goto LABEL_61;
  }
LABEL_87:
  v31 = *((_DWORD *)a2 + 63);
  if ( (v31 & 0x20) != 0 )
  {
    if ( (v31 & 4) != 0 )
    {
      *a5 |= 2u;
      v31 = *((_DWORD *)a2 + 63);
    }
    *((_DWORD *)a2 + 63) = v31 & 0xFFFFFFDF;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 41) & 2) != 0 && (*a5 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
      {
        v35 = *(_DWORD *)(CurrentProcessWin32Process + 288);
        if ( (v35 & 4) == 0 )
        {
          v36 = v35 | 4;
          *(_DWORD *)(CurrentProcessWin32Process + 288) = v36;
          if ( (unsigned int)dword_1C032B3D8 > 5
            && (qword_1C032B3E8 & 0x400000000000LL) != 0
            && (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
          {
            *(_QWORD *)&v51.left = 0x2000000LL;
            LODWORD(v40) = 1;
            LODWORD(v37) = 1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v36,
              (unsigned int)&unk_1C02F5005,
              v33,
              v34,
              (__int64)&v37,
              (__int64)&v40,
              (__int64)&v51);
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v46);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
  if ( v47 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v43);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
  if ( v44 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v41);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  if ( (_DWORD)v42 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
}
