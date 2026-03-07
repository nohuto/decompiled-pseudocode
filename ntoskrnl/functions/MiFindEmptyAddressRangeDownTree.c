__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  unsigned __int64 v20; // r11
  _DWORD *v21; // rdi
  _DWORD *v22; // r13
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rbp
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v35; // rax
  _DWORD v36[30]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v38; // [rsp+B8h] [rbp+20h]
  _DWORD *v39; // [rsp+C0h] [rbp+28h]
  unsigned __int64 v40; // [rsp+C8h] [rbp+30h]

  memset(v36, 0, 0x40uLL);
  v11 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v12 = a4 >> 12;
  v13 = v11 >> 12;
  if ( a5 >= a6 || a6 - a5 < v11 )
    goto LABEL_38;
  v14 = a6 >> 12;
  v15 = a3 >> 12;
  v16 = -(__int64)a3 & (a6 - v11);
  v37 = a6 >> 12;
  v38 = a3 >> 12;
  v17 = v16 >> 12;
  v18 = 0LL;
  v40 = v16 >> 12;
  if ( v12 )
  {
    v35 = MiHonorRangeStraddleRequirement(v16 >> 12, v13, v12, 1);
    v14 = v37;
    v17 = ~(v15 - 1) & v35;
    v40 = v17;
    v16 = v17 << 12;
  }
  if ( v16 < a5 )
  {
LABEL_38:
    LODWORD(v18) = -1073741801;
    return (unsigned int)v18;
  }
  v19 = *a1;
  if ( !*a1 )
  {
    *a7 = v16;
    return (unsigned int)v18;
  }
  v20 = v18;
  do
  {
    v21 = (_DWORD *)v19;
    v19 = *(_QWORD *)(v19 + 8);
  }
  while ( v19 );
  v22 = v21;
  v23 = a5 >> 12;
  while ( 1 )
  {
    v39 = v22;
    if ( v21 )
    {
      v21 = (_DWORD *)v18;
      MiUpdateVadStartVpn((__int64)v36, v14);
      v39 = v36;
    }
    else
    {
      v24 = *(_QWORD *)v20;
      v25 = v20;
      if ( *(_QWORD *)v20 )
      {
        while ( 1 )
        {
          v20 = v24;
          if ( *(_QWORD *)(v24 + 8) == v18 )
            break;
          v24 = *(_QWORD *)(v24 + 8);
        }
      }
      else
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v20 || *(_QWORD *)(v20 + 8) == v25 )
            break;
          v25 = v20;
        }
      }
      if ( !v20 )
      {
        v26 = v15 - 1;
        v36[7] = v18;
        BYTE1(v36[8]) = v18;
        v28 = v23 + v15 - 1;
        v39 = v22;
        v22 = v36;
        goto LABEL_21;
      }
    }
    v26 = v15 - 1;
    v22 = v36;
    v27 = v23;
    if ( (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) + 1 >= v23 )
    {
      v22 = (_DWORD *)v20;
      v27 = (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) + 1;
    }
    v28 = v27 + v15 - 1;
LABEL_21:
    v29 = ~v26;
    v30 = v29 & v28;
    if ( v12 )
      v30 = MiHonorRangeStraddleRequirement(v30, v13, v12, 0);
    v14 = v37;
    if ( v30 <= v17 )
      break;
LABEL_24:
    if ( v22 == v36 )
      goto LABEL_38;
    v15 = v38;
  }
  v31 = v37;
  v32 = (unsigned int)v39[6];
  if ( (v32 | ((unsigned __int64)*((unsigned __int8 *)v39 + 32) << 32)) <= v37 )
    v31 = v32 | ((unsigned __int64)*((unsigned __int8 *)v39 + 32) << 32);
  if ( v31 <= v30 || v13 > v31 - v30 )
  {
    v17 = v40;
    goto LABEL_24;
  }
  v33 = v29 & (v31 - v13);
  if ( v12 )
    v33 = v29 & MiHonorRangeStraddleRequirement(v33, v13, v12, 1);
  *a7 = v33 << 12;
  return (unsigned int)v18;
}
