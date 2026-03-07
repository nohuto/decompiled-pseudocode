__int64 __fastcall XmEvaluateIndexSpecifier(__int64 a1, int a2)
{
  unsigned __int8 CodeByte; // al
  int v5; // ebp
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  int LongImmediate; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // edx

  CodeByte = XmGetCodeByte(a1);
  v5 = CodeByte >> 6;
  v6 = (CodeByte >> 3) & 7;
  v7 = (8 * a2) | CodeByte & 7;
  if ( v7 > 0xC )
  {
    if ( v7 > 0x12 )
    {
      v29 = v7 - 19;
      if ( !v29 )
      {
        LongImmediate = XmGetLongImmediate(a1);
        goto LABEL_62;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        v21 = XmGetLongImmediate(a1);
        goto LABEL_34;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 != 1 )
            goto LABEL_56;
          v26 = XmGetLongImmediate(a1);
          goto LABEL_45;
        }
        v27 = XmGetLongImmediate(a1);
LABEL_47:
        v12 = *(_DWORD *)(a1 + 48) + v27;
        return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
      v28 = XmGetLongImmediate(a1);
    }
    else
    {
      if ( v7 == 18 )
      {
        v18 = XmGetLongImmediate(a1);
        goto LABEL_27;
      }
      v22 = v7 - 13;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 != 1 )
                goto LABEL_56;
              v19 = XmGetLongImmediate(a1);
              goto LABEL_29;
            }
            v20 = XmGetLongImmediate(a1);
LABEL_31:
            v12 = *(_DWORD *)(a1 + 24) + v20;
            return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
          }
          v26 = XmGetCodeByte(a1);
LABEL_45:
          v12 = *(_DWORD *)(a1 + 52) + v26;
          return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
        }
        v27 = XmGetCodeByte(a1);
        goto LABEL_47;
      }
      v28 = XmGetCodeByte(a1);
    }
    v12 = *(_DWORD *)(a1 + 44) + v28;
    goto LABEL_13;
  }
  if ( v7 == 12 )
  {
    v21 = XmGetCodeByte(a1);
LABEL_34:
    v12 = *(_DWORD *)(a1 + 40) + v21;
    goto LABEL_13;
  }
  if ( v7 > 6 )
  {
    v13 = v7 - 7;
    if ( !v13 )
    {
      v12 = *(_DWORD *)(a1 + 52);
      return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
            goto LABEL_56;
          LongImmediate = XmGetCodeByte(a1);
LABEL_62:
          v12 = *(_DWORD *)(a1 + 36) + LongImmediate;
          return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
        }
        v18 = XmGetCodeByte(a1);
LABEL_27:
        v12 = *(_DWORD *)(a1 + 32) + v18;
        return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
      v19 = XmGetCodeByte(a1);
LABEL_29:
      v12 = *(_DWORD *)(a1 + 28) + v19;
      return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    v20 = XmGetCodeByte(a1);
    goto LABEL_31;
  }
  if ( v7 == 6 )
  {
    v12 = *(_DWORD *)(a1 + 48);
    return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
  }
  if ( !v7 )
  {
    v12 = *(_DWORD *)(a1 + 24);
    return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v12 = *(_DWORD *)(a1 + 28);
    return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v12 = *(_DWORD *)(a1 + 32);
    return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v12 = *(_DWORD *)(a1 + 36);
    return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v12 = XmGetLongImmediate(a1);
      return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
LABEL_56:
    longjmp((_JBTYPE *)(a1 + 160), 7);
  }
  v12 = *(_DWORD *)(a1 + 40);
LABEL_13:
  if ( !*(_BYTE *)(a1 + 140) )
    *(_DWORD *)(a1 + 116) = 2;
  return (unsigned int)(v12 + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
}
