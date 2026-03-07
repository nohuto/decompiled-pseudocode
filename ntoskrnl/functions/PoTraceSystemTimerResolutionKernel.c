char __fastcall PoTraceSystemTimerResolutionKernel(int a1, int a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  v3 = &POP_ETW_EVENT_KERNEL_STRS;
  v4 = &POP_ETW_EVENT_KERNEL_STRS_INTERNAL;
  if ( !a3 )
    v4 = &POP_ETW_EVENT_KERNEL_STRS;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 4;
      v8 = &v12;
      v9 = 4;
      LOBYTE(v3) = EtwWriteEx(v5, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
