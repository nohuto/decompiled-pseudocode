/*
 * XREFs of RtlpFilterSacl @ 0x14065A804
 * Callers:
 *     SeQuerySecurityDescriptorInfo @ 0x14065A340 (SeQuerySecurityDescriptorInfo.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall RtlpFilterSacl(__int64 *a1, __int64 i, unsigned int *a3, unsigned int a4)
{
  __int64 result; // rax
  _WORD *v5; // rbp
  __int64 v6; // r14
  int v9; // r10d
  unsigned __int8 *v10; // r11
  unsigned int v11; // ecx
  bool v12; // zf
  unsigned int v13; // r10d
  char *v14; // rsi
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx

  result = *((unsigned __int16 *)a1 + 2);
  v5 = a1 + 1;
  v6 = i;
  LODWORD(i) = 0;
  v9 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( (_WORD)result )
  {
    for ( i = *((unsigned __int16 *)a1 + 2); i; --i )
    {
      v11 = *v10;
      if ( v11 > 0x12 )
      {
        v21 = v11 - 19;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            if ( (a4 & 0x80u) == 0 )
              goto LABEL_9;
LABEL_8:
            v9 += *((unsigned __int16 *)v10 + 1);
            goto LABEL_9;
          }
          if ( v22 != 1 )
            goto LABEL_29;
          v12 = (a4 & 0x100) == 0;
        }
        else
        {
          v12 = (a4 & 0x40) == 0;
        }
      }
      else
      {
        if ( v11 != 18 )
        {
          if ( v11 > 0x10 )
          {
            v12 = (a4 & 0x10) == 0;
            goto LABEL_7;
          }
LABEL_29:
          v12 = (a4 & 8) == 0;
          goto LABEL_7;
        }
        v12 = (a4 & 0x20) == 0;
      }
LABEL_7:
      if ( !v12 )
        goto LABEL_8;
LABEL_9:
      result = *((unsigned __int16 *)v10 + 1);
      v10 += result;
    }
  }
  v13 = (v9 + 3) & 0xFFFFFFFC;
  if ( *a3 < v13 )
  {
    *a3 = v13;
    return result;
  }
  result = *a1;
  v14 = (char *)(v6 + 8);
  *(_QWORD *)v6 = *a1;
  v15 = i;
  *(_DWORD *)(v6 + 2) = 8;
  if ( (unsigned __int16)i < *((_WORD *)a1 + 2) )
  {
    do
    {
      v16 = *(unsigned __int8 *)v5;
      if ( v16 > 0x12 )
      {
        v23 = v16 - 19;
        if ( !v23 )
        {
          if ( (a4 & 0x40) == 0 )
          {
LABEL_35:
            LOWORD(v20) = v5[1];
            goto LABEL_27;
          }
          v18 = 1;
          goto LABEL_24;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          v17 = a4 >> 7;
          goto LABEL_23;
        }
        if ( v24 == 1 )
        {
          v17 = a4 >> 8;
          goto LABEL_23;
        }
      }
      else
      {
        if ( v16 == 18 )
        {
          v17 = a4 >> 5;
          goto LABEL_23;
        }
        if ( v16 >= 2 )
        {
          if ( v16 <= 3 )
            goto LABEL_34;
          if ( v16 > 6 )
          {
            if ( v16 <= 8 )
              goto LABEL_34;
            if ( v16 > 0xC )
            {
              if ( v16 <= 0x10 )
LABEL_34:
                v17 = a4 >> 3;
              else
                v17 = a4 >> 4;
LABEL_23:
              v18 = v17 & 1;
LABEL_24:
              v19 = v18 == 0;
              goto LABEL_25;
            }
          }
        }
      }
      v19 = (a4 & 8) == 0;
LABEL_25:
      if ( v19 )
        goto LABEL_35;
      memmove(v14, v5, (unsigned __int16)v5[1]);
      ++*(_WORD *)(v6 + 4);
      *(_WORD *)(v6 + 2) += v5[1];
      v20 = (unsigned __int16)v5[1];
      v14 += v20;
LABEL_27:
      ++v15;
      v5 = (_WORD *)((char *)v5 + (unsigned __int16)v20);
      result = *((unsigned __int16 *)a1 + 2);
    }
    while ( v15 < (unsigned int)result );
  }
  return result;
}
