/*
 * XREFs of ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C0207D78
 * Callers:
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0213884 (fnHkINLPDEBUGHOOKSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyDebugHookLParam(unsigned __int64 a1, union _DEBUGLPARAM *a2, struct tagDEBUGHOOKINFO *a3)
{
  __int128 *v3; // r9
  unsigned int v4; // r10d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int128 v12; // xmm0
  _OWORD *v13; // rax
  int v14; // ecx
  _OWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx

  v3 = (__int128 *)*((_QWORD *)a3 + 1);
  v4 = 1;
  if ( !v3 )
    return 0;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7uLL:
        goto LABEL_13;
      case 0xAuLL:
        if ( *((_DWORD *)a3 + 6) != 5 )
          return 0;
        goto LABEL_15;
      case 0xCuLL:
        *((_DWORD *)v3 + 7) = 0;
        v17 = *((_QWORD *)a3 + 1);
        *(_OWORD *)a2 = *(_OWORD *)v17;
        *((_OWORD *)a2 + 1) = *(_OWORD *)(v17 + 16);
        *((_QWORD *)a2 + 4) = *(_QWORD *)(v17 + 32);
        v18 = *((_DWORD *)a2 + 6);
        if ( (v18 & 0x1FFFFu) < 0x400 && _bittest16(&MessageTable[(unsigned __int16)v18], 8u) )
          *((_QWORD *)a2 + 1) = 0LL;
        return v4;
    }
    if ( a1 != -1LL )
      return 0;
LABEL_27:
    *((_DWORD *)v3 + 3) = 0;
    *(_DWORD *)(*((_QWORD *)a3 + 1) + 44LL) = 0;
    v15 = (_OWORD *)*((_QWORD *)a3 + 1);
    *(_OWORD *)a2 = *v15;
    *((_OWORD *)a2 + 1) = v15[1];
    *((_OWORD *)a2 + 2) = v15[2];
    v16 = *((_DWORD *)a2 + 2);
    if ( (v16 & 0x1FFFFu) < 0x400 && _bittest16(&MessageTable[(unsigned __int16)v16], 8u) )
      *((_QWORD *)a2 + 3) = 0LL;
    return v4;
  }
  if ( a1 == 6 )
    goto LABEL_27;
  if ( !a1 || (v5 = a1 - 1) == 0 )
  {
    *(_OWORD *)a2 = *v3;
    *((_QWORD *)a2 + 2) = *((_QWORD *)v3 + 2);
    if ( (*(_DWORD *)a2 & 0x1FFFFu) < 0x400 && _bittest16(&MessageTable[(unsigned __int16)*(_DWORD *)a2], 8u) )
      *((_DWORD *)a2 + 1) = 0;
    return v4;
  }
  v6 = v5 - 2;
  if ( !v6 )
    goto LABEL_27;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 0;
    v8 = *((_DWORD *)a3 + 6);
    if ( v8 )
    {
      v9 = v8 - 3;
      if ( v9 )
      {
        v10 = v9 - 2;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
LABEL_13:
            *((_DWORD *)v3 + 5) = 0;
            *(_DWORD *)(*((_QWORD *)a3 + 1) + 36LL) = 0;
            v11 = *((_QWORD *)a3 + 1);
            *(_OWORD *)a2 = *(_OWORD *)v11;
            *((_OWORD *)a2 + 1) = *(_OWORD *)(v11 + 16);
            *((_QWORD *)a2 + 4) = *(_QWORD *)(v11 + 32);
            return v4;
          }
          return 0;
        }
        *((_DWORD *)v3 + 1) = 0;
        v12 = *(_OWORD *)*((_QWORD *)a3 + 1);
LABEL_16:
        *(_OWORD *)a2 = v12;
        return v4;
      }
    }
LABEL_15:
    v12 = *v3;
    goto LABEL_16;
  }
  *((_DWORD *)v3 + 5) = 0;
  v13 = (_OWORD *)*((_QWORD *)a3 + 1);
  *(_OWORD *)a2 = *v13;
  *((_OWORD *)a2 + 1) = v13[1];
  v14 = *((_DWORD *)a2 + 4);
  if ( (v14 & 0x1FFFFu) < 0x400 && _bittest16(&MessageTable[(unsigned __int16)v14], 8u) )
    *(_QWORD *)a2 = 0LL;
  return v4;
}
