/*
 * XREFs of PnpDiagRundownInterruptResourceForEachDevice @ 0x140954CF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagRundownInterruptResourceForEachDevice(__int64 a1)
{
  unsigned int *v1; // rbx
  unsigned int i; // edi
  unsigned int v4; // esi
  unsigned int *v5; // r14
  __int16 v7; // [rsp+38h] [rbp-59h] BYREF
  __int16 v8; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-51h] BYREF
  __int64 v10; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  char *v12; // [rsp+68h] [rbp-29h]
  __int64 v13; // [rsp+70h] [rbp-21h]
  __int16 *v14; // [rsp+78h] [rbp-19h]
  __int64 v15; // [rsp+80h] [rbp-11h]
  __int16 *v16; // [rsp+88h] [rbp-9h]
  __int64 v17; // [rsp+90h] [rbp-1h]
  __int64 *v18; // [rsp+98h] [rbp+7h]
  __int64 v19; // [rsp+A0h] [rbp+Fh]
  unsigned int *v20; // [rsp+A8h] [rbp+17h]
  __int64 v21; // [rsp+B0h] [rbp+1Fh]
  __int64 v22; // [rsp+B8h] [rbp+27h]
  unsigned int v23; // [rsp+C0h] [rbp+2Fh]
  int v24; // [rsp+C4h] [rbp+33h]

  v1 = *(unsigned int **)(a1 + 424);
  v10 = 0LL;
  v7 = 0;
  v9 = 0;
  v8 = 0;
  if ( v1 )
  {
    for ( i = 0; i < *v1; ++i )
    {
      v4 = 0;
      v5 = &v1[8 * i + 1 + i];
      if ( v5[3] )
      {
        do
        {
          if ( LOBYTE(v5[5 * v4 + 4]) == 2 )
          {
            v7 = HIWORD(v5[5 * v4 + 5]);
            v8 = v5[5 * v4 + 6];
            v10 = *(_QWORD *)&v5[5 * v4 + 7];
            UserData.Ptr = a1 + 32;
            v14 = &v7;
            v16 = &v8;
            v18 = &v10;
            v12 = (char *)&v5[5 * v4 + 4] + 2;
            v23 = *(unsigned __int16 *)(a1 + 40);
            v9 = v23 >> 1;
            v20 = &v9;
            v22 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)&UserData.Size = 8LL;
            v13 = 2LL;
            v15 = 2LL;
            v17 = 2LL;
            v19 = 8LL;
            v21 = 4LL;
            v24 = 0;
            EtwWrite(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_InterruptResource, 0LL, 7u, &UserData);
          }
          ++v4;
        }
        while ( v4 < v5[3] );
      }
    }
  }
  return 0LL;
}
