/*
 * XREFs of bSpEnableSprites @ 0x1C00ECED0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED260 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00F0CD0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  unsigned __int64 v2; // rax
  _DWORD *v3; // r15
  __int64 v4; // rdx
  unsigned int v5; // edi
  int v6; // ecx
  _DWORD *v7; // rcx
  _DWORD *v8; // r14
  struct _SURFOBJ *Surface; // rdx
  struct REGION *v10; // rdx
  __int64 v11; // rdx
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
  v2 = *(_QWORD *)(a1 + 2552);
  *(_QWORD *)(a1 + 88) = a1;
  v3 = (_DWORD *)(a1 + 128);
  v4 = (v2 + 24) & ((unsigned __int128)-(__int128)v2 >> 64);
  v5 = 0;
  *(_QWORD *)(a1 + 120) = v4 & -(__int64)(v4 != 24);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(v4 - 24 + 0x60);
  v6 = *(unsigned __int16 *)(v4 - 24 + 0x64);
  *(_DWORD *)(a1 + 184) = v6;
  LODWORD(v2) = *(_DWORD *)(v4 - 24 + 0x70);
  *(_DWORD *)(a1 + 180) = v2;
  *(_DWORD *)(a1 + 192) = v6;
  *(_DWORD *)(a1 + 188) = v2;
  v7 = *(_DWORD **)(*(_QWORD *)(v4 - 24 + 128) + 112LL);
  *(_DWORD *)(a1 + 200) = *v7 | v7[2];
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(v4 - 24 + 56);
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(v4 - 24 + 60);
  *(_QWORD *)(a1 + 208) = GreCreateSemaphore();
  *(_QWORD *)(a1 + 216) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(a1 + 752), (PULONG)(a1 + 768), 0x40u);
  GreInitializePushLock(a1 + 776);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  if ( !*(_QWORD *)(a1 + 208) )
    goto LABEL_21;
  if ( !*(_QWORD *)(a1 + 216) )
    goto LABEL_21;
  if ( !v20 )
    goto LABEL_21;
  if ( !v18 )
    goto LABEL_21;
  if ( !v16 )
    goto LABEL_21;
  v8 = PALLOCMEM2(0x28uLL, 1919972167LL, 1);
  if ( !v8 )
    goto LABEL_21;
  Surface = psoSpCreateSurface((struct _SPRITESTATE *)(a1 + 88), 0, 1, 1, v15);
  if ( !Surface )
  {
    Win32FreePool(v8);
LABEL_21:
    v13 = *(_QWORD *)(a1 + 208);
    if ( v13 )
      GreDeleteSemaphore(v13);
    v14 = *(_QWORD *)(a1 + 216);
    if ( v14 )
      GreDeleteSemaphore(v14);
    *(_QWORD *)(a1 + 208) = 0LL;
    *(_QWORD *)(a1 + 216) = 0LL;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    goto LABEL_12;
  }
  *v8 = *(_DWORD *)(a1 + 132);
  v8[1] = *(_DWORD *)(a1 + 140);
  *((_QWORD *)v8 + 1) = 40LL;
  *((_QWORD *)v8 + 2) = 0LL;
  v8[6] = *v3;
  v8[7] = *(_DWORD *)(a1 + 136);
  *((_QWORD *)v8 + 4) = 0LL;
  *(_QWORD *)(a1 + 1112) = Surface;
  *(_QWORD *)(a1 + 224) = v8;
  *(_QWORD *)(a1 + 232) = v8 + 10;
  RGNOBJ::vSet((RGNOBJ *)&v16, (struct _RECTL *)(a1 + 128));
  v10 = v16;
  *(_QWORD *)(a1 + 952) = v16;
  XCLIPOBJ::vSetup((XCLIPOBJ *)(a1 + 960), v10, (struct ERECTL *)(a1 + 128), 1);
  v11 = v20;
  *(_QWORD *)(a1 + 784) = v20;
  *(_DWORD *)(v11 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  *(_QWORD *)(a1 + 792) = v18;
  *(_QWORD *)(a1 + 1144) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(a1 + 1280) = *(_QWORD *)(a1 + 2816);
  *(_QWORD *)(a1 + 1288) = *(_QWORD *)(a1 + 2800);
  *(_QWORD *)(a1 + 1296) = *(_QWORD *)(a1 + 2808);
  *(_QWORD *)(a1 + 1312) = *(_QWORD *)(a1 + 2832);
  *(_QWORD *)(a1 + 1320) = *(_QWORD *)(a1 + 2840);
  *(_QWORD *)(a1 + 1328) = *(_QWORD *)(a1 + 2848);
  *(_QWORD *)(a1 + 1336) = *(_QWORD *)(a1 + 2872);
  *(_QWORD *)(a1 + 1344) = *(_QWORD *)(a1 + 2936);
  *(_QWORD *)(a1 + 1352) = *(_QWORD *)(a1 + 3280);
  *(_QWORD *)(a1 + 1360) = *(_QWORD *)(a1 + 3256);
  *(_QWORD *)(a1 + 1368) = *(_QWORD *)(a1 + 3248);
  *(_QWORD *)(a1 + 1376) = *(_QWORD *)(a1 + 3232);
  *(_QWORD *)(a1 + 1392) = *(_QWORD *)(a1 + 3240);
  *(_QWORD *)(a1 + 1384) = *(_QWORD *)(a1 + 3008);
  *(_QWORD *)(a1 + 1400) = *(_QWORD *)(a1 + 3408);
  if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
    vSpHook((struct _SPRITESTATE *)(a1 + 88));
  v5 = 1;
LABEL_12:
  if ( v17 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  if ( v19 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return v5;
}
