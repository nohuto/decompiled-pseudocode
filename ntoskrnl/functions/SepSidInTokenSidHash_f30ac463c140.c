char __fastcall SepSidInTokenSidHash(_DWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3, char a4, char a5, char a6)
{
  unsigned __int8 *v7; // rdi
  __int64 v10; // rax
  const void ***v11; // r14
  __int16 v12; // r12
  unsigned __int8 v13; // r15
  unsigned int v14; // r13d
  unsigned __int64 v15; // rsi
  unsigned int v16; // ebx
  int v18; // eax
  const void **v19; // rcx
  int v20; // edx
  const void **v21; // rsi
  int v22; // eax
  const void **v23; // rax
  unsigned int v24; // r15d
  const void **v25; // [rsp+20h] [rbp-38h]
  const void **v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+68h] [rbp+10h]
  const void **v28; // [rsp+68h] [rbp+10h]
  unsigned __int8 v29; // [rsp+88h] [rbp+30h]

  v7 = a3;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, a3) )
    v7 = a2;
  if ( a6 && RtlEqualSid(SeOwnerRightsSid, v7) )
    return 1;
  if ( !a1 || !v7 )
    return 0;
  v10 = v7[1];
  v11 = (const void ***)(a1 + 2);
  v12 = *(_WORD *)v7;
  v13 = 0;
  v14 = 4 * v10 + 8;
  LODWORD(v10) = v7[4 * v10 + 4];
  v15 = *(_QWORD *)&a1[2 * (v10 & 0xF) + 4] & *(_QWORD *)&a1[2 * ((unsigned __int64)(unsigned int)v10 >> 4) + 36];
  if ( !v15 )
  {
LABEL_6:
    v16 = *a1;
    if ( v16 > 0x40 )
    {
      v23 = *v11;
      v24 = 64;
      v28 = *v11;
      do
      {
        v21 = &v23[2 * v24];
        if ( *(_WORD *)*v21 == v12 )
        {
          if ( !memcmp(v7, *v21, v14) )
            goto LABEL_13;
          v23 = v28;
        }
        ++v24;
      }
      while ( v24 < v16 );
    }
    return 0;
  }
  while ( 1 )
  {
    LOBYTE(v18) = v15;
    v29 = v15;
    if ( (_BYTE)v15 )
      break;
LABEL_22:
    v13 += 8;
    v15 >>= 8;
    if ( !v15 )
      goto LABEL_6;
  }
  v19 = *v11;
  v25 = *v11;
  v20 = v13;
  while ( 1 )
  {
    v27 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v18);
    v26 = &v19[2 * (unsigned int)(v20 + v27)];
    if ( *(_WORD *)*v26 == v12 )
      break;
LABEL_21:
    v18 = v29 ^ (1 << v27);
    v20 = v13;
    v29 = v18;
    if ( !(_BYTE)v18 )
      goto LABEL_22;
  }
  if ( memcmp(v7, *v26, v14) )
  {
    v19 = v25;
    goto LABEL_21;
  }
  v21 = v26;
LABEL_13:
  if ( a5 || v21 != *v11 || ((_DWORD)v21[1] & 0x10) != 0 && !a4 )
  {
    v22 = *((_DWORD *)v21 + 2);
    if ( (v22 & 4) == 0 && (!a4 || (v22 & 0x10) == 0) )
      return 0;
  }
  return 1;
}
