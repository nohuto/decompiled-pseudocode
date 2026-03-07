char __fastcall PopDiagTraceFxPerfRequest(__int64 *a1, unsigned int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v12; // [rsp+58h] [rbp+7h]
  int v13; // [rsp+60h] [rbp+Fh]
  int v14; // [rsp+64h] [rbp+13h]
  int *v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  __int64 v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v22 = a2;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING);
    if ( (_BYTE)v3 )
    {
      v8 = *a1;
      v9 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = v9 + 48;
      v12 = v8 + 16;
      UserData.Size = 8;
      v15 = (int *)&v22;
      v3 = (_UNKNOWN **)(16LL * a2);
      v13 = 4;
      v16 = 4;
      if ( (unsigned __int64)v3 <= 0xFFFFFFFF )
      {
        v20 = 0;
        v19 = 16 * a2;
        v18 = a3;
        LOBYTE(v3) = EtwWriteEx(
                       v7,
                       &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       4u,
                       &UserData);
      }
    }
  }
  return (char)v3;
}
