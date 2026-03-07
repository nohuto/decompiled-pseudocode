unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  char v1; // r15
  unsigned __int64 result; // rax
  unsigned __int16 v3; // si
  __int64 v4; // rbx
  char v5; // al
  unsigned __int8 v6; // di
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD v13[34]; // [rsp+38h] [rbp-D0h] BYREF

  v1 = a1;
  result = (unsigned __int64)memset(v13, 0, 0x108uLL);
  v3 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v4 = PpmParkNodes + 192LL * v3;
      v5 = *(_BYTE *)(v4 + 120);
      if ( v1 )
      {
        if ( (v5 & 8) != 0 )
          goto LABEL_4;
        v6 = 0;
        *(_BYTE *)(v4 + 120) = v5 | 8;
        if ( !*(_BYTE *)(v4 + 11) )
          goto LABEL_4;
        while ( 2 )
        {
          v7 = *(_QWORD *)(v4 + 184) + 104LL * v6;
          if ( *(_BYTE *)v7 )
          {
            LODWORD(v13[0]) = 2097153;
            memset((char *)v13 + 4, 0, 0x104uLL);
            v8 = *(unsigned __int16 *)(v4 + 4);
            v9 = *(_QWORD *)(v7 + 16);
            if ( !(_WORD)v8 )
              goto LABEL_10;
            if ( WORD1(v13[0]) > (unsigned __int16)v8 )
            {
              LOWORD(v13[0]) = v8 + 1;
LABEL_10:
              v13[v8 + 1] |= v9;
            }
            PopExecuteOnTargetProcessors(
              (__int64)v13,
              (__int64)PpmIdleInstallConcurrency,
              *(_QWORD *)(v4 + 48),
              *(_QWORD *)(v7 + 32));
          }
          if ( ++v6 >= *(_BYTE *)(v4 + 11) )
          {
            v1 = a1;
            goto LABEL_4;
          }
          continue;
        }
      }
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
      *(_BYTE *)(v4 + 120) = v5 & 0xF7;
      LODWORD(v13[0]) = 2097153;
      memset((char *)v13 + 4, 0, 0x104uLL);
      v10 = *(unsigned __int16 *)(v4 + 4);
      v11 = *(_QWORD *)(v4 + 16);
      if ( !(_WORD)v10 )
        goto LABEL_17;
      if ( WORD1(v13[0]) > (unsigned __int16)v10 )
        break;
LABEL_18:
      PopExecuteOnTargetProcessors((__int64)v13, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
LABEL_4:
      result = ++v3;
      if ( v3 >= (unsigned int)PpmParkNumNodes )
        return result;
    }
    LOWORD(v13[0]) = v10 + 1;
LABEL_17:
    v13[v10 + 1] |= v11;
    goto LABEL_18;
  }
  return result;
}
