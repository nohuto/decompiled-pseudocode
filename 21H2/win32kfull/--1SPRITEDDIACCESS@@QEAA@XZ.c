/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008BED0
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
 */

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(__int64 **this)
{
  __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct _KTHREAD *v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rbp
  struct _KTHREAD *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  struct _KTHREAD *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rax
  __int64 v30; // rcx
  struct _KTHREAD *v31; // r15
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rcx
  struct _KTHREAD *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // rax
  __int64 v45; // rcx
  struct _KTHREAD *v46; // r15
  __int64 v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 *v51; // rax
  struct _KTHREAD *v52; // rbp
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // rax
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v65; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v67; // rax
  int v68; // ebx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // ebx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ebx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // ebx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // ebx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // rax
  _OWORD *v91; // rcx
  __int128 v92; // [rsp+20h] [rbp-C8h]
  __int128 v93; // [rsp+30h] [rbp-B8h]
  __int128 v94; // [rsp+40h] [rbp-A8h]
  __int128 v95; // [rsp+50h] [rbp-98h]
  __int128 v96; // [rsp+60h] [rbp-88h]
  __int128 v97; // [rsp+70h] [rbp-78h]
  __int128 v98; // [rsp+80h] [rbp-68h]
  __int128 v99; // [rsp+90h] [rbp-58h]
  __int128 v100; // [rsp+A0h] [rbp-48h]
  __int128 v101; // [rsp+B0h] [rbp-38h]
  __int64 *v102; // [rsp+C0h] [rbp-28h]
  __int64 v103; // [rsp+F0h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v2 = *this;
    v103 = **this;
    CurrentThread = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess(this)
       || (v59 = PsGetCurrentProcess(v5, v4, v6),
           v60 = PsGetProcessSessionIdEx(v59),
           v62 = PsGetCurrentThreadProcess(v61),
           v60 == (unsigned int)PsGetProcessSessionIdEx(v62)))
      && (v7 = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v8 = *v7) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v103)
      && (*(_DWORD *)(v8 + 104) || *(_DWORD *)(v8 + 108)) )
    {
      v10 = KeGetCurrentThread();
      v11 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v9)
        || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v65),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v10);
        if ( ThreadWin32Thread )
          v11 = *ThreadWin32Thread;
      }
      v16 = *(_QWORD *)(v11 + 280);
      v17 = 0LL;
      *(_DWORD *)(v16 + 12) = *((_DWORD *)v2 + 25);
      v18 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v16)
        || (v67 = PsGetCurrentProcess(v20, v19, v21),
            v68 = PsGetProcessSessionIdEx(v67),
            v70 = PsGetCurrentThreadProcess(v69),
            v68 == (unsigned int)PsGetProcessSessionIdEx(v70)) )
      {
        v22 = (__int64 *)PsGetThreadWin32Thread(v18);
        if ( v22 )
          v17 = *v22;
      }
      v23 = *(_QWORD *)(v17 + 280);
      v24 = 0LL;
      *(_DWORD *)(v23 + 16) = *((_DWORD *)v2 + 26);
      v25 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v23)
        || (v71 = PsGetCurrentProcess(v27, v26, v28),
            v72 = PsGetProcessSessionIdEx(v71),
            v74 = PsGetCurrentThreadProcess(v73),
            v72 == (unsigned int)PsGetProcessSessionIdEx(v74)) )
      {
        v29 = (__int64 *)PsGetThreadWin32Thread(v25);
        if ( v29 )
          v24 = *v29;
      }
      v31 = KeGetCurrentThread();
      v32 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v30)
        || (v75 = PsGetCurrentProcess(v34, v33, v35),
            v76 = PsGetProcessSessionIdEx(v75),
            v78 = PsGetCurrentThreadProcess(v77),
            v76 == (unsigned int)PsGetProcessSessionIdEx(v78)) )
      {
        v36 = (__int64 *)PsGetThreadWin32Thread(v31);
        if ( v36 )
          v32 = *v36;
      }
      v37 = *(_QWORD *)(v24 + 280);
      v38 = 0LL;
      v39 = *(_QWORD *)(v32 + 280);
      *(_DWORD *)(v39 + 20) = *(_DWORD *)(v37 + 12);
      v40 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v39)
        || (v79 = PsGetCurrentProcess(v42, v41, v43),
            v80 = PsGetProcessSessionIdEx(v79),
            v82 = PsGetCurrentThreadProcess(v81),
            v80 == (unsigned int)PsGetProcessSessionIdEx(v82)) )
      {
        v44 = (__int64 *)PsGetThreadWin32Thread(v40);
        if ( v44 )
          v38 = *v44;
      }
      v46 = KeGetCurrentThread();
      v47 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v45)
        || (v83 = PsGetCurrentProcess(v49, v48, v50),
            v84 = PsGetProcessSessionIdEx(v83),
            v86 = PsGetCurrentThreadProcess(v85),
            v84 == (unsigned int)PsGetProcessSessionIdEx(v86)) )
      {
        v51 = (__int64 *)PsGetThreadWin32Thread(v46);
        if ( v51 )
          v47 = *v51;
      }
      *(_DWORD *)(*(_QWORD *)(v47 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v38 + 280) + 16LL);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v2, 0);
      v52 = KeGetCurrentThread();
      v53 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v54)
        || (v87 = PsGetCurrentProcess(v56, v55, v57),
            v88 = PsGetProcessSessionIdEx(v87),
            v90 = PsGetCurrentThreadProcess(v89),
            v88 == (unsigned int)PsGetProcessSessionIdEx(v90)) )
      {
        v58 = (__int64 *)PsGetThreadWin32Thread(v52);
        if ( v58 )
          v53 = *v58;
      }
      **(_DWORD **)(v53 + 280) = 0;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v103);
      *(_DWORD *)(v2[4] + 88) = *((_DWORD *)v2 + 25);
      *(_WORD *)(v2[4] + 76) = *((_WORD *)v2 + 52);
      *((_DWORD *)v2 + 22) = 0;
    }
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v92 = *((_OWORD *)this + 1);
    v93 = *((_OWORD *)this + 2);
    v94 = *((_OWORD *)this + 3);
    v95 = *((_OWORD *)this + 4);
    v96 = *((_OWORD *)this + 5);
    v97 = *((_OWORD *)this + 6);
    v98 = *((_OWORD *)this + 7);
    v99 = *((_OWORD *)this + 8);
    v100 = *((_OWORD *)this + 9);
    v101 = *((_OWORD *)this + 10);
    v102 = this[22];
    v91 = *(_OWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    *v91 = v92;
    v91[1] = v93;
    v91[2] = v94;
    v91[3] = v95;
    v91[4] = v96;
    v91[5] = v97;
    v91[6] = v98;
    v91 += 8;
    *(v91 - 1) = v99;
    *v91 = v100;
    v91[1] = v101;
    *((_QWORD *)v91 + 4) = v102;
  }
}
