__int64 __fastcall PsSetLoadImageNotifyRoutineEx(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  if ( (a2 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225712LL;
  v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( v3 )
  {
    v4 = 0LL;
    while ( !ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v4, v3, 0LL) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 0x40 )
      {
        ExFreePoolWithTag(v3, 0);
        goto LABEL_14;
      }
    }
    _InterlockedIncrement(&PspLoadImageNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 1) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 0);
    v5 = 0;
  }
  else
  {
LABEL_14:
    v5 = -1073741670;
  }
  v7 = v5;
  v8 = a1;
  if ( EtwApiCallsProvRegHandle )
  {
    UserData.Reserved = 0;
    v12 = 0;
    UserData.Ptr = (ULONGLONG)&v8;
    UserData.Size = 8;
    v10 = &v7;
    v11 = 4;
    EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_PSSETLOADIMAGENOTIFYROUTINE, 0LL, 2u, &UserData);
  }
  return v5;
}
