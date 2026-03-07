NTSTATUS __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  wint_t v3; // bx
  char v4; // r10
  PCWSTR v6; // rdi
  int v7; // r15d
  const wchar_t *v8; // r9
  char v9; // r8
  unsigned int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  unsigned int v13; // ebp
  unsigned int v14; // edx
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  char v20; // [rsp+20h] [rbp-48h]
  wchar_t *Str; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+70h] [rbp+8h]
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v3 = *S;
  Str = 0LL;
  v4 = 0;
  v22 = 0;
  v20 = 0;
  v6 = S;
  v24 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( *S )
  {
    while ( 1 )
    {
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          if ( v3 < 0x80u )
          {
            if ( !iswctype(v3, 4u) )
            {
              if ( !iswctype(v3, 0x80u) )
              {
                v14 = v24;
                v9 = v22;
                v8 = Str;
                v4 = v20;
                goto LABEL_17;
              }
              ++v12;
              if ( v11 )
              {
                *Terminator = v6;
                goto LABEL_66;
              }
              v14 = v24;
              v9 = 1;
              v22 = 1;
LABEL_56:
              v8 = Str;
              goto LABEL_23;
            }
            ++v12;
LABEL_27:
            v14 = v24;
            goto LABEL_55;
          }
LABEL_17:
          if ( v3 == 58 )
          {
            if ( v11 )
              goto LABEL_65;
            if ( v10 > 6 && !v4 || v10 > 7 )
              break;
            if ( v6[1] == 58 )
            {
              if ( v13 )
                break;
              v16 = 2;
              v13 = v10 + 1;
              v7 = 2;
              ++v6;
            }
            else
            {
              v7 = 0;
              v16 = 1;
            }
            v10 += v16;
          }
          else
          {
            if ( v3 != 46 || v9 )
              break;
            if ( v11 > 2 )
            {
LABEL_65:
              *Terminator = v6;
LABEL_66:
              if ( v11 == 3 )
              {
                ++v10;
                goto LABEL_9;
              }
              return -1073741811;
            }
            if ( v10 > 6 && !v4 || v10 > 7 )
              break;
            v7 = 0;
            ++v11;
          }
LABEL_51:
          if ( !v8 )
            goto LABEL_23;
          if ( v11 )
          {
            if ( v12 > 3 )
              return -1073741811;
            v18 = wcstol(v8, 0LL, 10);
            if ( v18 > 0xFF )
              return -1073741811;
            Addr->u.Byte[2 * v24 - 1 + v11] = v18;
            goto LABEL_27;
          }
          if ( v12 > 4 )
            return -1073741811;
          Addr->u.Word[v24] = __ROR2__(wcstol(v8, 0LL, 16), 8);
          v14 = ++v24;
LABEL_55:
          v9 = v22;
          goto LABEL_56;
        }
      }
      else if ( v3 == 58 )
      {
        if ( v11 )
          goto LABEL_65;
        if ( v10 || v6[1] != 58 )
          break;
        v17 = v14;
        v10 = 2;
        v13 = 1;
        if ( !v14 )
          v4 = 1;
        ++v14;
        v20 = v4;
        v24 = v14;
        Addr->u.Word[v17] = 0;
        ++v6;
        v7 = 2;
        goto LABEL_51;
      }
      if ( v10 > 7 && (v10 > 8 || !v4) || v3 >= 0x80u )
        break;
      if ( iswctype(v3, 4u) )
      {
        v9 = 0;
        v22 = 0;
      }
      else
      {
        if ( !iswctype(v3, 0x80u) )
          break;
        if ( v11 )
          goto LABEL_65;
        v9 = 1;
        v22 = 1;
      }
      v14 = v24;
      v12 = 1;
      v7 = 1;
      Str = (wchar_t *)v6;
      v8 = v6;
LABEL_23:
      v3 = *++v6;
      if ( !*v6 )
        break;
      v4 = v20;
    }
  }
  *Terminator = v6;
  if ( v11 )
    goto LABEL_66;
LABEL_9:
  if ( !v13 && v10 != 7 )
    return -1073741811;
  if ( v7 == 1 )
  {
    if ( v11 )
    {
      if ( v12 > 3 )
        return -1073741811;
      v19 = wcstol(Str, 0LL, 10);
      if ( v19 > 0xFF )
        return -1073741811;
      Addr->u.Byte[2 * v24 + v11] = v19;
    }
    else
    {
      if ( v12 > 4 )
        return -1073741811;
      Addr->u.Word[v24] = __ROR2__(wcstol(Str, 0LL, 16), 8);
    }
  }
  else
  {
    if ( v7 != 2 )
      return -1073741811;
    Addr->u.Word[v24] = 0;
  }
  if ( v13 )
  {
    memmove((char *)&Addr[1] + 2 * (v13 - v10), (char *)Addr + 2 * v13, 2LL * (v10 - v13));
    memset((char *)Addr + 2 * v13, 0, 2LL * (8 - v10));
  }
  return 0;
}
