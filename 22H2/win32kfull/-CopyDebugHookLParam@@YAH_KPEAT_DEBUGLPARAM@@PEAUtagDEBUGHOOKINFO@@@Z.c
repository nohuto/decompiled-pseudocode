/*
 * XREFs of ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01693F8
 * Callers:
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0230878 (fnHkINLPDEBUGHOOKSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyDebugHookLParam(unsigned __int64 a1, union _DEBUGLPARAM *a2, struct tagDEBUGHOOKINFO *a3)
{
  __int128 *v3; // r9
  unsigned int v4; // r10d
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  __int128 v9; // xmm0
  _OWORD *v10; // rax
  int v11; // ecx
  _OWORD *v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx

  v3 = (__int128 *)*((_QWORD *)a3 + 1);
  v4 = 1;
  if ( !v3 )
    return 0;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7uLL:
        goto LABEL_12;
      case 0xAuLL:
        if ( *((_DWORD *)a3 + 6) != 5 )
          return 0;
        goto LABEL_14;
      case 0xCuLL:
        *((_DWORD *)v3 + 7) = 0;
        v14 = *((_QWORD *)a3 + 1);
        *(_OWORD *)a2 = *(_OWORD *)v14;
        *((_OWORD *)a2 + 1) = *(_OWORD *)(v14 + 16);
        *((_QWORD *)a2 + 4) = *(_QWORD *)(v14 + 32);
        v15 = *((_DWORD *)a2 + 6);
        if ( (unsigned __int16)v15 < 0x400u && (MessageTable[(unsigned __int16)v15] & 0x100) != 0 )
          *((_QWORD *)a2 + 1) = 0LL;
        return v4;
    }
    if ( a1 != -1LL )
      return 0;
LABEL_26:
    *((_DWORD *)v3 + 3) = 0;
    *(_DWORD *)(*((_QWORD *)a3 + 1) + 44LL) = 0;
    v12 = (_OWORD *)*((_QWORD *)a3 + 1);
    *(_OWORD *)a2 = *v12;
    *((_OWORD *)a2 + 1) = v12[1];
    *((_OWORD *)a2 + 2) = v12[2];
    v13 = *((_DWORD *)a2 + 2);
    if ( (unsigned __int16)v13 < 0x400u && (MessageTable[(unsigned __int16)v13] & 0x100) != 0 )
      *((_QWORD *)a2 + 3) = 0LL;
    return v4;
  }
  if ( a1 == 6 )
    goto LABEL_26;
  if ( a1 <= 1 )
  {
    *(_OWORD *)a2 = *v3;
    *((_QWORD *)a2 + 2) = *((_QWORD *)v3 + 2);
    if ( (unsigned __int16)*(_DWORD *)a2 < 0x400u && (MessageTable[(unsigned __int16)*(_DWORD *)a2] & 0x100) != 0 )
      *((_DWORD *)a2 + 1) = 0;
    return v4;
  }
  if ( a1 == 3 )
    goto LABEL_26;
  if ( a1 != 4 )
  {
    if ( a1 != 5 )
      return 0;
    v5 = *((_DWORD *)a3 + 6);
    if ( v5 )
    {
      v6 = v5 - 3;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
LABEL_12:
            *((_DWORD *)v3 + 5) = 0;
            *(_DWORD *)(*((_QWORD *)a3 + 1) + 36LL) = 0;
            v8 = *((_QWORD *)a3 + 1);
            *(_OWORD *)a2 = *(_OWORD *)v8;
            *((_OWORD *)a2 + 1) = *(_OWORD *)(v8 + 16);
            *((_QWORD *)a2 + 4) = *(_QWORD *)(v8 + 32);
            return v4;
          }
          return 0;
        }
        *((_DWORD *)v3 + 1) = 0;
        v9 = *(_OWORD *)*((_QWORD *)a3 + 1);
LABEL_15:
        *(_OWORD *)a2 = v9;
        return v4;
      }
    }
LABEL_14:
    v9 = *v3;
    goto LABEL_15;
  }
  *((_DWORD *)v3 + 5) = 0;
  v10 = (_OWORD *)*((_QWORD *)a3 + 1);
  *(_OWORD *)a2 = *v10;
  *((_OWORD *)a2 + 1) = v10[1];
  v11 = *((_DWORD *)a2 + 4);
  if ( (unsigned __int16)v11 < 0x400u && (MessageTable[(unsigned __int16)v11] & 0x100) != 0 )
    *(_QWORD *)a2 = 0LL;
  return v4;
}
