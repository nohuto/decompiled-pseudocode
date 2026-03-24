/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297BB4
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C0298B10 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C016B4A8 (--1ESTROBJ@@QEAA@XZ.c)
 *     vStringBitmapTextOut @ 0x1C016C0AC (vStringBitmapTextOut.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A7318 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02BE76C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // esi
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  bool v14; // zf
  int v15; // esi
  _DWORD *v16; // rbx
  int v17; // r8d
  int v18; // ecx
  GLYPHPOS *pgp; // rax
  int v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h]
  void *v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v25; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  STROBJ v31; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+D0h] [rbp-30h]
  _QWORD *v33; // [rsp+D8h] [rbp-28h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  int *v35; // [rsp+170h] [rbp+70h]
  int v36; // [rsp+188h] [rbp+88h]
  int v37; // [rsp+18Ch] [rbp+8Ch]

  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  if ( v28[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v30, (struct XDCOBJ *)v28, 516);
    if ( (*(_BYTE *)(v30 + 32) & 0x43) != 0x43 )
      goto LABEL_4;
    v24 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v24, (struct XDCOBJ *)v28, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v24 + 504));
    if ( !v24 || (*(_DWORD *)(v24 + 88) & 2) != 0 || (v8 = *(_DWORD *)(v24 + 392), v8 | *(_DWORD *)(v28[0] + 1764LL)) )
    {
      v7 = 0;
      goto LABEL_36;
    }
    v36 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)&v31, a2, v8, (struct XDCOBJ *)v28, (struct RFONTOBJ *)&v24, v21, v22, v23);
    if ( (v36 & 4) == 0 )
    {
      v7 = 0;
LABEL_33:
      ESTROBJ::~ESTROBJ((ESTROBJ *)&v31);
LABEL_36:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
      goto LABEL_37;
    }
    v9 = v31.rclBkGround.bottom - v31.rclBkGround.top;
    v10 = *(_QWORD *)(v34 + 24LL * (v31.cGlyphs - 1) + 8);
    v11 = v31.rclBkGround.right
        + (*(int *)(*(_QWORD *)(v34 + 8) + 16LL) >> 4)
        + ((*(_DWORD *)(v10 + 12) - *(_DWORD *)(v10 + 20)) >> 4)
        - v31.rclBkGround.left;
    v12 = (unsigned int)(v11 + 7) >> 3;
    v13 = (v31.rclBkGround.bottom - v31.rclBkGround.top) * v12;
    v7 = v13 + 8;
    if ( a5 < v13 + 8 )
      goto LABEL_33;
    memset((char *)a4 + 8, 0, v13);
    v14 = (v36 & 0x1400) == 0;
    *((_DWORD *)a4 + 1) = v9;
    v15 = 0;
    *(_DWORD *)a4 = v11;
    v16 = 0LL;
    v25 = 0LL;
    if ( !v14 )
    {
      v15 = *v35;
      if ( *v35 )
      {
        if ( *v35 == 1 )
        {
          v16 = *(_DWORD **)(v24 + 720);
        }
        else if ( *v35 == 2 )
        {
          v16 = *(_DWORD **)(v24 + 728);
        }
        else
        {
          v16 = *v35 == 3
              ? *(_DWORD **)(v24 + 736)
              : *(_DWORD **)(*(_QWORD *)(v24 + 744) + 8LL * (unsigned int)(v15 - 4));
        }
        if ( v16 )
        {
          v17 = *(_DWORD *)(v24 + 316);
          v18 = v16[80];
          if ( v17 < v16[79] - v18 )
            v18 = v16[79] - v17;
          pgp = v31.pgp;
          v25.y = v18 >> 4;
          v27 = 0LL;
          if ( v18 >> 4 )
            pgp = 0LL;
          v31.pgp = pgp;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
        }
      }
    }
    v37 = v15;
    v32 = 0;
    v26 = v16;
    if ( v16 )
    {
      if ( (v16[22] & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v33 = &v26;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)&v31, &v25);
    vStringBitmapTextOut(&v31, a4, v12);
LABEL_32:
    v26 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    goto LABEL_33;
  }
  EngSetLastError(6u);
LABEL_4:
  v7 = 0;
LABEL_37:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v28);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
  return v7;
}
