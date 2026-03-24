/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0148958
 * Callers:
 *     NtGdiInvertRgn @ 0x1C0148D60 (NtGdiInvertRgn.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B297C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B2D1C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00B5990 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     EngPaint @ 0x1C0147890 (EngPaint.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0147994 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  REGION *v4; // r14
  int v5; // edi
  int v6; // esi
  DC *v7; // rcx
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // rdi
  char *v11; // rcx
  struct REGION *v12; // rax
  struct ECLIPOBJ *v13; // rdx
  DC *v14; // r8
  DC *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-C0h] BYREF
  REGION *v18[7]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[2]; // [rsp+98h] [rbp-68h] BYREF
  __m128i rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v21[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-38h]
  char v23; // [rsp+D8h] [rbp-28h]
  _QWORD v24[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v25[80]; // [rsp+F0h] [rbp-10h] BYREF
  int v26[4]; // [rsp+140h] [rbp+40h] BYREF
  CLIPOBJ pco; // [rsp+150h] [rbp+50h] BYREF
  __int64 v28; // [rsp+188h] [rbp+88h]
  __int64 v29; // [rsp+1A0h] [rbp+A0h]
  int v30; // [rsp+1A8h] [rbp+A8h]
  int v31; // [rsp+1D0h] [rbp+D0h]
  __int64 v32; // [rsp+1E0h] [rbp+E0h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !v16[0] || (*((_DWORD *)v16[0] + 9) & 0x10000) != 0 )
    goto LABEL_39;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v16, -2147483132);
  v6 = *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 1, 0);
  if ( !v18[0] )
  {
LABEL_38:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
LABEL_39:
    v3 = v5;
    goto LABEL_40;
  }
  if ( v6 == 2050 )
  {
LABEL_16:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v18) == 1 )
      goto LABEL_35;
    v7 = v16[0];
    *(_OWORD *)v26 = *((_OWORD *)v18[0] + 6);
    if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v16, (struct ERECTL *)v26);
      v7 = v16[0];
    }
    if ( !*((_QWORD *)v7 + 62) )
    {
LABEL_35:
      v5 = 1;
    }
    else
    {
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v24);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v16, 0);
      v8 = v18[0];
      v9 = v16[0];
      if ( !v18[0] )
        *((_DWORD *)v16[0] + 9) |= 0x10u;
      *((_QWORD *)v9 + 142) = v8;
      v10 = *((_QWORD *)v16[0] + 62);
      if ( (v23 & 1) != 0 && (unsigned int)DC::bTightenRao(v16[0]) )
      {
        v11 = (char *)v16[0] + 1024;
        if ( (*((_DWORD *)v16[0] + 10) & 1) == 0 )
          v11 = (char *)v16[0] + 1016;
        v26[0] += *(_DWORD *)v11;
        v26[2] += *(_DWORD *)v11;
        v26[1] += *((_DWORD *)v11 + 1);
        v26[3] += *((_DWORD *)v11 + 1);
        GreScaleValuesInternal(v16, v26, 4u);
        v12 = XDCOBJ::prgnEffRao(v16);
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0;
        v31 = 1;
        v32 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)v26, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
          {
            rclBounds = (__m128i)pco.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v16, v13, &rclBounds);
          }
          ++*(_DWORD *)(v10 + 92);
          EngPaint((SURFOBJ *)(v10 + 24), &pco, 0LL, 0LL, 0x606u);
        }
        v14 = v16[0];
        v5 = 1;
      }
      else
      {
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
      }
      *((_DWORD *)v14 + 9) |= 0x10u;
      *((_QWORD *)v14 + 142) = 0LL;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      if ( v24[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v24);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
    }
    if ( v6 != 2050 )
    {
      REGION::vDeleteREGION(v18[0]);
      v18[0] = v4;
    }
    goto LABEL_38;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
  if ( v22 )
  {
    if ( !v19[0] || !RGNOBJ::bCreate((RGNOBJ *)v18, (struct EPATHOBJ *)v21, (struct EXFORMOBJ *)v19) )
      goto LABEL_7;
    *(_QWORD *)v26 = 0LL;
    v26[2] = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)v26, (struct EPATHOBJ *)v21, 1u, 0LL);
    if ( !*(_QWORD *)v26 )
    {
      EngSetLastError(8u);
      if ( v26[2] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v26);
      goto LABEL_7;
    }
    v4 = v18[0];
    v18[0] = *(REGION **)v26;
    if ( v26[2] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v26);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
    goto LABEL_16;
  }
  EngSetLastError(8u);
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
LABEL_40:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v16);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
  return v3;
}
