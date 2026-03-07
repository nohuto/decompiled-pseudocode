__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // r12
  int NextValue; // eax
  int v11; // ebx
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v18; // eax
  char v19; // al
  __int64 v20; // rcx
  int v21; // eax
  _OWORD v22[2]; // [rsp+28h] [rbp-49h] BYREF
  int v23; // [rsp+48h] [rbp-29h]
  __int16 v24; // [rsp+4Ch] [rbp-25h]
  _OWORD v25[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26; // [rsp+78h] [rbp+7h]
  _WORD v27[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v28; // [rsp+84h] [rbp+13h]
  int v29; // [rsp+88h] [rbp+17h]
  __int64 v30; // [rsp+90h] [rbp+1Fh]
  int v31; // [rsp+98h] [rbp+27h]
  __int64 v32; // [rsp+A0h] [rbp+2Fh]

  v4 = a1[1];
  *a3 = 0;
  memset(v22, 0, sizeof(v22));
  v23 = 0;
  v8 = *a1;
  v24 = 0;
  v25[1] = v4;
  v25[0] = v8;
  v26 = *((_QWORD *)a1 + 4);
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v27);
      v11 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_17:
        v11 = 0;
        goto LABEL_16;
      }
      if ( NextValue < 0 )
        goto LABEL_18;
      v12 = v25[0];
      if ( LOWORD(v25[0]) == 4 )
      {
        v18 = AuthzBasepGetNextValue(a2, v22);
        v11 = v18;
        if ( v18 == -2147483622 )
          goto LABEL_17;
        if ( v18 < 0 )
          goto LABEL_18;
        v19 = *((_BYTE *)a2 + 4);
        v29 = 0;
        v13 = *a2;
        v28 = v19;
        v30 = *((_QWORD *)a2 + 2);
        v31 = *((_DWORD *)a2 + 2);
        v32 = *((_QWORD *)a2 + 4) + v9;
        v27[0] = v13;
      }
      else
      {
        v13 = v27[0];
      }
      if ( (unsigned __int8)AuthzBasepOperandValueTypesCompatible(v25) )
        break;
      if ( !a4 )
      {
        v11 = -1073741406;
        goto LABEL_18;
      }
    }
    if ( HIDWORD(v25[0]) == 1 )
      v12 = v13;
    v14 = (unsigned int)v12 - 1;
    if ( v12 == 1 )
      goto LABEL_30;
    v14 = (unsigned int)v12 - 2;
    if ( v12 == 2 )
      goto LABEL_30;
    v15 = (unsigned int)v12 - 3;
    if ( v12 == 3 )
    {
      LODWORD(v15) = 128;
      v16 = AuthzBasepCompareUnicodeStringOperands(v15, v25, a3);
      goto LABEL_13;
    }
    v20 = (unsigned int)v12 - 4;
    if ( v12 != 4 )
    {
      v14 = (unsigned int)v12 - 5;
      if ( v12 != 5 )
      {
        v14 = (unsigned int)v12 - 6;
        if ( v12 == 6 )
        {
LABEL_30:
          LOBYTE(v14) = 0x80;
          v21 = AuthzBasepCompareIntegerOperands(v14, v25);
          goto LABEL_31;
        }
        if ( v12 != 16 )
          continue;
      }
      LOBYTE(v14) = 0x80;
      v21 = AuthzBasepCompareOctetStringOperands(v14, v25);
LABEL_31:
      *a3 = v21;
      continue;
    }
    LODWORD(v20) = 128;
    v16 = AuthzBasepCompareFQBNOperands(v20, v25, a3);
LABEL_13:
    v11 = v16;
    if ( v16 < 0 )
      goto LABEL_18;
  }
  while ( *a3 != 1 );
  if ( v11 >= 0 )
    goto LABEL_16;
LABEL_18:
  *a3 = -1;
LABEL_16:
  AuthzBasepRestartOperandValueEnumeration(a2);
  return (unsigned int)v11;
}
