/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C007FD18
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C00F66B0 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C007C5E0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C00F5830 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rdx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  Gre::Base *v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r12
  __int64 v13; // rdx
  signed __int32 v14; // ett
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v16; // rdx
  __int64 v17; // rdx
  signed __int32 v18; // ett
  char *v19; // rdx
  __int64 v20; // rdx
  signed __int32 v21; // ett
  BOOL (__stdcall *v22)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // r10
  char *v23; // rdx
  SURFACE *v24; // [rsp+88h] [rbp-80h] BYREF
  Gre::Base *v25; // [rsp+90h] [rbp-78h] BYREF
  Gre::Base *v26; // [rsp+98h] [rbp-70h] BYREF
  Gre::Base *v27; // [rsp+A0h] [rbp-68h] BYREF
  Gre::Base *v28; // [rsp+A8h] [rbp-60h] BYREF
  Gre::Base *v29; // [rsp+B0h] [rbp-58h] BYREF
  Gre::Base *v30; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-38h]
  __int64 v33; // [rsp+E0h] [rbp-28h] BYREF
  char v34; // [rsp+E8h] [rbp-20h]
  int v35; // [rsp+ECh] [rbp-1Ch]
  __int64 v36; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v37[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v38; // [rsp+108h] [rbp+0h]
  int v39; // [rsp+110h] [rbp+8h]
  int v40; // [rsp+114h] [rbp+Ch]
  __int128 v41; // [rsp+118h] [rbp+10h] BYREF
  __int64 v42; // [rsp+128h] [rbp+20h]
  int v43; // [rsp+130h] [rbp+28h]
  _QWORD v44[2]; // [rsp+138h] [rbp+30h] BYREF
  __int16 v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  __int64 v47; // [rsp+158h] [rbp+50h]
  __m128i v48; // [rsp+168h] [rbp+60h] BYREF
  int v49; // [rsp+178h] [rbp+70h] BYREF
  __m128i si128; // [rsp+17Ch] [rbp+74h]
  int v51; // [rsp+18Ch] [rbp+84h]

  v2 = Gre::Base::Globals(this);
  v3 = *(_QWORD *)this;
  v37[3] = 0;
  v40 = 0;
  v4 = v2;
  v31 = 0LL;
  v32 = 0LL;
  v5 = (Gre::Base *)*(unsigned int *)(v3 + 40);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v44[1] = 0LL;
    v45 = 256;
    v41 = 0LL;
    v47 = 0LL;
    v46 = 0LL;
    v44[0] = 0LL;
    v43 = 1;
    if ( (*(_DWORD *)(v3 + 40) & 1) != 0 )
    {
      Gre::Base::Globals(v5);
      v6 = *(_QWORD *)this;
      *(_QWORD *)&v41 = *(_QWORD *)(*(_QWORD *)this + 48LL);
      v42 = v6;
      GreAcquireSemaphore(v41);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v41, 11LL);
    }
    v36 = *((_QWORD *)v4 + 14);
    GreAcquireSemaphore(v36);
    v7 = (__int64 *)*((_QWORD *)v4 + 751);
    v8 = *((_QWORD *)v4 + 750);
    v9 = *(_QWORD *)this;
    v10 = *(_QWORD *)(*(_QWORD *)this + 2528LL);
    v11 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
    v51 = 0;
    v49 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v48 = si128;
    *(_DWORD *)(v9 + 2408) = 0;
    v37[0] = 6;
    v38 = *v7;
    v33 = 0LL;
    v34 = 0;
    v35 = 0;
    v27 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    v37[1] = 40;
    v37[2] = 40;
    v39 = 1;
    v12 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v33, (struct _DEVBITMAPINFO *)v37, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v27, 0LL, 0LL, v7, v7, v8, v8, 0, 0, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v26, 0LL, 0LL, v11, v7, v8, v8, 0, 0, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v25, 0LL, 0LL, v7, v11, v8, v8, 0, 0, 0, 0) )
    {
      v13 = *(_QWORD *)this;
      *((_QWORD *)&v31 + 1) = v27;
      *(_QWORD *)&v32 = v26;
      *((_QWORD *)&v32 + 1) = v25;
      WORD1(v31) = 511;
      _m_prefetchw((const void *)(v13 + 40));
      do
        v14 = *(_DWORD *)(v13 + 40);
      while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 40), v14 & 0xFFFBFFFF, v14) );
      if ( (*(_DWORD *)(v10 + 112) & 0x10000) != 0 )
        v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3232LL);
      else
        v15 = EngAlphaBlend;
      v16 = v33 + 24;
      if ( !v33 )
        v16 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, Gre::Base *, __m128i *, __m128i *, __int128 *))v15)(
             v10 + 24,
             v16,
             &v49,
             v25,
             &v48,
             &v48,
             &v31)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2408LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock(&v25);
    EXLATEOBJ::vAltUnlock(&v26);
    EXLATEOBJ::vAltUnlock(&v27);
    SURFMEM::~SURFMEM((SURFMEM *)&v33);
    CreateCompatibleSurface(
      &v24,
      *(HDEV *)this,
      *(_DWORD *)(v10 + 96),
      0LL,
      0x28u,
      0x28u,
      1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL);
    if ( v24 )
    {
      v30 = 0LL;
      v29 = 0LL;
      v28 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v30, 0LL, 0LL, v11, v11, v8, v8, 0, 0, 0, 0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(&v29, 0LL, 0LL, v11, v7, v8, v8, 0, 0, 0, 0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(&v28, 0LL, 0LL, v7, v11, v8, v8, 0, 0, 0, 0) )
      {
        v17 = *(_QWORD *)this;
        *((_QWORD *)&v31 + 1) = v29;
        *(_QWORD *)&v32 = v29;
        *((_QWORD *)&v32 + 1) = v28;
        LODWORD(v31) = 8716288;
        _m_prefetchw((const void *)(v17 + 40));
        do
          v18 = *(_DWORD *)(v17 + 40);
        while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 40), v18 & 0xFFFBFFFF, v18) );
        if ( (*(_DWORD *)(v10 + 112) & 0x10000) != 0 )
          v12 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3232LL);
        v19 = (char *)v24 + 24;
        if ( !v24 )
          v19 = 0LL;
        if ( ((unsigned int (__fastcall *)(__int64, char *, int *, Gre::Base *, __m128i *, __m128i *, __int128 *))v12)(
               v10 + 24,
               v19,
               &v49,
               v30,
               &v48,
               &v48,
               &v31)
          && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)this + 2408LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
        }
      }
      v20 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v21 = *(_DWORD *)(v20 + 40);
      while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 40), v21 & 0xFFFBFFFF, v21) );
      if ( (*(_DWORD *)(v10 + 112) & 0x8000) != 0 )
        v22 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)this + 3256LL);
      else
        v22 = EngTransparentBlt;
      v23 = (char *)v24 + 24;
      if ( !v24 )
        v23 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, char *, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))v22)(
             v10 + 24,
             v23,
             0LL,
             0LL,
             &v48,
             &v48,
             1,
             0)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
      }
      EXLATEOBJ::vAltUnlock(&v28);
      EXLATEOBJ::vAltUnlock(&v29);
      EXLATEOBJ::vAltUnlock(&v30);
    }
    SURFREF::bDeleteSurface((SURFREF *)&v24, 0);
    if ( v24 )
      DEC_SHARE_REF_CNT(v24);
    SEMOBJ::vUnlock((SEMOBJ *)&v36);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v41);
    if ( v44[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v44);
  }
}
