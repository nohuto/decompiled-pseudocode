char __fastcall PopDirectedDripsDiagTraceDfxPowerStateFailure(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // rax
  int v7; // r8d
  unsigned int v9; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  unsigned int *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  __int64 v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v21; // [rsp+B8h] [rbp+67h] BYREF

  v1 = &retaddr;
  v21 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_FX_POWER_STATE_FAILURE);
    if ( (_BYTE)v1 )
    {
      v4 = *(_QWORD *)(a1 + 48);
      v5 = *(unsigned __int16 *)(v4 + 40);
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v9 = v5 >> 1;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 8;
      v12 = 8;
      v11 = a1 + 48;
      v14 = &v9;
      v15 = 4;
      v6 = *(_QWORD *)(v4 + 48);
      v7 = *(unsigned __int16 *)(v4 + 40);
      v19 = 0;
      v17 = v6;
      v18 = v7;
      LOBYTE(v1) = EtwWriteEx(v3, &POP_ETW_EVENT_DIRECTED_FX_POWER_STATE_FAILURE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v1;
}
