/*
 * XREFs of EmpParseRuleTermArgMapping @ 0x140B4E9B8
 * Callers:
 *     EmpParseRuleTerm @ 0x140B4D578 (EmpParseRuleTerm.c)
 * Callees:
 *     strtoul @ 0x1403D32B8 (strtoul.c)
 */

bool __fastcall EmpParseRuleTermArgMapping(char *Str, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r13d
  int v7; // edx
  char *v9; // rcx
  char v10; // r15
  char v11; // bl
  __int64 v12; // rbp
  int v13; // r12d
  unsigned int v14; // esi
  bool v15; // zf
  bool v16; // zf
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned int v20; // eax
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  __int64 v24; // rdi
  unsigned int v25; // eax
  char *EndPtr[11]; // [rsp+20h] [rbp-58h] BYREF
  int v27; // [rsp+80h] [rbp+8h]
  int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v5 = a2;
  v6 = a5 + a3 + a4;
  v7 = 0;
  v27 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  EndPtr[0] = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v15 = v11 == 0;
      if ( v11 )
        return v15;
      if ( v14 == 5 )
        break;
      if ( v14 <= 5 )
      {
        switch ( v14 )
        {
          case 0u:
            v16 = *Str == 40;
LABEL_10:
            if ( !v16 )
              goto LABEL_64;
            v14 = 1;
            goto LABEL_12;
          case 1u:
            if ( *Str == 41 )
            {
              v14 = 3;
            }
            else
            {
              if ( (unsigned int)v12 >= v6 )
                goto LABEL_63;
              v18 = strtoul(Str, EndPtr, 10);
              v9 = EndPtr[0];
              a4 = v30;
              a3 = v29;
              v7 = v27;
              *(_DWORD *)(v5 + 4 * v12) = v18;
              if ( Str == v9 )
                goto LABEL_61;
              v14 = 2;
              v12 = (unsigned int)(v12 + 1);
            }
            goto LABEL_20;
          case 2u:
            if ( *Str == 41 )
            {
              v14 = 3;
              goto LABEL_12;
            }
            v16 = *Str == 46;
            goto LABEL_10;
        }
        if ( v14 != 3 )
        {
          if ( *Str == 41 )
          {
            v14 = 6;
          }
          else
          {
            v19 = (unsigned int)(v13 + v12);
            if ( (unsigned int)v19 >= v6 )
              goto LABEL_63;
            v20 = strtoul(Str, EndPtr, 10);
            v9 = EndPtr[0];
            a4 = v30;
            a3 = v29;
            *(_DWORD *)(a2 + 4 * v19) = v20;
            v7 = v27;
            if ( Str == v9 )
              goto LABEL_61;
            v14 = 5;
            ++v13;
          }
          goto LABEL_20;
        }
        if ( !*Str )
        {
          if ( (_DWORD)v12 != a3 || a4 )
            goto LABEL_64;
          v22 = a5 == 0;
LABEL_38:
          if ( !v22 )
            goto LABEL_64;
LABEL_39:
          v10 = 1;
          goto LABEL_12;
        }
        v21 = *Str == 40;
        goto LABEL_29;
      }
      switch ( v14 )
      {
        case 6u:
          if ( !*Str )
          {
            if ( (_DWORD)v12 == a3 && v13 == a4 && !a5 )
              goto LABEL_39;
LABEL_61:
            v11 = 1;
LABEL_20:
            if ( v9 )
            {
              Str = v9;
              v9 = 0LL;
              EndPtr[0] = 0LL;
              goto LABEL_13;
            }
            goto LABEL_12;
          }
          v23 = *Str == 40;
          break;
        case 7u:
          if ( *Str == 41 )
          {
            v14 = 9;
          }
          else
          {
            v24 = (unsigned int)(v12 + v13 + v7);
            if ( (unsigned int)v24 >= v6 )
            {
LABEL_63:
              v11 = 1;
              v10 = 1;
              goto LABEL_12;
            }
            v25 = strtoul(Str, EndPtr, 10);
            v9 = EndPtr[0];
            a4 = v30;
            a3 = v29;
            *(_DWORD *)(a2 + 4 * v24) = v25;
            v7 = v27;
            if ( Str == v9 )
              goto LABEL_61;
            v7 = v27 + 1;
            v14 = 8;
            ++v27;
          }
          goto LABEL_20;
        case 8u:
          if ( *Str == 41 )
          {
            v14 = 9;
            goto LABEL_12;
          }
          v23 = *Str == 46;
          break;
        default:
          if ( *Str || (_DWORD)v12 != a3 || v13 != a4 )
          {
LABEL_64:
            v11 = 1;
            goto LABEL_12;
          }
          v22 = v7 == a5;
          goto LABEL_38;
      }
      if ( !v23 )
        goto LABEL_64;
      v14 = 7;
LABEL_12:
      ++Str;
LABEL_13:
      v5 = a2;
      if ( v10 )
        return v11 == 0;
    }
    if ( *Str == 41 )
    {
      v14 = 6;
      goto LABEL_12;
    }
    v21 = *Str == 46;
LABEL_29:
    if ( !v21 )
      goto LABEL_64;
    v14 = 4;
    goto LABEL_12;
  }
  return 0;
}
