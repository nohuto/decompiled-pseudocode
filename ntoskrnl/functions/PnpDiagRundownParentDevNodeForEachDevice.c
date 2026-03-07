__int64 __fastcall PnpDiagRundownParentDevNodeForEachDevice(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx
  int v4; // [rsp+30h] [rbp-9h] BYREF
  __int64 v5; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  int *v9; // [rsp+60h] [rbp+27h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]
  __int64 v14; // [rsp+A0h] [rbp+67h] BYREF

  v14 = a1;
  *(_QWORD *)&UserData.Size = 8LL;
  UserData.Ptr = (ULONGLONG)&v14;
  v5 = *(_QWORD *)(a1 + 16);
  v7 = &v5;
  v8 = 8LL;
  v4 = *(unsigned __int16 *)(a1 + 40) >> 1;
  v9 = &v4;
  v10 = 4LL;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(unsigned __int16 *)(a1 + 40);
  v11 = v1;
  v12 = v2;
  v13 = 0;
  EtwWrite(PnpRundownEtwHandle, &PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN, 0LL, 4u, &UserData);
  return 0LL;
}
