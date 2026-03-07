__int64 __fastcall PnpDiagnosticTraceDriverFullInfo(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3,
        _WORD *a4,
        char a5)
{
  unsigned __int16 v6; // ax
  __int64 *v7; // rax
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  __int16 v11; // [rsp+20h] [rbp-31h] BYREF
  unsigned __int16 v12; // [rsp+24h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  __int64 v14; // [rsp+40h] [rbp-11h]
  int v15; // [rsp+48h] [rbp-9h]
  int v16; // [rsp+4Ch] [rbp-5h]
  int *v17; // [rsp+50h] [rbp-1h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  __int16 *v19; // [rsp+60h] [rbp+Fh]
  __int64 v20; // [rsp+68h] [rbp+17h]
  __int64 v21; // [rsp+70h] [rbp+1Fh]
  int v22; // [rsp+78h] [rbp+27h]
  int v23; // [rsp+7Ch] [rbp+2Bh]
  char *v24; // [rsp+80h] [rbp+2Fh]
  __int64 v25; // [rsp+88h] [rbp+37h]
  int v26; // [rsp+C0h] [rbp+6Fh] BYREF

  v26 = a3;
  *(_QWORD *)&UserData.Size = 2LL;
  v16 = 0;
  v6 = *a2;
  v15 = *a2;
  v11 = v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v11;
  v14 = *((_QWORD *)a2 + 1);
  v17 = &v26;
  v7 = (__int64 *)(a4 + 4);
  v18 = 4LL;
  if ( a4 && *v7 )
    v8 = *a4 >> 1;
  else
    v8 = 0;
  v12 = v8;
  v19 = (__int16 *)&v12;
  v20 = 2LL;
  if ( a4 )
    v9 = *v7;
  else
    v9 = 0LL;
  v21 = v9;
  v22 = 2 * v8;
  v23 = 0;
  v24 = &a5;
  v25 = 4LL;
  return PnpDiagnosticTrace(EventDescriptor, 6u, &UserData);
}
