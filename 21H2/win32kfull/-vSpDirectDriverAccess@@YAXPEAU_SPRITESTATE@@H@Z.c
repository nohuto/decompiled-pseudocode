/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0086018
 * Callers:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00B7718 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00B7768 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B64 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00863B0 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rsi
  int v8; // ebp
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ebp
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // ebp
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  int v26; // ebp
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rsi
  int v30; // ebp
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // ebp
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  int v41; // ebp
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  int v48; // ebp
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 *v51; // rax
  __int64 v52; // [rsp+40h] [rbp+8h] BYREF

  v52 = *(_QWORD *)a1;
  v3 = 0LL;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  if ( a2 )
  {
    if ( v5 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52) && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
    {
      v7 = 0LL;
      v8 = *((_DWORD *)a1 + 23);
      v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v9 )
        v7 = *v9;
      v10 = *(_QWORD *)(v7 + 280);
      v11 = 0LL;
      *(_DWORD *)(v10 + 4) = v8;
      v12 = *((_DWORD *)a1 + 24);
      v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v13 )
        v11 = *v13;
      v14 = *(_QWORD *)(v11 + 280);
      v15 = 0LL;
      *(_DWORD *)(v14 + 8) = v12;
      v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v16 )
        v15 = *v16;
      v17 = *(_QWORD *)(v15 + 280);
      v18 = 0LL;
      v19 = *(_DWORD *)(v17 + 4);
      v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v20 )
        v18 = *v20;
      v21 = *(_QWORD *)(v18 + 280);
      v22 = 0LL;
      *(_DWORD *)(v21 + 20) = v19;
      v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v23 )
        v22 = *v23;
      v24 = *(_QWORD *)(v22 + 280);
      v25 = 0LL;
      v26 = *(_DWORD *)(v24 + 8);
      v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v27 )
        v25 = *v27;
      *(_DWORD *)(*(_QWORD *)(v25 + 280) + 24LL) = v26;
      vSpTlSpriteStateDirectDriverAccess(a1, a2);
      v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v3 = *v28;
      **(_DWORD **)(v3 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 23);
      *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 48);
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( v5 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52) && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
  {
    v29 = 0LL;
    v30 = *((_DWORD *)a1 + 25);
    v31 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v31 )
      v29 = *v31;
    v32 = *(_QWORD *)(v29 + 280);
    v33 = 0LL;
    *(_DWORD *)(v32 + 12) = v30;
    v34 = *((_DWORD *)a1 + 26);
    v35 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v35 )
      v33 = *v35;
    v36 = *(_QWORD *)(v33 + 280);
    v37 = 0LL;
    *(_DWORD *)(v36 + 16) = v34;
    v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v38 )
      v37 = *v38;
    v39 = *(_QWORD *)(v37 + 280);
    v40 = 0LL;
    v41 = *(_DWORD *)(v39 + 12);
    v42 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v42 )
      v40 = *v42;
    v43 = *(_QWORD *)(v40 + 280);
    v44 = 0LL;
    *(_DWORD *)(v43 + 20) = v41;
    v45 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v45 )
      v44 = *v45;
    v46 = *(_QWORD *)(v44 + 280);
    v47 = 0LL;
    v48 = *(_DWORD *)(v46 + 16);
    v49 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v49 )
      v47 = *v49;
    *(_DWORD *)(*(_QWORD *)(v47 + 280) + 24LL) = v48;
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    v50 = 0LL;
    v51 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v51 )
      v50 = *v51;
    **(_DWORD **)(v50 + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52);
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 25);
    *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 52);
    *((_DWORD *)a1 + 22) = 0;
  }
}
