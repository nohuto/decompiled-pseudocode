/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C0142300
 * Callers:
 *     <none>
 * Callees:
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0020318 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020360 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0029250 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002C0E0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002CCE4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C002CD6C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002D230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0031758 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0034DB0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0035490 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0039740 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C003CED8 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005DD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00814E4 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0094BD0 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0097730 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00CA238 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  DC **v8; // rdi
  CLIPOBJ *v10; // r12
  struct RGNOBJ *v11; // r15
  DC *v12; // rsi
  DC *v13; // rcx
  struct REGION *v14; // rax
  __int64 v15; // r10
  struct REGION *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  HDEV hdev; // rax
  struct REGION *v20; // rdx
  __int64 v21; // rdi
  struct _POINTL v22; // [rsp+20h] [rbp-50h] BYREF
  PERESOURCE v23; // [rsp+28h] [rbp-48h] BYREF
  PERESOURCE v24; // [rsp+30h] [rbp-40h] BYREF
  struct REGION *v25; // [rsp+38h] [rbp-38h] BYREF
  REGION *v26[2]; // [rsp+40h] [rbp-30h] BYREF
  REGION *v27[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h] BYREF
  char v29; // [rsp+68h] [rbp-8h]
  struct REGION *v30; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 1) == 0 || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v24, (HSEMAPHORE)ghsemVisRgnUniqueness);
  v7 = *(_DWORD *)(v6 + 336);
  if ( v7 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v7 <= giVisRgnUniqueness || v7 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v7 < giVisRgnUniquenessStable || v7 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SEMOBJSHARED::~SEMOBJSHARED(&v24);
  if ( !v3 && ppco && *ppco )
  {
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v23, ghsemVisRgnPublish);
    v8 = *(DC ***)(v6 + 312);
    if ( !v8 )
    {
      SEMOBJSHARED::~SEMOBJSHARED(&v23);
      return 1;
    }
    v10 = *ppco;
    v11 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
    DC::AcquireDcVisRgnShared(*v8, (__int64)&v28);
    v12 = *v8;
    v13 = *v8;
    v31 = *((_QWORD *)*v8 + 143);
    v14 = DC::prgnVisSnap(v13);
    v25 = v14;
    if ( !v15 || !v14 )
      goto LABEL_37;
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v25, (struct RGNOBJ *)&v31) )
      goto LABEL_27;
    if ( !*((_QWORD *)v12 + 148) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
      if ( v27[0] )
        *((REGION **)*v8 + 148) = v27[0];
      RGNMEMOBJ::~RGNMEMOBJ(v27);
      v12 = *v8;
    }
    v16 = (struct REGION *)*((_QWORD *)v12 + 148);
    v30 = v16;
    if ( !v16 )
      goto LABEL_37;
    if ( v16 == *(struct REGION **)v11 )
    {
LABEL_27:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v31) )
    {
      *((_QWORD *)*v8 + 148) = v30;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v26, v17, v18);
      if ( v26[0] )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v8 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v22.x = -*((_DWORD *)hdev + 646);
          v22.y = -*((_DWORD *)hdev + 647);
          RGNOBJ::bOffset((int **)&v30, &v22);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v26, v11, (struct RGNOBJ *)&v30, 8u) )
        {
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v26) != 1 )
          {
            RGNOBJ::vSwap((RGNOBJ *)v26, (struct RGNOBJ *)&v30);
            v20 = v30;
            *((_QWORD *)*v8 + 148) = v30;
            v21 = (__int64)*v8 + 1928;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v21, v20, (struct ERECTL *)&v10->rclBounds, 1);
            if ( !ERECTL::bEmpty((ERECTL *)(v21 + 4)) )
            {
              *ppco = (CLIPOBJ *)v21;
              v3 = 1;
            }
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v26);
    }
LABEL_37:
    if ( v29 )
      CPushLock::ReleaseLock((CPushLock *)(v28 + 1112));
    SEMOBJSHARED::~SEMOBJSHARED(&v23);
  }
  return v3;
}
