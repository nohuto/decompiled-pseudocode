NTSTATUS __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v6; // rbx
  int v7; // r15d
  char v8; // r13
  unsigned int v9; // r12d
  WCHAR v10; // si
  NTSTATUS result; // eax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  bool v15; // zf
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // ecx
  BOOLEAN v22; // [rsp+20h] [rbp-30h]
  unsigned int v24; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-1Ch]
  unsigned int v26; // [rsp+38h] [rbp-18h]
  unsigned int v27; // [rsp+3Ch] [rbp-14h] BYREF

  v22 = Strict;
  v6 = &v24;
  while ( 1 )
  {
    v7 = 10;
    v8 = 0;
    v9 = 0;
    if ( *S == 48 )
    {
      if ( *++S < 0x80u && (v12 = iswctype(*S, 4u), Strict = v22, v12) )
      {
        v7 = 8;
      }
      else if ( ((*S - 88) & 0xFFDF) != 0 )
      {
        v8 = 1;
      }
      else
      {
        v7 = 16;
        ++S;
      }
    }
    if ( Strict && v7 != 10 )
      goto LABEL_12;
    v10 = *S;
    if ( *S )
    {
      do
      {
        if ( v10 < 0x80u && iswctype(v10, 4u) && v10 - 48 < v7 )
        {
          v13 = v9 * v7 + v10 - 48;
        }
        else
        {
          if ( v7 != 16 || v10 >= 0x80u || !iswctype(v10, 0x80u) )
          {
            Strict = v22;
            goto LABEL_10;
          }
          v13 = v10 + 16 * v9 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10;
        }
        if ( v13 < v9 )
          goto LABEL_12;
        v8 = 1;
        ++S;
        v9 = v13;
        v10 = *S;
      }
      while ( *S );
      Strict = v22;
    }
LABEL_10:
    if ( *S != 46 )
      break;
    if ( v6 < &v27 )
    {
      *v6 = v9;
      ++S;
      ++v6;
      if ( v8 )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v8 )
  {
LABEL_12:
    result = -1073741811;
    *Terminator = S;
    return result;
  }
  *v6 = v9;
  v14 = ((char *)v6 - (char *)&v24 + 4) >> 2;
  if ( Strict )
  {
    v15 = (_DWORD)v14 == 4;
    goto LABEL_36;
  }
  v16 = v14 - 1;
  if ( !v16 )
  {
    v21 = v24;
    goto LABEL_51;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v15 = v18 == 1;
LABEL_36:
      if ( !v15 || v24 > 0xFF || v25 > 0xFF || v26 > 0xFF || v27 > 0xFF )
        goto LABEL_12;
      v19 = (unsigned __int8)v27;
      v20 = ((unsigned __int8)v26 | (((v24 << 8) | (unsigned __int8)v25) << 8)) << 8;
      goto LABEL_49;
    }
    if ( v24 > 0xFF || v25 > 0xFF || v26 > 0xFFFF )
      goto LABEL_12;
    v19 = (unsigned __int16)v26;
    v20 = ((v24 << 8) | (unsigned __int8)v25) << 16;
  }
  else
  {
    if ( v24 > 0xFF || v25 > 0xFFFFFF )
      goto LABEL_12;
    v20 = v24 << 24;
    v19 = v25 & 0xFFFFFF;
  }
LABEL_49:
  v21 = v19 | v20;
LABEL_51:
  *Terminator = S;
  Addr->S_un.S_addr = _byteswap_ulong(v21);
  return 0;
}
