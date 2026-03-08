/*
 * XREFs of PnpDiagnosticTraceAppVeto @ 0x140560644
 * Callers:
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 * Callees:
 *     PnpDiagnosticTrace @ 0x1402B1760 (PnpDiagnosticTrace.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceAppVeto(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int16 v13; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int16 v14; // [rsp+24h] [rbp-65h] BYREF
  unsigned __int16 v15; // [rsp+28h] [rbp-61h] BYREF
  unsigned __int16 v16; // [rsp+2Ch] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-59h] BYREF
  __int16 *v18; // [rsp+40h] [rbp-49h]
  __int64 v19; // [rsp+48h] [rbp-41h]
  __int64 v20; // [rsp+50h] [rbp-39h]
  int v21; // [rsp+58h] [rbp-31h]
  int v22; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int16 *v23; // [rsp+60h] [rbp-29h]
  __int64 v24; // [rsp+68h] [rbp-21h]
  __int64 v25; // [rsp+70h] [rbp-19h]
  int v26; // [rsp+78h] [rbp-11h]
  int v27; // [rsp+7Ch] [rbp-Dh]
  __int16 *v28; // [rsp+80h] [rbp-9h]
  __int64 v29; // [rsp+88h] [rbp-1h]
  __int64 v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+9Ch] [rbp+13h]
  unsigned __int16 *v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh]
  __int64 v35; // [rsp+B0h] [rbp+27h]
  int v36; // [rsp+B8h] [rbp+2Fh]
  int v37; // [rsp+BCh] [rbp+33h]
  int v38; // [rsp+E8h] [rbp+5Fh] BYREF

  v38 = a2;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v38;
  if ( a3 )
    v6 = *(_WORD *)a3 >> 1;
  else
    v6 = 0;
  v13 = v6;
  v18 = (__int16 *)&v13;
  v19 = 2LL;
  if ( a3 )
    v7 = *(_QWORD *)(a3 + 8);
  else
    v7 = 0LL;
  v20 = v7;
  v21 = 2 * v6;
  v14 = *(_WORD *)a4 >> 1;
  v26 = 2 * v14;
  v23 = &v14;
  v8 = *(_QWORD *)(a4 + 8);
  v22 = 0;
  v24 = 2LL;
  v25 = v8;
  v27 = 0;
  if ( a5 )
    v9 = *(_WORD *)a5 >> 1;
  else
    v9 = 0;
  v15 = v9;
  v28 = (__int16 *)&v15;
  v29 = 2LL;
  if ( a5 )
    v10 = *(_QWORD *)(a5 + 8);
  else
    v10 = 0LL;
  v30 = v10;
  v31 = 2 * v9;
  v16 = *(_WORD *)a6 >> 1;
  v33 = &v16;
  v11 = *(_QWORD *)(a6 + 8);
  v36 = 2 * v16;
  v32 = 0;
  v34 = 2LL;
  v35 = v11;
  v37 = 0;
  return PnpDiagnosticTrace(&KMPnPEvt_DeviceEject_Pend, 9u, &UserData);
}
