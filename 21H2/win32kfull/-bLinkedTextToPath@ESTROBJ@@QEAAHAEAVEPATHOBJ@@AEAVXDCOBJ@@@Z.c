/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BC830
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C029613C (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A5B1C (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BCA2C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(ESTROBJ *this, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  struct RFONTOBJ *v6; // rdi
  _WORD *v8; // rbp
  int v9; // esi
  unsigned __int64 v10; // r15
  int v11; // r14d
  struct RFONTOBJ *v12; // r9
  __int64 v13; // rdx
  struct XDCOBJ *v14; // rax
  _DWORD *v15; // rcx
  _WORD *v16; // r8
  _WORD *v17; // r10
  int v18; // edx
  __int64 result; // rax
  struct _POINTL v20; // [rsp+60h] [rbp+8h] BYREF
  struct XDCOBJ *v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = a3;
  v3 = *((_QWORD *)this + 26);
  v4 = *(unsigned int *)this;
  v6 = (struct RFONTOBJ *)*((_QWORD *)this + 7);
  v8 = (_WORD *)*((_QWORD *)this + 5);
  v9 = 0;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 4) = 0LL;
  v10 = v3 + 4 * v4;
  v11 = *(_DWORD *)(*(_QWORD *)v6 + 840LL) + 4;
  if ( v11 <= 0 )
  {
LABEL_29:
    *((_QWORD *)this + 5) = v8;
    result = 1LL;
    *((_QWORD *)this + 7) = v6;
    return result;
  }
  while ( 1 )
  {
    v21 = 0LL;
    *((_QWORD *)this + 7) = v6;
    if ( !v9 )
    {
      v12 = v6;
      goto LABEL_18;
    }
    if ( v9 != 1 )
      break;
    if ( *((_DWORD *)this + 62) )
    {
      v14 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 720LL);
      goto LABEL_16;
    }
LABEL_28:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
    if ( ++v9 >= v11 )
      goto LABEL_29;
  }
  if ( v9 == 2 )
  {
    if ( *((_DWORD *)this + 63) )
    {
      v14 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 728LL);
      goto LABEL_16;
    }
    goto LABEL_28;
  }
  if ( v9 == 3 )
  {
    if ( *((_DWORD *)this + 64) )
    {
      v14 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 736LL);
      goto LABEL_16;
    }
    goto LABEL_28;
  }
  v13 = *((_QWORD *)this + 33);
  if ( !v13 || !*(_DWORD *)(v13 + 4LL * (unsigned int)(v9 - 4)) )
    goto LABEL_28;
  v14 = *(struct XDCOBJ **)(*(_QWORD *)(*(_QWORD *)v6 + 744LL) + 8LL * (unsigned int)(v9 - 4));
LABEL_16:
  if ( !v14 )
    goto LABEL_31;
  v21 = v14;
  v12 = (struct RFONTOBJ *)&v21;
LABEL_18:
  v15 = (_DWORD *)*((_QWORD *)this + 26);
  v16 = v8;
  v17 = (_WORD *)*((_QWORD *)this + 25);
  v18 = 0;
  if ( (unsigned __int64)v15 >= v10 )
    goto LABEL_27;
  do
  {
    if ( *v15 == v9 )
    {
      *v17++ = *v16;
      ++v18;
    }
    ++v16;
    ++v15;
  }
  while ( (unsigned __int64)v15 < v10 );
  if ( !v18 )
    goto LABEL_27;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 25);
  *(_DWORD *)this = v18;
  *((_QWORD *)this + 7) = v12;
  *((_DWORD *)this + 59) = v9;
  *((_DWORD *)this + 12) = 0;
  if ( v9 )
  {
    v20 = 0LL;
    if ( (unsigned int)bAdjusBaseLine(v12, (struct RFONTOBJ *)&v21, &v20) )
      ESTROBJ::ptlBaseLineAdjustSet(this, &v20);
  }
  if ( (unsigned int)ESTROBJ::bTextToPathWorkhorse((STROBJ *)this, a2) )
  {
LABEL_27:
    v21 = 0LL;
    goto LABEL_28;
  }
  *((_QWORD *)this + 5) = v8;
  *((_QWORD *)this + 7) = v6;
LABEL_31:
  v21 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
  return 0LL;
}
