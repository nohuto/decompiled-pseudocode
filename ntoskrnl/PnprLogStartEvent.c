/*
 * XREFs of PnprLogStartEvent @ 0x1409638D0
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnprLogStartEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG v3; // ecx
  __int64 v4; // rax
  int v5; // ecx
  _WORD v7[8]; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  _WORD *v9; // [rsp+50h] [rbp+17h]
  __int64 v10; // [rsp+58h] [rbp+1Fh]
  __int64 v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  _WORD *v14; // [rsp+70h] [rbp+37h]
  __int64 v15; // [rsp+78h] [rbp+3Fh]

  v7[0] = 0;
  if ( a1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v2 = 0LL;
  v3 = *(unsigned __int16 *)(v2 + 40);
  UserData.Ptr = *(_QWORD *)(v2 + 48);
  v9 = v7;
  UserData.Size = v3;
  UserData.Reserved = 0;
  v10 = 2LL;
  if ( a2 )
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v4 = 0LL;
  v5 = *(unsigned __int16 *)(v4 + 40);
  v11 = *(_QWORD *)(v4 + 48);
  v14 = v7;
  v12 = v5;
  v13 = 0;
  v15 = 2LL;
  return EtwWrite(PnpEtwHandle, &PNP_EVT_DP_REPLACE_START, 0LL, 4u, &UserData);
}
