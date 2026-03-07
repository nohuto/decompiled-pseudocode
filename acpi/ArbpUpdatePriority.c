__int64 __fastcall ArbpUpdatePriority(__int64 a1, __int64 *a2)
{
  int v3; // edx
  __int64 result; // rax
  char v5; // r9
  char *v6; // rdx
  char *v7; // rdi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r11
  bool v11; // cf
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax

  v3 = *((_DWORD *)a2 + 8);
  result = (unsigned int)(v3 - 2147483645);
  if ( (unsigned int)result <= 1 )
    goto LABEL_23;
  v5 = *(_BYTE *)a2[5] & 1;
  if ( v3 )
  {
    result = *((unsigned int *)a2 + 9);
    if ( (result & 2) == 0 )
    {
      v7 = *(char **)(a1 + 64);
      v6 = &v7[16 * abs32(v3)];
      goto LABEL_6;
    }
LABEL_23:
    *((_DWORD *)a2 + 8) = 0x7FFFFFFF;
    return result;
  }
  v6 = *(char **)(a1 + 64);
  v7 = v6;
LABEL_6:
  v8 = (unsigned __int64)&v7[16 * *(unsigned __int16 *)(a1 + 56)];
  if ( (unsigned __int64)v6 >= v8 )
  {
LABEL_19:
    result = 2147483646 - (unsigned int)(v5 != 0);
    goto LABEL_22;
  }
  v9 = *a2;
  while ( 1 )
  {
    v10 = *(_QWORD *)v6;
    v11 = *(_QWORD *)v6 < v9;
    if ( *(_QWORD *)v6 <= v9 )
      break;
    if ( a2[1] >= v10 )
    {
      v11 = v10 < v9;
      break;
    }
LABEL_18:
    v6 += 16;
    if ( (unsigned __int64)v6 >= v8 )
      goto LABEL_19;
  }
  if ( v11 && *((_QWORD *)v6 + 1) < v9 )
    goto LABEL_18;
  v12 = a2[1];
  if ( v12 >= *((_QWORD *)v6 + 1) )
    v12 = *((_QWORD *)v6 + 1);
  v13 = *a2;
  if ( v9 <= v10 )
    v13 = *(_QWORD *)v6;
  if ( v12 - v13 + 1 < a2[2] )
    goto LABEL_18;
  result = (unsigned int)((v6 - v7) >> 4) + 1;
  *((_DWORD *)a2 + 8) = result;
  if ( v5 )
  {
    result = (unsigned int)-(int)result;
LABEL_22:
    *((_DWORD *)a2 + 8) = result;
  }
  return result;
}
