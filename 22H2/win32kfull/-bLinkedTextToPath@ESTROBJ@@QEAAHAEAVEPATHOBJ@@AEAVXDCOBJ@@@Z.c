/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BD5F4
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092300 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C0006570 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A7318 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BD818 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(STROBJ *pstro, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v3; // rax
  __int64 cGlyphs; // r8
  struct RFONTOBJ *v6; // rsi
  WCHAR *pwszOrg; // rbp
  int v9; // edi
  unsigned __int64 v10; // r13
  int v11; // r15d
  struct RFONTOBJ *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  struct XDCOBJ *v15; // rax
  _DWORD *v16; // r9
  WCHAR *v17; // r14
  WCHAR *v18; // r10
  ULONG v19; // edx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r11
  __int64 result; // rax
  struct _POINTL v23; // [rsp+60h] [rbp+8h] BYREF
  struct XDCOBJ *v24; // [rsp+70h] [rbp+18h] BYREF

  v24 = a3;
  v3 = *(_QWORD *)&pstro[4].rclBkGround.top;
  cGlyphs = pstro->cGlyphs;
  v6 = *(struct RFONTOBJ **)&pstro[1].ulCharInc;
  pwszOrg = pstro->pwszOrg;
  v9 = 0;
  pstro->pgp = 0LL;
  *(_QWORD *)&pstro->flAccel = 0LL;
  v10 = v3 + 4 * cGlyphs;
  v11 = *(_DWORD *)(*(_QWORD *)v6 + 840LL) + 4;
  if ( v11 <= 0 )
  {
LABEL_35:
    pstro->pwszOrg = pwszOrg;
    result = 1LL;
    *(_QWORD *)&pstro[1].ulCharInc = v6;
    return result;
  }
  while ( 1 )
  {
    v24 = 0LL;
    *(_QWORD *)&pstro[1].ulCharInc = v6;
    if ( !v9 )
    {
      v12 = v6;
      goto LABEL_20;
    }
    if ( v9 != 1 )
      break;
    if ( pstro[5].ulCharInc )
    {
      v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 720LL);
      goto LABEL_18;
    }
LABEL_34:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    if ( ++v9 >= v11 )
      goto LABEL_35;
  }
  if ( v9 == 2 )
  {
    if ( pstro[5].rclBkGround.left )
    {
      v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 728LL);
      goto LABEL_18;
    }
    goto LABEL_34;
  }
  if ( v9 == 3 )
  {
    if ( pstro[5].rclBkGround.top )
    {
      v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 736LL);
      goto LABEL_18;
    }
    goto LABEL_34;
  }
  v13 = *(_QWORD *)&pstro[5].rclBkGround.bottom;
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 4LL * (unsigned int)(v9 - 4));
  else
    v14 = 0;
  if ( !v14 )
    goto LABEL_34;
  v15 = *(struct XDCOBJ **)(*(_QWORD *)(*(_QWORD *)v6 + 744LL) + 8LL * (unsigned int)(v9 - 4));
LABEL_18:
  if ( !v15 )
    goto LABEL_32;
  v24 = v15;
  v12 = (struct RFONTOBJ *)&v24;
LABEL_20:
  v16 = *(_DWORD **)&pstro[4].rclBkGround.top;
  v17 = *(WCHAR **)&pstro[4].ulCharInc;
  v18 = pwszOrg;
  v19 = 0;
  v20 = (v10 - (unsigned __int64)v16 + 3) >> 2;
  v21 = 0LL;
  if ( (unsigned __int64)v16 > v10 )
    v20 = 0LL;
  if ( !v20 )
    goto LABEL_33;
  do
  {
    if ( *v16 == v9 )
    {
      *v17++ = *v18;
      ++v19;
    }
    ++v18;
    ++v16;
    ++v21;
  }
  while ( v21 < v20 );
  if ( !v19 )
    goto LABEL_33;
  pstro->pwszOrg = *(LPWSTR *)&pstro[4].ulCharInc;
  pstro->cGlyphs = v19;
  *(_QWORD *)&pstro[1].ulCharInc = v12;
  HIDWORD(pstro[4].pwszOrg) = v9;
  pstro[1].cGlyphs = 0;
  if ( v9 )
  {
    v23 = 0LL;
    if ( (unsigned int)bAdjusBaseLine(v12, (struct RFONTOBJ *)&v24, &v23) )
      ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)pstro, &v23);
  }
  if ( (unsigned int)ESTROBJ::bTextToPathWorkhorse(pstro, a2) )
  {
LABEL_33:
    v24 = 0LL;
    goto LABEL_34;
  }
  pstro->pwszOrg = pwszOrg;
  *(_QWORD *)&pstro[1].ulCharInc = v6;
LABEL_32:
  v24 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  return 0LL;
}
