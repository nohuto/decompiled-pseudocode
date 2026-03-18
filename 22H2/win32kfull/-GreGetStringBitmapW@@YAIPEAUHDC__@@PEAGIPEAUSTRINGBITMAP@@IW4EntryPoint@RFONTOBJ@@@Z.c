/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C029EDCC
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C02A1060 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0080D3C (--1ESTROBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C013E734 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     vStringBitmapTextOut @ 0x1C02A0838 (vStringBitmapTextOut.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02B4ECC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02DBA4C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(HDC a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  unsigned int v7; // ebx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // esi
  __int64 v12; // rcx
  int v13; // edi
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // r15d
  bool v17; // zf
  int v18; // esi
  _DWORD *v19; // rdi
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+30h] [rbp-D0h]
  void *v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v30; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v31; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v33[32]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v36[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B4h] [rbp-4Ch]
  int v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+D0h] [rbp-30h]
  _QWORD *v42; // [rsp+D8h] [rbp-28h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  int *v44; // [rsp+170h] [rbp+70h]
  int v45; // [rsp+188h] [rbp+88h]
  int v46; // [rsp+18Ch] [rbp+8Ch]

  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  v7 = 0;
  if ( !v32[0] )
  {
    EngSetLastError(6u);
LABEL_36:
    DCOBJ::~DCOBJ((DCOBJ *)v32);
    return 0LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v35, (struct XDCOBJ *)v32, 516);
  if ( (*(_BYTE *)(v35 + 32) & 0x43) != 0x43 )
    goto LABEL_36;
  v30.x = 27;
  v30.y = *(unsigned __int16 *)(v32[0] + 12LL);
  v29 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v29, (struct XDCOBJ *)v32, 0, 2u, (const struct RFONTOBJ::Tag *)&v30) )
    GreAcquireSemaphore(*(_QWORD *)(v29 + 504));
  if ( !v29 || (*(_DWORD *)(v29 + 88) & 2) != 0 || (v8 = *(_DWORD *)(v29 + 392), v8 | *(_DWORD *)(v32[0] + 1756LL)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
    goto LABEL_36;
  }
  v45 = 0;
  ESTROBJ::vInitSimple((ESTROBJ *)v36, a2, v8, (struct XDCOBJ *)v32, (struct RFONTOBJ *)&v29, v26, v27, v28);
  if ( (v45 & 4) == 0 )
  {
LABEL_34:
    ESTROBJ::~ESTROBJ((ESTROBJ *)v36, v9, v10);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
    DCOBJ::~DCOBJ((DCOBJ *)v32);
    return v7;
  }
  v9 = v43;
  v11 = v39 - v37;
  v12 = *(_QWORD *)(v43 + 24LL * (unsigned int)(v36[0] - 1) + 8);
  v13 = v38
      + (*(int *)(*(_QWORD *)(v43 + 8) + 16LL) >> 4)
      + ((*(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 20)) >> 4)
      - v36[3];
  v14 = (unsigned int)(v13 + 7) >> 3;
  v15 = (v39 - v37) * v14;
  v16 = v15 + 8;
  if ( a5 < v15 + 8 )
  {
    v7 = v15 + 8;
    goto LABEL_34;
  }
  memset_0(a4 + 2, 0, v15);
  v17 = (v45 & 0x1400) == 0;
  a4[1] = v11;
  v18 = 0;
  *a4 = v13;
  v19 = 0LL;
  v30 = 0LL;
  if ( !v17 )
  {
    v18 = *v44;
    if ( *v44 )
    {
      if ( v18 == 1 )
      {
        v19 = *(_DWORD **)(v29 + 720);
      }
      else if ( v18 == 2 )
      {
        v19 = *(_DWORD **)(v29 + 728);
      }
      else
      {
        v19 = v18 == 3 ? *(_DWORD **)(v29 + 736) : *(_DWORD **)(*(_QWORD *)(v29 + 744) + 8LL * (unsigned int)(v18 - 4));
      }
      if ( v19 )
      {
        v20 = *(_DWORD *)(v29 + 316);
        v21 = v19[80];
        if ( v20 < v19[79] - v21 )
          v21 = v19[79] - v20;
        v22 = v40;
        v30.y = v21 >> 4;
        v34 = 0LL;
        if ( v21 >> 4 )
          v22 = 0LL;
        v40 = v22;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
      }
    }
  }
  v46 = v18;
  v41 = 0;
  v31 = v19;
  if ( v19 )
  {
    if ( (v19[22] & 2) != 0 )
    {
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v31);
      goto LABEL_34;
    }
    v42 = &v31;
  }
  ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v36, &v30);
  vStringBitmapTextOut(v36, a4, v14);
  v31 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
  ESTROBJ::~ESTROBJ((ESTROBJ *)v36, v23, v24);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v33);
  return v16;
}
