__int64 __fastcall DisplayID_UpdateForTelemetry(struct DisplayIDObj *a1)
{
  BOOL v1; // r9d
  _BYTE *v2; // rbp
  int v3; // ecx
  _BYTE *v4; // rdi
  int v5; // r15d
  int v6; // esi
  bool v7; // r13
  char v8; // r12
  _BYTE *v9; // rdx
  _BYTE *v10; // r14
  unsigned __int8 *v11; // rbx
  size_t v12; // r8
  int v13; // edx
  char v14; // al
  char v15; // al
  bool v16; // zf
  char v17; // al
  int v19; // [rsp+70h] [rbp+8h]
  _BYTE *v20; // [rsp+78h] [rbp+10h]
  unsigned int v21; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v22; // [rsp+88h] [rbp+20h] BYREF

  v1 = 0;
  if ( !a1 )
    return 3221225485LL;
  v2 = *(_BYTE **)a1;
  if ( !*(_QWORD *)a1 )
    return 3221225485LL;
  v3 = *((_DWORD *)a1 + 5);
  v4 = v2;
  v19 = v3;
  v5 = 0;
  if ( v3 <= 0 )
    return 0LL;
  while ( 2 )
  {
    v6 = (unsigned __int8)v4[1];
    v7 = 1;
    v8 = v6 + 5;
    v9 = &v4[(unsigned __int8)(v6 + 5)];
    v20 = v9;
    v10 = v9 - 1;
    if ( (unsigned int)v6 < 3 )
      goto LABEL_37;
    v11 = (unsigned __int8 *)((unsigned __int64)(v4 + 4) & -(__int64)((_BYTE)v6 != 0));
    while ( 1 )
    {
      v12 = v11[2];
      v21 = v12 + 3;
      if ( v6 < (int)v12 + 3 )
        break;
      v13 = *v11;
      if ( !(_BYTE)v13 )
      {
        v14 = *v4 >> 4;
        if ( v14 == 2 )
          goto LABEL_36;
        if ( v14 == 1 && v2 + 4 != v11 )
        {
          v7 = v8 == 127;
          goto LABEL_36;
        }
      }
      v15 = *v4 >> 4;
      if ( v15 == 2 )
      {
        if ( v13 == 32 )
        {
          v22 = v11;
          if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v22) )
            goto LABEL_31;
        }
        else
        {
          if ( v13 == 40 )
          {
            v16 = 1;
LABEL_24:
            if ( v16 && (_BYTE)v12 == 22 )
              *(_DWORD *)(v11 + 21) = v1;
            goto LABEL_32;
          }
          if ( v13 == 41 && (_BYTE)v12 == 16 )
            *(_OWORD *)(v11 + 3) = 0LL;
        }
      }
      else
      {
        if ( v15 != 1 )
          return 3221225659LL;
        if ( (_BYTE)v13 )
        {
          if ( (_BYTE)v13 == 10 )
          {
            if ( v6 >= (int)v12 + 4 && (_BYTE)v12 )
            {
              memset(v11 + 4, 0, v12);
              v1 = 0;
            }
            goto LABEL_32;
          }
          v16 = (_BYTE)v13 == 18;
          goto LABEL_24;
        }
        if ( v6 >= 14 )
LABEL_31:
          *((_DWORD *)v11 + 2) = v1;
      }
LABEL_32:
      v6 -= v21;
      v11 += v21;
      if ( (unsigned int)v6 < 3 )
        goto LABEL_36;
    }
    v7 = v1;
LABEL_36:
    v9 = v20;
    v3 = v19;
LABEL_37:
    *v10 = v1;
    v17 = v1;
    while ( v4 < v10 )
    {
      v17 += *v4;
      *v10 = v17;
      ++v4;
    }
    *v10 = -v17;
    if ( v7 )
    {
      ++v5;
      v4 = v9;
      if ( v5 >= v3 )
        return 0LL;
      continue;
    }
    return 3221225659LL;
  }
}
