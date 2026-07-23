/*
 * XREFs of RtlIpv6StringToAddressW @ 0x14031C670
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x14031C5D0 (RtlIpv6StringToAddressExW.c)
 * Callees:
 *     wcstol @ 0x1403D3D94 (wcstol.c)
 *     iswctype @ 0x1403D426C (iswctype.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  wint_t v3; // bx
  const wchar_t *v4; // rax
  unsigned int v5; // edx
  PCWSTR v7; // r12
  int v8; // r14d
  char v9; // r8
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // r15d
  unsigned int v13; // ebp
  int v15; // eax
  __int16 v16; // ax
  unsigned int v17; // eax
  unsigned int v18; // eax
  const wchar_t *v19; // [rsp+20h] [rbp-48h]
  char v20; // [rsp+70h] [rbp+8h]
  unsigned int v22; // [rsp+88h] [rbp+20h]

  v3 = *S;
  v20 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0;
  v22 = 0;
  v7 = S;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( *v7 )
  {
    if ( v8 == 1 )
    {
      if ( v3 < 0x80u )
      {
        if ( iswctype(v3, 4u) )
        {
          ++v12;
          goto LABEL_52;
        }
        if ( iswctype(v3, 0x80u) )
        {
          v4 = v19;
          ++v12;
          if ( v11 )
            break;
          v9 = 1;
          v20 = 1;
          goto LABEL_23;
        }
        v9 = v20;
      }
      if ( v3 != 58 )
      {
        if ( v3 != 46 || v9 || v11 > 2 )
          goto LABEL_8;
        v4 = v19;
        if ( v10 > 6 )
          break;
        ++v11;
        v8 = 0;
        goto LABEL_40;
      }
      if ( v11 || v10 > 6 )
      {
LABEL_8:
        v4 = v19;
        break;
      }
      if ( v7[1] == 58 )
      {
        if ( v13 )
          goto LABEL_8;
        v15 = 2;
        ++v7;
        v8 = 2;
        v13 = v10 + 1;
      }
      else
      {
        v8 = 0;
        v15 = 1;
      }
      v10 += v15;
      v4 = v19;
    }
    else
    {
      if ( v3 == 58 )
      {
        if ( v11 || v10 || v7[1] != 58 )
          goto LABEL_8;
        v10 = 2;
        v13 = 1;
        v22 = v5 + 1;
        ++v7;
        v8 = 2;
        *((_WORD *)Addr + v5) = 0;
        v4 = v19;
        goto LABEL_40;
      }
      if ( v10 > 7 || v3 >= 0x80u )
        goto LABEL_8;
      if ( iswctype(v3, 4u) )
      {
        v4 = v7;
        v20 = 0;
        v8 = 1;
        v19 = v7;
        v12 = 1;
        v9 = 0;
        goto LABEL_23;
      }
      if ( !iswctype(v3, 0x80u) || v11 )
        goto LABEL_8;
      v9 = 1;
      v8 = 1;
      v4 = v7;
      v20 = 1;
      v19 = v7;
      v12 = 1;
    }
    if ( v8 == 1 )
      goto LABEL_23;
LABEL_40:
    if ( !v4 )
      goto LABEL_23;
    if ( v11 )
    {
      if ( v12 > 3 )
        return -1073741811;
      v17 = wcstol(v4, 0LL, 10);
      if ( v17 > 0xFF )
        return -1073741811;
      *((_BYTE *)Addr + 2 * v22 + v11 - 1) = v17;
LABEL_52:
      v9 = v20;
      v4 = v19;
LABEL_23:
      v5 = v22;
      goto LABEL_24;
    }
    if ( v12 > 4 )
      return -1073741811;
    v16 = wcstol(v4, 0LL, 16);
    v9 = v20;
    *((_WORD *)Addr + v22) = __ROR2__(v16, 8);
    v5 = v22 + 1;
    v4 = v19;
    ++v22;
LABEL_24:
    v3 = *++v7;
  }
  *Terminator = v7;
  if ( v11 )
  {
    if ( v11 != 3 )
      return -1073741811;
    ++v10;
  }
  if ( !v13 && v10 != 7 )
    return -1073741811;
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
    {
      *((_WORD *)Addr + v22) = 0;
      goto LABEL_64;
    }
    return -1073741811;
  }
  if ( v11 )
  {
    if ( v12 <= 3 )
    {
      v18 = wcstol(v4, 0LL, 10);
      if ( v18 <= 0xFF )
      {
        *((_BYTE *)Addr + 2 * v22 + v11) = v18;
        goto LABEL_64;
      }
    }
    return -1073741811;
  }
  if ( v12 > 4 )
    return -1073741811;
  *((_WORD *)Addr + v22) = __ROR2__(wcstol(v4, 0LL, 16), 8);
LABEL_64:
  if ( v13 )
  {
    memmove((char *)Addr + 2 * (v13 - v10) + 16, (char *)Addr + 2 * v13, 2LL * (v10 - v13));
    memset((char *)Addr + 2 * v13, 0, 2LL * (8 - v10));
  }
  return 0;
}
