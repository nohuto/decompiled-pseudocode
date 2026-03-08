/*
 * XREFs of bMoveDevDragRect @ 0x1C02866B0
 * Callers:
 *     bSetDevDragRect @ 0x1C001DE80 (bSetDevDragRect.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001F240 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreUpdateSprite @ 0x1C002F030 (GreUpdateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(Gre::Base *a1, int *a2, int *a3, int a4)
{
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  int v8; // r9d
  int v9; // edx
  Gre::Base *v10; // r13
  int v11; // r11d
  int v12; // ebx
  int v13; // r10d
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // r15d
  _DWORD *v17; // r8
  int *v18; // r9
  int v19; // r10d
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // ebx
  HDEV v26; // r14
  int *v27; // rdi
  void **v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  void **v31; // rdi
  struct tagSIZE v33; // [rsp+88h] [rbp-49h] BYREF
  Gre::Base *v34; // [rsp+90h] [rbp-41h] BYREF
  Gre::Base *v35; // [rsp+98h] [rbp-39h]
  char v36[8]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-29h] BYREF
  char v38[8]; // [rsp+B0h] [rbp-21h] BYREF
  int v39; // [rsp+B8h] [rbp-19h] BYREF
  _DWORD v40[15]; // [rsp+BCh] [rbp-15h] BYREF

  v33 = 0LL;
  v35 = a1;
  v34 = a1;
  v7 = Gre::Base::Globals(a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v38, *((HSEMAPHORE *)v7 + 10));
  v37 = *((_QWORD *)v7 + 15);
  GreAcquireSemaphore(v37);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v36, (struct PDEVOBJ *)&v34);
  v8 = a2[3];
  v9 = a2[1];
  v10 = v34;
  v11 = *a3;
  v12 = a3[2];
  v13 = *((_DWORD *)v34 + 312);
  v39 = *a2;
  v40[2] = v8;
  v40[6] = v8;
  v40[14] = v8;
  v14 = a2[2] - v13;
  v40[5] = a2[2];
  v40[1] = v39 + v13;
  v40[10] = v9 + v13;
  v15 = v8 - v13;
  v40[7] = v39 + v13;
  v16 = 0;
  v40[11] = v39 + v13;
  v40[0] = v9;
  v17 = v40;
  v40[3] = v14;
  v18 = v40;
  v40[4] = v9;
  v40[9] = v14;
  v19 = 4;
  v40[8] = v9;
  v40[13] = v14;
  v40[12] = v15;
  do
  {
    v20 = *(v18 - 1);
    if ( v20 <= v11 )
      v20 = v11;
    *(v17 - 1) = v20;
    v21 = v18[1];
    if ( v21 >= v12 )
      v21 = v12;
    v17[1] = v21;
    if ( v20 < v21 )
    {
      v22 = *v18;
      if ( *v18 <= a3[1] )
        v22 = a3[1];
      v23 = a3[3];
      *v17 = v22;
      v24 = v18[2];
      if ( v24 >= v23 )
        v24 = v23;
      v17[2] = v24;
      if ( v22 < v24 )
      {
        v17 += 4;
        ++v16;
      }
    }
    v18 += 4;
    --v19;
  }
  while ( v19 );
  v25 = 0;
  if ( !v16 )
    goto LABEL_20;
  v26 = (HDEV)v35;
  v27 = &v39;
  v28 = (void **)((char *)v10 + 1208);
  do
  {
    v33.cx = v27[2] - *v27;
    v33.cy = v27[3] - v27[1];
    if ( *v28 )
      GreUpdateSprite(
        v26,
        0LL,
        *v28,
        0LL,
        (struct tagPOINT *)&v40[4 * v25 - 1],
        &v33,
        0LL,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a4,
        0,
        0);
    ++v25;
    ++v28;
    v27 += 4;
  }
  while ( v25 < v16 );
  if ( v25 < 4 )
  {
LABEL_20:
    v29 = v25;
    v30 = 4 - v25;
    v31 = (void **)((char *)v10 + 8 * v29 + 1208);
    do
    {
      if ( *v31 )
        GreUpdateSprite(
          (HDEV)v35,
          0LL,
          *v31,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          0LL,
          a4 != 0 ? 0x2000000 : 0,
          0LL,
          0LL,
          a4,
          0,
          0);
      ++v31;
      --v30;
    }
    while ( v30 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v36);
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v38);
  return 1LL;
}
