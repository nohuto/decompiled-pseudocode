/*
 * XREFs of bSpEnableSprites @ 0x1C00B7A80
 * Callers:
 *     <none>
 * Callees:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B793C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00B7E14 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rax
  _DWORD *v5; // r15
  __int64 v6; // rdx
  int v7; // ecx
  _DWORD *v8; // rcx
  __int64 v9; // r14
  struct _SURFOBJ *Surface; // rdx
  struct REGION *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-40h]
  struct REGION *v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+58h] [rbp-8h]

  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 2528);
  *(_QWORD *)(a1 + 80) = a1;
  v5 = (_DWORD *)(a1 + 120);
  v6 = (v4 + 24) & ((unsigned __int128)-(__int128)v4 >> 64);
  v2 = 0;
  *(_QWORD *)(a1 + 112) = v6 & -(__int64)(v6 != 24);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(v6 - 24 + 0x60);
  v7 = *(unsigned __int16 *)(v6 - 24 + 0x64);
  *(_DWORD *)(a1 + 176) = v7;
  LODWORD(v4) = *(_DWORD *)(v6 - 24 + 0x70);
  *(_DWORD *)(a1 + 172) = v4;
  *(_DWORD *)(a1 + 184) = v7;
  *(_DWORD *)(a1 + 180) = v4;
  v8 = *(_DWORD **)(*(_QWORD *)(v6 - 24 + 128) + 112LL);
  *(_DWORD *)(a1 + 192) = *v8 | v8[2];
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(v6 - 24 + 56);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(v6 - 24 + 60);
  *(_QWORD *)(a1 + 200) = GreCreateSemaphore();
  *(_QWORD *)(a1 + 208) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(a1 + 744), (PULONG)(a1 + 760), 0x40u);
  GreInitializePushLock(a1 + 768);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  if ( !*(_QWORD *)(a1 + 200) )
    goto LABEL_21;
  if ( !*(_QWORD *)(a1 + 208) )
    goto LABEL_21;
  if ( !v20 )
    goto LABEL_21;
  if ( !v18 )
    goto LABEL_21;
  if ( !v16 )
    goto LABEL_21;
  v9 = Win32AllocPoolZInit(40LL, 1919972167LL);
  if ( !v9 )
    goto LABEL_21;
  Surface = psoSpCreateSurface((struct _SPRITESTATE *)(a1 + 80), 0, 1, 1, v15);
  if ( !Surface )
  {
    Win32FreePool(v9);
LABEL_21:
    v13 = *(_QWORD *)(a1 + 200);
    if ( v13 )
      GreDeleteSemaphore(v13);
    v14 = *(_QWORD *)(a1 + 208);
    if ( v14 )
      GreDeleteSemaphore(v14);
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 208) = 0LL;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    goto LABEL_14;
  }
  *(_DWORD *)v9 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v9 + 4) = *(_DWORD *)(a1 + 132);
  *(_QWORD *)(v9 + 8) = 40LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_DWORD *)(v9 + 24) = *v5;
  *(_DWORD *)(v9 + 28) = *(_DWORD *)(a1 + 128);
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(a1 + 1104) = Surface;
  *(_QWORD *)(a1 + 216) = v9;
  *(_QWORD *)(a1 + 224) = v9 + 40;
  RGNOBJ::vSet((RGNOBJ *)&v16, (struct _RECTL *)(a1 + 120));
  v11 = v16;
  *(_QWORD *)(a1 + 944) = v16;
  XCLIPOBJ::vSetup((XCLIPOBJ *)(a1 + 952), v11, (struct ERECTL *)(a1 + 120), 1);
  v12 = v20;
  *(_QWORD *)(a1 + 776) = v20;
  *(_DWORD *)(v12 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  *(_QWORD *)(a1 + 784) = v18;
  *(_QWORD *)(a1 + 1136) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(a1 + 1272) = *(_QWORD *)(a1 + 2792);
  *(_QWORD *)(a1 + 1280) = *(_QWORD *)(a1 + 2776);
  *(_QWORD *)(a1 + 1288) = *(_QWORD *)(a1 + 2784);
  *(_QWORD *)(a1 + 1304) = *(_QWORD *)(a1 + 2808);
  *(_QWORD *)(a1 + 1312) = *(_QWORD *)(a1 + 2816);
  *(_QWORD *)(a1 + 1320) = *(_QWORD *)(a1 + 2824);
  *(_QWORD *)(a1 + 1328) = *(_QWORD *)(a1 + 2848);
  *(_QWORD *)(a1 + 1336) = *(_QWORD *)(a1 + 2912);
  *(_QWORD *)(a1 + 1344) = *(_QWORD *)(a1 + 3256);
  *(_QWORD *)(a1 + 1352) = *(_QWORD *)(a1 + 3232);
  *(_QWORD *)(a1 + 1360) = *(_QWORD *)(a1 + 3224);
  *(_QWORD *)(a1 + 1368) = *(_QWORD *)(a1 + 3208);
  *(_QWORD *)(a1 + 1384) = *(_QWORD *)(a1 + 3216);
  *(_QWORD *)(a1 + 1376) = *(_QWORD *)(a1 + 2984);
  *(_QWORD *)(a1 + 1392) = *(_QWORD *)(a1 + 3384);
  if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
    vSpHook((struct _SPRITESTATE *)(a1 + 80));
  v2 = 1;
LABEL_14:
  if ( v17 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  if ( v19 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return v2;
}
