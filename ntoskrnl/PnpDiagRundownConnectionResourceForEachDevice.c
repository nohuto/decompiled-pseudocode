/*
 * XREFs of PnpDiagRundownConnectionResourceForEachDevice @ 0x140954BA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagRundownConnectionResourceForEachDevice(__int64 a1)
{
  _DWORD *v2; // rbx
  __int64 i; // rdi
  __int64 v4; // rsi
  _DWORD *v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+7h]
  int v13; // [rsp+60h] [rbp+Fh]
  int v14; // [rsp+64h] [rbp+13h]
  unsigned int *v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  __int64 v18; // [rsp+78h] [rbp+27h]
  unsigned int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]

  v10 = 0LL;
  v9 = 0;
  v2 = *(_DWORD **)(a1 + 424);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *v2; i = (unsigned int)(i + 1) )
    {
      v4 = 0LL;
      v5 = &v2[9 * i];
      if ( v5[4] )
      {
        do
        {
          if ( LOBYTE(v5[5 * v4 + 5]) == 0x84 )
          {
            HIDWORD(v10) = v5[5 * v4 + 8];
            v6 = v5[5 * v4 + 7];
            v7 = *(unsigned __int16 *)(a1 + 40);
            UserData.Reserved = 0;
            v14 = 0;
            v17 = 0;
            v20 = 0;
            LODWORD(v10) = v6;
            UserData.Ptr = a1 + 32;
            v12 = &v10;
            v9 = v7 >> 1;
            v15 = &v9;
            v18 = *(_QWORD *)(a1 + 48);
            v19 = v7;
            UserData.Size = 8;
            v13 = 8;
            v16 = 4;
            EtwWrite(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource, 0LL, 4u, &UserData);
          }
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < v5[4] );
      }
    }
  }
  return 0LL;
}
