__int64 __fastcall NtQueryBootOptions(_DWORD *Address, _DWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v7; // ebx
  struct _KTHREAD *v8; // rax
  unsigned int EnvironmentVariable; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-44h] BYREF
  int v15; // [rsp+3Ch] [rbp-3Ch] BYREF
  int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-34h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  KPROCESSOR_MODE PreviousMode; // [rsp+90h] [rbp+18h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v13 = 0;
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v4 = Address != 0LL ? *a2 : 0;
    v17 = v4;
    if ( v4 )
      ProbeForWrite(Address, v4, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v4 = Address != 0LL ? *a2 : 0;
    v17 = v4;
  }
  if ( v4 >= 0x16 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v13 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (const size_t *)L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)&v14,
                            (int *)&v13,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v14 = -2;
LABEL_21:
      v13 = 4;
      v10 = IoGetEnvironmentVariableEx(
              (const size_t *)L"BootCurrent",
              (__int64)&EfiBootVariablesGuid,
              (__int64)&v15,
              (int *)&v13,
              0LL);
      v7 = v10;
      if ( v10 == -1073741789 || v10 == -1073741568 )
      {
        v15 = -2;
LABEL_26:
        v13 = 2;
        v11 = IoGetEnvironmentVariableEx(
                (const size_t *)L"BootNext",
                (__int64)&EfiBootVariablesGuid,
                (__int64)&v16,
                (int *)&v13,
                0LL);
        v7 = v11;
        if ( v11 == -1073741568 || v11 == -1073741789 )
        {
          v16 = -2;
          v7 = 0;
        }
        else if ( !v11 && v13 > 2 )
        {
          v16 = (unsigned __int16)v16;
        }
        goto LABEL_28;
      }
      if ( !v10 )
      {
        if ( v13 > 2 )
          v15 = (unsigned __int16)v15;
        goto LABEL_26;
      }
LABEL_28:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_12;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_28;
      if ( v13 <= 2 )
      {
LABEL_20:
        if ( v14 != 0xFFFF )
          goto LABEL_21;
        goto LABEL_35;
      }
      v12 = v14;
      if ( v14 != -1 )
      {
        if ( v14 > 0xFFFE )
          v12 = 65534;
        v14 = v12;
        goto LABEL_20;
      }
    }
LABEL_35:
    v14 = -1;
    goto LABEL_21;
  }
  v7 = -1073741789;
LABEL_12:
  if ( !v7 )
  {
    if ( Address )
    {
      *Address = 1;
      Address[1] = 22;
      Address[2] = v14;
      Address[3] = v15;
      Address[4] = v16;
      *((_WORD *)Address + 10) = 0;
    }
  }
  *a2 = 22;
  return v7;
}
