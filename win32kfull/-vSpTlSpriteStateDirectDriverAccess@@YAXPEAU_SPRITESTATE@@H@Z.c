/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0066060
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C001C4E4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00E5E20 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C012A3C0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbp
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbp
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rbp
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rbp
  __int64 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rbp
  __int64 *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rbp
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rbp
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rbp
  __int64 *v62; // rax
  __int64 v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rdi
  __int64 *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdi
  __int64 *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdi
  __int64 *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdi
  __int64 *v108; // rax
  __int64 *v109; // rax

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    v5 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    v7 = *(_QWORD *)(v5 + 280);
    v8 = 0LL;
    *(_QWORD *)(v7 + 32) = a1;
    v9 = *((_QWORD *)a1 + 149);
    v10 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v10 )
      v8 = *v10;
    v11 = *(_QWORD *)(v8 + 280);
    v12 = 0LL;
    *(_QWORD *)(v11 + 40) = v9;
    v13 = *((_QWORD *)a1 + 150);
    v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v14 )
      v12 = *v14;
    v15 = *(_QWORD *)(v12 + 280);
    v16 = 0LL;
    *(_QWORD *)(v15 + 48) = v13;
    v17 = *((_QWORD *)a1 + 151);
    v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v18 )
      v16 = *v18;
    v19 = *(_QWORD *)(v16 + 280);
    v20 = 0LL;
    *(_QWORD *)(v19 + 56) = v17;
    v21 = *((_QWORD *)a1 + 153);
    v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v22 )
      v20 = *v22;
    v23 = *(_QWORD *)(v20 + 280);
    v24 = 0LL;
    *(_QWORD *)(v23 + 72) = v21;
    v25 = *((_QWORD *)a1 + 154);
    v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v26 )
      v24 = *v26;
    v27 = *(_QWORD *)(v24 + 280);
    v28 = 0LL;
    *(_QWORD *)(v27 + 80) = v25;
    v29 = *((_QWORD *)a1 + 155);
    v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v30 )
      v28 = *v30;
    v31 = *(_QWORD *)(v28 + 280);
    v32 = 0LL;
    *(_QWORD *)(v31 + 88) = v29;
    v33 = *((_QWORD *)a1 + 156);
    v34 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v34 )
      v32 = *v34;
    v35 = *(_QWORD *)(v32 + 280);
    v36 = 0LL;
    *(_QWORD *)(v35 + 96) = v33;
    v37 = *((_QWORD *)a1 + 157);
    v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v38 )
      v36 = *v38;
    v39 = *(_QWORD *)(v36 + 280);
    v40 = 0LL;
    *(_QWORD *)(v39 + 104) = v37;
    v41 = *((_QWORD *)a1 + 158);
    v42 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v42 )
      v40 = *v42;
    v43 = *(_QWORD *)(v40 + 280);
    v44 = 0LL;
    *(_QWORD *)(v43 + 112) = v41;
    v45 = *((_QWORD *)a1 + 159);
    v46 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v46 )
      v44 = *v46;
    v47 = *(_QWORD *)(v44 + 280);
    v48 = 0LL;
    *(_QWORD *)(v47 + 120) = v45;
    v49 = *((_QWORD *)a1 + 160);
    v50 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v50 )
      v48 = *v50;
    v51 = *(_QWORD *)(v48 + 280);
    v52 = 0LL;
    *(_QWORD *)(v51 + 128) = v49;
    v53 = *((_QWORD *)a1 + 161);
    v54 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v54 )
      v52 = *v54;
    v55 = *(_QWORD *)(v52 + 280);
    v56 = 0LL;
    *(_QWORD *)(v55 + 136) = v53;
    v57 = *((_QWORD *)a1 + 163);
    v58 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v58 )
      v56 = *v58;
    v59 = *(_QWORD *)(v56 + 280);
    v60 = 0LL;
    *(_QWORD *)(v59 + 152) = v57;
    v61 = *((_QWORD *)a1 + 162);
    v62 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v62 )
      v60 = *v62;
    *(_QWORD *)(*(_QWORD *)(v60 + 280) + 144LL) = v61;
    v63 = *((_QWORD *)a1 + 164);
    v64 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v64 )
      v2 = *v64;
    *(_QWORD *)(*(_QWORD *)(v2 + 280) + 160LL) = v63;
  }
  else
  {
    v65 = 0LL;
    v66 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v66 )
      v65 = *v66;
    v67 = *(_QWORD *)(v65 + 280);
    v68 = 0LL;
    *(_QWORD *)(v67 + 32) = 0LL;
    v69 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v69 )
      v68 = *v69;
    v70 = *(_QWORD *)(v68 + 280);
    v71 = 0LL;
    *(_QWORD *)(v70 + 40) = SpStrokeAndFillPath;
    v72 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v72 )
      v71 = *v72;
    v73 = *(_QWORD *)(v71 + 280);
    v74 = 0LL;
    *(_QWORD *)(v73 + 48) = SpStrokePath;
    v75 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v75 )
      v74 = *v75;
    v76 = *(_QWORD *)(v74 + 280);
    v77 = 0LL;
    *(_QWORD *)(v76 + 56) = SpFillPath;
    v78 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v78 )
      v77 = *v78;
    v79 = *(_QWORD *)(v77 + 280);
    v80 = 0LL;
    *(_QWORD *)(v79 + 72) = SpBitBlt;
    v81 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v81 )
      v80 = *v81;
    v82 = *(_QWORD *)(v80 + 280);
    v83 = 0LL;
    *(_QWORD *)(v82 + 80) = SpCopyBits;
    v84 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v84 )
      v83 = *v84;
    v85 = *(_QWORD *)(v83 + 280);
    v86 = 0LL;
    *(_QWORD *)(v85 + 88) = SpStretchBlt;
    v87 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v87 )
      v86 = *v87;
    v88 = *(_QWORD *)(v86 + 280);
    v89 = 0LL;
    *(_QWORD *)(v88 + 96) = SpTextOut;
    v90 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v90 )
      v89 = *v90;
    v91 = *(_QWORD *)(v89 + 280);
    v92 = 0LL;
    *(_QWORD *)(v91 + 104) = SpLineTo;
    v93 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v93 )
      v92 = *v93;
    v94 = *(_QWORD *)(v92 + 280);
    v95 = 0LL;
    *(_QWORD *)(v94 + 112) = SpTransparentBlt;
    v96 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v96 )
      v95 = *v96;
    v97 = *(_QWORD *)(v95 + 280);
    v98 = 0LL;
    *(_QWORD *)(v97 + 120) = SpAlphaBlend;
    v99 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v99 )
      v98 = *v99;
    v100 = *(_QWORD *)(v98 + 280);
    v101 = 0LL;
    *(_QWORD *)(v100 + 128) = SpPlgBlt;
    v102 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v102 )
      v101 = *v102;
    v103 = *(_QWORD *)(v101 + 280);
    v104 = 0LL;
    *(_QWORD *)(v103 + 136) = SpGradientFill;
    v105 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v105 )
      v104 = *v105;
    v106 = *(_QWORD *)(v104 + 280);
    v107 = 0LL;
    *(_QWORD *)(v106 + 152) = SpStretchBltROP;
    v108 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v108 )
      v107 = *v108;
    *(_QWORD *)(*(_QWORD *)(v107 + 280) + 144LL) = SpSaveScreenBits;
    v109 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v109 )
      v2 = *v109;
    *(_QWORD *)(*(_QWORD *)(v2 + 280) + 160LL) = SpDrawStream;
  }
}
