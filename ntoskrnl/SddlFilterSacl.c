__int64 __fastcall SddlFilterSacl(__int64 *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rbp
  __int64 v6; // r14
  int v9; // r10d
  unsigned __int8 *v10; // r11
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  bool v14; // zf
  unsigned int v15; // r10d
  char *v16; // rsi
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  bool v22; // zf
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx

  result = *((unsigned __int16 *)a1 + 2);
  v5 = (unsigned __int16 *)(a1 + 1);
  v6 = a2;
  LODWORD(a2) = 0;
  v9 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( (_WORD)result )
  {
    a2 = *((unsigned __int16 *)a1 + 2);
    while ( 1 )
    {
      v11 = *v10;
      if ( v11 <= 0xF )
        break;
      v12 = v11 - 16;
      if ( !v12 )
        break;
      v13 = v12 - 1;
      if ( !v13 )
      {
        v14 = (a4 & 0x10) == 0;
        goto LABEL_7;
      }
      v23 = v13 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            if ( (a4 & 0x80u) == 0 )
              goto LABEL_9;
LABEL_8:
            v9 += *((unsigned __int16 *)v10 + 1);
            goto LABEL_9;
          }
          if ( v25 != 1 )
            break;
          v14 = (a4 & 0x100) == 0;
        }
        else
        {
          v14 = (a4 & 0x40) == 0;
        }
      }
      else
      {
        v14 = (a4 & 0x20) == 0;
      }
LABEL_7:
      if ( !v14 )
        goto LABEL_8;
LABEL_9:
      result = *((unsigned __int16 *)v10 + 1);
      v10 += result;
      if ( !--a2 )
        goto LABEL_10;
    }
    v14 = (a4 & 8) == 0;
    goto LABEL_7;
  }
LABEL_10:
  v15 = (v9 + 3) & 0xFFFFFFFC;
  if ( *a3 < v15 )
  {
    *a3 = v15;
    return result;
  }
  result = *a1;
  v16 = (char *)(v6 + 8);
  *(_QWORD *)v6 = *a1;
  v17 = a2;
  *(_DWORD *)(v6 + 2) = 8;
  if ( (unsigned __int16)a2 < *((_WORD *)a1 + 2) )
  {
    while ( 1 )
    {
      v18 = *(unsigned __int8 *)v5;
      if ( v18 <= 0xF )
        break;
      v19 = v18 - 16;
      if ( !v19 )
        break;
      v20 = v19 - 1;
      if ( v20 )
      {
        v26 = v20 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              if ( v28 != 1 )
                break;
              v21 = a4 >> 8;
            }
            else
            {
              v21 = a4 >> 7;
            }
          }
          else
          {
            v21 = a4 >> 6;
          }
        }
        else
        {
          v21 = a4 >> 5;
        }
      }
      else
      {
        v21 = a4 >> 4;
      }
      v22 = (v21 & 1) == 0;
LABEL_19:
      if ( !v22 )
      {
        memmove(v16, v5, v5[1]);
        ++*(_WORD *)(v6 + 4);
        *(_WORD *)(v6 + 2) += v5[1];
        v16 += v5[1];
      }
      ++v17;
      v5 = (unsigned __int16 *)((char *)v5 + v5[1]);
      result = *((unsigned __int16 *)a1 + 2);
      if ( v17 >= (unsigned int)result )
        return result;
    }
    v22 = (a4 & 8) == 0;
    goto LABEL_19;
  }
  return result;
}
