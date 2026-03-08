/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces @ 0x1C02B5810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v3 = 1;
  v4 = HmgShareLock(a1, a2);
  v5 = *(_QWORD **)(v4 + 24);
  v6 = *v5;
  if ( *(_DWORD *)(*v5 + 16LL) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5[1] + 8 * v2);
      v8 = *(_DWORD *)(v7 + 92);
      v9 = v7 - 24;
      if ( (v8 & 1) != 0 && !pProcessDfbSurfacesInternal(v9, 1LL) )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v6 + 16) )
        goto LABEL_7;
    }
    v3 = 0;
  }
LABEL_7:
  DEC_SHARE_REF_CNT(v4);
  return v3;
}
