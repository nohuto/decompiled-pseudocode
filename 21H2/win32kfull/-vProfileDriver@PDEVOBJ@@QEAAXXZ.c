/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C01297E8
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C01297D0 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00AB5AC (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C016B87C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rdx
  BOOL (__stdcall *v8)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r12
  __int64 v9; // rdx
  signed __int32 v10; // ett
  BOOL (__stdcall *v11)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  signed __int32 v16; // ett
  __int64 v17; // rdx
  __int64 v18; // rdx
  signed __int32 v19; // ett
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // r10
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // [rsp+88h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-78h] BYREF
  __int64 v28; // [rsp+98h] [rbp-70h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-58h] BYREF
  int v32; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h] BYREF
  char v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 v39; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v40[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+108h] [rbp+0h]
  int v43; // [rsp+10Ch] [rbp+4h]
  _BYTE v44[32]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v45; // [rsp+130h] [rbp+28h]
  __int128 v46; // [rsp+138h] [rbp+30h] BYREF
  __int64 v47; // [rsp+148h] [rbp+40h]
  int v48; // [rsp+150h] [rbp+48h]
  _QWORD v49[2]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v50[40]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v51; // [rsp+190h] [rbp+88h]
  __int64 v52; // [rsp+198h] [rbp+90h]
  __m128i v53; // [rsp+1A8h] [rbp+A0h] BYREF
  int v54; // [rsp+1B8h] [rbp+B0h] BYREF
  __m128i si128; // [rsp+1BCh] [rbp+B4h]
  int v56; // [rsp+1CCh] [rbp+C4h]

  v1 = *(_QWORD *)this;
  v40[3] = 0;
  v43 = 0;
  if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v49);
    v3 = *(_QWORD *)this;
    v46 = 0LL;
    v52 = 0LL;
    v51 = 0LL;
    v49[0] = 0LL;
    v48 = 1;
    if ( (*(_DWORD *)(v3 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v46 = *(_QWORD *)(v3 + 48);
      v47 = v3;
      GreAcquireSemaphore(v46);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v46, 11LL);
    }
    v39 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v4 = *(_QWORD *)this;
    v5 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
    v6 = *(_QWORD *)(*(_QWORD *)this + 1808LL);
    v56 = 0;
    v54 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v53 = si128;
    *(_DWORD *)(v4 + 2440) = 0;
    v40[0] = 6;
    v41 = *(_QWORD *)gppalRGB;
    v36 = 0LL;
    v37 = 0;
    v38 = 0;
    v28 = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    v40[1] = 40;
    v40[2] = 40;
    v42 = 1;
    v8 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v36, (struct _DEVBITMAPINFO *)v40, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v28,
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
                         &v27,
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
                         &v26,
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
      v9 = *(_QWORD *)this;
      v33 = v28;
      v34 = v27;
      v35 = v26;
      v32 = 33488896;
      _m_prefetchw((const void *)(v9 + 40));
      do
        v10 = *(_DWORD *)(v9 + 40);
      while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 40), v10 & 0xFFFBFFFF, v10) );
      if ( (*(_DWORD *)(v5 + 112) & 0x10000) != 0 )
        v11 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3256LL);
      else
        v11 = EngAlphaBlend;
      v12 = v36 + 24;
      if ( !v36 )
        v12 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v11)(
             v5 + 24,
             v12,
             &v54,
             v26,
             &v53,
             &v53,
             &v32)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v26, v7);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v27, v13);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v28, v14);
    SURFMEM::~SURFMEM((SURFMEM *)&v36);
    CreateCompatibleSurface(
      (SURFREF *)v44,
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
    if ( v45 )
    {
      v31 = 0LL;
      v30 = 0LL;
      v29 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v31,
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
                           &v30,
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
                           &v29,
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
        v15 = *(_QWORD *)this;
        v33 = v30;
        v34 = v30;
        v35 = v29;
        v32 = 8716288;
        _m_prefetchw((const void *)(v15 + 40));
        do
          v16 = *(_DWORD *)(v15 + 40);
        while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 40), v16 & 0xFFFBFFFF, v16) );
        if ( (*(_DWORD *)(v5 + 112) & 0x10000) != 0 )
          v8 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3256LL);
        v17 = v45 + 24;
        if ( !v45 )
          v17 = 0LL;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v8)(
               v5 + 24,
               v17,
               &v54,
               v31,
               &v53,
               &v53,
               &v32)
          && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
        }
      }
      v18 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v19 = *(_DWORD *)(v18 + 40);
      while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), v19 & 0xFFFBFFFF, v19) );
      if ( (*(_DWORD *)(v5 + 112) & 0x8000) != 0 )
        v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)this + 3280LL);
      else
        v20 = EngTransparentBlt;
      v21 = v45 + 24;
      if ( !v45 )
        v21 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))v20)(
             v5 + 24,
             v21,
             0LL,
             0LL,
             &v53,
             &v53,
             1,
             0)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29, v22);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30, v23);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31, v24);
    }
    SURFREF::bDeleteSurface(v44, 0LL, 0LL);
    if ( v45 )
      DEC_SHARE_REF_CNT(v45, v25);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v44);
    SEMOBJ::vUnlock((SEMOBJ *)&v39);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v46);
    if ( v49[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v49);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v50);
  }
}
