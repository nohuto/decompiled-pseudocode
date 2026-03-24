/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008C4D8
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C006A504 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0074D3C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00ED954 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C00EDE44 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00EE6F4 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EEAF0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00EFA8C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00F03D4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012C7A4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027E8B0 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027EEE0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02805A0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0281094 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0281230 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281AD0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0281F18 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C02831A0 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02848E0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02863D0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C008DB9C (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0100ABC (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  struct _KTHREAD *v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rax
  int v18; // eax
  char *v19; // rcx
  __int64 v20; // r14
  struct _KTHREAD *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  struct _KTHREAD *v28; // r15
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbp
  struct _KTHREAD *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r15
  struct _KTHREAD *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // rax
  __int64 v48; // rcx
  struct _KTHREAD *v49; // r12
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rcx
  struct _KTHREAD *v58; // rbp
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 *v62; // rax
  __int64 v63; // rcx
  struct _KTHREAD *v64; // r12
  __int64 v65; // rbp
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 *v69; // rax
  struct _KTHREAD *v70; // rbp
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 *v75; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v79; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v81; // rax
  int v82; // ebx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // ebx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // ebx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // ebx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // ebx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // ebx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // ebx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // ebx
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // ebx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = *(_QWORD *)a2 + 88LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(this)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v79),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 3) = 0;
  if ( v6 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
  {
    v12 = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v11)
      || (v81 = PsGetCurrentProcess(v15, v14, v16),
          v82 = PsGetProcessSessionIdEx(v81),
          v84 = PsGetCurrentThreadProcess(v83),
          v82 == (unsigned int)PsGetProcessSessionIdEx(v84)) )
    {
      v17 = (__int64 *)PsGetThreadWin32Thread(v12);
      if ( v17 )
        v13 = *v17;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v13 + 280) + 32LL) == *(_QWORD *)this )
      v18 = **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    else
      v18 = 0;
    *((_DWORD *)this + 2) = v18;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    v19 = (char *)*(unsigned int *)(*(_QWORD *)this + 88LL);
    *((_DWORD *)this + 2) = (_DWORD)v19;
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v85 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v85;
    *((_OWORD *)this + 2) = *(_OWORD *)(v85 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v85 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v85 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v85 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v85 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v85 + 96);
    v19 = (char *)this + 144;
    *((_OWORD *)this + 8) = *(_OWORD *)(v85 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v85 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v85 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v85 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v20 = *(_QWORD *)this;
    v118 = **(_QWORD **)this;
    v21 = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess(v19)
       || (v86 = PsGetCurrentProcess(v23, v22, v24),
           v87 = PsGetProcessSessionIdEx(v86),
           v89 = PsGetCurrentThreadProcess(v88),
           v87 == (unsigned int)PsGetProcessSessionIdEx(v89)))
      && (v25 = (__int64 *)PsGetThreadWin32Thread(v21)) != 0LL
      && (v26 = *v25) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v118)
      && (*(_DWORD *)(v26 + 104) || *(_DWORD *)(v26 + 108)) )
    {
      v28 = KeGetCurrentThread();
      v29 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v27)
        || (v90 = PsGetCurrentProcess(v31, v30, v32),
            v91 = PsGetProcessSessionIdEx(v90),
            v93 = PsGetCurrentThreadProcess(v92),
            v91 == (unsigned int)PsGetProcessSessionIdEx(v93)) )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v33 )
          v29 = *v33;
      }
      v34 = *(_QWORD *)(v29 + 280);
      v35 = 0LL;
      *(_DWORD *)(v34 + 4) = *(_DWORD *)(v20 + 92);
      v36 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v34)
        || (v94 = PsGetCurrentProcess(v38, v37, v39),
            v95 = PsGetProcessSessionIdEx(v94),
            v97 = PsGetCurrentThreadProcess(v96),
            v95 == (unsigned int)PsGetProcessSessionIdEx(v97)) )
      {
        v40 = (__int64 *)PsGetThreadWin32Thread(v36);
        if ( v40 )
          v35 = *v40;
      }
      v41 = *(_QWORD *)(v35 + 280);
      v42 = 0LL;
      *(_DWORD *)(v41 + 8) = *(_DWORD *)(v20 + 96);
      v43 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v41)
        || (v98 = PsGetCurrentProcess(v45, v44, v46),
            v99 = PsGetProcessSessionIdEx(v98),
            v101 = PsGetCurrentThreadProcess(v100),
            v99 == (unsigned int)PsGetProcessSessionIdEx(v101)) )
      {
        v47 = (__int64 *)PsGetThreadWin32Thread(v43);
        if ( v47 )
          v42 = *v47;
      }
      v49 = KeGetCurrentThread();
      v50 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v48)
        || (v102 = PsGetCurrentProcess(v52, v51, v53),
            v103 = PsGetProcessSessionIdEx(v102),
            v105 = PsGetCurrentThreadProcess(v104),
            v103 == (unsigned int)PsGetProcessSessionIdEx(v105)) )
      {
        v54 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v54 )
          v50 = *v54;
      }
      v55 = *(_QWORD *)(v42 + 280);
      v56 = 0LL;
      v57 = *(_QWORD *)(v50 + 280);
      *(_DWORD *)(v57 + 20) = *(_DWORD *)(v55 + 4);
      v58 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v57)
        || (v106 = PsGetCurrentProcess(v60, v59, v61),
            v107 = PsGetProcessSessionIdEx(v106),
            v109 = PsGetCurrentThreadProcess(v108),
            v107 == (unsigned int)PsGetProcessSessionIdEx(v109)) )
      {
        v62 = (__int64 *)PsGetThreadWin32Thread(v58);
        if ( v62 )
          v56 = *v62;
      }
      v64 = KeGetCurrentThread();
      v65 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v63)
        || (v110 = PsGetCurrentProcess(v67, v66, v68),
            v111 = PsGetProcessSessionIdEx(v110),
            v113 = PsGetCurrentThreadProcess(v112),
            v111 == (unsigned int)PsGetProcessSessionIdEx(v113)) )
      {
        v69 = (__int64 *)PsGetThreadWin32Thread(v64);
        if ( v69 )
          v65 = *v69;
      }
      *(_DWORD *)(*(_QWORD *)(v65 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v56 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v20, 1);
      v70 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v71)
        || (v114 = PsGetCurrentProcess(v73, v72, v74),
            v115 = PsGetProcessSessionIdEx(v114),
            v117 = PsGetCurrentThreadProcess(v116),
            v115 == (unsigned int)PsGetProcessSessionIdEx(v117)) )
      {
        v75 = (__int64 *)PsGetThreadWin32Thread(v70);
        if ( v75 )
          v2 = *v75;
      }
      **(_DWORD **)(v2 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v118);
      *(_DWORD *)(*(_QWORD *)(v20 + 32) + 88LL) = *(_DWORD *)(v20 + 92);
      *(_WORD *)(*(_QWORD *)(v20 + 32) + 76LL) = *(_WORD *)(v20 + 96);
      *(_DWORD *)(v20 + 88) = 1;
    }
  }
  return this;
}
