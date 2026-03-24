/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013D1F0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0143CA4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0038C70 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003B0A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreDeleteSemaphore @ 0x1C005B290 (GreDeleteSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C005B364 (GreCreateSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C007D6A0 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C007F510 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00B02B0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C013D1B4 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  struct PDEV *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  HDEV v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  HDEV v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rdx
  HDEV v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ebp
  void *v29; // rcx
  __int64 SemaphoreInternal; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  signed __int32 v33; // ett
  signed __int32 v34; // ett
  _QWORD *v35; // rax
  int v36; // r8d
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _BYTE v40[112]; // [rsp+20h] [rbp-88h] BYREF
  char *v41; // [rsp+B0h] [rbp+8h] BYREF

  v41 = a2;
  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 10) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40, (struct PDEVOBJ *)&v41);
    v4 = PDEV::Allocate(0);
    *(_QWORD *)this = v4;
    if ( !v4 )
    {
LABEL_54:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
      return this;
    }
    v5 = 2LL;
    *((_QWORD *)v4 + 224) = *((_QWORD *)a2 + 224);
    v6 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
    v7 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1728LL) = *((_QWORD *)a2 + 216);
    *(_QWORD *)(*(_QWORD *)this + 1736LL) = *((_QWORD *)a2 + 217);
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *((_QWORD *)a2 + 219);
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *((_QWORD *)a2 + 220);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 221);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *((_QWORD *)a2 + 222);
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 225);
    *(_QWORD *)(*(_QWORD *)this + 1808LL) = *((_QWORD *)a2 + 226);
    *(_QWORD *)(*(_QWORD *)this + 1816LL) = *((_QWORD *)a2 + 227);
    v8 = (HDEV)(a2 + 1824);
    v9 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v9 = *(_OWORD *)v8;
      v9[1] = *((_OWORD *)v8 + 1);
      v9[2] = *((_OWORD *)v8 + 2);
      v9[3] = *((_OWORD *)v8 + 3);
      v9[4] = *((_OWORD *)v8 + 4);
      v9[5] = *((_OWORD *)v8 + 5);
      v9[6] = *((_OWORD *)v8 + 6);
      v9 += 8;
      v10 = *((_OWORD *)v8 + 7);
      v8 += 32;
      *(v9 - 1) = v10;
      --v6;
    }
    while ( v6 );
    *v9 = *(_OWORD *)v8;
    v9[1] = *((_OWORD *)v8 + 1);
    v9[2] = *((_OWORD *)v8 + 2);
    *((_QWORD *)v9 + 6) = *((_QWORD *)v8 + 6);
    v11 = (HDEV)(a2 + 2136);
    v12 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    do
    {
      *v12 = *(_OWORD *)v11;
      v12[1] = *((_OWORD *)v11 + 1);
      v12[2] = *((_OWORD *)v11 + 2);
      v12[3] = *((_OWORD *)v11 + 3);
      v12[4] = *((_OWORD *)v11 + 4);
      v12[5] = *((_OWORD *)v11 + 5);
      v12[6] = *((_OWORD *)v11 + 6);
      v12 += 8;
      v13 = *((_OWORD *)v11 + 7);
      v11 += 32;
      *(v12 - 1) = v13;
      --v5;
    }
    while ( v5 );
    *v12 = *(_OWORD *)v11;
    v12[1] = *((_OWORD *)v11 + 1);
    v12[2] = *((_OWORD *)v11 + 2);
    v12[3] = *((_OWORD *)v11 + 3);
    v14 = *(_QWORD *)this;
    *(_OWORD *)(v14 + 2456) = *(_OWORD *)(a2 + 2456);
    *(_OWORD *)(v14 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v14 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v14 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_OWORD *)(v14 + 2520) = *(_OWORD *)(a2 + 2520);
    *(_OWORD *)(v14 + 2536) = *(_OWORD *)(a2 + 2536);
    *(_QWORD *)(*(_QWORD *)this + 2560LL) = *((_QWORD *)a2 + 320);
    *(_QWORD *)(*(_QWORD *)this + 2568LL) = *((_QWORD *)a2 + 321);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    *(_QWORD *)(*(_QWORD *)this + 2584LL) = *((_QWORD *)a2 + 323);
    *(_DWORD *)(*(_QWORD *)this + 2644LL) = *((_DWORD *)a2 + 661);
    *(_QWORD *)(*(_QWORD *)this + 2648LL) = *((_QWORD *)a2 + 331);
    *(_QWORD *)(*(_QWORD *)this + 2656LL) = *((_QWORD *)a2 + 332);
    *(_QWORD *)(*(_QWORD *)this + 2672LL) = *((_QWORD *)a2 + 334);
    *(_QWORD *)(*(_QWORD *)this + 2680LL) = *((_QWORD *)a2 + 335);
    *(_QWORD *)(*(_QWORD *)this + 2664LL) = *((_QWORD *)a2 + 333);
    *(_DWORD *)(*(_QWORD *)this + 3552LL) = *((_DWORD *)a2 + 888);
    *(_QWORD *)(*(_QWORD *)this + 3560LL) = 0LL;
    v15 = *((_QWORD *)a2 + 324);
    if ( v15 )
    {
      v16 = *(unsigned __int16 *)(v15 + 68) + *(unsigned __int16 *)(v15 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2592LL) = PALLOCMEM2(v16, 1986356295LL, 0);
      v17 = *(void **)(*(_QWORD *)this + 2592LL);
      if ( !v17 )
        goto LABEL_39;
      memmove(v17, *((const void **)a2 + 324), v16);
    }
    v18 = 1456LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = *((_QWORD *)a2 + 9);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = *((_QWORD *)a2 + 181);
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = *((_QWORD *)a2 + 319);
    do
    {
      *(_QWORD *)(v18 + *(_QWORD *)this) = *(_QWORD *)&a2[v18];
      v18 += 8LL;
    }
    while ( v18 < 1504 );
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = *((_QWORD *)a2 + 188);
    if ( *((_QWORD *)a2 + 211) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
      v19 = *(void **)(*(_QWORD *)this + 1688LL);
      if ( !v19 )
        goto LABEL_39;
      memmove(v19, *((const void **)a2 + 211), 0x600uLL);
    }
    if ( *((_QWORD *)a2 + 212) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1696LL) = PALLOCMEM2(0x600uLL, 1634167111LL, 0);
      v20 = *(void **)(*(_QWORD *)this + 1696LL);
      if ( !v20 )
        goto LABEL_39;
      memmove(v20, *((const void **)a2 + 212), 0x600uLL);
    }
    if ( *((_QWORD *)a2 + 213) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = PALLOCMEM2(0x600uLL, 1735354695LL, 0);
      v21 = *(void **)(*(_QWORD *)this + 1704LL);
      if ( !v21 )
        goto LABEL_39;
      memmove(v21, *((const void **)a2 + 213), 0x600uLL);
    }
    v22 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1720LL) = *((_QWORD *)a2 + 215);
    *(_QWORD *)(*(_QWORD *)this + 2600LL) = *((_QWORD *)a2 + 325);
    *(_DWORD *)(*(_QWORD *)this + 2608LL) = *((_DWORD *)a2 + 652);
    *(_DWORD *)(*(_QWORD *)this + 2612LL) = *((_DWORD *)a2 + 653);
    v23 = (HDEV)(a2 + 2688);
    v24 = (_OWORD *)(*(_QWORD *)this + 2688LL);
    do
    {
      *v24 = *(_OWORD *)v23;
      v24[1] = *((_OWORD *)v23 + 1);
      v24[2] = *((_OWORD *)v23 + 2);
      v24[3] = *((_OWORD *)v23 + 3);
      v24[4] = *((_OWORD *)v23 + 4);
      v24[5] = *((_OWORD *)v23 + 5);
      v24[6] = *((_OWORD *)v23 + 6);
      v24 += 8;
      v25 = *((_OWORD *)v23 + 7);
      v23 += 32;
      *(v24 - 1) = v25;
      --v22;
    }
    while ( v22 );
    *v24 = *(_OWORD *)v23;
    v24[1] = *((_OWORD *)v23 + 1);
    v24[2] = *((_OWORD *)v23 + 2);
    v24[3] = *((_OWORD *)v23 + 3);
    if ( *((_DWORD *)a2 + 292) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2800LL) = *((_QWORD *)a2 + 161);
      *(_QWORD *)(*(_QWORD *)this + 2808LL) = *((_QWORD *)a2 + 162);
      *(_QWORD *)(*(_QWORD *)this + 2832LL) = *((_QWORD *)a2 + 164);
      *(_QWORD *)(*(_QWORD *)this + 2840LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2848LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2872LL) = *((_QWORD *)a2 + 167);
      *(_QWORD *)(*(_QWORD *)this + 2936LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 3280LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 3256LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 3248LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 3232LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3240LL) = *((_QWORD *)a2 + 174);
      *(_QWORD *)(*(_QWORD *)this + 3008LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 3408LL) = *((_QWORD *)a2 + 175);
    }
    v26 = *((_QWORD *)a2 + 445);
    if ( v26 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *(_WORD *)(v26 + 2 * v27) );
      v28 = 2 * v27 + 2;
      *(_QWORD *)(*(_QWORD *)this + 3560LL) = PALLOCMEM2(v28, 1886221639LL, 1);
      v29 = *(void **)(*(_QWORD *)this + 3560LL);
      if ( v29 )
        memmove(v29, *((const void **)a2 + 445), v28);
    }
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = *((_DWORD *)a2 + 10) & 0x60001;
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 48LL) = SemaphoreInternal;
    if ( SemaphoreInternal )
    {
      v31 = GreCreateSemaphoreInternal(0);
      *(_QWORD *)(*(_QWORD *)this + 56LL) = v31;
      if ( v31 )
      {
        v32 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v33 = *(_DWORD *)(v32 + 40);
        while ( v33 != _InterlockedCompareExchange((volatile signed __int32 *)(v32 + 40), v33 & 0xFFFFFFBF, v33) );
        *(_DWORD *)(*(_QWORD *)this + 3568LL) = 0;
        *(_QWORD *)(*(_QWORD *)this + 64LL) = GreCreateSemaphoreInternal(0);
        if ( *(_QWORD *)(*(_QWORD *)this + 64LL) )
        {
          _m_prefetchw((const void *)(v7 + 40));
          do
            v34 = *(_DWORD *)(v7 + 40);
          while ( v34 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 40), v34 | 0x80000, v34) );
          v35 = (_QWORD *)(*(_QWORD *)this + 2624LL);
          v35[1] = v35;
          *v35 = v35;
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          **(_QWORD **)this = gppdevList;
          gppdevList = *(struct PDEV **)this;
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v36);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          v37 = (_QWORD *)(*(_QWORD *)this + 3528LL);
          v37[1] = v37;
          *v37 = v37;
          goto LABEL_54;
        }
      }
    }
LABEL_39:
    v38 = *(_QWORD *)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(*(_QWORD *)this + 56LL));
      v38 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v38 + 48) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(v38 + 48));
      v38 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v38 + 3560) )
    {
      Win32FreePool(*(_QWORD *)(v38 + 3560));
      *(_QWORD *)(*(_QWORD *)this + 3560LL) = 0LL;
      v38 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v38 + 2592) )
    {
      Win32FreePool(*(_QWORD *)(v38 + 2592));
      v38 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v38 + 1688) )
    {
      Win32FreePool(*(_QWORD *)(v38 + 1688));
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = 0LL;
      v38 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v38 + 1696) )
    {
      Win32FreePool(*(_QWORD *)(v38 + 1696));
      *(_QWORD *)(*(_QWORD *)this + 1696LL) = 0LL;
      v38 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v38 + 1704) )
    {
      Win32FreePool(*(_QWORD *)(v38 + 1704));
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = 0LL;
      v38 = *(_QWORD *)this;
    }
    PDEV::Free((struct PDEV *)v38);
    *(_QWORD *)this = 0LL;
    goto LABEL_54;
  }
  return this;
}
