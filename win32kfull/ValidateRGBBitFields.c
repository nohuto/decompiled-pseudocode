/*
 * XREFs of ValidateRGBBitFields @ 0x1C02543A4
 * Callers:
 *     GetDstBFInfo @ 0x1C0253EF0 (GetDstBFInfo.c)
 *     ValidateHTSI @ 0x1C025409C (ValidateHTSI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateRGBBitFields(__int128 *a1)
{
  __int128 v1; // xmm1
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r10d
  __int64 i; // rcx
  unsigned int v8; // eax
  char v9; // r8
  char v10; // r9
  bool v11; // cf
  __int64 result; // rax
  char v13; // dl
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // xmm1_8
  __int128 v18; // [rsp+0h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-10h]

  v1 = *a1;
  v3 = *(_QWORD *)a1;
  v19 = *((_QWORD *)a1 + 2);
  v4 = v3 >> 8;
  v18 = v1;
  if ( (unsigned __int8)v4 != 1 && (unsigned __int8)v4 != 2 && (unsigned __int8)v4 != 3 )
  {
    v5 = 0LL;
    if ( (unsigned __int8)v4 != 4 )
    {
      if ( (unsigned __int8)v4 == 5 || (unsigned __int8)v4 == 6 )
      {
LABEL_9:
        v6 = v19 | HIDWORD(v18) | DWORD2(v18);
        if ( v6 && ((HIDWORD(v18) | DWORD2(v18)) & (unsigned int)v19) == 0 && (HIDWORD(v18) & DWORD2(v18)) == 0 )
        {
          for ( i = 0LL; i < 3; ++i )
          {
            v8 = *((_DWORD *)&v18 + i + 2);
            v9 = 0;
            v10 = 0;
            if ( v8 )
            {
              while ( (v8 & 1) == 0 )
              {
                v8 >>= 1;
                ++v10;
              }
              do
              {
                ++v9;
                v8 >>= 1;
              }
              while ( (v8 & 1) != 0 );
              if ( v8 )
                return 0LL;
            }
            *((_BYTE *)&v18 + i + 2) = v10;
            *((_BYTE *)&v18 + i + 5) = v9;
          }
          if ( v6 == 0xFFFFFF && *(_WORD *)((char *)&v18 + 5) == 2056 && BYTE7(v18) == 8 )
            LOBYTE(v18) = v18 | 1;
          v11 = HIDWORD(v18) < DWORD2(v18);
          if ( HIDWORD(v18) > DWORD2(v18) )
          {
            if ( DWORD2(v18) < (unsigned int)v19 )
            {
              LOBYTE(v5) = HIDWORD(v18) >= (unsigned int)v19;
LABEL_31:
              HIDWORD(v19) = SrcOrderTable[v5];
              goto LABEL_35;
            }
            v11 = HIDWORD(v18) < DWORD2(v18);
          }
          if ( v11 && HIDWORD(v18) < (unsigned int)v19 )
            v5 = 3LL - (DWORD2(v18) < (unsigned int)v19);
          else
            v5 = (DWORD2(v18) < HIDWORD(v18)) + 4LL;
          goto LABEL_31;
        }
        return 0LL;
      }
      if ( (unsigned int)(unsigned __int8)v4 - 252 > 1 )
        return 0LL;
    }
    WORD5(v18) = 0;
    HIWORD(v18) = 0;
    WORD1(v19) = 0;
    goto LABEL_9;
  }
  v13 = 0;
  WORD3(v18) = 2056;
  BYTE5(v18) = 8;
  v14 = 255;
  HIDWORD(v19) = SrcOrderTable[BYTE4(v19)];
  v15 = 0LL;
  do
  {
    v16 = *((unsigned __int8 *)&v19 + v15++ + 5);
    *((_DWORD *)&v18 + v16 + 2) = v14;
    *((_BYTE *)&v18 + v16 + 2) = v13;
    v13 += 8;
    v14 <<= 8;
  }
  while ( v15 < 3 );
LABEL_35:
  result = 1LL;
  v17 = v19;
  *a1 = v18;
  *((_QWORD *)a1 + 2) = v17;
  return result;
}
