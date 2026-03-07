void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  _DWORD *v3; // rdi
  int v4; // esi
  REGHANDLE v5; // r14
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v7; // al
  REGHANDLE v8; // rsi
  _DWORD *v9; // rax
  bool v10; // si
  int v12; // [rsp+30h] [rbp-49h] BYREF
  __int64 v13; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-31h] BYREF
  char *v16; // [rsp+58h] [rbp-21h]
  int v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+64h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-9h] BYREF
  char *v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+8Ch] [rbp+13h]
  int *v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+9Ch] [rbp+23h]
  _DWORD *v26; // [rsp+A0h] [rbp+27h]
  int v27; // [rsp+A8h] [rbp+2Fh]
  int v28; // [rsp+ACh] [rbp+33h]

  if ( a2 )
  {
    if ( a1 )
    {
      a1[9] = a2;
      if ( !a1[3] )
      {
        a1[3] = KeGetCurrentThread();
        do
        {
          v3 = (_DWORD *)a1[9];
          ++*v3;
          ExReleaseFastMutex(&PopSettingLock);
          v4 = v3[1];
          v13 = a1[10];
          v12 = v4;
          if ( PopDiagHandleRegistered )
          {
            v5 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START) )
            {
              UserData.Reserved = 0;
              v22 = 0;
              v25 = 0;
              v28 = 0;
              UserData.Ptr = (ULONGLONG)&v13;
              v24 = 4;
              v20 = (char *)a1 + 36;
              UserData.Size = 8;
              v23 = &v12;
              v26 = v3 + 3;
              v21 = 16;
              v27 = v4;
              EtwWrite(v5, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START, 0LL, 4u, &UserData);
            }
          }
          CurrentIrql = KeGetCurrentIrql();
          ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD))a1[10])(
            (__int64)a1 + 52,
            v3 + 3,
            (unsigned int)v3[1],
            a1[11]);
          v7 = KeGetCurrentIrql();
          if ( v7 != CurrentIrql )
            KeBugCheckEx(0xA0u, 0x900uLL, a1[10], CurrentIrql, v7);
          v14 = a1[10];
          if ( PopDiagHandleRegistered )
          {
            v8 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP) )
            {
              v15.Reserved = 0;
              v18 = 0;
              v15.Ptr = (ULONGLONG)&v14;
              v15.Size = 8;
              v16 = (char *)a1 + 36;
              v17 = 16;
              EtwWrite(v8, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP, 0LL, 2u, &v15);
            }
          }
          if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
            __fastfail(0x20u);
          ExAcquireFastMutex(&PopSettingLock);
          v9 = (_DWORD *)a1[9];
          v10 = v9 && v3 != v9;
          if ( (*v3)-- == 1 )
            ExFreePoolWithTag(v3, 0x74655350u);
        }
        while ( v10 );
        a1[3] = 0LL;
      }
    }
  }
}
