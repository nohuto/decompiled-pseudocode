NTSTATUS __fastcall CiLogThreadJoin(__int64 a1)
{
  HANDLE ThreadId; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  char v6; // cl
  char v7; // cl
  char v9; // [rsp+30h] [rbp-49h] BYREF
  char v10; // [rsp+31h] [rbp-48h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+50h] [rbp-29h]
  __int64 v14; // [rsp+58h] [rbp-21h]
  __int64 v15; // [rsp+60h] [rbp-19h]
  __int64 v16; // [rsp+68h] [rbp-11h]
  __int64 v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  __int64 v22; // [rsp+90h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+1Fh]
  char *v24; // [rsp+A0h] [rbp+27h]
  __int64 v25; // [rsp+A8h] [rbp+2Fh]
  char *v26; // [rsp+B0h] [rbp+37h]
  __int64 v27; // [rsp+B8h] [rbp+3Fh]

  ThreadId = PsGetThreadId(*(PETHREAD *)(a1 + 96));
  v3 = *(_QWORD *)(a1 + 72);
  v11 = ThreadId;
  UserData.Ptr = (ULONGLONG)&v11;
  v13 = a1 + 104;
  v15 = a1 + 105;
  v17 = a1 + 106;
  *(_QWORD *)&UserData.Size = 4LL;
  v14 = 1LL;
  v16 = 1LL;
  v18 = 1LL;
  v4 = -1LL;
  while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 24LL) + 2 * v4++ + 2) != 0 )
    ;
  v19 = *(_QWORD *)(*(_QWORD *)(v3 + 136) + 24LL);
  v20 = 2 * v4 + 2;
  v21 = 0;
  v22 = v3 + 144;
  v23 = 4LL;
  v6 = (*(_BYTE *)(*(_QWORD *)(v3 + 136) + 3LL) >> 4) & 7;
  v24 = &v9;
  v9 = v6;
  v25 = 1LL;
  v7 = *(_BYTE *)(*(_QWORD *)(v3 + 136) + 3LL) & 0x1F;
  v26 = &v10;
  v10 = v7;
  v27 = 1LL;
  return EtwWrite(RegHandle, &CiThreadJoinEvent, 0LL, 8u, &UserData);
}
