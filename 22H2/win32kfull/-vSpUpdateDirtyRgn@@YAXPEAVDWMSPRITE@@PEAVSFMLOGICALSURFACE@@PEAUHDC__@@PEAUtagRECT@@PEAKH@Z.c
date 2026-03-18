/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00D92B0
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00D8400 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C013411C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C015982A (GreAddBitmapD3DDirtyRgn.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02661A8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C02665B0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0010D4C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C007B5E8 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5ED4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C00D9B08 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00DA09C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00DA108 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C013E34C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C013E478 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C02655E8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02E05B0 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02E0910 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        const struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  struct _POINTL *v6; // rsi
  int v7; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  DC *v16; // r10
  struct REGION *v17; // rax
  __int64 v18; // r15
  LONG v19; // ecx
  __int64 v20; // rcx
  struct _POINTL v21; // rbx
  int v22; // eax
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rcx
  REGION *v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v30; // ecx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  struct REGION *v34; // [rsp+40h] [rbp-99h] BYREF
  struct REGION *v35; // [rsp+48h] [rbp-91h] BYREF
  __int64 v36; // [rsp+50h] [rbp-89h] BYREF
  __int64 v37; // [rsp+58h] [rbp-81h] BYREF
  __int64 v38; // [rsp+60h] [rbp-79h] BYREF
  int v39; // [rsp+68h] [rbp-71h] BYREF
  __int64 v40; // [rsp+70h] [rbp-69h] BYREF
  struct _POINTL v41; // [rsp+78h] [rbp-61h] BYREF
  DC *v42; // [rsp+80h] [rbp-59h]
  int v43; // [rsp+88h] [rbp-51h]
  int v44; // [rsp+8Ch] [rbp-4Dh]
  _BYTE v45[32]; // [rsp+90h] [rbp-49h] BYREF
  struct _RECTL v46; // [rsp+B0h] [rbp-29h] BYREF
  struct _RECTL v47; // [rsp+C0h] [rbp-19h] BYREF

  v6 = (struct _POINTL *)((char *)a2 + 128);
  v7 = 0;
  v39 = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
    *v6 = (struct _POINTL)v34;
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
    v12 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = v34;
    EtwTraceLifetimeAccum(v12, 1LL);
    v39 = 1;
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v34 = (struct REGION *)*v6;
    RGNOBJ::vSet((RGNOBJ *)&v34);
    if ( *((_QWORD *)a2 + 10) )
    {
      v35 = (struct REGION *)*((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v35);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v41 = *v6;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
  if ( *(_QWORD *)&v41 && v37 && v38 && v40 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v37, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 || !a3 )
      goto LABEL_84;
    v42 = 0LL;
    v43 = 0;
    v44 = 0;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v45);
    LOBYTE(v14) = 1;
    v15 = HmgShareLockEx(a3, v14, 0LL);
    v42 = (DC *)v15;
    v16 = (DC *)v15;
    if ( v15 && (*(_DWORD *)(v15 + 36) & 1) != 0 )
    {
      v17 = *(_QWORD *)(v15 + 1168)
         && (*(_DWORD *)(v15 + 40) & 2) != 0
         && (unsigned int)DC::bDpiScaledSurface((DC *)v15)
         || *((_QWORD *)v16 + 144)
          ? DC::prgnRao(v16)
          : DC::prgnVisSnap(v16);
      v34 = v17;
      if ( v17 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v37, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v37);
          v7 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v38);
        }
        v16 = v42;
      }
    }
    if ( v16 )
    {
      LODWORD(v36) = 0;
      v18 = *(_QWORD *)v16;
      HmgDecrementShareReferenceCountEx(v16, &v36);
      if ( (_DWORD)v36 )
        GrepDeleteDC(v18, 0x2000000LL);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v45);
    if ( !v7 )
    {
LABEL_84:
      if ( !a1 )
        goto LABEL_36;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v35);
      v19 = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      *(_QWORD *)&v46.left = 0LL;
      v46.right = v19;
      v46.bottom = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      if ( v35 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v35, &v46);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v37, (struct RGNOBJ *)&v35, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v37);
          v7 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
      if ( !v7 )
LABEL_36:
        RGNOBJ::vSet((RGNOBJ *)&v37);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v41, (struct RGNOBJ *)&v37, 0xEu) )
      goto LABEL_56;
    RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v41);
    v20 = *(_QWORD *)a2;
    if ( a6 )
    {
      EtwTranslationUpdateOffset(v20, *((unsigned int *)a2 + 38), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v21 = v41;
      v22 = METAREGION::vApplyMoveData(
              (METAREGION *)v6,
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v6 = v21;
      if ( !v22 )
        goto LABEL_54;
      goto LABEL_53;
    }
    EtwDirtyRectUpdate(v20, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
    v23 = v6[5].x == 0;
    *v6 = v41;
    if ( v23 )
    {
LABEL_53:
      METAREGION::vCalculateNoMoveDirty((METAREGION *)v6);
LABEL_54:
      v24 = *((_DWORD *)a2 + 63);
      if ( (v24 & 2) == 0 )
      {
        *((_DWORD *)a2 + 63) = v24 | 2;
        *a5 |= 1u;
      }
LABEL_56:
      if ( *((_QWORD *)a2 + 10) )
      {
        v34 = (struct REGION *)*((_QWORD *)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v40, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v37, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v40, (struct RGNOBJ *)&v34);
          v25 = *(_QWORD *)a2;
          *((_QWORD *)a2 + 10) = v34;
          EtwTraceLifetimeAccum(v25, 1LL);
        }
        if ( !v39 )
        {
          v13 = (__int64)v34 + 52;
          if ( !v34 )
            v13 = 28LL;
          if ( *(_DWORD *)v13 != 1 )
          {
            v13 = (__int64)v34 + 48;
            if ( !v34 )
              v13 = 24LL;
            if ( *(_DWORD *)v13 <= 0x38u )
            {
              v47 = 0LL;
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
              if ( v35 )
              {
                v26 = (REGION *)*((_QWORD *)a2 + 10);
                v47 = *(struct _RECTL *)((char *)v34 + 56);
                REGION::vDeleteREGION(v26);
                RGNOBJ::vSet((RGNOBJ *)&v35, &v47);
                v27 = *(_QWORD *)a2;
                *((_QWORD *)a2 + 10) = v35;
                EtwTraceLifetimeAccum(v27, 1LL);
              }
            }
          }
        }
      }
      goto LABEL_68;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
    *(struct _POINTL *)&v46.left = v6[4];
    if ( RGNOBJ::bCopy((RGNOBJ *)&v36, (struct RGNOBJ *)&v46) && RGNOBJ::bOffset((RGNOBJ *)&v36, v6 + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v35, a4);
      if ( !v35 )
        goto LABEL_52;
      if ( !v36 )
        goto LABEL_52;
      if ( !v34 )
        goto LABEL_52;
      if ( !RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v36, 1) )
        goto LABEL_52;
      v47 = *(struct _RECTL *)((char *)v34 + 56);
      if ( ERECTL::bEmpty((ERECTL *)&v47) || (unsigned int)METAREGION::bTrimMoveWithRegion((METAREGION *)v6, v35, 1) )
        goto LABEL_52;
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *(_QWORD *)&v6[6],
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*(_QWORD *)&v6[4], 0LL, 0LL, *(_QWORD *)&v6[4]);
    }
    METAREGION::vClearMoveData((METAREGION *)v6, 1);
LABEL_52:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
    goto LABEL_53;
  }
LABEL_68:
  v28 = *((_DWORD *)a2 + 63);
  if ( (v28 & 0x20) != 0 )
  {
    if ( (v28 & 4) != 0 )
      *a5 |= 2u;
    *((_DWORD *)a2 + 63) &= ~0x20u;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 35) & 2) != 0 && (*a5 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          v30 = *(_DWORD *)(CurrentProcessWin32Process + 288);
          if ( (v30 & 4) == 0 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 288) = v30 | 4;
            if ( (unsigned int)dword_1C0354098 > 5 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
              {
                *(_QWORD *)&v46.left = 0x2000000LL;
                v39 = 1;
                LODWORD(v36) = 1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v31,
                  (unsigned int)&unk_1C031E7EF,
                  v32,
                  v33,
                  (__int64)&v36,
                  (__int64)&v39,
                  (__int64)&v46);
              }
            }
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v40);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v40);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v38);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v37);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
}
