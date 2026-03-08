/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02A153C
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C02A37B0 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0112B40 (--1ESTROBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C012F7B8 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     vStringBitmapTextOut @ 0x1C02A2F94 (vStringBitmapTextOut.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02B739C (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02DD80C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
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
  Gre::Base *v29; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v30; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v35[4]; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+94h] [rbp-6Ch]
  int v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-50h]
  _QWORD *v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  int *v43; // [rsp+150h] [rbp+50h]
  int v44; // [rsp+168h] [rbp+68h]
  int v45; // [rsp+16Ch] [rbp+6Ch]

  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  v7 = 0;
  if ( !v31[0] )
  {
    EngSetLastError(6u);
LABEL_36:
    DCOBJ::~DCOBJ((DCOBJ *)v31);
    return 0LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v34, (struct XDCOBJ *)v31, 516);
  if ( (*(_BYTE *)(v34 + 32) & 0x43) != 0x43 )
    goto LABEL_36;
  v30.x = 27;
  v30.y = *(unsigned __int16 *)(v31[0] + 12LL);
  v29 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v29, (struct XDCOBJ *)v31, 0, 2u, (const struct RFONTOBJ::Tag *)&v30) )
    GreAcquireSemaphore(*((_QWORD *)v29 + 63));
  if ( !v29 || (*((_DWORD *)v29 + 22) & 2) != 0 || (v8 = *((_DWORD *)v29 + 98), v8 | *(_DWORD *)(v31[0] + 1756LL)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
    goto LABEL_36;
  }
  v44 = 0;
  ESTROBJ::vInitSimple((ESTROBJ *)v35, a2, v8, (struct XDCOBJ *)v31, (struct RFONTOBJ *)&v29, v26, v27, v28);
  if ( (v44 & 4) == 0 )
  {
LABEL_34:
    ESTROBJ::~ESTROBJ((ESTROBJ *)v35, v9, v10);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
    DCOBJ::~DCOBJ((DCOBJ *)v31);
    return v7;
  }
  v9 = v42;
  v11 = v38 - v36;
  v12 = *(_QWORD *)(v42 + 24LL * (unsigned int)(v35[0] - 1) + 8);
  v13 = v37
      + (*(int *)(*(_QWORD *)(v42 + 8) + 16LL) >> 4)
      + ((*(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 20)) >> 4)
      - v35[3];
  v14 = (unsigned int)(v13 + 7) >> 3;
  v15 = (v38 - v36) * v14;
  v16 = v15 + 8;
  if ( a5 < v15 + 8 )
  {
    v7 = v15 + 8;
    goto LABEL_34;
  }
  memset_0(a4 + 2, 0, v15);
  v17 = (v44 & 0x1400) == 0;
  a4[1] = v11;
  v18 = 0;
  *a4 = v13;
  v19 = 0LL;
  v30 = 0LL;
  if ( !v17 )
  {
    v18 = *v43;
    if ( *v43 )
    {
      if ( v18 == 1 )
      {
        v19 = (_DWORD *)*((_QWORD *)v29 + 90);
      }
      else if ( v18 == 2 )
      {
        v19 = (_DWORD *)*((_QWORD *)v29 + 91);
      }
      else
      {
        v19 = v18 == 3
            ? (_DWORD *)*((_QWORD *)v29 + 92)
            : *(_DWORD **)(*((_QWORD *)v29 + 93) + 8LL * (unsigned int)(v18 - 4));
      }
      if ( v19 )
      {
        v20 = *((_DWORD *)v29 + 79);
        v21 = v19[80];
        if ( v20 < v19[79] - v21 )
          v21 = v19[79] - v20;
        v22 = v39;
        v30.y = v21 >> 4;
        v33 = 0LL;
        if ( v21 >> 4 )
          v22 = 0LL;
        v39 = v22;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
      }
    }
  }
  v45 = v18;
  v40 = 0;
  v32 = v19;
  if ( v19 )
  {
    if ( (v19[22] & 2) != 0 )
    {
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v32);
      goto LABEL_34;
    }
    v41 = &v32;
  }
  ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v35, &v30);
  vStringBitmapTextOut(v35, a4, v14);
  v32 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
  ESTROBJ::~ESTROBJ((ESTROBJ *)v35, v23, v24);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
  if ( v31[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v31);
  return v16;
}
