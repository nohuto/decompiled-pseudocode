/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CA320
 * Callers:
 *     hbmSelectBitmap @ 0x1C0092050 (hbmSelectBitmap.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00175FC (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001DA78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0021968 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     bIsCompatible @ 0x1C0029710 (bIsCompatible.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002BDF8 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002E010 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C002E2E0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C002F050 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C002FA40 (HmgPentryFromPobj.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A014 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A048 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003A0E0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C003A110 (GreAcquireSemaphoreSharedInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005DD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00804B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0081D30 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1C0082188 (IsvMirrorIncludeNotifySupported.c)
 *     vMirrorIncludeNotifyWrap @ 0x1C008287C (vMirrorIncludeNotifyWrap.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C0093EC0 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C920C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00CA238 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00CC650 (bIsSurfaceAllowedInDC.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C013C750 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F580 (--0SURFREF@@QEAA@XZ.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  unsigned int v7; // ebx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  struct _ERESOURCE *v9; // rdi
  int v10; // ebx
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  DC *v15; // r14
  SURFACE *v16; // rsi
  __int64 v17; // rdx
  unsigned int *v18; // rcx
  int v19; // r8d
  unsigned int v20; // r12d
  DC *v21; // r10
  SURFACE *v22; // r14
  HSURF v23; // r12
  DC *v24; // rcx
  int v25; // eax
  int v26; // eax
  BOOL v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int v30; // eax
  unsigned int *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
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
  __int64 v45; // [rsp+68h] [rbp-41h]
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
    v9 = (struct _ERESOURCE *)ghsemGreLock;
    v10 = 1;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (int)v9, v11);
    }
    else
    {
      EngAcquireSemaphore(ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v13, v12, v14);
    v15 = *a1;
    v16 = v47;
    v44 = 0LL;
    v45 = *((_QWORD *)v15 + 6);
    v20 = *(_DWORD *)(HmgPentryFromPobj(v15) + 8) & 0xFFFFFFFE;
    if ( *((_DWORD *)v15 + 8) != 1 )
      goto LABEL_75;
    LODWORD(v18) = 512;
    if ( *((_DWORD *)v16 + 42)
      && ((*(_DWORD *)v16 & 0x800000) == 0 || (*((_WORD *)v16 + 51) & 0x200) == 0)
      && *((_QWORD *)v16 + 20) != *(_QWORD *)v15 )
    {
      goto LABEL_75;
    }
    if ( !(unsigned int)bIsCompatible(&v44, *((_QWORD *)v16 + 16), (__int64)v16, v45, 1)
      || !(unsigned int)bIsSurfaceAllowedInDC(v16, *((_QWORD *)*a1 + 6))
      || v20 && (*((_DWORD *)v16 + 28) & 0x800) != 0
      || !a5 && !v20 )
    {
      goto LABEL_75;
    }
    v22 = (SURFACE *)*((_QWORD *)v21 + 62);
    LODWORD(v18) = 0x4000000;
    if ( !v22 )
      v22 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v22 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v16 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v22 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
      goto LABEL_75;
    }
    v40 = *(_DWORD *)(*((_QWORD *)v21 + 122) + 108LL);
    v39 = v40 & 7;
    if ( (v40 & 7) != 0 )
      DC::dwSetLayout(v21, -1, 0);
    v18 = v44;
    if ( *((unsigned int **)v16 + 16) != v44 )
    {
      *((_DWORD *)v16 + 28) |= 0x8000000u;
      *((_QWORD *)v16 + 16) = v18;
      if ( v18 )
        INC_SHARE_REF_CNT(v18);
    }
    if ( (*((_DWORD *)v22 + 28) & 0x1000000) != 0 )
      v23 = *(HSURF *)v22;
    else
      v23 = v42;
    v41 = (HBITMAP)*((_QWORD *)v22 + 4);
    if ( a2 != v41 )
    {
      v24 = *a1;
      if ( v16 == SURFACE::pdibDefault )
      {
        DC::pSurface(v24, 0LL);
      }
      else
      {
        DC::pSurface(v24, v16);
        if ( (*(_DWORD *)v16 & 0x800000) != 0 && (*((_WORD *)v16 + 51) & 0x200) != 0
          || !*((_WORD *)v16 + 50) && *((_DWORD *)v16 + 54) )
        {
          *((_DWORD *)*a1 + 9) |= 0x10000u;
        }
        else
        {
          *((_DWORD *)*a1 + 9) &= ~0x10000u;
        }
      }
      *((_QWORD *)*a1 + 64) = *((_QWORD *)v16 + 7);
      *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0xFu;
      if ( v22 != SURFACE::pdibDefault )
      {
        if ( (*((_DWORD *)v22 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap();
        SURFACE::vDec_cRef(v22);
        if ( !*((_DWORD *)v22 + 42) )
        {
          if ( v23 )
            v23 = *(HSURF *)v22;
          v25 = *((_DWORD *)v22 + 28);
          if ( (v25 & 0x8000000) != 0 )
          {
            v42 = (HSURF)*((_QWORD *)v22 + 16);
            *((_QWORD *)v22 + 16) = 0LL;
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v42);
            v25 = *((_DWORD *)v22 + 28);
          }
          *((_DWORD *)v22 + 28) = v25 & 0xF7FFFFFF;
        }
      }
      if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
        vMirrorIncludeNotifyWrap();
      v26 = *((_DWORD *)v16 + 28);
      v27 = (v26 & 0x4000) != 0 || (v26 & 0x800010) != 0 && (*(_DWORD *)(v45 + 40) & 1) != 0;
      v28 = *((_DWORD *)*a1 + 9) | 0x200;
      if ( !v27 )
        v28 = *((_DWORD *)*a1 + 9) & 0xFFFFFDFF;
      *((_DWORD *)*a1 + 9) = v28;
      v29 = *((_DWORD *)*a1 + 9) | 0x8000;
      if ( (*((_DWORD *)v16 + 28) & *((_DWORD *)*a1 + 9) & 0x200) == 0 )
        v29 = *((_DWORD *)*a1 + 9) & 0xFFFF7FFF;
      *((_DWORD *)*a1 + 9) = v29;
      if ( v16 != SURFACE::pdibDefault )
      {
        INC_SHARE_REF_CNT((unsigned int *)v16);
        ++*((_DWORD *)v16 + 42);
        if ( (*(_DWORD *)v16 & 0x800000) == 0 || (*((_WORD *)v16 + 51) & 0x200) == 0 )
        {
          *((_QWORD *)v16 + 20) = *(_QWORD *)*a1;
          *((_QWORD *)v16 + 6) = *((_QWORD *)*a1 + 6);
        }
      }
      v30 = SURFACE::bDIBSection(v16);
      *v31 = *v31 & 0xFFFFFFFE | (v30 != 0);
      if ( (unsigned int)SURFACE::bDIBSection(v16) )
        v33 = *((_QWORD *)v16 + 25);
      else
        v33 = 0LL;
      *(_QWORD *)(v32 + 24) = v33;
      DEC_SHARE_REF_CNT((unsigned int *)v47);
      v47 = 0LL;
      GreReleaseHmgrSemaphore(v35, v34, v36);
      v10 = 0;
      DC::bSetDefaultRegion(*a1);
      DC::AcquireDcVisRgnShared(*a1, (__int64)&v42);
      DC::vUpdate_VisRect(*a1, *((__m128i **)*a1 + 143));
      if ( v43 )
        CPushLock::ReleaseLock((CPushLock *)(v42 + 278));
      if ( v23 )
      {
        SURFREF::SURFREF((SURFREF *)v48, v23);
        SURFREF::bDeleteSurface((__int64)v48, 0);
        v41 = (HBITMAP)gahStockObjects[21];
        SURFREF::~SURFREF((SURFREF *)v48);
      }
    }
    if ( v39 )
      DC::dwSetLayout(*a1, -1, v40);
    if ( v10 )
LABEL_75:
      GreReleaseHmgrSemaphore((int)v18, v17, v19);
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)v9, v19);
    GreReleaseSemaphoreInternal(v9);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  SURFREF::~SURFREF((SURFREF *)v46);
  return v41;
}
