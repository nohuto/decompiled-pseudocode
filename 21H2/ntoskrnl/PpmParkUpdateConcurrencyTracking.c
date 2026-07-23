/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x1407BB0C8
 * Callers:
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14026977C (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  char v1; // r12
  unsigned __int64 result; // rax
  unsigned __int16 i; // di
  __int64 v4; // rbx
  char v5; // al
  char v6; // cl
  __int64 v7; // rcx
  __int64 v8; // rdx
  _BYTE *v9; // r14
  __int64 *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD v15[22]; // [rsp+38h] [rbp-89h] BYREF

  v1 = a1;
  result = (unsigned __int64)memset(v15, 0, 0xA8uLL);
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v4 = PpmParkNodes + 272LL * i;
    v5 = *(_BYTE *)(v4 + 146);
    v6 = v5 & 8;
    if ( v1 )
    {
      if ( !v6 )
      {
        v9 = (_BYTE *)(v4 + 128);
        *(_BYTE *)(v4 + 146) = v5 | 8;
        v10 = (__int64 *)(v4 + 152);
        v11 = 2LL;
        do
        {
          if ( *v9 )
          {
            LODWORD(v15[0]) = 1310721;
            memset((char *)v15 + 4, 0, 0xA4uLL);
            v12 = *(unsigned __int16 *)(v4 + 4);
            v13 = *(v10 - 17);
            if ( (_WORD)v12 )
              LOWORD(v15[0]) = v12 + 1;
            v15[v12 + 1] |= v13;
            PopExecuteOnTargetProcessors((__int64)v15, (__int64)PpmIdleInstallConcurrency, *(_QWORD *)(v4 + 72), *v10);
          }
          ++v10;
          ++v9;
          --v11;
        }
        while ( v11 );
        v1 = a1;
      }
    }
    else if ( v6 )
    {
      *(_BYTE *)(v4 + 146) = v5 & 0xF7;
      LODWORD(v15[0]) = 1310721;
      memset((char *)v15 + 4, 0, 0xA4uLL);
      v7 = *(unsigned __int16 *)(v4 + 4);
      v8 = *(_QWORD *)(v4 + 8);
      if ( (_WORD)v7 )
        LOWORD(v15[0]) = v7 + 1;
      v15[v7 + 1] |= v8;
      PopExecuteOnTargetProcessors((__int64)v15, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
    }
    ++i;
  }
  return result;
}
