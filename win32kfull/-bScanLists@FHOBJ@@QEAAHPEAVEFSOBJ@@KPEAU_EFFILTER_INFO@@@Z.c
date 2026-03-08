/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C014CE5C
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0003E60 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C0003FE0 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C0004090 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C0004A68 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  char v7; // r15
  __int64 i; // rdi
  _QWORD *v9; // rsi
  int v10; // r14d
  __int64 v11; // rbx
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  __int128 v15; // [rsp+38h] [rbp-60h] BYREF
  __int64 v16; // [rsp+48h] [rbp-50h]

  v7 = (a3 == 2) | 2;
  if ( a3 != 3 )
    v7 = a3 == 2;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
      return 1LL;
    v9 = *(_QWORD **)(i + 8);
    if ( v9 )
    {
      if ( (*(_DWORD *)(i + 32) & 2) == 0 )
        break;
    }
LABEL_15:
    ;
  }
  v10 = 0;
  *((_DWORD *)a4 + 7) = 1;
  v16 = 0LL;
  *((_DWORD *)a4 + 8) = *(_DWORD *)(i + 24);
  v15 = 0LL;
  while ( 1 )
  {
    v11 = v9[1];
    v14 = v11;
    if ( PFEOBJ::bFilteredOut((PFEOBJ *)&v14, a4) )
      goto LABEL_12;
    if ( a3 != 1 )
      break;
    v12 = efstyCompute((__int64)&v15, (__int64)&v14);
    if ( !v10 || v12 == 5 )
    {
      v10 = 1;
      if ( !(unsigned int)EFSOBJ::bAdd(a2, v11, v12, 0, 1) )
        return 0LL;
    }
LABEL_12:
    v9 = (_QWORD *)*v9;
    if ( !v9 )
      goto LABEL_15;
  }
  if ( (unsigned int)EFSOBJ::bAdd(a2, v11, 0, v7, *((_DWORD *)a4 + 9)) )
    goto LABEL_15;
  return 0LL;
}
