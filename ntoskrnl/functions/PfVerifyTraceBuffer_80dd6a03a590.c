char __fastcall PfVerifyTraceBuffer(_DWORD *a1, unsigned int a2, int *a3)
{
  char v4; // si
  __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // r9d
  unsigned int *v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // rcx
  char *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  _DWORD *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char result; // al

  v4 = 0;
  if ( a2 < 0xD0 )
  {
    v7 = 10;
    goto LABEL_26;
  }
  if ( ((unsigned __int8)a1 & 7) != 0 )
  {
    v7 = 15;
    goto LABEL_26;
  }
  if ( *a1 != 30 || a1[1] != 1128485697 )
  {
    v7 = 20;
    goto LABEL_26;
  }
  if ( a2 > 0x10000000 )
  {
    v7 = 23;
    goto LABEL_26;
  }
  if ( a1[19] > 1u )
  {
    v7 = 25;
    goto LABEL_26;
  }
  v5 = (unsigned int)a1[25];
  if ( (unsigned int)v5 > 0x84000 || (v6 = a1[21], v6 > 0x100000) )
  {
    v7 = 30;
    goto LABEL_26;
  }
  if ( a1[2] != a2 )
  {
    v7 = 35;
    goto LABEL_26;
  }
  if ( !(unsigned __int8)PfVerifyScenarioId(a1 + 3) )
  {
    v7 = 37;
    goto LABEL_26;
  }
  v10 = (unsigned __int64)v8 + v8[20];
  if ( (v10 & 7) != 0 )
  {
    v7 = 38;
    goto LABEL_26;
  }
  if ( v10 < (unsigned __int64)v8 || (v11 = (char *)v8 + v9, v10 >= (unsigned __int64)v8 + v9) )
  {
    v7 = 40;
    goto LABEL_26;
  }
  v12 = 16LL * v6 + v10 - 1;
  if ( v12 < (unsigned __int64)v8 || v12 >= (unsigned __int64)v11 )
  {
    v7 = 50;
    goto LABEL_26;
  }
  v13 = v7;
  v14 = v8 + 28;
  v15 = (unsigned int)(v7 + 10);
  do
  {
    v13 += *v14++;
    --v15;
  }
  while ( v15 );
  if ( v13 < v8[22] )
  {
    v7 = 120;
  }
  else
  {
    if ( (_DWORD)v5 )
    {
      v16 = (unsigned __int64)v8 + v8[24];
      if ( (v16 & 7) != 0 )
      {
        v7 = 65;
        goto LABEL_26;
      }
      if ( v16 < (unsigned __int64)v8 || v16 >= (unsigned __int64)v11 )
      {
        v7 = 80;
        goto LABEL_26;
      }
      v17 = v16 + 24 * v5 - 1;
      if ( v17 < (unsigned __int64)v8 || v17 >= (unsigned __int64)v11 )
      {
        v7 = 90;
        goto LABEL_26;
      }
    }
    v4 = 1;
  }
LABEL_26:
  result = v4;
  *a3 = v7;
  return result;
}
