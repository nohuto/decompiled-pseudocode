/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400
 * Callers:
 *     hbmSelectBitmap @ 0x1C000A040 (hbmSelectBitmap.c)
 *     GreSelectBitmap @ 0x1C0043B10 (GreSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001A878 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001D270 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0021A24 (--1SEMOBJEXORSHARED@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0029684 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00433E4 (bIsSurfaceAllowedInDC.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C004344C (--1SURFREF@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0046684 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0047AF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     INC_SHARE_REF_CNT @ 0x1C0047B70 (INC_SHARE_REF_CNT.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0048610 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0049850 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     HmgPentryFromPobj @ 0x1C004A180 (HmgPentryFromPobj.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C004E8C0 (GreAcquireSemaphoreSharedInternal.c)
 *     bIsCompatible @ 0x1C009E210 (bIsCompatible.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C00A40A0 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1C00A621C (IsvMirrorIncludeNotifySupported.c)
 *     vMirrorIncludeNotifyWrap @ 0x1C00A6D4C (vMirrorIncludeNotifyWrap.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00D1CB0 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DE7E0 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  HBITMAP v6; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  struct _ERESOURCE *v12; // rdi
  int v13; // esi
  __int64 v14; // rcx
  DC *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  DC *v19; // rcx
  __int64 v20; // r8
  DC *v21; // r9
  unsigned int v22; // r14d
  int IsSurfaceAllowedInDC; // eax
  struct _LIST_ENTRY *Blink; // r14
  struct _LIST_ENTRY *Flink; // r12
  DC *v26; // rcx
  struct OBJECT *v27; // rax
  int v28; // eax
  BOOL v29; // r8d
  unsigned int v30; // ecx
  bool v31; // al
  __int64 v32; // rdx
  int v33; // eax
  int v34; // r9d
  int v35; // ecx
  unsigned int *v36; // rdx
  __int64 v37; // rdx
  struct OBJECT *v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _BYTE v46[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v47; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v48; // [rsp+40h] [rbp-30h]
  unsigned int v49; // [rsp+44h] [rbp-2Ch]
  struct OBJECT *v50; // [rsp+48h] [rbp-28h] BYREF
  char v51; // [rsp+50h] [rbp-20h]
  __int64 v52; // [rsp+58h] [rbp-18h] BYREF
  __int64 v53; // [rsp+60h] [rbp-10h]
  PERESOURCE v54; // [rsp+68h] [rbp-8h] BYREF

  v6 = 0LL;
  v9 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v53 = v9;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v46);
  LOBYTE(v10) = 5;
  v52 = HmgShareLockCheck(a2, v10);
  v11 = v52;
  if ( v52 )
  {
    v12 = *(struct _ERESOURCE **)(v9 + 120);
    v13 = 1;
    v54 = v12;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal(v12);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v12);
    }
    else
    {
      EngAcquireSemaphore((HSEMAPHORE)v12);
    }
    GreAcquireHmgrSemaphore(v14);
    v15 = *a1;
    v47 = 0LL;
    v16 = *((_QWORD *)v15 + 6);
    v17 = HmgPentryFromPobj();
    v21 = *a1;
    v22 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
    if ( *((_DWORD *)*a1 + 8) == 1
      && (!*(_DWORD *)(v11 + 168)
       || (*(_DWORD *)v11 & 0x800000) != 0 && _bittest16((const signed __int16 *)(v11 + 102), 9u)
       || *(_QWORD *)(v11 + 160) == *(_QWORD *)v21) )
    {
      if ( (unsigned int)bIsCompatible((unsigned int)&v47, *(_QWORD *)(v11 + 128), v11, *((_QWORD *)v21 + 6), 1) )
      {
        IsSurfaceAllowedInDC = bIsSurfaceAllowedInDC(v11, *((_QWORD *)*a1 + 6));
        v18 = 0LL;
        if ( IsSurfaceAllowedInDC )
        {
          if ( (!v22 || (*(_DWORD *)(v11 + 112) & 0x800) == 0) && (a5 || v22) )
          {
            v19 = *a1;
            Blink = (struct _LIST_ENTRY *)*((_QWORD *)*a1 + 62);
            if ( !Blink )
              Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
            if ( _bittest((const signed __int32 *)&Blink[7], 0x1Au)
              && _bittest((const signed __int32 *)(v11 + 112), 0x1Au)
              && (HIDWORD(Blink[7].Flink) & 0x200) == 0
              || a4
              || a3 )
            {
              v49 = *(_DWORD *)(*((_QWORD *)v19 + 122) + 108LL);
              v48 = v49 & 7;
              if ( (v49 & 7) != 0 )
                DC::dwSetLayout(v19, -1, 0);
              v19 = (DC *)v47;
              if ( *(_QWORD *)(v11 + 128) != v47 )
              {
                *(_DWORD *)(v11 + 112) |= 0x8000000u;
                *(_QWORD *)(v11 + 128) = v19;
                if ( v19 )
                  INC_SHARE_REF_CNT(v19, v18);
              }
              if ( ((__int64)Blink[7].Flink & 0x1000000) != 0 )
                Flink = Blink->Flink;
              else
                Flink = 0LL;
              v6 = (HBITMAP)Blink[2].Flink;
              if ( a2 != v6 )
              {
                v26 = *a1;
                if ( (struct _LIST_ENTRY *)v11 == WPP_MAIN_CB.Queue.ListEntry.Blink )
                {
                  DC::pSurface(v26, 0LL);
                }
                else
                {
                  DC::pSurface(v26, (struct SURFACE *)v11);
                  if ( (*(_DWORD *)v11 & 0x800000) != 0 && _bittest16((const signed __int16 *)(v11 + 102), 9u)
                    || !*(_WORD *)(v11 + 100) && *(_DWORD *)(v11 + 216) )
                  {
                    *((_DWORD *)*a1 + 9) |= 0x10000u;
                  }
                  else
                  {
                    *((_DWORD *)*a1 + 9) &= ~0x10000u;
                  }
                }
                *((_QWORD *)*a1 + 64) = *(_QWORD *)(v11 + 56);
                *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0xFu;
                if ( Blink != WPP_MAIN_CB.Queue.ListEntry.Blink )
                {
                  if ( ((__int64)Blink[7].Flink & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
                    vMirrorIncludeNotifyWrap(a1, Blink, 0LL);
                  SURFACE::vDec_cRef((SURFACE *)Blink);
                  if ( !LODWORD(Blink[10].Blink) )
                  {
                    if ( Flink )
                      Flink = Blink->Flink;
                    if ( ((__int64)Blink[7].Flink & 0x8000000) != 0 )
                    {
                      v27 = (struct OBJECT *)Blink[8].Flink;
                      Blink[8].Flink = 0LL;
                      v50 = v27;
                      XEPALOBJ::vUnrefPalette(&v50);
                    }
                    LODWORD(Blink[7].Flink) &= ~0x8000000u;
                  }
                }
                if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
                  vMirrorIncludeNotifyWrap(a1, v11, 1LL);
                v28 = *(_DWORD *)(v11 + 112);
                v29 = (v28 & 0x4000) != 0 || (v28 & 0x800010) != 0 && (*(_DWORD *)(v16 + 40) & 1) != 0;
                v30 = *((_DWORD *)*a1 + 9) | 0x200;
                if ( !v29 )
                  v30 = *((_DWORD *)*a1 + 9) & 0xFFFFFDFF;
                *((_DWORD *)*a1 + 9) = v30;
                v32 = *((unsigned int *)*a1 + 9);
                v31 = ((unsigned int)v32 & *(_DWORD *)(v11 + 112) & 0x200) != 0;
                LODWORD(v32) = v32 | 0x8000;
                if ( !v31 )
                  v32 = *((_DWORD *)*a1 + 9) & 0xFFFF7FFF;
                *((_DWORD *)*a1 + 9) = v32;
                if ( (struct _LIST_ENTRY *)v11 != WPP_MAIN_CB.Queue.ListEntry.Blink )
                {
                  INC_SHARE_REF_CNT(v11, v32);
                  ++*(_DWORD *)(v11 + 168);
                  if ( (*(_DWORD *)v11 & 0x800000) == 0 || (*(_WORD *)(v11 + 102) & 0x200) == 0 )
                  {
                    *(_QWORD *)(v11 + 160) = *(_QWORD *)*a1;
                    SURFACE::hdev((SURFACE *)v11, *((HDEV *)*a1 + 6));
                  }
                }
                v33 = SURFACE::bDIBSection((SURFACE *)v11);
                v35 = v34;
                LOBYTE(v35) = v33 != 0;
                *v36 = *v36 & 0xFFFFFFFE | v35;
                if ( (unsigned int)SURFACE::bDIBSection((SURFACE *)v11) )
                  v40 = *(_QWORD *)(v11 + 200);
                else
                  v40 = v39;
                *(_QWORD *)(v37 + 24) = v40;
                DEC_SHARE_REF_CNT(v38);
                v13 = 0;
                v52 = 0LL;
                GreReleaseHmgrSemaphore(v42, v41, v43, v44);
                DC::bSetDefaultRegion(*a1);
                DC::AcquireDcVisRgnShared(*a1);
                DC::vUpdate_VisRect(*a1, *((struct REGION **)*a1 + 142));
                if ( v51 )
                  GreInnermostPushLockMSRC85333::ReleaseLock((struct OBJECT *)((char *)v50 + 1112));
                if ( Flink )
                {
                  LOBYTE(v18) = 5;
                  v47 = HmgShareLockCheck(Flink, v18);
                  SURFREF::bDeleteSurface((SURFREF *)&v47);
                  v6 = *(HBITMAP *)(*(_QWORD *)(v53 + 3168) + 168LL);
                  SURFREF::~SURFREF((SURFREF *)&v47);
                }
              }
              if ( v48 )
                DC::dwSetLayout(*a1, -1, v49);
            }
          }
        }
      }
    }
    if ( v13 )
      GreReleaseHmgrSemaphore(v19, v18, v20, v21);
    SEMOBJEXORSHARED::~SEMOBJEXORSHARED(&v54);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v46);
  SURFREF::~SURFREF((SURFREF *)&v52);
  return v6;
}
