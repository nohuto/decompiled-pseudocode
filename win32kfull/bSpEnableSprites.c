__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _RECTL *v4; // r14
  __int64 v5; // r8
  int v6; // ecx
  int v7; // edx
  _QWORD *v8; // rsi
  struct _SURFOBJ *Surface; // rdx
  int v10; // ecx
  int v11; // ecx
  struct REGION *v12; // rdx
  REGION *v13; // rcx
  int v15; // [rsp+20h] [rbp-10h]
  struct REGION *v16; // [rsp+60h] [rbp+30h] BYREF
  REGION *v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 1LL;
  v2 = *(_QWORD *)(a1 + 2528);
  v3 = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1;
  v4 = (struct _RECTL *)(a1 + 120);
  v5 = (v2 + 24) & -(__int64)(v2 != 0);
  *(_QWORD *)(a1 + 112) = v5 & -(__int64)(v5 != 24);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(v5 + 0x48);
  v6 = *(unsigned __int16 *)(v5 + 0x4C);
  *(_DWORD *)(v3 + 96) = v6;
  LODWORD(v2) = *(_DWORD *)(v5 + 0x58);
  *(_DWORD *)(v3 + 92) = v2;
  *(_DWORD *)(v3 + 104) = v6;
  *(_DWORD *)(v3 + 100) = v2;
  v7 = **(_DWORD **)(*(_QWORD *)(v5 + 104) + 112LL) | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 104) + 112LL) + 8LL);
  v4->left = 0;
  *(_DWORD *)(v3 + 112) = v7;
  LODWORD(v2) = *(_DWORD *)(v5 + 32);
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = v2;
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(v5 + 36);
  *(_QWORD *)(v3 + 120) = GreCreateSemaphore();
  *(_QWORD *)(v3 + 128) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(v3 + 664), (PULONG)(v3 + 680), 0x40u);
  GreInitializePushLock(v3 + 688);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  if ( *(_QWORD *)(v3 + 120) )
  {
    if ( *(_QWORD *)(v3 + 128) )
    {
      if ( v17 )
      {
        if ( v18 )
        {
          if ( v16 )
          {
            v8 = (_QWORD *)Win32AllocPoolZInit(40LL, 1919972167LL);
            if ( v8 )
            {
              Surface = psoSpCreateSurface((struct _SPRITESTATE *)v3, 0, 1, 1, v15);
              if ( Surface )
              {
                *(_DWORD *)v8 = *(_DWORD *)(v3 + 44);
                v10 = *(_DWORD *)(v3 + 52);
                v8[2] = 0LL;
                *((_DWORD *)v8 + 1) = v10;
                v8[1] = 40LL;
                *((_DWORD *)v8 + 6) = v4->left;
                v11 = *(_DWORD *)(v3 + 48);
                v8[4] = 0LL;
                *((_DWORD *)v8 + 7) = v11;
                *(_QWORD *)(v3 + 1024) = Surface;
                *(_QWORD *)(v3 + 136) = v8;
                *(_QWORD *)(v3 + 144) = v8 + 5;
                RGNOBJ::vSet((RGNOBJ *)&v16, v4);
                v12 = v16;
                *(_QWORD *)(v3 + 864) = v16;
                XCLIPOBJ::vSetup((XCLIPOBJ *)(v3 + 872), v12, (struct ERECTL *)v4, 1);
                v13 = v17;
                *(_QWORD *)(v3 + 696) = v17;
                REGION::vStamp(v13);
                *(_QWORD *)(v3 + 704) = v18;
                *(_QWORD *)(v3 + 1056) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
                *(_QWORD *)(v3 + 1192) = *(_QWORD *)(a1 + 2792);
                *(_QWORD *)(v3 + 1200) = *(_QWORD *)(a1 + 2776);
                *(_QWORD *)(v3 + 1208) = *(_QWORD *)(a1 + 2784);
                *(_QWORD *)(v3 + 1224) = *(_QWORD *)(a1 + 2808);
                *(_QWORD *)(v3 + 1232) = *(_QWORD *)(a1 + 2816);
                *(_QWORD *)(v3 + 1240) = *(_QWORD *)(a1 + 2824);
                *(_QWORD *)(v3 + 1248) = *(_QWORD *)(a1 + 2848);
                *(_QWORD *)(v3 + 1256) = *(_QWORD *)(a1 + 2912);
                *(_QWORD *)(v3 + 1264) = *(_QWORD *)(a1 + 3256);
                *(_QWORD *)(v3 + 1272) = *(_QWORD *)(a1 + 3232);
                *(_QWORD *)(v3 + 1280) = *(_QWORD *)(a1 + 3224);
                *(_QWORD *)(v3 + 1288) = *(_QWORD *)(a1 + 3208);
                *(_QWORD *)(v3 + 1304) = *(_QWORD *)(a1 + 3216);
                *(_QWORD *)(v3 + 1296) = *(_QWORD *)(a1 + 2984);
                *(_QWORD *)(v3 + 1312) = *(_QWORD *)(a1 + 3384);
                if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
                  vSpHook((struct _SPRITESTATE *)v3);
                return 1LL;
              }
              Win32FreePool(v8);
            }
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(v3 + 120) )
    GreDeleteSemaphore();
  if ( *(_QWORD *)(v3 + 128) )
    GreDeleteSemaphore();
  *(_QWORD *)(v3 + 120) = 0LL;
  *(_QWORD *)(v3 + 128) = 0LL;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  return 0LL;
}
