/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0295CB8
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C02979C0 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015E3BC (--1ESTROBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     vStringBitmapTextOut @ 0x1C0297210 (vStringBitmapTextOut.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A5B1C (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02BDD14 (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
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
  __int64 v19; // rax
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
  _DWORD v31[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B4h] [rbp-4Ch]
  int v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-30h]
  _QWORD *v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  int *v39; // [rsp+170h] [rbp+70h]
  int v40; // [rsp+188h] [rbp+88h]
  int v41; // [rsp+18Ch] [rbp+8Ch]

  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  if ( v28[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v30, (struct XDCOBJ *)v28, 516);
    if ( (*(_BYTE *)(v30 + 32) & 0x43) != 0x43 )
      goto LABEL_4;
    v24 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v24, (struct XDCOBJ *)v28, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v24 + 504));
    if ( !v24 || (*(_DWORD *)(v24 + 88) & 2) != 0 || (v8 = *(_DWORD *)(v24 + 392), v8 | *(_DWORD *)(v28[0] + 1756LL)) )
    {
      v7 = 0;
      goto LABEL_36;
    }
    v40 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)v31, a2, v8, (struct XDCOBJ *)v28, (struct RFONTOBJ *)&v24, v21, v22, v23);
    if ( (v40 & 4) == 0 )
    {
      v7 = 0;
LABEL_33:
      ESTROBJ::~ESTROBJ((ESTROBJ *)v31);
LABEL_36:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
      goto LABEL_37;
    }
    v9 = v34 - v32;
    v10 = *(_QWORD *)(v38 + 24LL * (unsigned int)(v31[0] - 1) + 8);
    v11 = v33
        + (*(int *)(*(_QWORD *)(v38 + 8) + 16LL) >> 4)
        + ((*(_DWORD *)(v10 + 12) - *(_DWORD *)(v10 + 20)) >> 4)
        - v31[3];
    v12 = (unsigned int)(v11 + 7) >> 3;
    v13 = (v34 - v32) * v12;
    v7 = v13 + 8;
    if ( a5 < v13 + 8 )
      goto LABEL_33;
    memset((char *)a4 + 8, 0, v13);
    v14 = (v40 & 0x1400) == 0;
    *((_DWORD *)a4 + 1) = v9;
    v15 = 0;
    *(_DWORD *)a4 = v11;
    v16 = 0LL;
    v25 = 0LL;
    if ( !v14 )
    {
      v15 = *v39;
      if ( *v39 )
      {
        if ( v15 == 1 )
        {
          v16 = *(_DWORD **)(v24 + 720);
        }
        else if ( v15 == 2 )
        {
          v16 = *(_DWORD **)(v24 + 728);
        }
        else
        {
          v16 = v15 == 3
              ? *(_DWORD **)(v24 + 736)
              : *(_DWORD **)(*(_QWORD *)(v24 + 744) + 8LL * (unsigned int)(v15 - 4));
        }
        if ( v16 )
        {
          v17 = *(_DWORD *)(v24 + 316);
          v18 = v16[80];
          if ( v17 < v16[79] - v18 )
            v18 = v16[79] - v17;
          v19 = v35;
          v25.y = v18 >> 4;
          v27 = 0LL;
          if ( v18 >> 4 )
            v19 = 0LL;
          v35 = v19;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
        }
      }
    }
    v41 = v15;
    v36 = 0;
    v26 = v16;
    if ( v16 )
    {
      if ( (v16[22] & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v37 = &v26;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v31, &v25);
    vStringBitmapTextOut(v31, a4, v12);
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
