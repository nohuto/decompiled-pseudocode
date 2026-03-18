/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C013AD14
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00122E0 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C000E2A4 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C001201C (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C011D438 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  char v7; // r15
  __int64 i; // rdi
  __int64 *v9; // rbx
  _QWORD *v10; // rsi
  int v11; // r14d
  int v13; // eax
  __int64 *v14; // [rsp+30h] [rbp-68h] BYREF
  __int128 v15; // [rsp+38h] [rbp-60h] BYREF
  __int64 v16; // [rsp+48h] [rbp-50h]

  v7 = (a3 == 2) | 2;
  if ( a3 != 3 )
    v7 = a3 == 2;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
      return 1LL;
    v10 = *(_QWORD **)(i + 8);
    if ( v10 )
    {
      if ( (*(_DWORD *)(i + 32) & 2) == 0 )
        break;
    }
LABEL_6:
    ;
  }
  v11 = 0;
  *((_DWORD *)a4 + 7) = 1;
  v16 = 0LL;
  *((_DWORD *)a4 + 8) = *(_DWORD *)(i + 24);
  v15 = 0LL;
  while ( 1 )
  {
    v9 = (__int64 *)v10[1];
    v14 = v9;
    if ( (unsigned int)PFEOBJ::bFilteredOut(&v14, a4) )
      goto LABEL_5;
    if ( a3 != 1 )
      break;
    v13 = efstyCompute((__int64)&v15, (__int64)&v14);
    if ( !v11 || v13 == 5 )
    {
      v11 = 1;
      if ( !(unsigned int)EFSOBJ::bAdd(a2, (__int64)v9, v13, 0, 1) )
        return 0LL;
    }
LABEL_5:
    v10 = (_QWORD *)*v10;
    if ( !v10 )
      goto LABEL_6;
  }
  if ( (unsigned int)EFSOBJ::bAdd(a2, (__int64)v9, 0, v7, *((_DWORD *)a4 + 9)) )
    goto LABEL_6;
  return 0LL;
}
