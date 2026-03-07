NTSTATUS __stdcall RtlEthernetStringToAddressW(PCWSTR S, LPCWSTR *Terminator, DL_EUI48 *Addr)
{
  int *v4; // r14
  int v7; // ebp
  char v8; // di
  WCHAR v9; // si
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int16 v12; // [rsp+24h] [rbp-44h] BYREF
  char v13; // [rsp+26h] [rbp-42h] BYREF

  v4 = &v11;
  while ( 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *S;
      if ( !*S || v9 >= 0x80u )
        break;
      if ( iswctype(v9, 4u) )
      {
        v8 = v9 + 16 * (v8 + 13);
      }
      else
      {
        if ( !iswctype(v9, 0x80u) )
          break;
        v8 = v9 + 16 * v8 - (iswctype(v9, 2u) != 0 ? 97 : 65) + 10;
      }
      if ( v7 == 2 )
        goto LABEL_15;
      ++S;
      ++v7;
    }
    if ( *S != 45 && *S != 58 )
      break;
    if ( v4 < (int *)((char *)&v12 + 1) )
    {
      *(_BYTE *)v4 = v8;
      ++S;
      v4 = (int *)((char *)v4 + 1);
      if ( v7 == 2 )
        continue;
    }
LABEL_15:
    *Terminator = S;
    return -1073741811;
  }
  *Terminator = S;
  if ( v7 != 2 )
    return -1073741811;
  *(_BYTE *)v4 = v8;
  if ( (char *)v4 + 1 != &v13 )
    return -1073741811;
  *(_DWORD *)Addr->Byte = v11;
  *(_WORD *)&Addr->Ei48.Byte[1] = v12;
  return 0;
}
