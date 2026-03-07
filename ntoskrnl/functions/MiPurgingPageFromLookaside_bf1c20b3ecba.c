__int64 __fastcall MiPurgingPageFromLookaside(int a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbp
  ULONG_PTR v9; // r14
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rsi
  __int64 result; // rax
  int v16; // r10d
  int v17; // r10d
  unsigned int v18; // ecx
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+2Ch] [rbp-4Ch]
  __int64 v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+38h] [rbp-40h]
  int v24; // [rsp+3Ch] [rbp-3Ch]
  __int64 v25; // [rsp+40h] [rbp-38h]

  v21 = 0;
  v4 = 48 * a2 - 0x220000000000LL;
  v5 = *(_QWORD *)(v4 + 16);
  v6 = -9LL;
  v22 = v4;
  if ( (v5 & 0x400) == 0 )
    v6 = -134217729LL;
  v7 = v5 & v6;
  v8 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((48 * a2) >> 4);
  v19 = v8;
  v10 = MiSearchNumaNodeTable(v9);
  v11 = *(_BYTE *)(v4 + 35);
  v12 = *(unsigned int *)(v10 + 8);
  v20 = *(_DWORD *)(v10 + 8);
  if ( (v11 & 8) != 0 )
  {
    v13 = 5;
    v14 = 5LL;
  }
  else
  {
    v13 = v11 & 7;
    v14 = v11 & 7;
  }
  v23 = v13;
  if ( qword_140C65750 )
    LODWORD(result) = MiPageToChannel(v9);
  else
    LODWORD(result) = 0;
  v24 = result;
  result = (unsigned int)result;
  v25 = *(_QWORD *)(v8 + 16) + 25408 * v12 + 88 * (v14 + 8LL * (unsigned int)result + 37);
  if ( a1 == 3 )
  {
LABEL_8:
    *(_QWORD *)(v4 + 16) = v7;
  }
  else
  {
    v16 = 0;
    while ( 1 )
    {
      result = MiGetStandbyLookaside(&v19, (unsigned int)v16);
      if ( v17 != a1 )
        break;
LABEL_15:
      v16 = v17 + 1;
      if ( v16 >= 3 )
        goto LABEL_8;
    }
    v18 = 0;
    while ( a2 != *(_QWORD *)result )
    {
      ++v18;
      result += 8LL;
      if ( v18 >= 0x40 )
        goto LABEL_15;
    }
  }
  return result;
}
