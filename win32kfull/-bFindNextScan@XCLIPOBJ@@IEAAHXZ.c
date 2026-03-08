/*
 * XREFs of ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5B90
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C02F5534 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5D98 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindNextScan(XCLIPOBJ *this)
{
  __int64 v1; // r9
  int v2; // eax
  _DWORD *v3; // rdx
  _DWORD *v4; // r10
  int v5; // eax
  _DWORD *v6; // rdx
  _DWORD *v7; // rdx

  v1 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v1 + 24) & 0x800000) != 0 )
  {
    while ( 1 )
    {
      v2 = *((_DWORD *)this + 22);
      if ( v2 == 1 )
        break;
      v3 = (_DWORD *)*((_QWORD *)this + 10);
      *((_DWORD *)this + 22) = v2 - 1;
      v4 = (_DWORD *)((char *)v3 + (unsigned int)(4 * *v3 + 16));
      *((_QWORD *)this + 10) = v4;
      if ( v4[1] > *(_DWORD *)(v1 + 124) )
        break;
      if ( *v4 )
        return 1LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = *((_DWORD *)this + 22);
      if ( v5 == 1 )
        break;
      v6 = (_DWORD *)(*((_QWORD *)this + 10) - 4LL);
      *((_DWORD *)this + 22) = v5 - 1;
      v7 = (_DWORD *)((char *)v6 - (unsigned int)(4 * *v6 + 16) + 4);
      *((_QWORD *)this + 10) = v7;
      if ( v7[2] <= *(_DWORD *)(v1 + 124) )
        break;
      if ( *v7 )
        return 1LL;
    }
  }
  return 0LL;
}
