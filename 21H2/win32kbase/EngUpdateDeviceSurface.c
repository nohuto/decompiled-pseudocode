/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C016EED0
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001B6EC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C001B790 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C001DE00 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C001EB64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0022E08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C00233C0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0023D3C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025E10 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0070088 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00700D0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00982C0 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00AB334 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 CurrentThread; // rax
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
  HDEV hdev; // rax
  struct REGION *v18; // rdx
  __int64 v19; // rdi
  PERESOURCE v20; // [rsp+20h] [rbp-30h] BYREF
  PSLIST_ENTRY v21[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  struct REGION *v24; // [rsp+A0h] [rbp+50h] BYREF
  struct _POINTL v25; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 1;
  CurrentThread = W32GetCurrentThread();
  v6 = CurrentThread;
  if ( !CurrentThread || (*(_DWORD *)(CurrentThread + 328) & 1) == 0 || pso->iType != 1 )
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
  SEMOBJSHARED::~SEMOBJSHARED((PERESOURCE *)&v24);
  if ( !v3 && ppco && *ppco )
  {
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v20, ghsemVisRgnPublish);
    v8 = *(DC ***)(v6 + 312);
    if ( !v8 )
    {
      SEMOBJSHARED::~SEMOBJSHARED(&v20);
      return 1;
    }
    v10 = *ppco;
    v11 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
    DC::AcquireDcVisRgnShared(*v8, (__int64)&v22);
    v12 = *v8;
    v13 = *v8;
    v25 = (struct _POINTL)*((_QWORD *)*v8 + 142);
    v14 = DC::prgnVisSnap(v13);
    v24 = v14;
    if ( !v15 || !v14 )
      goto LABEL_37;
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v24, (struct RGNOBJ *)&v25) )
      goto LABEL_27;
    if ( !*((_QWORD *)v12 + 147) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
      if ( v21[0] )
        *((PSLIST_ENTRY *)*v8 + 147) = v21[0];
      RGNMEMOBJ::~RGNMEMOBJ(v21);
      v12 = *v8;
    }
    v16 = (struct REGION *)*((_QWORD *)v12 + 147);
    v24 = v16;
    if ( !v16 )
      goto LABEL_37;
    if ( v16 == *(struct REGION **)v11 )
    {
LABEL_27:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v24, (struct RGNOBJ *)&v25) )
    {
      *((_QWORD *)*v8 + 147) = v24;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
      if ( v21[0] )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v8 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v25.x = -*((_DWORD *)hdev + 640);
          v25.y = -*((_DWORD *)hdev + 641);
          RGNOBJ::bOffset((int **)&v24, &v25);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v21, v11, (struct RGNOBJ *)&v24, 8u) )
        {
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v21) != 1 )
          {
            RGNOBJ::vSwap((RGNOBJ *)v21, (struct RGNOBJ *)&v24);
            v18 = v24;
            *((_QWORD *)*v8 + 147) = v24;
            v19 = (__int64)*v8 + 1920;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v19, v18, (struct ERECTL *)&v10->rclBounds, 1);
            if ( !ERECTL::bEmpty((ERECTL *)(v19 + 4)) )
            {
              *ppco = (CLIPOBJ *)v19;
              v3 = 1;
            }
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
    }
LABEL_37:
    if ( v23 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v22 + 1112));
    SEMOBJSHARED::~SEMOBJSHARED(&v20);
  }
  return v3;
}
