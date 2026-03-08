/*
 * XREFs of SecureDump_Encrypt_DmpData @ 0x14055BA20
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x14094C450 (IopLiveDumpWriteBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     BCryptEncrypt @ 0x1405B5304 (BCryptEncrypt.c)
 */

__int64 __fastcall SecureDump_Encrypt_DmpData(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  NTSTATUS v9; // r10d
  ULONG cbOutput; // ecx
  ULONG pcbResult; // [rsp+50h] [rbp-38h] BYREF
  UCHAR pbIV[8]; // [rsp+58h] [rbp-30h] BYREF

  v5 = 0LL;
  v9 = -1073741823;
  if ( byte_140C64954 )
  {
    if ( !a1 || !a3 && a4 || (cbOutput = pbInput, a2 % pbInput) || a2 < pbInput )
    {
      v9 = -1073741811;
    }
    else if ( a4 >= a2 )
    {
      pcbResult = 0;
      *(_QWORD *)pbIV = 0LL;
      if ( a2 )
      {
        do
        {
          v9 = BCryptEncrypt(
                 hObject,
                 (PUCHAR)(a1 + v5),
                 cbOutput,
                 0LL,
                 pbIV,
                 8u,
                 (PUCHAR)(a3 + v5),
                 cbOutput,
                 &pcbResult,
                 0);
          if ( v9 < 0 )
            break;
          v5 += pcbResult;
          cbOutput = pbInput;
          if ( pcbResult != pbInput )
          {
            v9 = -1073741823;
            break;
          }
        }
        while ( v5 < a2 );
      }
    }
    else
    {
      v5 = a2;
      v9 = -2147483643;
    }
  }
  else
  {
    v9 = -1073741808;
  }
  if ( a5 )
    *a5 = v5;
  return (unsigned int)v9;
}
