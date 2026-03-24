/*
 * XREFs of NtGdiUpdateColors @ 0x1C02B7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B55C4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02A53C8 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02BED2C (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rdx
  struct REGION *v7; // rax
  struct ECLIPOBJ *v8; // rdx
  unsigned int updated; // eax
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  struct _XLATEOBJ *v13; // [rsp+50h] [rbp-B8h] BYREF
  DC *v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[32]; // [rsp+68h] [rbp-A0h] BYREF
  __m128i rclBounds; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v17[32]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v19[64]; // [rsp+C8h] [rbp-40h] BYREF
  struct _CLIPOBJ v20; // [rsp+108h] [rbp+0h] BYREF
  __int64 v21; // [rsp+140h] [rbp+38h]
  __int64 v22; // [rsp+158h] [rbp+50h]
  int v23; // [rsp+160h] [rbp+58h]
  int v24; // [rsp+188h] [rbp+80h]
  __int64 v25; // [rsp+198h] [rbp+90h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v14) )
  {
    v2 = *((_QWORD *)v14[0] + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v18);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v14, 0);
    if ( (*(_DWORD *)(v2 + 2172) & 0x100) != 0 )
    {
      v3 = *((_QWORD *)v14[0] + 62);
      if ( v3 == *(_QWORD *)(v2 + 2552) )
      {
        v4 = *(_QWORD *)(v3 + 128);
        v5 = *((_QWORD *)v14[0] + 11);
        if ( (*((_DWORD *)v14[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v14, (DC *)((char *)v14[0] + 1032));
        if ( (v17[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v5 + 80) && *(_QWORD *)(v5 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v13, v4, v5);
            if ( v13 )
            {
              v7 = XDCOBJ::prgnEffRao(v14);
              v21 = 0LL;
              v22 = 0LL;
              v23 = 0;
              v25 = 0LL;
              v24 = 1;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v20, v7, (DC *)((char *)v14[0] + 1032), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v20.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v14[0] + 9) & 0xE0) != 0 )
                {
                  rclBounds = (__m128i)v20.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v14, v8, &rclBounds);
                }
                ++*(_DWORD *)(v3 + 92);
                if ( (*(_DWORD *)(v2 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v3 + 24), &v20, v13);
                }
                else if ( (*(_DWORD *)(v3 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v2 + 2840))(
                              v3 + 24,
                              v3 + 24,
                              &v20,
                              v13,
                              &v20.rclBounds,
                              &v20.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v3 + 24,
                              v3 + 24,
                              &v20,
                              v13,
                              &v20.rclBounds,
                              &v20.rclBounds);
                }
                v1 = updated;
              }
              FreeThreadBufferWithTag(v13, v8);
              v13 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v13, v6);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)v14);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
    if ( v18[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v15);
  return v1;
}
