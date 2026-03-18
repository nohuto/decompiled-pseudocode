/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02DA104
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010BA70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C029F468 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02B4ECC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02DA2FC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(STROBJ *pstro, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  struct RFONTOBJ *v3; // rdi
  WCHAR *pwszOrg; // r14
  int v7; // esi
  unsigned __int64 v8; // r12
  int v9; // r15d
  struct RFONTOBJ *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct XDCOBJ *v13; // rax
  _DWORD *v14; // rcx
  WCHAR *v15; // r8
  WCHAR *v16; // r10
  ULONG v17; // edx
  __int64 result; // rax
  struct _POINTL v19; // [rsp+60h] [rbp+40h] BYREF
  struct XDCOBJ *v20; // [rsp+70h] [rbp+50h] BYREF

  v20 = a3;
  v3 = *(struct RFONTOBJ **)&pstro[1].ulCharInc;
  pwszOrg = pstro->pwszOrg;
  pstro->pgp = 0LL;
  *(_QWORD *)&pstro->flAccel = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)&pstro[4].rclBkGround.top + 4LL * pstro->cGlyphs;
  v9 = *(_DWORD *)(*(_QWORD *)v3 + 840LL) + 4;
  if ( v9 <= 0 )
  {
LABEL_32:
    pstro->pwszOrg = pwszOrg;
    result = 1LL;
    *(_QWORD *)&pstro[1].ulCharInc = v3;
    return result;
  }
  while ( 1 )
  {
    v20 = 0LL;
    *(_QWORD *)&pstro[1].ulCharInc = v3;
    if ( !v7 )
    {
      v10 = v3;
      goto LABEL_18;
    }
    if ( v7 != 1 )
      break;
    if ( pstro[5].ulCharInc )
    {
      v13 = *(struct XDCOBJ **)(*(_QWORD *)v3 + 720LL);
      goto LABEL_16;
    }
LABEL_28:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
    if ( ++v7 >= v9 )
      goto LABEL_32;
  }
  if ( v7 == 2 )
  {
    if ( pstro[5].rclBkGround.left )
    {
      v13 = *(struct XDCOBJ **)(*(_QWORD *)v3 + 728LL);
      goto LABEL_16;
    }
    goto LABEL_28;
  }
  if ( v7 == 3 )
  {
    if ( pstro[5].rclBkGround.top )
    {
      v13 = *(struct XDCOBJ **)(*(_QWORD *)v3 + 736LL);
      goto LABEL_16;
    }
    goto LABEL_28;
  }
  v11 = *(_QWORD *)&pstro[5].rclBkGround.bottom;
  if ( !v11 )
    goto LABEL_28;
  v12 = (unsigned int)(v7 - 4);
  if ( !*(_DWORD *)(v11 + 4 * v12) )
    goto LABEL_28;
  v13 = *(struct XDCOBJ **)(*(_QWORD *)(*(_QWORD *)v3 + 744LL) + 8 * v12);
LABEL_16:
  if ( !v13 )
    goto LABEL_31;
  v20 = v13;
  v10 = (struct RFONTOBJ *)&v20;
LABEL_18:
  v14 = *(_DWORD **)&pstro[4].rclBkGround.top;
  v15 = pwszOrg;
  v16 = *(WCHAR **)&pstro[4].ulCharInc;
  v17 = 0;
  if ( (unsigned __int64)v14 >= v8 )
    goto LABEL_27;
  do
  {
    if ( *v14 == v7 )
    {
      *v16++ = *v15;
      ++v17;
    }
    ++v15;
    ++v14;
  }
  while ( (unsigned __int64)v14 < v8 );
  if ( !v17 )
    goto LABEL_27;
  pstro->pwszOrg = *(LPWSTR *)&pstro[4].ulCharInc;
  pstro->cGlyphs = v17;
  *(_QWORD *)&pstro[1].ulCharInc = v10;
  HIDWORD(pstro[4].pwszOrg) = v7;
  pstro[1].cGlyphs = 0;
  if ( v7 )
  {
    v19 = 0LL;
    if ( (unsigned int)bAdjusBaseLine(v10, (struct RFONTOBJ *)&v20, &v19) )
      ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)pstro, &v19);
  }
  if ( (unsigned int)ESTROBJ::bTextToPathWorkhorse(pstro, a2) )
  {
LABEL_27:
    v20 = 0LL;
    goto LABEL_28;
  }
  pstro->pwszOrg = pwszOrg;
  *(_QWORD *)&pstro[1].ulCharInc = v3;
  v20 = 0LL;
LABEL_31:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
  return 0LL;
}
