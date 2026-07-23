/*
 * XREFs of XmJxxOp @ 0x140398200
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmJxxOp(__int64 a1)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx

  v2 = *(_DWORD *)(a1 + 108) & 1;
  result = *(_DWORD *)(a1 + 108) >> 1;
  if ( !(_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 16) >> 11;
    goto LABEL_5;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 16);
    goto LABEL_5;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 16) >> 6;
LABEL_5:
    v5 = v4 & 1;
    goto LABEL_6;
  }
  v6 = result - 1;
  if ( !v6 )
  {
    result = *(unsigned int *)(a1 + 16);
    v4 = result | (*(_DWORD *)(a1 + 16) >> 6);
    goto LABEL_5;
  }
  result = (unsigned int)(v6 - 1);
  if ( !(_DWORD)result )
  {
    v9 = *(_DWORD *)(a1 + 16);
    goto LABEL_20;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 16) >> 2;
    goto LABEL_5;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    result = *(unsigned int *)(a1 + 16);
    v9 = result ^ (*(_DWORD *)(a1 + 16) >> 4);
LABEL_20:
    v4 = v9 >> 7;
    goto LABEL_5;
  }
  if ( (_DWORD)result != 1 )
    return result;
  v7 = *(_DWORD *)(a1 + 16);
  v8 = v7 ^ (v7 >> 4);
  result = v7 & 0x40;
  v5 = ((unsigned int)result | (v8 >> 1) & 0x40) >> 6;
LABEL_6:
  if ( v5 != v2 )
  {
    result = *(unsigned __int16 *)(a1 + 104);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
