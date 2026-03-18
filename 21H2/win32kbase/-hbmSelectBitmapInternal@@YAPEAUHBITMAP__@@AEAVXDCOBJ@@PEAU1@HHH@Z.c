/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60
 * Callers:
 *     hbmSelectBitmap @ 0x1C009A990 (hbmSelectBitmap.c)
 * Callees:
 *     bIsCompatible @ 0x1C001AFD0 (bIsCompatible.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001C9F4 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001E824 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0021920 (HmgPentryFromPobj.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C002E850 (--1SEMOBJEXORSHARED@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E884 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C002E980 (GreAcquireSemaphoreSharedInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C006478C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1C008F76C (IsvMirrorIncludeNotifySupported.c)
 *     vMirrorIncludeNotifyWrap @ 0x1C009132C (vMirrorIncludeNotifyWrap.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C009E100 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00CBE2C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C016C500 (--0SURFREF@@QEAA@XZ.c)
 *     bIsSurfaceAllowedInDC @ 0x1C01794F0 (bIsSurfaceAllowedInDC.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  unsigned int v7; // ebx
  int v8; // ebx
  int v9; // edi
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DC *v14; // r14
  SURFACE *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int *v18; // rcx
  int v19; // r8d
  unsigned int v20; // r12d
  DC *v21; // r10
  int v22; // r11d
  SURFACE *v23; // r14
  HSURF v24; // r12
  DC *v25; // rcx
  int v26; // eax
  int v27; // eax
  BOOL v28; // r8d
  unsigned int v29; // ecx
  unsigned int v30; // edx
  int v31; // eax
  unsigned int *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // r8d
  _BYTE v38[4]; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v39; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v40; // [rsp+40h] [rbp-69h]
  HBITMAP v41; // [rsp+48h] [rbp-61h]
  HSURF v42; // [rsp+50h] [rbp-59h] BYREF
  char v43; // [rsp+58h] [rbp-51h]
  unsigned int *v44; // [rsp+60h] [rbp-49h] BYREF
  PERESOURCE v45; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v46[32]; // [rsp+70h] [rbp-39h] BYREF
  SURFACE *v47; // [rsp+90h] [rbp-19h]
  _BYTE v48[96]; // [rsp+98h] [rbp-11h] BYREF

  v41 = 0LL;
  v42 = 0LL;
  v7 = (unsigned int)a2;
  SURFREF::SURFREF((SURFREF *)v46);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v38);
  v47 = (SURFACE *)HmgShareLockCheck(v7, 5);
  if ( v47 )
  {
    v8 = (int)ghsemGreLock;
    v9 = 1;
    v45 = ghsemGreLock;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", v8, v10);
    }
    else
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v12, v11, v13);
    v14 = *a1;
    v15 = v47;
    v44 = 0LL;
    v16 = *((_QWORD *)v14 + 6);
    v20 = *(_DWORD *)(HmgPentryFromPobj(v14) + 8) & 0xFFFFFFFE;
    if ( *((_DWORD *)v14 + 8) != 1
      || *((_DWORD *)v15 + 42)
      && ((*(_DWORD *)v15 & 0x800000) == 0 || !_bittest16((const signed __int16 *)v15 + 51, 9u))
      && *((_QWORD *)v15 + 20) != *(_QWORD *)v14
      || !(unsigned int)bIsCompatible(&v44, *((_QWORD *)v15 + 16), (__int64)v15, v16, 1)
      || !(unsigned int)bIsSurfaceAllowedInDC(v15, *((_QWORD *)*a1 + 6))
      || v20 && (*((_DWORD *)v15 + 28) & 0x800) != 0
      || a5 == v22 && !v20 )
    {
      goto LABEL_75;
    }
    v23 = (SURFACE *)*((_QWORD *)v21 + 62);
    if ( !v23 )
      v23 = SURFACE::pdibDefault;
    if ( (!_bittest((const signed __int32 *)v23 + 28, 0x1Au)
       || !_bittest((const signed __int32 *)v15 + 28, 0x1Au)
       || (*((_DWORD *)v23 + 29) & 0x200) != 0)
      && !a4
      && a3 == v22 )
    {
      goto LABEL_75;
    }
    v40 = *(_DWORD *)(*((_QWORD *)v21 + 122) + 108LL);
    v39 = v40 & 7;
    if ( (v40 & 7) != 0 )
      DC::dwSetLayout(v21, -1, 0);
    v18 = v44;
    if ( *((unsigned int **)v15 + 16) != v44 )
    {
      *((_DWORD *)v15 + 28) |= 0x8000000u;
      *((_QWORD *)v15 + 16) = v18;
      if ( v18 )
        INC_SHARE_REF_CNT(v18);
    }
    if ( (*((_DWORD *)v23 + 28) & 0x1000000) != 0 )
      v24 = *(HSURF *)v23;
    else
      v24 = v42;
    v41 = (HBITMAP)*((_QWORD *)v23 + 4);
    if ( a2 != v41 )
    {
      v25 = *a1;
      if ( v15 == SURFACE::pdibDefault )
      {
        DC::pSurface(v25, 0LL);
      }
      else
      {
        DC::pSurface(v25, v15);
        if ( (*(_DWORD *)v15 & 0x800000) != 0 && _bittest16((const signed __int16 *)v15 + 51, 9u)
          || !*((_WORD *)v15 + 50) && *((_DWORD *)v15 + 54) )
        {
          *((_DWORD *)*a1 + 9) |= 0x10000u;
        }
        else
        {
          *((_DWORD *)*a1 + 9) &= ~0x10000u;
        }
      }
      *((_QWORD *)*a1 + 64) = *((_QWORD *)v15 + 7);
      *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0xFu;
      if ( v23 != SURFACE::pdibDefault )
      {
        if ( (*((_DWORD *)v23 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap();
        SURFACE::vDec_cRef(v23);
        if ( !*((_DWORD *)v23 + 42) )
        {
          if ( v24 )
            v24 = *(HSURF *)v23;
          v26 = *((_DWORD *)v23 + 28);
          if ( (v26 & 0x8000000) != 0 )
          {
            v42 = (HSURF)*((_QWORD *)v23 + 16);
            *((_QWORD *)v23 + 16) = 0LL;
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v42);
            v26 = *((_DWORD *)v23 + 28);
          }
          *((_DWORD *)v23 + 28) = v26 & 0xF7FFFFFF;
        }
      }
      if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
        vMirrorIncludeNotifyWrap();
      v27 = *((_DWORD *)v15 + 28);
      v28 = (v27 & 0x4000) != 0 || (v27 & 0x800010) != 0 && (*(_DWORD *)(v16 + 40) & 1) != 0;
      v29 = *((_DWORD *)*a1 + 9) | 0x200;
      if ( !v28 )
        v29 = *((_DWORD *)*a1 + 9) & 0xFFFFFDFF;
      *((_DWORD *)*a1 + 9) = v29;
      v30 = *((_DWORD *)*a1 + 9) | 0x8000;
      if ( (*((_DWORD *)v15 + 28) & *((_DWORD *)*a1 + 9) & 0x200) == 0 )
        v30 = *((_DWORD *)*a1 + 9) & 0xFFFF7FFF;
      *((_DWORD *)*a1 + 9) = v30;
      if ( v15 != SURFACE::pdibDefault )
      {
        INC_SHARE_REF_CNT((unsigned int *)v15);
        ++*((_DWORD *)v15 + 42);
        if ( (*(_DWORD *)v15 & 0x800000) == 0 || (*((_WORD *)v15 + 51) & 0x200) == 0 )
        {
          *((_QWORD *)v15 + 20) = *(_QWORD *)*a1;
          *((_QWORD *)v15 + 6) = *((_QWORD *)*a1 + 6);
        }
      }
      v31 = SURFACE::bDIBSection(v15);
      *v32 = *v32 & 0xFFFFFFFE | (v31 != 0);
      if ( (unsigned int)SURFACE::bDIBSection(v15) )
        *(_QWORD *)(v33 + 24) = *((_QWORD *)v15 + 25);
      else
        *(_QWORD *)(v33 + 24) = 0LL;
      DEC_SHARE_REF_CNT((unsigned int *)v47);
      v47 = 0LL;
      GreReleaseHmgrSemaphore(v35, v34, v36);
      v9 = 0;
      DC::bSetDefaultRegion(*a1);
      DC::AcquireDcVisRgnShared(*a1, (__int64)&v42);
      DC::vUpdate_VisRect(*a1, *((__m128i **)*a1 + 142));
      if ( v43 )
        GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v42 + 278));
      if ( v24 )
      {
        SURFREF::SURFREF((SURFREF *)v48, v24);
        SURFREF::bDeleteSurface((__int64)v48, 0LL);
        v41 = (HBITMAP)gahStockObjects[21];
        SURFREF::~SURFREF((SURFREF *)v48);
      }
    }
    if ( v39 )
      DC::dwSetLayout(*a1, -1, v40);
    if ( v9 )
LABEL_75:
      GreReleaseHmgrSemaphore((int)v18, v17, v19);
    SEMOBJEXORSHARED::~SEMOBJEXORSHARED(&v45);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v38);
  SURFREF::~SURFREF((SURFREF *)v46);
  return v41;
}
