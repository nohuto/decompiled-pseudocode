/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100
 * Callers:
 *     hbmSelectBitmap @ 0x1C0002FE0 (hbmSelectBitmap.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBitmap @ 0x1C003AF40 (GreSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     bIsSurfaceAllowedInDC @ 0x1C00183F4 (bIsSurfaceAllowedInDC.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003F8CC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C00407F0 (GreAcquireSemaphoreSharedInternal.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0041790 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     INC_SHARE_REF_CNT @ 0x1C00417D0 (INC_SHARE_REF_CNT.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0041FC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     HmgPentryFromPobj @ 0x1C0042F00 (HmgPentryFromPobj.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0045A6C (--1SEMOBJEXORSHARED@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C005FD78 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0060B10 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     bIsCompatible @ 0x1C008FC90 (bIsCompatible.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1C0097F9C (IsvMirrorIncludeNotifySupported.c)
 *     vMirrorIncludeNotifyWrap @ 0x1C009883C (vMirrorIncludeNotifyWrap.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009D9C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00C2B00 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C40 (--0SURFREF@@QEAA@XZ.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  HBITMAP v6; // r13
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  HSEMAPHORE v12; // rbx
  int v13; // edi
  DC *v14; // rcx
  SURFACE *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  DC *v19; // rcx
  __int64 v20; // r8
  DC *v21; // r9
  unsigned int v22; // r14d
  int IsSurfaceAllowedInDC; // eax
  struct _LIST_ENTRY *Blink; // r14
  HSURF Flink; // r12
  DC *v26; // rcx
  struct _LIST_ENTRY *v27; // rax
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
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // edx
  _BYTE v46[4]; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v47; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v48; // [rsp+40h] [rbp-69h]
  struct _LIST_ENTRY *v49; // [rsp+48h] [rbp-61h] BYREF
  char v50; // [rsp+50h] [rbp-59h]
  DC *v51; // [rsp+58h] [rbp-51h] BYREF
  __int64 v52; // [rsp+60h] [rbp-49h]
  HSEMAPHORE v53; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v54[32]; // [rsp+70h] [rbp-39h] BYREF
  SURFACE *v55; // [rsp+90h] [rbp-19h]
  _BYTE v56[96]; // [rsp+98h] [rbp-11h] BYREF

  v6 = 0LL;
  SURFREF::SURFREF((SURFREF *)v54);
  v10 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
  v52 = v10;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v46);
  LOBYTE(v11) = 5;
  v55 = (SURFACE *)HmgShareLockCheck(a2, v11);
  if ( v55 )
  {
    v12 = *(HSEMAPHORE *)(v10 + 120);
    v13 = 1;
    v53 = v12;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal(v12);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v12);
    }
    else
    {
      EngAcquireSemaphore(v12);
    }
    GreAcquireHmgrSemaphore();
    v14 = *a1;
    v15 = v55;
    v51 = 0LL;
    v16 = *((_QWORD *)v14 + 6);
    v17 = HmgPentryFromPobj();
    v21 = *a1;
    v22 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
    if ( *((_DWORD *)*a1 + 8) == 1
      && (!*((_DWORD *)v15 + 42)
       || (*(_DWORD *)v15 & 0x800000) != 0 && _bittest16((const signed __int16 *)v15 + 51, 9u)
       || *((_QWORD *)v15 + 20) == *(_QWORD *)v21) )
    {
      if ( (unsigned int)bIsCompatible((unsigned int)&v51, *((_QWORD *)v15 + 16), (_DWORD)v15, *((_QWORD *)v21 + 6), 1) )
      {
        IsSurfaceAllowedInDC = bIsSurfaceAllowedInDC((__int64)v15, *((_QWORD *)*a1 + 6));
        v18 = 0LL;
        if ( IsSurfaceAllowedInDC )
        {
          if ( (!v22 || (*((_DWORD *)v15 + 28) & 0x800) == 0) && (a5 || v22) )
          {
            v19 = *a1;
            Blink = (struct _LIST_ENTRY *)*((_QWORD *)*a1 + 62);
            if ( !Blink )
              Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
            if ( _bittest((const signed __int32 *)&Blink[7], 0x1Au)
              && _bittest((const signed __int32 *)v15 + 28, 0x1Au)
              && (HIDWORD(Blink[7].Flink) & 0x200) == 0
              || a4
              || a3 )
            {
              v48 = *(_DWORD *)(*((_QWORD *)v19 + 122) + 108LL);
              v47 = v48 & 7;
              if ( (v48 & 7) != 0 )
                DC::dwSetLayout(v19, -1, 0);
              v19 = v51;
              if ( *((DC **)v15 + 16) != v51 )
              {
                *((_DWORD *)v15 + 28) |= 0x8000000u;
                *((_QWORD *)v15 + 16) = v19;
                if ( v19 )
                  INC_SHARE_REF_CNT(v19, v18);
              }
              if ( ((__int64)Blink[7].Flink & 0x1000000) != 0 )
                Flink = (HSURF)Blink->Flink;
              else
                Flink = 0LL;
              v6 = (HBITMAP)Blink[2].Flink;
              if ( a2 != v6 )
              {
                v26 = *a1;
                if ( v15 == (SURFACE *)WPP_MAIN_CB.Queue.ListEntry.Blink )
                {
                  DC::pSurface(v26, 0LL);
                }
                else
                {
                  DC::pSurface(v26, v15);
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
                if ( Blink != WPP_MAIN_CB.Queue.ListEntry.Blink )
                {
                  if ( ((__int64)Blink[7].Flink & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
                    vMirrorIncludeNotifyWrap(a1, Blink, 0LL);
                  SURFACE::vDec_cRef((SURFACE *)Blink);
                  if ( !LODWORD(Blink[10].Blink) )
                  {
                    if ( Flink )
                      Flink = (HSURF)Blink->Flink;
                    if ( ((__int64)Blink[7].Flink & 0x8000000) != 0 )
                    {
                      v27 = Blink[8].Flink;
                      Blink[8].Flink = 0LL;
                      v49 = v27;
                      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v49);
                    }
                    LODWORD(Blink[7].Flink) &= ~0x8000000u;
                  }
                }
                if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
                  vMirrorIncludeNotifyWrap(a1, v15, 1LL);
                v28 = *((_DWORD *)v15 + 28);
                v29 = (v28 & 0x4000) != 0 || (v28 & 0x800010) != 0 && (*(_DWORD *)(v16 + 40) & 1) != 0;
                v30 = *((_DWORD *)*a1 + 9) | 0x200;
                if ( !v29 )
                  v30 = *((_DWORD *)*a1 + 9) & 0xFFFFFDFF;
                *((_DWORD *)*a1 + 9) = v30;
                v32 = *((unsigned int *)*a1 + 9);
                v31 = ((unsigned int)v32 & *((_DWORD *)v15 + 28) & 0x200) != 0;
                LODWORD(v32) = v32 | 0x8000;
                if ( !v31 )
                  v32 = *((_DWORD *)*a1 + 9) & 0xFFFF7FFF;
                *((_DWORD *)*a1 + 9) = v32;
                if ( v15 != (SURFACE *)WPP_MAIN_CB.Queue.ListEntry.Blink )
                {
                  INC_SHARE_REF_CNT(v15, v32);
                  ++*((_DWORD *)v15 + 42);
                  if ( (*(_DWORD *)v15 & 0x800000) == 0 || (*((_WORD *)v15 + 51) & 0x200) == 0 )
                  {
                    *((_QWORD *)v15 + 20) = *(_QWORD *)*a1;
                    SURFACE::hdev(v15, *((HDEV *)*a1 + 6));
                  }
                }
                v33 = SURFACE::bDIBSection(v15);
                v35 = v34;
                LOBYTE(v35) = v33 != 0;
                *v36 = *v36 & 0xFFFFFFFE | v35;
                if ( (unsigned int)SURFACE::bDIBSection(v15) )
                  v39 = *((_QWORD *)v15 + 25);
                else
                  v39 = v38;
                *(_QWORD *)(v37 + 24) = v39;
                DEC_SHARE_REF_CNT(v55);
                v13 = 0;
                v55 = 0LL;
                GreReleaseHmgrSemaphore(v41, v40, v42, v43);
                DC::bSetDefaultRegion(*a1);
                DC::AcquireDcVisRgnShared(*a1);
                DC::vUpdate_VisRect(*a1, *((struct REGION **)*a1 + 142));
                if ( v50 )
                  CPushLock::ReleaseLock((CPushLock *)&v49[69].Blink);
                if ( Flink )
                {
                  SURFREF::SURFREF((SURFREF *)v56, Flink);
                  SURFREF::bDeleteSurface((SURFREF *)v56, v44);
                  v6 = *(HBITMAP *)(*(_QWORD *)(v52 + 3168) + 168LL);
                  SURFREF::~SURFREF((SURFREF *)v56);
                }
              }
              if ( v47 )
                DC::dwSetLayout(*a1, -1, v48);
            }
          }
        }
      }
    }
    if ( v13 )
      GreReleaseHmgrSemaphore(v19, v18, v20, v21);
    SEMOBJEXORSHARED::~SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v53);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v46);
  SURFREF::~SURFREF((SURFREF *)v54);
  return v6;
}
