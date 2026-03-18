/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00CBD30 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C001B718 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0023D3C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025E10 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E884 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0062E78 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D9320 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?Feature_2990973245__private_IsEnabled@@YAHXZ @ 0x1C00D93B8 (-Feature_2990973245__private_IsEnabled@@YAHXZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  unsigned int v2; // r14d
  LONG cx; // edi
  LONG cy; // r12d
  _DWORD *v5; // rbx
  int v6; // ecx
  int v7; // r15d
  __int64 v8; // rax
  LONG v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct REGION *v13; // rax
  struct _RECTL *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  char v18[8]; // [rsp+20h] [rbp-60h] BYREF
  struct tagSIZE v19; // [rsp+28h] [rbp-58h] BYREF
  struct _RECTL *v20[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  LONG v22; // [rsp+48h] [rbp-38h]
  int v23; // [rsp+4Ch] [rbp-34h]
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+58h] [rbp-28h]
  struct _RECTL v26; // [rsp+60h] [rbp-20h] BYREF

  DC::vReleaseRao(this);
  v2 = 0;
  v19 = 0LL;
  DC::vGet_sizlWindow(this, &v19);
  cx = v19.cx;
  cy = v19.cy;
  v5 = (_DWORD *)*((_QWORD *)this + 6);
  *(struct tagSIZE *)&v26.right = v19;
  *(_QWORD *)&v26.left = 0LL;
  if ( *((_QWORD *)this + 62) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
    if ( (unsigned int)Feature_2990973245__private_IsEnabled() )
    {
      v7 = v5[10];
      v6 = v7;
      if ( (v7 & 0x8000) != 0 )
      {
        v8 = *((_QWORD *)this + 62);
        v9 = *(_DWORD *)(v8 + 56);
        if ( v9 < cx || *(_DWORD *)(v8 + 60) < cy )
        {
          v10 = *(_DWORD *)(v8 + 60);
          v22 = v9;
          v21 = 0LL;
          v23 = v10;
          ERECTL::operator*=(&v26.left, (int *)&v21);
          v6 = v7;
        }
      }
    }
    else
    {
      v6 = v5[10];
    }
    if ( (v6 & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v11 = v5[640];
      v26.left += v11;
      v26.right += v11;
      v12 = v5[641];
      v26.top += v12;
      v26.bottom += v12;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
  }
  DC::AcquireDcVisRgnExclusive(this, (__int64)&v24);
  v13 = (struct REGION *)*((_QWORD *)this + 142);
  if ( v13 && v13 != prgnDefault )
  {
    v20[0] = *((struct _RECTL **)this + 142);
    RGNOBJ::vSet(v20, &v26);
LABEL_19:
    v15 = *((_QWORD *)this + 142);
    *(_DWORD *)(v15 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    if ( v25 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v24 + 1112));
    *((struct tagSIZE *)this + 130) = v19;
    *(struct _RECTL *)((char *)this + 1000) = v26;
    *((_QWORD *)this + 127) = 0LL;
    *((_QWORD *)this + 129) = 0LL;
    v16 = *((_DWORD *)this + 2 * (*((_DWORD *)this + 10) & 1) + 255);
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
      v2 = *((_DWORD *)this + 256);
    *((_DWORD *)this + 298) = v2;
    v2 = 1;
    *((_DWORD *)this + 299) = v16;
    return v2;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
  v14 = v20[0];
  if ( v20[0] )
  {
    RGNOBJ::vSet(v20, &v26);
    *((_QWORD *)this + 142) = v14;
    RGNMEMOBJ::~RGNMEMOBJ((PSLIST_ENTRY *)v20);
    goto LABEL_19;
  }
  *((_QWORD *)this + 142) = prgnDefault;
  RGNMEMOBJ::~RGNMEMOBJ((PSLIST_ENTRY *)v20);
  if ( v25 )
    GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v24 + 1112));
  return v2;
}
