char __fastcall PopDiagTraceStateTransitionFailurePoint(int a1, int a2)
{
  _UNKNOWN **v2; // rax
  struct _KTHREAD *CurrentThread; // rbx
  REGHANDLE v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r10
  int v11; // [rsp+38h] [rbp-79h] BYREF
  int v12; // [rsp+3Ch] [rbp-75h] BYREF
  int v13; // [rsp+40h] [rbp-71h] BYREF
  struct _KTHREAD *v14; // [rsp+48h] [rbp-69h] BYREF
  struct _KTHREAD *v15; // [rsp+50h] [rbp-61h] BYREF
  __int64 v16; // [rsp+58h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-51h] BYREF
  int *v18; // [rsp+70h] [rbp-41h]
  int v19; // [rsp+78h] [rbp-39h]
  int v20; // [rsp+7Ch] [rbp-35h]
  int *v21; // [rsp+80h] [rbp-31h]
  int v22; // [rsp+88h] [rbp-29h]
  int v23; // [rsp+8Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+98h] [rbp-19h] BYREF
  struct _KTHREAD **v25; // [rsp+B8h] [rbp+7h]
  int v26; // [rsp+C0h] [rbp+Fh]
  int v27; // [rsp+C4h] [rbp+13h]
  int *v28; // [rsp+C8h] [rbp+17h]
  int v29; // [rsp+D0h] [rbp+1Fh]
  int v30; // [rsp+D4h] [rbp+23h]
  int *v31; // [rsp+D8h] [rbp+27h]
  int v32; // [rsp+E0h] [rbp+2Fh]
  int v33; // [rsp+E4h] [rbp+33h]
  __int64 *v34; // [rsp+E8h] [rbp+37h]
  int v35; // [rsp+F0h] [rbp+3Fh]
  int v36; // [rsp+F4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF
  int v38; // [rsp+118h] [rbp+67h] BYREF

  v2 = &retaddr;
  v38 = a1;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  v14 = CurrentThread;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STATE_TRANSITION_FAILURE);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      v11 = a2;
      v18 = &v38;
      UserData.Size = 8;
      v21 = &v11;
      v19 = 4;
      v22 = 4;
      LOBYTE(v2) = EtwWrite(v5, &POP_ETW_EVENT_STATE_TRANSITION_FAILURE, 0LL, 3u, &UserData);
      CurrentThread = v14;
    }
  }
  if ( dword_140C03928 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL);
    if ( (_BYTE)v2 )
    {
      if ( v7 > 5 )
      {
        LOBYTE(v2) = tlgKeywordOn(v8, v6);
        if ( (_BYTE)v2 )
        {
          v27 = 0;
          v30 = 0;
          v33 = 0;
          v36 = 0;
          v25 = &v15;
          v12 = v38;
          v28 = &v12;
          v31 = &v13;
          v34 = &v16;
          v15 = CurrentThread;
          v26 = 8;
          v29 = 4;
          v13 = a2;
          v32 = 4;
          v16 = 0x1000000LL;
          v35 = 8;
          LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(v9, (unsigned __int8 *)&dword_14002DA34, 0LL, 0LL, 6u, &v24);
        }
      }
    }
  }
  return (char)v2;
}
