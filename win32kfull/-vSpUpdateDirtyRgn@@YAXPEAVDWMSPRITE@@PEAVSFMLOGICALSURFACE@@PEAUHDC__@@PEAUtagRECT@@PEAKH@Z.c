/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C004F9EC
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C012859C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C014CB0A (GreAddBitmapD3DDirtyRgn.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268C70 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C0269054 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C004FF94 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C218 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C924 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C00D7B98 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0268138 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02E2338 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02E2698 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        const struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  unsigned int *v6; // r14
  struct _POINTL *v7; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rax
  DC *v16; // rbx
  struct REGION *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  REGION *v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  LONG v25; // ecx
  __int64 v26; // rcx
  struct _POINTL v27; // rbx
  int v28; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v30; // ecx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  struct REGION *v34; // [rsp+40h] [rbp-69h] BYREF
  __int64 v35; // [rsp+48h] [rbp-61h] BYREF
  __int64 v36; // [rsp+50h] [rbp-59h] BYREF
  __int64 v37; // [rsp+58h] [rbp-51h] BYREF
  int v38; // [rsp+60h] [rbp-49h] BYREF
  struct REGION *v39; // [rsp+68h] [rbp-41h] BYREF
  unsigned int *v40; // [rsp+70h] [rbp-39h] BYREF
  __int64 v41; // [rsp+78h] [rbp-31h] BYREF
  struct _POINTL v42; // [rsp+80h] [rbp-29h] BYREF
  struct _RECTL v43; // [rsp+88h] [rbp-21h] BYREF
  struct _RECTL v44; // [rsp+98h] [rbp-11h] BYREF

  v6 = a5;
  v7 = (struct _POINTL *)((char *)a2 + 128);
  v40 = a5;
  v38 = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
    *v7 = (struct _POINTL)v34;
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
    v26 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = v34;
    EtwTraceLifetimeAccum(v26, 1LL);
    v38 = 1;
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v34 = (struct REGION *)*v7;
    RGNOBJ::vSet((RGNOBJ *)&v34);
    if ( *((_QWORD *)a2 + 10) )
    {
      v39 = (struct REGION *)*((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v39);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v42 = *v7;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
  if ( *(_QWORD *)&v42 && v36 && v37 && v41 )
  {
    v13 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v36, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 )
      goto LABEL_85;
    if ( !a3 )
      goto LABEL_85;
    LOBYTE(v14) = 1;
    v15 = HmgShareLockEx(a3, v14, 0LL);
    v16 = (DC *)v15;
    if ( !v15 )
      goto LABEL_85;
    if ( (*(_DWORD *)(v15 + 36) & 1) != 0 )
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
        if ( RGNOBJ::bMerge((RGNOBJ *)&v37, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v36, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v37, (struct RGNOBJ *)&v36);
          v13 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v37);
        }
      }
    }
    LODWORD(v35) = 0;
    v18 = *(_QWORD *)v16;
    HmgDecrementShareReferenceCountEx(v16, &v35);
    if ( (_DWORD)v35 )
      GrepDeleteDC(v18, 0x2000000LL);
    if ( !v13 )
    {
LABEL_85:
      if ( !a1 )
        goto LABEL_61;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
      v25 = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      *(_QWORD *)&v43.left = 0LL;
      v43.right = v25;
      v43.bottom = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      if ( v34 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v34, &v43);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v37, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v34, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v37, (struct RGNOBJ *)&v36);
          v13 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
      if ( !v13 )
LABEL_61:
        RGNOBJ::vSet((RGNOBJ *)&v36);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v37, (struct RGNOBJ *)&v42, (struct RGNOBJ *)&v36, 0xEu) )
    {
      v6 = v40;
LABEL_29:
      if ( *((_QWORD *)a2 + 10) )
      {
        v34 = (struct REGION *)*((_QWORD *)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v36, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)&v34);
          v21 = *(_QWORD *)a2;
          *((_QWORD *)a2 + 10) = v34;
          EtwTraceLifetimeAccum(v21, 1LL);
        }
        if ( !v38 )
        {
          v12 = (__int64)v34 + 52;
          if ( !v34 )
            v12 = 28LL;
          if ( *(_DWORD *)v12 != 1 )
          {
            v12 = (__int64)v34 + 48;
            if ( !v34 )
              v12 = 24LL;
            if ( *(_DWORD *)v12 <= 0x38u )
            {
              v44 = 0LL;
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
              if ( v40 )
              {
                v22 = (REGION *)*((_QWORD *)a2 + 10);
                v44 = *(struct _RECTL *)((char *)v34 + 56);
                REGION::vDeleteREGION(v22);
                RGNOBJ::vSet((RGNOBJ *)&v40, &v44);
                v23 = *(_QWORD *)a2;
                *((_QWORD *)a2 + 10) = v40;
                EtwTraceLifetimeAccum(v23, 1LL);
              }
            }
          }
        }
      }
      goto LABEL_41;
    }
    RGNOBJ::vSwap((RGNOBJ *)&v37, (struct RGNOBJ *)&v42);
    v19 = *(_QWORD *)a2;
    if ( a6 )
    {
      EtwTranslationUpdateOffset(v19, *((unsigned int *)a2 + 38), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v27 = v42;
      v28 = METAREGION::vApplyMoveData(
              (METAREGION *)v7,
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v7 = v27;
      if ( !v28 )
      {
LABEL_27:
        v20 = *((_DWORD *)a2 + 63);
        v6 = v40;
        if ( (v20 & 2) == 0 )
        {
          *((_DWORD *)a2 + 63) = v20 | 2;
          *v6 |= 1u;
        }
        goto LABEL_29;
      }
LABEL_26:
      METAREGION::vCalculateNoMoveDirty((METAREGION *)v7);
      goto LABEL_27;
    }
    EtwDirtyRectUpdate(v19, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
    *v7 = v42;
    if ( !v7[5].x )
      goto LABEL_26;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v35);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
    *(struct _POINTL *)&v43.left = v7[4];
    if ( RGNOBJ::bCopy((RGNOBJ *)&v35, (struct RGNOBJ *)&v43) && RGNOBJ::bOffset((RGNOBJ *)&v35, v7 + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v39, a4);
      if ( !v39 )
        goto LABEL_74;
      if ( !v35 )
        goto LABEL_74;
      if ( !v34 )
        goto LABEL_74;
      if ( !RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)&v39, (struct RGNOBJ *)&v35, 1) )
        goto LABEL_74;
      v44 = *(struct _RECTL *)((char *)v34 + 56);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v44)
        || (unsigned int)METAREGION::bTrimMoveWithRegion((METAREGION *)v7, v39, 1) )
      {
        goto LABEL_74;
      }
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *(_QWORD *)&v7[6],
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*(_QWORD *)&v7[4], 0LL, 0LL, *(_QWORD *)&v7[4]);
    }
    METAREGION::vClearMoveData((METAREGION *)v7, 1);
LABEL_74:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v39);
    goto LABEL_26;
  }
LABEL_41:
  v24 = *((_DWORD *)a2 + 63);
  if ( (v24 & 0x20) != 0 )
  {
    if ( (v24 & 4) != 0 )
      *v6 |= 2u;
    *((_DWORD *)a2 + 63) &= ~0x20u;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 35) & 2) != 0 && (*v6 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          v30 = *(_DWORD *)(CurrentProcessWin32Process + 288);
          if ( (v30 & 4) == 0 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 288) = v30 | 4;
            if ( (unsigned int)dword_1C0357098 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
              {
                *(_QWORD *)&v43.left = 0x2000000LL;
                v38 = 1;
                LODWORD(v35) = 1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v31,
                  (unsigned int)&unk_1C0320004,
                  v32,
                  v33,
                  (__int64)&v35,
                  (__int64)&v38,
                  (__int64)&v43);
              }
            }
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v41);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v37);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v36);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
}
