_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindRepurpose(__int64 a1, int a2)
{
  __int16 v2; // ax
  __int64 v3; // r9
  unsigned int v4; // edi
  _WORD *v5; // r8
  __int64 v6; // r14
  char *v7; // rsi
  __int64 v8; // r15
  int v9; // edx
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r10
  unsigned __int8 v12; // al
  _WORD v14[28]; // [rsp+0h] [rbp-38h] BYREF
  char v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_WORD *)(a1 + 816);
  LODWORD(v3) = a2 - 1;
  v4 = *(_DWORD *)(a1 + 856);
  v5 = v14;
  v6 = *(_QWORD *)(a1 + 1032);
  v7 = &v15;
  v8 = *(_QWORD *)(a1 + 1048);
  v15 = -1;
  v9 = 0;
  v14[0] = v2 & 0x1FFF;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (_DWORD)v3 != *(_DWORD *)(a1 + 788) )
      break;
    LODWORD(v3) = -1;
    --v9;
LABEL_10:
    if ( ++v9 >= v4 )
      goto LABEL_13;
  }
  v10 = *(_WORD *)(v6 + 2 * v3);
  if ( v10 >= 0x4000u )
    goto LABEL_10;
  v11 = v10 & 0x1FFF;
  if ( v11 )
  {
    v12 = *(_BYTE *)(v3 + v8);
    if ( v12 <= (unsigned __int8)*v7 && (v12 < (unsigned __int8)*v7 || v11 <= (unsigned __int16)(*v5 & 0x1FFF)) )
    {
      v7 = (char *)(v3 + v8);
      v5 = (_WORD *)(v6 + 2 * v3);
    }
    goto LABEL_10;
  }
  v5 = (_WORD *)(v6 + 2 * v3);
LABEL_13:
  if ( v5 == v14 )
    return 0LL;
  return v5;
}
