/*
 * XREFs of AuthzBasepIsValidExpression @ 0x1402DA698
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepSupportSetOperation @ 0x1402DA7DC (AuthzBasepSupportSetOperation.c)
 */

bool __fastcall AuthzBasepIsValidExpression(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  unsigned int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r8d
  __int64 v11; // r10
  int v12; // r11d
  unsigned int v13; // ecx
  bool v14; // zf
  int v16; // ecx
  unsigned int v17; // ecx
  _DWORD *i; // r10

  v4 = (unsigned __int8)a1;
  *a4 = 0;
  v6 = 0;
  if ( a3 )
  {
    v7 = (_DWORD *)(a2 + 4);
    while ( v7[2] )
    {
      LOBYTE(a1) = v4;
      if ( !(unsigned __int8)AuthzBasepSupportSetOperation(a1) && v9 != 1 && *v7 > 1u )
        goto LABEL_31;
      ++v6;
      v7 += 10;
      if ( v6 >= v8 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  LOBYTE(a1) = v4;
  if ( !(unsigned __int8)AuthzBasepSupportSetOperation(a1)
    && v10 == 2
    && (*(_WORD *)v11 & 0xFFFB) != 0
    && *(_DWORD *)(v11 + 52) == 1
    && *(_BYTE *)(v11 + 44) != (_BYTE)v12 )
  {
    return 0;
  }
  if ( v4 > 0x8C )
  {
    if ( v4 > 0x92 )
    {
      if ( v4 != 147 )
      {
        if ( v4 == 160 || v4 == 161 )
        {
          if ( !v10 )
            return 1;
          for ( i = (_DWORD *)(v11 + 12); *i != 1; i += 10 )
          {
            if ( ++v12 >= v10 )
              return 1;
          }
          return 0;
        }
        v13 = v4 - 162;
        if ( v4 == 162 )
        {
          if ( v10 == 2 )
            return 0;
          if ( v10 != 1 )
            return 1;
          v14 = *(_DWORD *)(v11 + 12) == 1;
          return !v14;
        }
        goto LABEL_46;
      }
LABEL_50:
      if ( v10 == 1 )
      {
        if ( *(_DWORD *)(v11 + 12) == 1 || *(_WORD *)v11 == 5 )
          return 1;
LABEL_31:
        *a4 = 1;
      }
      return 0;
    }
    if ( v4 == 146 )
      goto LABEL_50;
    if ( v4 != 141 )
    {
      if ( v4 != 142 )
      {
        v17 = v4 - 143;
        if ( v4 != 143 )
          goto LABEL_58;
      }
      goto LABEL_21;
    }
LABEL_27:
    if ( v10 == 1 )
    {
      v16 = *(_DWORD *)(v11 + 12);
      if ( ((v16 - 1) & 0xFFFFFFF9) != 0 || v16 == 7 )
        return 1;
    }
    return 0;
  }
  if ( v4 == 140 )
    goto LABEL_50;
  if ( v4 <= 0x86 )
  {
    if ( v4 != 134 && v4 != 128 && v4 != 129 && v4 != 130 && v4 != 131 )
    {
      v13 = v4 - 132;
      if ( v4 != 132 )
      {
LABEL_46:
        if ( v13 != 1 )
          return 1;
        goto LABEL_21;
      }
    }
    goto LABEL_21;
  }
  if ( v4 == 135 )
    goto LABEL_27;
  if ( v4 != 136 )
  {
    v17 = v4 - 137;
    if ( v4 == 137 )
      goto LABEL_50;
LABEL_58:
    if ( v17 - 1 >= 2 )
      return 1;
    goto LABEL_50;
  }
LABEL_21:
  if ( v10 != 2 || *(_DWORD *)(v11 + 12) == 1 )
    return 0;
  if ( (_BYTE)v4 != 0x88 && (_BYTE)v4 != 0x8F || *(_DWORD *)(v11 + 52) != 1 )
    return 1;
  v14 = *(_BYTE *)(v11 + 44) == (unsigned __int8)v12;
  return !v14;
}
