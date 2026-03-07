__int64 __fastcall HalpAuditSelectRsdtOrXsdt(__int64 a1, __int64 a2)
{
  int v3; // r11d
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // eax
  __int64 v7; // r10
  char v8; // cl
  char *v9; // rbx
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  int v13; // eax

  v3 = 0;
  v4 = -1072431079;
  while ( 1 )
  {
    v5 = v3 == 0 ? 2 : 0;
    v6 = v5;
    if ( *(unsigned __int8 *)(a1 + 15) < v5 )
      v6 = *(unsigned __int8 *)(a1 + 15);
    if ( v6 < 2 )
    {
      v7 = 20LL;
      v8 = 0;
      goto LABEL_8;
    }
    v7 = *(unsigned int *)(a1 + 20);
    if ( (unsigned int)(v7 - 33) <= 0x63 )
      break;
LABEL_12:
    if ( (unsigned int)++v3 >= 2 )
      return v4;
  }
  v8 = 0;
  if ( !(_DWORD)v7 )
    goto LABEL_14;
LABEL_8:
  v9 = (char *)a1;
  do
  {
    v10 = *v9++;
    v8 += v10;
    --v7;
  }
  while ( v7 );
  if ( v8 )
  {
    v4 = -1073741823;
    goto LABEL_12;
  }
LABEL_14:
  v11 = *(_DWORD *)(a2 + 12) | 2;
  *(_DWORD *)(a2 + 12) = v11;
  if ( *(unsigned __int8 *)(a1 + 15) < v5 )
    v5 = *(unsigned __int8 *)(a1 + 15);
  if ( v5 >= 2 && (v12 = *(_QWORD *)(a1 + 24)) != 0 )
  {
    *(_QWORD *)a2 = v12;
    *(_DWORD *)(a2 + 12) = v11 | 4;
    v13 = 0;
  }
  else
  {
    *(_QWORD *)a2 = *(unsigned int *)(a1 + 16);
    v13 = *(_DWORD *)(a1 + 20);
  }
  *(_DWORD *)(a2 + 8) = v13;
  return 0;
}
