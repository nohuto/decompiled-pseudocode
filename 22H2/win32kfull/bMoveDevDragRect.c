/*
 * XREFs of bMoveDevDragRect @ 0x1C0285678
 * Callers:
 *     bSetDevDragRect @ 0x1C0029460 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(HDEV a1, int *a2, int *a3, int a4)
{
  HDEV v5; // rsi
  int v8; // r9d
  int v9; // edx
  HDEV v10; // r13
  int v11; // r11d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // r15d
  int *v18; // r9
  _DWORD *v19; // r8
  int v20; // r10d
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // ebx
  HDEV v27; // r14
  int *v28; // rdi
  void **v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  void **v32; // rdi
  struct tagSIZE v34; // [rsp+88h] [rbp-49h] BYREF
  HDEV v35; // [rsp+90h] [rbp-41h] BYREF
  HDEV v36; // [rsp+98h] [rbp-39h]
  _BYTE v37[8]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-29h] BYREF
  _BYTE v39[8]; // [rsp+B0h] [rbp-21h] BYREF
  int v40; // [rsp+B8h] [rbp-19h] BYREF
  _DWORD v41[3]; // [rsp+BCh] [rbp-15h] BYREF
  int v42; // [rsp+C8h] [rbp-9h]
  int v43; // [rsp+CCh] [rbp-5h]
  int v44; // [rsp+D0h] [rbp-1h]
  int v45; // [rsp+D4h] [rbp+3h]
  int v46; // [rsp+D8h] [rbp+7h]
  int v47; // [rsp+DCh] [rbp+Bh]
  int v48; // [rsp+E0h] [rbp+Fh]
  int v49; // [rsp+E4h] [rbp+13h]
  int v50; // [rsp+E8h] [rbp+17h]
  int v51; // [rsp+ECh] [rbp+1Bh]
  int v52; // [rsp+F0h] [rbp+1Fh]
  int v53; // [rsp+F4h] [rbp+23h]

  v34 = 0LL;
  v5 = a1;
  v36 = a1;
  v35 = a1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v39, ghsemDynamicModeChange);
  v38 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v37, (struct PDEVOBJ *)&v35);
  v8 = a2[3];
  v9 = a2[1];
  v10 = v35;
  v11 = *a3;
  v12 = *((_DWORD *)v35 + 314);
  v40 = *a2;
  v41[2] = v8;
  v45 = v8;
  v53 = v8;
  v13 = a2[2];
  v14 = v13;
  v15 = a3[2];
  v44 = v13;
  v49 = v9 + v12;
  v16 = v8 - v12;
  v41[1] = v40 + v12;
  v17 = 0;
  v46 = v40 + v12;
  v50 = v40 + v12;
  v18 = v41;
  v41[0] = v9;
  v19 = v41;
  v42 = v14 - v12;
  v43 = v9;
  v20 = 4;
  v48 = v42;
  v47 = v9;
  v52 = v42;
  v51 = v16;
  do
  {
    v21 = *(v18 - 1);
    if ( v21 <= v11 )
      v21 = v11;
    *(v19 - 1) = v21;
    v22 = v18[1];
    if ( v22 >= v15 )
      v22 = v15;
    v19[1] = v22;
    if ( v21 < v22 )
    {
      v23 = *v18;
      if ( *v18 <= a3[1] )
        v23 = a3[1];
      v24 = a3[3];
      *v19 = v23;
      v25 = v18[2];
      if ( v25 >= v24 )
        v25 = v24;
      v19[2] = v25;
      if ( v23 < v25 )
      {
        v19 += 4;
        ++v17;
      }
    }
    v18 += 4;
    --v20;
  }
  while ( v20 );
  v26 = 0;
  if ( !v17 )
    goto LABEL_21;
  v27 = v36;
  v28 = &v40;
  v29 = (void **)(v10 + 304);
  do
  {
    v34.cx = v28[2] - *v28;
    v34.cy = v28[3] - v28[1];
    if ( *v29 )
      GreUpdateSprite(
        v27,
        0LL,
        *v29,
        0LL,
        (struct tagPOINT *)&v41[4 * v26 - 1],
        &v34,
        0LL,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a4,
        0);
    ++v26;
    ++v29;
    v28 += 4;
  }
  while ( v26 < v17 );
  if ( v26 < 4 )
  {
    v5 = v36;
LABEL_21:
    v30 = v26;
    v31 = 4 - v26;
    v32 = (void **)(v10 + 2 * v30 + 304);
    do
    {
      if ( *v32 )
        GreUpdateSprite(v5, 0LL, *v32, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, a4 != 0 ? 0x2000000 : 0, 0LL, 0LL, a4, 0);
      ++v32;
      --v31;
    }
    while ( v31 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v37);
  SEMOBJ::vUnlock((SEMOBJ *)&v38);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v39);
  return 1LL;
}
