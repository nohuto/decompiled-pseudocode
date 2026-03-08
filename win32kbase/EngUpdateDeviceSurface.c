/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C018BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001AD78 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C002194C (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0021994 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0042EB0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0043470 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00436C0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0045140 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00455F0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     W32GetCurrentThread @ 0x1C004DBF0 (W32GetCurrentThread.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0053130 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0056EF8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0075590 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00AD770 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DE7E0 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 CurrentThread; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  DC **v12; // rdi
  CLIPOBJ *v14; // r12
  struct RGNOBJ *v15; // r15
  DC *v16; // rsi
  DC *v17; // rcx
  struct REGION *v18; // rax
  __int64 v19; // r9
  struct REGION *v20; // rcx
  int v21; // r9d
  HDEV hdev; // rax
  struct REGION *v23; // rdx
  __int64 v24; // rdi
  struct _POINTL v25; // [rsp+20h] [rbp-20h] BYREF
  PERESOURCE v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27; // [rsp+30h] [rbp-10h] BYREF
  char v28; // [rsp+38h] [rbp-8h]
  struct REGION *v29; // [rsp+90h] [rbp+50h] BYREF
  PVOID v30; // [rsp+98h] [rbp+58h] BYREF

  v3 = 1;
  CurrentThread = W32GetCurrentThread();
  v7 = CurrentThread;
  if ( !CurrentThread || (*(_DWORD *)(CurrentThread + 328) & 1) == 0 || pso->iType != 1 )
    return 1;
  v8 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v29, *(HSEMAPHORE *)(v8 + 96));
  v9 = *(_DWORD *)(v7 + 336);
  v10 = *(_DWORD *)(v8 + 6520);
  if ( v9 != v10 )
  {
    v11 = *(_DWORD *)(v8 + 6516);
    if ( v10 > v11 )
    {
      if ( v9 <= v11 || v9 >= v10 )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v9 < v10 || v9 > v11 )
      goto LABEL_11;
  }
LABEL_12:
  SEMOBJSHARED::~SEMOBJSHARED((PERESOURCE *)&v29);
  if ( !v3 && ppco && *ppco )
  {
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v26, *(HSEMAPHORE *)(v8 + 128));
    v12 = *(DC ***)(v7 + 312);
    if ( !v12 )
    {
      SEMOBJSHARED::~SEMOBJSHARED(&v26);
      return 1;
    }
    v14 = *ppco;
    v15 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
    DC::AcquireDcVisRgnShared(*v12, (__int64)&v27);
    v16 = *v12;
    v17 = *v12;
    v30 = (PVOID)*((_QWORD *)*v12 + 142);
    v18 = DC::prgnVisSnap(v17);
    v29 = v18;
    if ( !v19 || !v18 )
      goto LABEL_36;
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v29, (struct RGNOBJ *)&v30) )
      goto LABEL_26;
    if ( !*((_QWORD *)v16 + 147) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
      if ( v29 )
        *((_QWORD *)*v12 + 147) = v29;
    }
    v20 = (struct REGION *)*((_QWORD *)*v12 + 147);
    v29 = v20;
    if ( !v20 )
      goto LABEL_36;
    if ( v20 == *(struct REGION **)v15 )
    {
LABEL_26:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v29, (struct RGNOBJ *)&v30) )
    {
      *((_QWORD *)*v12 + 147) = v29;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
      if ( v30 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v12 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v25.x = -*((_DWORD *)hdev + 640);
          v25.y = -*((_DWORD *)hdev + 641);
          RGNOBJ::bOffset((int **)&v29, &v25);
        }
        LOBYTE(v21) = 8;
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v30, v15, (struct RGNOBJ *)&v29, v21) )
        {
          v25 = (struct _POINTL)(((unsigned __int64)v30 + 24) & -(__int64)(v30 != 0LL));
          if ( (unsigned int)RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v25) != 1 )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v30, (struct RGNOBJ *)&v29);
            v23 = v29;
            *((_QWORD *)*v12 + 147) = v29;
            v24 = (__int64)*v12 + 1920;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v24, v23, (struct ERECTL *)&v14->rclBounds, 1);
            if ( !ERECTL::bEmpty((ERECTL *)(v24 + 4)) )
            {
              *ppco = (CLIPOBJ *)v24;
              v3 = 1;
            }
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v30);
    }
LABEL_36:
    if ( v28 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v27 + 1112));
    SEMOBJSHARED::~SEMOBJSHARED(&v26);
  }
  return v3;
}
