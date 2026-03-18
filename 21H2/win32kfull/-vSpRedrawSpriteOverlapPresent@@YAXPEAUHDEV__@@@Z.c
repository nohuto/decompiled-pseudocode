/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0085DF4
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x1C0085D2C (GreRedrawSpriteOverlapPresent.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0086C90 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B68CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0157480 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall vSpRedrawSpriteOverlapPresent(HDEV a1)
{
  HDEV v1; // rbx
  struct REGION *v2; // rdx
  struct REGION *v3; // rdi
  int v4; // eax
  int v5; // edx
  int v6; // esi
  int v7; // r14d
  unsigned int v8; // edi
  int v9; // r15d
  int v10; // eax
  int v11; // eax
  int v12; // edx
  REGION *v13; // r14
  int v14; // edi
  __int128 v15; // xmm0
  unsigned int i; // esi
  struct REGION *v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v19; // [rsp+58h] [rbp-B0h] BYREF
  REGION *v20; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v21[192]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[4]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v23[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v24[16]; // [rsp+14Ch] [rbp+44h] BYREF
  char v25; // [rsp+15Ch] [rbp+54h]
  __int64 v26; // [rsp+180h] [rbp+78h]
  __int64 v27; // [rsp+198h] [rbp+90h]
  int v28; // [rsp+1A0h] [rbp+98h]
  int v29; // [rsp+1C8h] [rbp+C0h]
  __int64 v30; // [rsp+1D8h] [rbp+D0h]
  _BYTE v31[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v32[16]; // [rsp+1ECh] [rbp+E4h] BYREF
  char v33; // [rsp+1FCh] [rbp+F4h]
  __int64 v34; // [rsp+220h] [rbp+118h]
  __int64 v35; // [rsp+238h] [rbp+130h]
  int v36; // [rsp+240h] [rbp+138h]
  int v37; // [rsp+268h] [rbp+160h]
  __int64 v38; // [rsp+278h] [rbp+170h]
  int v39; // [rsp+288h] [rbp+180h] BYREF
  _OWORD v40[20]; // [rsp+28Ch] [rbp+184h] BYREF
  _DWORD v41[84]; // [rsp+3D8h] [rbp+2D0h] BYREF

  v19 = a1;
  v1 = a1 + 20;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v21, (struct PDEVOBJ *)&v19);
  GreAcquireSemaphore(*((_QWORD *)v1 + 15));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_QWORD *)v1 + 15), 8LL);
  v2 = (struct REGION *)*((_QWORD *)v1 + 130);
  if ( !v2 )
    goto LABEL_2;
  v3 = (struct REGION *)*((_QWORD *)v1 + 131);
  if ( !v3 )
    goto LABEL_2;
  v27 = 0LL;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v26 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v37 = 1;
  v38 = 0LL;
  v34 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v23, v2, (struct ERECTL *)(v1 + 10), 0);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v31, v3, (struct ERECTL *)(v1 + 10), 0);
  ERECTL::bEmpty((ERECTL *)v24);
  v4 = ERECTL::bEmpty((ERECTL *)v32);
  if ( v5 == v4 )
  {
    if ( !v25 && !v33 )
    {
LABEL_22:
      REGION::vDeleteREGION(*((REGION **)v1 + 131));
      *((_QWORD *)v1 + 131) = 0LL;
      goto LABEL_2;
    }
    if ( v25 == v33 )
    {
      memset(&v41[1], 0, 0x140uLL);
      memset(v40, 0, sizeof(v40));
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v23, 0, 0, 4u, 0x64u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v31, 0, 0, 4u, 0x64u);
      v6 = 1;
      v7 = 1;
      while ( 1 )
      {
        v41[0] = 0;
        v8 = 0;
        v39 = 0;
        v9 = 0;
        if ( v7 )
        {
          v10 = XCLIPOBJ::bEnum((XCLIPOBJ *)v23, 0x144u, (char *)v41, 0LL);
          v8 = v41[0];
          v7 = v10;
        }
        if ( v6 )
        {
          v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v31, 0x144u, (char *)&v39, 0LL);
          v9 = v39;
          v6 = v11;
        }
        if ( v8 != v9 )
          break;
        v12 = 0;
        if ( v8 )
        {
          while ( LODWORD(v40[v12]) == v41[4 * v12 + 1]
               && DWORD1(v40[v12]) == v41[4 * v12 + 2]
               && DWORD2(v40[v12]) == v41[4 * v12 + 3]
               && HIDWORD(v40[v12]) == v41[4 * v12 + 4] )
          {
            if ( ++v12 >= v8 )
              goto LABEL_20;
          }
          break;
        }
LABEL_20:
        if ( !v7 && !v6 )
          goto LABEL_22;
      }
    }
  }
  v13 = (REGION *)*((_QWORD *)v1 + 130);
  *((_QWORD *)v1 + 130) = *((_QWORD *)v1 + 131);
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v1);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
  if ( !v18[0] )
    goto LABEL_40;
  if ( !v17[0] )
    goto LABEL_40;
  RGNOBJ::vSet((RGNOBJ *)v18, (struct _RECTL *)(v1 + 10));
  v20 = v13;
  if ( !RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)v18, (struct RGNOBJ *)&v20, 4u) )
    goto LABEL_40;
  *(_QWORD *)((char *)&v40[4] + 12) = 0LL;
  DWORD1(v40[5]) = 0;
  HIDWORD(v40[7]) = 1;
  *(_QWORD *)((char *)&v40[8] + 12) = 0LL;
  *(_QWORD *)((char *)&v40[3] + 4) = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)&v39, v17[0], (struct ERECTL *)(v1 + 10), 1);
  memset(v41, 0, 0x144uLL);
  if ( !LOBYTE(v40[1]) )
  {
    v15 = *(_OWORD *)(v1 + 10);
    goto LABEL_32;
  }
  if ( LOBYTE(v40[1]) == 1 )
  {
    v15 = v40[0];
LABEL_32:
    *(_OWORD *)&v41[1] = v15;
    v41[0] = 1;
    v14 = 0;
    goto LABEL_33;
  }
  if ( LOBYTE(v40[1]) == 3 )
  {
    v14 = 1;
    XCLIPOBJ::cEnumStart((XCLIPOBJ *)&v39, 0, 0, 4u, 0x14u);
LABEL_33:
    if ( !v14 )
      goto LABEL_35;
    do
    {
      v14 = XCLIPOBJ::bEnum((XCLIPOBJ *)&v39, 0x144u, (char *)v41, 0LL);
LABEL_35:
      for ( i = 0; i < v41[0]; ++i )
      {
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v22, (struct _SPRITESTATE *)v1, (struct _RECTL *)&v41[4 * i + 1]);
        if ( v22[0] )
          vSpRedrawArea((struct _SPRITESTATE *)v1, (struct _RECTL *)&v41[4 * i + 1], 0);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v22);
      }
    }
    while ( v14 );
  }
LABEL_40:
  if ( v13 )
    REGION::vDeleteREGION(v13);
  *((_QWORD *)v1 + 131) = 0LL;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
LABEL_2:
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_QWORD *)v1 + 15));
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 15));
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v21);
}
