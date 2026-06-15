/*
 * XREFs of sub_180063C00 @ 0x180063C00
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 *     sub_180063B00 @ 0x180063B00 (sub_180063B00.c)
 * Callees:
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

char __fastcall sub_180063C00(__int64 a1)
{
  char v2; // si
  RPC_STATUS v3; // eax
  __int64 v4; // rdi
  RPC_WSTR String[2]; // [rsp+30h] [rbp-10h] BYREF
  RPC_BINDING_VECTOR *BindingVector; // [rsp+78h] [rbp+38h] BYREF
  RPC_WSTR StringBinding; // [rsp+80h] [rbp+40h] BYREF
  RPC_WSTR Protseq; // [rsp+88h] [rbp+48h] BYREF

  BindingVector = 0LL;
  v2 = 0;
  v3 = RpcServerInqBindings(&BindingVector);
  if ( !v3 || v3 == 1718 )
  {
    if ( v3 != 1718 )
    {
      v4 = 0LL;
      if ( !BindingVector->Count )
        goto LABEL_15;
      while ( 1 )
      {
        if ( !RpcBindingToStringBindingW(BindingVector->BindingH[v4], &StringBinding) )
        {
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_18016D4B0, StringBinding);
          }
          if ( !RpcStringBindingParseW(StringBinding, 0LL, &Protseq, 0LL, String, 0LL) )
          {
            if ( !(unsigned int)o__wcsicmp(Protseq, L"ncalrpc") )
            {
              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
                && *((_BYTE *)off_18019C348 + 25) >= 4u )
              {
                sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 11LL, &unk_18016D4B0);
              }
              if ( !(unsigned int)o__wcsicmp(String[0], a1) )
              {
                if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                  && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
                  && *((_BYTE *)off_18019C348 + 25) >= 4u )
                {
                  sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 12LL, &unk_18016D4B0, a1);
                }
                v2 = 1;
                RpcStringFreeW(&Protseq);
                RpcStringFreeW(&StringBinding);
                RpcStringFreeW(String);
                goto LABEL_15;
              }
            }
            RpcStringFreeW(&Protseq);
            RpcStringFreeW(String);
          }
          RpcStringFreeW(&StringBinding);
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= BindingVector->Count )
          goto LABEL_15;
      }
    }
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 13LL, &unk_18016D4B0, a1);
    }
LABEL_15:
    if ( BindingVector )
      RpcBindingVectorFree(&BindingVector);
  }
  return v2;
}
