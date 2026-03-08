/*
 * XREFs of ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C02F57DC
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5D98 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindFirstScan(XCLIPOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // r9d
  _DWORD *v3; // rbx
  unsigned int v4; // r9d
  _DWORD *v5; // r11
  unsigned int v6; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx

  v1 = *((_QWORD *)this + 7);
  v2 = *(_DWORD *)(v1 + 52);
  if ( v2 <= 2 )
    return 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 18);
  v4 = v2 - 2;
  *((_DWORD *)this + 22) = v4;
  if ( (v3[6] & 0x800000) != 0 )
  {
    v5 = (_DWORD *)(*(_QWORD *)(v1 + 32) + (unsigned int)(4 * **(_DWORD **)(v1 + 32) + 16));
    *((_QWORD *)this + 10) = v5;
    v6 = 0;
    while ( !*v5 || v5[2] <= v3[39] )
    {
      *((_DWORD *)this + 22) = --v4;
      if ( !v4 )
        return 0LL;
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      *((_QWORD *)this + 10) = v5;
    }
    LOBYTE(v6) = v5[1] <= v3[31];
  }
  else
  {
    v8 = (_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL) + 16));
    v9 = (_DWORD *)((char *)v8 - (unsigned int)(4 * *v8 + 16) + 4);
    v6 = 0;
    while ( 1 )
    {
      *((_QWORD *)this + 10) = v9;
      if ( *v9 )
      {
        if ( v9[1] <= v3[39] )
          break;
      }
      *((_DWORD *)this + 22) = --v4;
      if ( !v4 )
        return 0LL;
      v9 = (_DWORD *)((char *)v9 - (unsigned int)(4 * *(v9 - 1) + 16));
    }
    LOBYTE(v6) = v9[2] > v3[31];
  }
  return v6;
}
