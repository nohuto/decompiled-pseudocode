/*
 * XREFs of RtlIpv4StringToAddressA @ 0x1403C9860
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1405AC8E0 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     __isascii @ 0x1403D44B0 (__isascii.c)
 *     isdigit @ 0x1403D44D0 (isdigit.c)
 *     islower @ 0x1403D4500 (islower.c)
 *     isxdigit @ 0x1403D45C0 (isxdigit.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rbx
  BOOLEAN v6; // si
  unsigned int v8; // r13d
  char v9; // r12
  int v10; // r15d
  CHAR v11; // al
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rbx
  bool v17; // zf
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  NTSTATUS result; // eax
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // eax
  int v26; // ecx
  unsigned int v29; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-1Ch]
  unsigned int v31; // [rsp+38h] [rbp-18h]
  unsigned int v32; // [rsp+3Ch] [rbp-14h] BYREF

  v4 = &v29;
  v6 = Strict;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      if ( _isascii(*++S) && isdigit(*S) )
      {
        v10 = 8;
      }
      else if ( ((*S - 88) & 0xDF) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v10 = 16;
        ++S;
      }
    }
    if ( v6 && v10 != 10 )
      goto LABEL_54;
    v11 = *S;
    if ( *S )
    {
      do
      {
        v12 = v11;
        if ( _isascii(v11) && isdigit(v12) && v12 - 48 < v10 )
        {
          v13 = v12 - 48;
          v14 = v8 * v10;
        }
        else
        {
          if ( v10 != 16 || !_isascii(v12) || !isxdigit(v12) )
            break;
          if ( !_isascii(v12) || (v25 = islower(v12), v26 = 97, !v25) )
            v26 = 65;
          v14 = 16 * v8 - v26;
          v13 = v12 + 10;
        }
        v15 = v14 + v13;
        if ( v15 < v8 )
          goto LABEL_54;
        ++S;
        v9 = 1;
        v8 = v15;
        v11 = *S;
      }
      while ( *S );
      v6 = Strict;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v32 )
    {
      *v4 = v8;
      ++S;
      ++v4;
      if ( v9 )
        continue;
    }
    goto LABEL_54;
  }
  if ( !v9 )
    goto LABEL_54;
  *v4 = v8;
  v16 = ((char *)v4 - (char *)&v29 + 4) >> 2;
  if ( v6 )
  {
    v17 = (_DWORD)v16 == 4;
LABEL_22:
    if ( v17 && v29 <= 0xFF && v30 <= 0xFF && v31 <= 0xFF && v32 <= 0xFF )
    {
      v18 = (unsigned __int8)v32;
      v19 = ((unsigned __int8)v31 | (((v29 << 8) | (unsigned __int8)v30) << 8)) << 8;
LABEL_28:
      v20 = v18 | v19;
LABEL_29:
      *Terminator = S;
      Addr->S_un.S_addr = _byteswap_ulong(v20);
      return 0;
    }
    goto LABEL_54;
  }
  v22 = v16 - 1;
  if ( !v22 )
  {
    v20 = v29;
    goto LABEL_29;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    if ( v29 <= 0xFF && v30 <= 0xFFFFFF )
    {
      v19 = v29 << 24;
      v18 = v30 & 0xFFFFFF;
      goto LABEL_28;
    }
    goto LABEL_54;
  }
  v24 = v23 - 1;
  if ( v24 )
  {
    v17 = v24 == 1;
    goto LABEL_22;
  }
  if ( v29 <= 0xFF && v30 <= 0xFF && v31 <= 0xFFFF )
  {
    v18 = (unsigned __int16)v31;
    v19 = ((v29 << 8) | (unsigned __int8)v30) << 16;
    goto LABEL_28;
  }
LABEL_54:
  result = -1073741811;
  *Terminator = S;
  return result;
}
