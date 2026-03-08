/*
 * XREFs of PnprLogFailureEvent @ 0x1409637A4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnprLogFailureEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  ULONG v4; // ecx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  _WORD v10[2]; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  int v12; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  _WORD *v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  _WORD *v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  int *v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  int *v23; // [rsp+90h] [rbp+27h]
  __int64 v24; // [rsp+98h] [rbp+2Fh]
  int *v25; // [rsp+A0h] [rbp+37h]
  __int64 v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+E0h] [rbp+77h] BYREF

  v27 = a3;
  v10[0] = 0;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = *(unsigned __int16 *)(v3 + 40);
  UserData.Ptr = *(_QWORD *)(v3 + 48);
  v14 = v10;
  UserData.Size = v4;
  UserData.Reserved = 0;
  v15 = 2LL;
  if ( a2 )
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned __int16 *)(v5 + 40);
  v16 = *(_QWORD *)(v5 + 48);
  v19 = v10;
  v17 = v6;
  v18 = 0;
  v20 = 2LL;
  if ( PnprContext )
  {
    v7 = *(_DWORD *)(PnprContext + 33276);
    v8 = *(_DWORD *)(PnprContext + 33272);
  }
  else
  {
    v7 = 1;
    v8 = 0;
  }
  v11 = v8;
  v12 = v7;
  v21 = &v27;
  v23 = &v11;
  v25 = &v12;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  return EtwWrite(PnpEtwHandle, &PNP_EVT_DP_REPLACE_FAILURE, 0LL, 7u, &UserData);
}
