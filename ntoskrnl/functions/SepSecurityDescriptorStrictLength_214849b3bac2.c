__int64 __fastcall SepSecurityDescriptorStrictLength(__int64 a1)
{
  __int16 v1; // r10
  __int64 v2; // rax
  unsigned int v3; // r9d
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // r8

  v1 = *(_WORD *)(a1 + 2);
  v2 = 20LL;
  if ( v1 >= 0 )
    v2 = 40LL;
  v3 = v2;
  v4 = a1 + v2;
  if ( v1 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v5 )
      goto LABEL_9;
    v6 = a1 + v5;
  }
  if ( v6 )
  {
    v3 += (4 * *(unsigned __int8 *)(v6 + 1) + 11) & 0xFFFFFFFC;
    v4 = v6 + ((4 * *(unsigned __int8 *)(v6 + 1) + 11) & 0xFFFFFFFC);
  }
  if ( v1 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    goto LABEL_11;
  }
LABEL_9:
  v7 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v7 )
    goto LABEL_14;
  v8 = a1 + v7;
LABEL_11:
  if ( v8 )
  {
    v9 = (4 * *(unsigned __int8 *)(v8 + 1) + 11) & 0xFFFFFFFC;
    v10 = v9 + v8;
    v3 += v9;
    if ( v10 > v4 )
      v4 = v10;
  }
LABEL_14:
  if ( (v1 & 4) == 0 )
    goto LABEL_21;
  if ( v1 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v11 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v11 )
      goto LABEL_21;
    v12 = a1 + v11;
  }
  if ( v12 )
  {
    v13 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
    v14 = v13 + v12;
    v3 += v13;
    if ( v14 > v4 )
      v4 = v14;
  }
LABEL_21:
  if ( (v1 & 0x10) == 0 )
    goto LABEL_22;
  if ( v1 >= 0 )
  {
    v18 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v17 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v17 )
      goto LABEL_22;
    v18 = a1 + v17;
  }
  if ( v18 )
  {
    v19 = (*(unsigned __int16 *)(v18 + 2) + 3) & 0xFFFFFFFC;
    v20 = v19 + v18;
    v3 += v19;
    if ( v20 > v4 )
      LODWORD(v4) = v20;
  }
LABEL_22:
  if ( v1 < 0 )
    return (unsigned int)(v4 - a1);
  else
    return v3;
}
