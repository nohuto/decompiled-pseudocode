/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C013C440
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00203D0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003809C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C003B650 (GreCreateDisplayDC.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C9DD0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CC090 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C002057C (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00280D8 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002AC70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C002B8FC (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C0E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00348E0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0038BA4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0038BD8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00C8228 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  unsigned int v2; // r14d
  LONG cx; // edi
  LONG cy; // r12d
  _DWORD *v5; // rbx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  int v7; // r15d
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct REGION *v12; // rax
  struct _RECTL *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  _BYTE v18[8]; // [rsp+20h] [rbp-39h] BYREF
  struct tagSIZE v19; // [rsp+28h] [rbp-31h] BYREF
  __int64 v20; // [rsp+30h] [rbp-29h] BYREF
  int v21; // [rsp+38h] [rbp-21h]
  int v22; // [rsp+3Ch] [rbp-1Dh]
  struct _RECTL *v23[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v24; // [rsp+50h] [rbp-9h] BYREF
  char v25; // [rsp+58h] [rbp-1h]
  struct _RECTL *v26; // [rsp+60h] [rbp+7h] BYREF
  struct _RECTL v27; // [rsp+70h] [rbp+17h] BYREF

  DC::vReleaseRao(this);
  v2 = 0;
  v19 = 0LL;
  DC::vGet_sizlWindow(this, &v19);
  cx = v19.cx;
  cy = v19.cy;
  v5 = (_DWORD *)*((_QWORD *)this + 6);
  *(struct tagSIZE *)&v27.right = v19;
  *(_QWORD *)&v27.left = 0LL;
  if ( *((_QWORD *)this + 62) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
    v7 = v5[10];
    if ( (v7 & 0x8000) != 0 )
    {
      v8 = *((_QWORD *)this + 62);
      v6 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(v8 + 56);
      if ( (int)v6 < cx || *(_DWORD *)(v8 + 60) < cy )
      {
        v9 = *(_DWORD *)(v8 + 60);
        v21 = (int)v6;
        v20 = 0LL;
        v22 = v9;
        ERECTL::operator*=(&v27.left, (int *)&v20);
      }
    }
    if ( (v7 & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v10 = v5[646];
      v27.left += v10;
      v27.right += v10;
      v11 = v5[647];
      v27.top += v11;
      v27.bottom += v11;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  }
  DC::AcquireDcVisRgnExclusive(this, (__int64)&v24);
  v12 = (struct REGION *)*((_QWORD *)this + 143);
  if ( v12 && v12 != prgnDefault )
  {
    v26 = (struct _RECTL *)*((_QWORD *)this + 143);
    RGNOBJ::vSet(&v26, &v27);
LABEL_17:
    v14 = *((_QWORD *)this + 143);
    *(_DWORD *)(v14 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    if ( v25 )
      CPushLock::ReleaseLock((CPushLock *)(v24 + 1112));
    *((struct tagSIZE *)this + 130) = v19;
    *(struct _RECTL *)((char *)this + 1000) = v27;
    *((_QWORD *)this + 127) = 0LL;
    *((_QWORD *)this + 129) = 0LL;
    v2 = 1;
    v15 = *((_DWORD *)this + 10) & 1;
    v16 = *((_DWORD *)this + 2 * v15 + 255);
    *((_DWORD *)this + 300) = *((_DWORD *)this + 2 * v15 + 254);
    *((_DWORD *)this + 301) = v16;
    return v2;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v23);
  v13 = v23[0];
  if ( v23[0] )
  {
    RGNOBJ::vSet(v23, &v27);
    *((_QWORD *)this + 143) = v13;
    RGNMEMOBJ::~RGNMEMOBJ((REGION **)v23);
    goto LABEL_17;
  }
  *((_QWORD *)this + 143) = prgnDefault;
  RGNMEMOBJ::~RGNMEMOBJ((REGION **)v23);
  if ( v25 )
    CPushLock::ReleaseLock((CPushLock *)(v24 + 1112));
  return v2;
}
