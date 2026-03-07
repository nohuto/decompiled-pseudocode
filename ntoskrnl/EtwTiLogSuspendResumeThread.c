void __fastcall EtwTiLogSuspendResumeThread(int a1, __int64 a2, __int64 a3, char a4)
{
  REGHANDLE v7; // rdi
  __int64 v8; // r12
  const EVENT_DESCRIPTOR *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  unsigned __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( a1 >= 0 )
  {
    v21 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      v7 = EtwThreatIntProvRegHandle;
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x300000uLL) )
      {
        v8 = *(_QWORD *)(a2 + 544);
        v9 = (const EVENT_DESCRIPTOR *)THREATINT_SUSPEND_THREAD;
        if ( !a4 )
          v9 = &THREATINT_RESUME_THREAD;
        if ( EtwEventEnabled(v7, v9) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v21;
          UserData.Size = 4;
          v10 = EtwpTiFillProcessIdentity(v20, v8, &v17);
          v11 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v10 + 1)), a2);
          v13 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v11 + v12), *(_QWORD *)(a3 + 544), &v18);
          v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v13 + v14)), a3);
          EtwWrite(EtwThreatIntProvRegHandle, v9, 0LL, v15 + v16, &UserData);
        }
      }
    }
  }
}
