/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0113FC8
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C0113FB0 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00911E4 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rsi
  BOOL (__stdcall *v7)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r12
  __int64 v8; // rdx
  signed __int32 v9; // ett
  BOOL (__stdcall *v10)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  signed __int32 v14; // ett
  __int64 v15; // rdx
  __int64 v16; // rdx
  signed __int32 v17; // ett
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // r10
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // [rsp+88h] [rbp-80h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D8h] [rbp-30h] BYREF
  char v31; // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E4h] [rbp-24h]
  __int64 v33; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v34[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v35; // [rsp+100h] [rbp-8h]
  int v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+10Ch] [rbp+4h]
  _BYTE v38[32]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v39; // [rsp+130h] [rbp+28h]
  __int128 v40; // [rsp+138h] [rbp+30h] BYREF
  __int64 v41; // [rsp+148h] [rbp+40h]
  int v42; // [rsp+150h] [rbp+48h]
  _QWORD v43[2]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v44[40]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v45; // [rsp+190h] [rbp+88h]
  __int64 v46; // [rsp+198h] [rbp+90h]
  __m128i v47; // [rsp+1A8h] [rbp+A0h] BYREF
  int v48; // [rsp+1B8h] [rbp+B0h] BYREF
  __m128i si128; // [rsp+1BCh] [rbp+B4h]
  int v50; // [rsp+1CCh] [rbp+C4h]

  v1 = *(_QWORD *)this;
  v34[3] = 0;
  v37 = 0;
  v28 = 0LL;
  v29 = 0LL;
  if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v43);
    v3 = *(_QWORD *)this;
    v40 = 0LL;
    v46 = 0LL;
    v45 = 0LL;
    v43[0] = 0LL;
    v42 = 1;
    if ( (*(_DWORD *)(v3 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v40 = *(_QWORD *)(v3 + 48);
      v41 = v3;
      GreAcquireSemaphore(v40);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v40, 11LL);
    }
    v33 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v4 = *(_QWORD *)this;
    v5 = *(_QWORD *)(*(_QWORD *)this + 2528LL);
    v6 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
    v50 = 0;
    v48 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v47 = si128;
    *(_DWORD *)(v4 + 2408) = 0;
    v34[0] = 6;
    v35 = *(_QWORD *)gppalRGB;
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v34[1] = 40;
    v34[2] = 40;
    v36 = 1;
    v7 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v30, (struct _DEVBITMAPINFO *)v34, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v24,
                         0LL,
                         0,
                         (__int64)gppalRGB,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v23,
                         0LL,
                         0,
                         v6,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v22,
                         0LL,
                         0,
                         (__int64)gppalRGB,
                         v6,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0) )
    {
      v8 = *(_QWORD *)this;
      *((_QWORD *)&v28 + 1) = v24;
      *(_QWORD *)&v29 = v23;
      *((_QWORD *)&v29 + 1) = v22;
      WORD1(v28) = 511;
      _m_prefetchw((const void *)(v8 + 40));
      do
        v9 = *(_DWORD *)(v8 + 40);
      while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 40), v9 & 0xFFFBFFFF, v9) );
      if ( (*(_DWORD *)(v5 + 112) & 0x10000) != 0 )
        v10 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3232LL);
      else
        v10 = EngAlphaBlend;
      v11 = v30 + 24;
      if ( !v30 )
        v11 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, __int128 *))v10)(
             v5 + 24,
             v11,
             &v48,
             v22,
             &v47,
             &v47,
             &v28)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2408LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
    SURFMEM::~SURFMEM((SURFMEM *)&v30);
    CreateCompatibleSurface(
      (SURFREF *)v38,
      *(_QWORD *)this,
      *(unsigned int *)(v5 + 96),
      0LL,
      0x28u,
      0x28u,
      1u,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL);
    v12 = v39;
    if ( v39 )
    {
      v27 = 0LL;
      v26 = 0LL;
      v25 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v27,
                           0LL,
                           0,
                           v6,
                           v6,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v26,
                           0LL,
                           0,
                           v6,
                           (__int64)gppalRGB,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v25,
                           0LL,
                           0,
                           (__int64)gppalRGB,
                           v6,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0) )
      {
        v13 = *(_QWORD *)this;
        *((_QWORD *)&v28 + 1) = v26;
        *(_QWORD *)&v29 = v26;
        *((_QWORD *)&v29 + 1) = v25;
        LODWORD(v28) = 8716288;
        _m_prefetchw((const void *)(v13 + 40));
        do
          v14 = *(_DWORD *)(v13 + 40);
        while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 40), v14 & 0xFFFBFFFF, v14) );
        if ( (*(_DWORD *)(v5 + 112) & 0x10000) != 0 )
          v7 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3232LL);
        v15 = v39 + 24;
        if ( !v39 )
          v15 = 0LL;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, __int128 *))v7)(
               v5 + 24,
               v15,
               &v48,
               v27,
               &v47,
               &v47,
               &v28)
          && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)this + 2408LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
        }
      }
      v16 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v17 = *(_DWORD *)(v16 + 40);
      while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v17 & 0xFFFBFFFF, v17) );
      if ( (*(_DWORD *)(v5 + 112) & 0x8000) != 0 )
        v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)this + 3256LL);
      else
        v18 = EngTransparentBlt;
      v19 = v39 + 24;
      if ( !v39 )
        v19 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))v18)(
             v5 + 24,
             v19,
             0LL,
             0LL,
             &v47,
             &v47,
             1,
             0)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v25);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v26);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v27);
      v12 = v39;
    }
    v20 = SURFACE::bDeleteSurface(v12, 0LL, 0LL);
    v21 = v39;
    if ( v20 )
      v21 = 0LL;
    v39 = v21;
    if ( v21 )
      DEC_SHARE_REF_CNT(v21);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v38);
    SEMOBJ::vUnlock((SEMOBJ *)&v33);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v40);
    if ( v43[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v43);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v44);
  }
}
