/*
 * XREFs of CmpGetToken @ 0x140B5BF5C
 * Callers:
 *     CmpParseInfBuffer @ 0x140B5BC3C (CmpParseInfBuffer.c)
 * Callees:
 *     isspace @ 0x1403D4560 (isspace.c)
 *     strchr @ 0x1403D5520 (strchr.c)
 *     strncpy_s @ 0x1403D9EA0 (strncpy_s.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall CmpGetToken(_BYTE **a1, unsigned __int64 a2, __int64 a3)
{
  _BYTE *i; // rdi
  int v7; // eax
  const char *v8; // rbp
  _BYTE *v9; // rbx
  _BYTE *v10; // r13
  _BYTE *v11; // rax
  const char *v12; // r12
  __int64 v13; // rbx
  char *Pool2; // rax
  char *v15; // r15
  _BYTE *v16; // rbx
  _BYTE *v17; // rdi
  _BYTE *j; // rbx
  int v19; // ecx

  *(_BYTE *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  while ( 1 )
  {
    for ( i = *a1; (unsigned __int64)i < a2 && *i != 10 && isspace((unsigned __int8)*i); ++i )
      ;
    if ( (unsigned __int64)i >= a2 )
      goto LABEL_56;
    if ( *i == 59 || *i == 35 )
    {
      do
      {
        if ( *i == 10 )
          break;
        ++i;
      }
      while ( (unsigned __int64)i < a2 );
    }
    if ( (unsigned __int64)i >= a2 || (v7 = (char)*i, *i == 26) )
    {
LABEL_56:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 8) = 0LL;
      goto LABEL_27;
    }
    switch ( v7 )
    {
      case 10:
        ++i;
        *(_DWORD *)a3 = 1;
LABEL_27:
        *a1 = i;
        return;
      case 34:
        v17 = i + 1;
        for ( j = v17; (unsigned __int64)j < a2; ++j )
        {
          if ( strchr(&StringTerminators[6], (char)*j) )
            break;
        }
        if ( (unsigned __int64)j < a2 && *j == 34 )
        {
          *j = 0;
          v19 = 4;
          ++j;
          *(_QWORD *)(a3 + 8) = v17;
        }
        else
        {
          v19 = 7;
        }
        *(_DWORD *)a3 = v19;
        *a1 = j;
        return;
      case 44:
        ++i;
        *(_DWORD *)a3 = 6;
        goto LABEL_27;
      case 61:
        ++i;
        *(_DWORD *)a3 = 5;
        goto LABEL_27;
      case 91:
        ++i;
        *(_DWORD *)a3 = 2;
        goto LABEL_27;
    }
    if ( v7 != 92 )
      break;
    v16 = ++i;
    if ( (unsigned __int64)i < a2 )
    {
      do
      {
        if ( *v16 == 10 )
          break;
        if ( !isspace((unsigned __int8)*v16) )
          break;
        ++v16;
      }
      while ( (unsigned __int64)v16 < a2 );
    }
    if ( (*v16 == 59 || *v16 == 35) && (++i, v16 = i, (unsigned __int64)i < a2) )
    {
      while ( *v16 != 10 )
      {
        if ( (unsigned __int64)++v16 >= a2 )
          goto LABEL_39;
      }
    }
    else
    {
LABEL_39:
      if ( (unsigned __int64)v16 >= a2 )
      {
        *(_DWORD *)a3 = 7;
        goto LABEL_27;
      }
      if ( *v16 != 10 )
        goto LABEL_19;
    }
    *a1 = v16 + 1;
  }
  if ( v7 == 93 )
  {
    ++i;
    *(_DWORD *)a3 = 3;
    goto LABEL_27;
  }
LABEL_19:
  v8 = i;
  v9 = i;
  if ( (unsigned __int64)i < a2 )
  {
    v10 = i;
    v11 = i;
    do
    {
      v12 = v9;
      v9 = v11;
      if ( strchr(StringTerminators, (char)*i) )
        break;
      i = v10 + 1;
      v9 = i;
      ++v10;
      v12 = i;
      v11 = i;
    }
    while ( (unsigned __int64)i < a2 );
    if ( v12 != v8 )
    {
      v13 = (unsigned int)((_DWORD)i - (_DWORD)v8);
      if ( (int)v13 + 1 >= (unsigned int)v13
        && (Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)(v13 + 1), 0x69704D43u), (v15 = Pool2) != 0LL) )
      {
        strncpy_s(Pool2, (unsigned int)(v13 + 1), v8, (unsigned int)v13);
        v15[v13] = 0;
        *(_DWORD *)a3 = 4;
        *(_QWORD *)(a3 + 8) = v15;
        *(_BYTE *)(a3 + 16) = 1;
      }
      else
      {
        *(_DWORD *)a3 = 8;
      }
      goto LABEL_27;
    }
  }
  *(_DWORD *)a3 = 7;
  *a1 = v9 + 1;
}
