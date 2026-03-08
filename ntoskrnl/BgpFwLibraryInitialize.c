/*
 * XREFs of BgpFwLibraryInitialize @ 0x140AEAC78
 * Callers:
 *     BgLibraryInitialize @ 0x140AEB57C (BgLibraryInitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140381108 (BgpGxProcessQrCodeBitmap.c)
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140383BDC (BgpFwAllocateMemory.c)
 *     BgpFwLibraryEnable @ 0x1403843F4 (BgpFwLibraryEnable.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     BgpFwInitializeReservePool @ 0x140AEB5A8 (BgpFwInitializeReservePool.c)
 *     ResFwConfigureDisplayStringResources @ 0x140AEB630 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140AEB920 (AnFwConfigureProgressResources.c)
 *     BgpFwLibraryDestroy @ 0x140AEBA88 (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140AEEE38 (BgpFwReservePoolSwap.c)
 *     AnFwProgressIndicatorTransition @ 0x140AEF174 (AnFwProgressIndicatorTransition.c)
 *     LogFwInitialize @ 0x140AEFA18 (LogFwInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140B991D4 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x140B99E88 (BgpFoInitialize.c)
 *     BgpFwInitializeLock @ 0x140B9A080 (BgpFwInitializeLock.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 result; // rax
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // r13d
  int v15; // eax
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  void *v24; // rbx
  int v25; // eax
  __int64 v26; // rdi
  void *v27; // rbx
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 Memory; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  const wchar_t *v43; // r8
  __int64 v44; // rcx
  unsigned int v45; // [rsp+60h] [rbp+8h]
  unsigned int v47; // [rsp+70h] [rbp+18h]
  unsigned int v48; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 116) < 5u )
    return 3221225561LL;
  v4 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
  if ( (dword_140C0E3B0 & 1) != 0 && (dword_140C0E3B0 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
  {
    if ( a2 == -1 )
    {
      dword_140C0E3B0 = BgpFwInitializeLock() | 0xC04;
      qword_140C0E488 = (__int64)&qword_140C0E480;
      qword_140C0E480 = (__int64)&qword_140C0E480;
      v6 = *(_QWORD *)(v5 + 240);
      if ( !v6 || !*(_DWORD *)(a1 + 248) )
        return 3221225626LL;
      BgpFwInitializeReservePool(v6, 0x4000LL);
      v7 = BgpFwLibraryEnable(a1 + 32);
      if ( v7 < 0 )
        goto LABEL_9;
      xmmword_140C0E3E8 = *(_OWORD *)(a1 + 100);
      if ( !*(_QWORD *)(a1 + 88) )
      {
LABEL_67:
        if ( *(_DWORD *)(a1 + 116) >= 3u )
        {
          qword_140C0E530 = *(_QWORD *)(a1 + 404);
          dword_140C0E538 = *(_DWORD *)(a1 + 412);
        }
        dword_140C0E518 = *(_DWORD *)(a1 + 400);
        v7 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
        if ( v7 >= 0 )
          goto LABEL_51;
LABEL_9:
        BgpFwLibraryDestroy();
        return (unsigned int)v7;
      }
      Memory = BgpFwAllocateMemory(0x18uLL);
      if ( Memory )
      {
        *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
        *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
        *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
        *(_DWORD *)(Memory + 12) = 1;
        qword_140C0E458 = Memory;
        v7 = BgpFoInitialize(Memory, 0LL);
        if ( v7 < 0 )
          goto LABEL_9;
        goto LABEL_67;
      }
LABEL_76:
      v7 = -1073741801;
      goto LABEL_9;
    }
    BgpFwAcquireLock();
    v7 = BgpFwLibraryEnable(a1 + 32);
    if ( v7 < 0 )
    {
      BgpFwReleaseLock();
      goto LABEL_9;
    }
    *(PHYSICAL_ADDRESS *)&xmmword_140C0E390 = MmGetPhysicalAddress(qword_140C0E360);
    DWORD2(xmmword_140C0E390) = DWORD2(BgInternal);
    HIDWORD(xmmword_140C0E390) = DWORD1(BgInternal);
    LODWORD(xmmword_140C0E3A0) = HIDWORD(BgInternal);
    if ( (_DWORD)xmmword_140C0E350 == 4 )
    {
      DWORD2(xmmword_140C0E3A0) = 3;
    }
    else if ( (_DWORD)xmmword_140C0E350 == 5 )
    {
      DWORD2(xmmword_140C0E3A0) = 4;
    }
    else
    {
      DWORD2(xmmword_140C0E3A0) = 0;
    }
    v9 = 0;
    v10 = 432;
    v45 = 0;
    xmmword_140C0E490 = *(_OWORD *)(a1 + 272);
    v11 = 0;
    v12 = 0;
    xmmword_140C0E4A0 = *(_OWORD *)(a1 + 288);
    xmmword_140C0E4B0 = *(_OWORD *)(a1 + 304);
    xmmword_140C0E4C0 = *(_OWORD *)(a1 + 320);
    xmmword_140C0E4D0 = *(_OWORD *)(a1 + 336);
    xmmword_140C0E4E0 = *(_OWORD *)(a1 + 352);
    xmmword_140C0E4F0 = *(_OWORD *)(a1 + 368);
    xmmword_140C0E500 = *(_OWORD *)(a1 + 384);
    if ( *(_QWORD *)(a1 + 72) )
    {
      v9 = 32;
      v12 = *(_DWORD *)(a1 + 84);
      v11 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
      v45 = 32;
      v10 = v11 + 464;
    }
    v13 = 0;
    v14 = 0;
    if ( *(_QWORD *)(a1 + 128) )
    {
      v14 = 32;
      v13 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
      v10 += v13 + 32;
    }
    v15 = v12 + 16496 + v10;
    v16 = v15 - v11 - v14 - v13 - v9 - 432;
    v17 = ((v16 >> 3) + 15) & 0xFFFFFFF0;
    v47 = v17 + v15;
    v18 = BgpFwAllocateMemory(v17 + v15);
    qword_140C0E3E0 = v18;
    v19 = v18;
    if ( !v18 )
    {
      BgpFwReleaseLock();
      goto LABEL_76;
    }
    v20 = 3LL;
    v21 = (_OWORD *)v18;
    v22 = (_OWORD *)a1;
    do
    {
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      v21[4] = v22[4];
      v21[5] = v22[5];
      v21[6] = v22[6];
      v21 += 8;
      v23 = v22[7];
      v22 += 8;
      *(v21 - 1) = v23;
      --v20;
    }
    while ( v20 );
    *v21 = *v22;
    v21[1] = v22[1];
    *((_QWORD *)v21 + 4) = *((_QWORD *)v22 + 4);
    *(_DWORD *)v19 = v47;
    *(_DWORD *)(v19 + 120) |= 0x100000u;
    *(_QWORD *)(v19 + 240) = 0LL;
    *(_DWORD *)(v19 + 248) = 0;
    *(_QWORD *)(v19 + 264) = 0LL;
    *(_QWORD *)(v19 + 256) = 0LL;
    v48 = v11 + v45;
    BgpFwInitializeReservePool(v19 + v13 + v11 + v45 + v14 + 432 + v17, v16);
    qword_140C0E460 = 0LL;
    if ( !v11 )
      goto LABEL_77;
    v24 = (void *)(v19 + 432 + v45);
    memmove(v24, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
    *(_DWORD *)(v19 + 444) = 1;
    *(_QWORD *)(v19 + 432) = v24;
    *(_DWORD *)(v19 + 440) = *(_DWORD *)(a1 + 80);
    *(_QWORD *)(v19 + 448) = v24;
    dword_140C0E3B0 |= 0x800u;
    v25 = BgpFoInitialize(v19 + 432, 1LL);
    dword_140C0E3B0 &= ~0x800u;
    if ( v25 >= 0 )
      qword_140C0E460 = v19 + 432;
    if ( !qword_140C0E460 )
LABEL_77:
      DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
    qword_140C0E468 = 0LL;
    if ( v13 )
    {
      v26 = v19 + v48 + 432;
      v27 = (void *)(v26 + v14);
      memmove(v27, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
      *(_DWORD *)(v26 + 12) = 1;
      *(_QWORD *)v26 = v27;
      *(_DWORD *)(v26 + 8) = *(_DWORD *)(a1 + 136);
      *(_QWORD *)(v26 + 16) = v27;
      qword_140C0E468 = v26;
    }
    memset(&qword_140C0E3F8, 0, 0x58uLL);
    if ( *(_QWORD *)(a1 + 144) )
    {
      v28 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
      qword_140C0E3F8 = v28;
      if ( v28 )
      {
        memmove(v28, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
        LODWORD(Size) = *(_DWORD *)(a1 + 160);
        qword_140C0E40C = *(_QWORD *)(a1 + 164);
      }
    }
    v29 = *(_QWORD *)(a1 + 184);
    if ( v29 && (int)BgpGxProcessQrCodeBitmap(v29, &qword_140C0E438) < 0 )
      qword_140C0E438 = 0LL;
    v30 = *(_QWORD *)(a1 + 216);
    if ( v30 )
    {
      v41 = -1LL;
      v42 = -1LL;
      do
        ++v42;
      while ( *(_WORD *)(v30 + 2 * v42) );
      Dst = (wchar_t *)BgpFwAllocateMemory(2 * v42 + 2);
      if ( Dst )
      {
        v43 = *(const wchar_t **)(a1 + 216);
        do
          ++v41;
        while ( v43[v41] );
        wcscpy_s(Dst, v41 + 1, v43);
      }
    }
    qword_140C0E458 = 0LL;
    if ( *(_QWORD *)(a1 + 88) )
    {
      v31 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
      v32 = (__int64)v31;
      if ( v31 )
      {
        memmove(v31, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
        v33 = BgpFwAllocateMemory(0x18uLL);
        v34 = v33;
        if ( v33 )
        {
          *(_DWORD *)(v33 + 12) = 0;
          *(_QWORD *)v33 = v32;
          *(_DWORD *)(v33 + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(v33 + 16) = v32;
          if ( (int)BgpFoInitialize(v33, 0LL) >= 0 )
          {
            qword_140C0E458 = v34;
            goto LABEL_41;
          }
          BgpFwFreeMemory(v32);
          v44 = v34;
        }
        else
        {
          v44 = v32;
        }
        BgpFwFreeMemory(v44);
      }
    }
LABEL_41:
    if ( *(_DWORD *)(a1 + 116) >= 3u )
    {
      qword_140C0E530 = *(_QWORD *)(a1 + 404);
      dword_140C0E538 = *(_DWORD *)(a1 + 412);
    }
    dword_140C0E518 = *(_DWORD *)(a1 + 400);
    if ( *(_DWORD *)(a1 + 116) >= 5u )
      dword_140C0E53C = *(_DWORD *)(a1 + 416);
    dword_140C0E3B0 |= 0x8000u;
    BgpBcInitializeCriticalMode(a1, a2);
    dword_140C0E3B0 = dword_140C0E3B0 & 0xFFFF77FF | 0x800;
    v35 = BgpFwAllocateMemory(0x48uLL);
    dword_140C0E3B0 &= ~0x800u;
    v36 = v35;
    if ( v35 )
    {
      v37 = *(_QWORD *)(a1 + 256);
      if ( v37 )
      {
        *(_OWORD *)v36 = *(_OWORD *)v37;
        *(_OWORD *)(v36 + 16) = *(_OWORD *)(v37 + 16);
        *(_DWORD *)(v36 + 32) = *(_DWORD *)(v37 + 32);
        *(_QWORD *)(v19 + 256) = v36;
        v36 += 36LL;
      }
      v38 = *(_QWORD *)(a1 + 264);
      if ( v38 )
      {
        *(_OWORD *)v36 = *(_OWORD *)v38;
        *(_OWORD *)(v36 + 16) = *(_OWORD *)(v38 + 16);
        *(_DWORD *)(v36 + 32) = *(_DWORD *)(v38 + 32);
        *(_QWORD *)(v19 + 264) = v36;
      }
    }
    qword_140C0E478 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
    qword_140C0E470 = AnFwConfigureProgressResources(*(_QWORD *)(a1 + 264));
    v39 = *(_DWORD *)(a1 + 124);
    dword_140C0E3B0 |= v4 | 0x80;
    dword_140C0E3B4 = v39;
    BgpFwReleaseLock();
    qword_140C0E450 = *(_QWORD *)(a1 + 232);
    goto LABEL_51;
  }
  BgpFwAcquireLock();
  if ( a2 != -1 )
  {
    dword_140C0E3B0 &= ~0x1000u;
    AnFwProgressIndicatorTransition();
LABEL_63:
    BgpFwReleaseLock();
LABEL_51:
    dword_140C0E3B0 |= 1u;
    return 0;
  }
  qword_140C0E360 = 0LL;
  dword_140C0E3B0 = dword_140C0E3B0 & 0xFFEFE7FD | 0x101800;
  BgInternal = 0LL;
  xmmword_140C0E350 = 0LL;
  result = BgpFwLibraryEnable(a1 + 32);
  if ( (int)result >= 0 )
  {
    dword_140C0E3B0 &= ~0x2000u;
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(0LL, *(_QWORD *)(a1 + 240), *(unsigned int *)(a1 + 248));
      qword_140C0E478 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
      qword_140C0E470 = AnFwConfigureProgressResources(*(_QWORD *)(a1 + 264));
    }
    else
    {
      qword_140C0E478 = 0LL;
      qword_140C0E470 = 0LL;
    }
    LogFwInitialize();
    goto LABEL_63;
  }
  return result;
}
