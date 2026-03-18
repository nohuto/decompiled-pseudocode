/*
 * XREFs of NtGdiUpdateColors @ 0x1C02B6B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02A378C (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02BE2D4 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 *     ??1XLATEMEMOBJ@@QEAA@XZ @ 0x1C02BE384 (--1XLATEMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r10
  __int64 v5; // r9
  struct REGION *v6; // rax
  struct ECLIPOBJ *v7; // rdx
  unsigned int updated; // eax
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  struct _XLATEOBJ *v11; // [rsp+50h] [rbp-B8h] BYREF
  DC *v12[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp-A0h] BYREF
  __m128i rclBounds; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v15[32]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v17[64]; // [rsp+C8h] [rbp-40h] BYREF
  struct _CLIPOBJ v18; // [rsp+108h] [rbp+0h] BYREF
  __int64 v19; // [rsp+158h] [rbp+50h]
  int v20; // [rsp+160h] [rbp+58h]
  int v21; // [rsp+188h] [rbp+80h]
  __int64 v22; // [rsp+198h] [rbp+90h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v12) )
  {
    v2 = *((_QWORD *)v12[0] + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v16);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v12, 0);
    if ( (*(_DWORD *)(v2 + 2140) & 0x100) != 0 )
    {
      v3 = *((_QWORD *)v12[0] + 62);
      if ( v3 == *(_QWORD *)(v2 + 2528) )
      {
        v4 = *(_QWORD *)(v3 + 128);
        v5 = *((_QWORD *)v12[0] + 11);
        if ( (*((_DWORD *)v12[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v12, (DC *)((char *)v12[0] + 1032));
        if ( (v15[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v5 + 80) && *(_QWORD *)(v5 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v11, v4, v5);
            if ( v11 )
            {
              v6 = XDCOBJ::prgnEffRao(v12);
              v19 = 0LL;
              v20 = 0;
              v22 = 0LL;
              v21 = 1;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v18, v6, (DC *)((char *)v12[0] + 1032), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v12[0] + 9) & 0xE0) != 0 )
                {
                  rclBounds = (__m128i)v18.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v12, v7, &rclBounds);
                }
                ++*(_DWORD *)(v3 + 92);
                if ( (*(_DWORD *)(v2 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v3 + 24), &v18, v11);
                }
                else if ( (*(_DWORD *)(v3 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v2 + 2816))(
                              v3 + 24,
                              v3 + 24,
                              &v18,
                              v11,
                              &v18.rclBounds,
                              &v18.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v3 + 24,
                              v3 + 24,
                              &v18,
                              v11,
                              &v18.rclBounds,
                              &v18.rclBounds);
                }
                v1 = updated;
              }
            }
            XLATEMEMOBJ::~XLATEMEMOBJ((XLATEMEMOBJ *)&v11);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)v12);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
    if ( v16[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v16);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v17);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  return v1;
}
