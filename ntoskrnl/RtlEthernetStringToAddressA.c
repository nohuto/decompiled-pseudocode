/*
 * XREFs of RtlEthernetStringToAddressA @ 0x1405AC7A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     __isascii @ 0x1403D44B0 (__isascii.c)
 *     isdigit @ 0x1403D44D0 (isdigit.c)
 *     islower @ 0x1403D4500 (islower.c)
 *     isxdigit @ 0x1403D45C0 (isxdigit.c)
 */

NTSTATUS __stdcall RtlEthernetStringToAddressA(PCSTR S, PCSTR *Terminator, DL_EUI48 *Addr)
{
  int *v4; // rsi
  int v7; // ebp
  char v8; // di
  char v9; // di
  bool v10; // zf
  char v11; // al
  CHAR v12; // r15
  int v14; // [rsp+20h] [rbp-48h] BYREF
  __int16 v15; // [rsp+24h] [rbp-44h] BYREF
  char v16; // [rsp+26h] [rbp-42h] BYREF

  v4 = &v14;
  while ( 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v12 = *S;
      if ( !*S )
        break;
      if ( _isascii(v12) && isdigit(v12) )
      {
        v9 = 16 * (v8 + 13);
      }
      else
      {
        if ( !_isascii(v12) || !isxdigit(v12) )
          break;
        if ( !_isascii(v12) || (v10 = islower(v12) == 0, v11 = 97, v10) )
          v11 = 65;
        v9 = 16 * v8 - v11 + 10;
      }
      v8 = v12 + v9;
      if ( v7 == 2 )
        goto LABEL_19;
      ++S;
      ++v7;
    }
    if ( *S != 45 && *S != 58 )
      break;
    if ( v4 < (int *)((char *)&v15 + 1) )
    {
      *(_BYTE *)v4 = v8;
      ++S;
      v4 = (int *)((char *)v4 + 1);
      if ( v7 == 2 )
        continue;
    }
LABEL_19:
    *Terminator = S;
    return -1073741811;
  }
  *Terminator = S;
  if ( v7 != 2 )
    return -1073741811;
  *(_BYTE *)v4 = v8;
  if ( (char *)v4 + 1 != &v16 )
    return -1073741811;
  *(_DWORD *)Addr->Byte = v14;
  *(_WORD *)&Addr->Ei48.Byte[1] = v15;
  return 0;
}
