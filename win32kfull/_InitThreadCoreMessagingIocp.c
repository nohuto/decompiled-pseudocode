__int64 __fastcall InitThreadCoreMessagingIocp(__int64 a1)
{
  __int64 v1; // rdi
  int v4; // ecx
  _QWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v1 = 0LL;
  v6[1] = 0;
  v10 = 0;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    v4 = 5;
LABEL_9:
    UserSetLastError(v4);
    return v1;
  }
  if ( *(_QWORD *)(gptiCurrent + 1504LL) )
  {
    v4 = 1247;
    goto LABEL_9;
  }
  v6[0] = 48;
  v7 = 0LL;
  v9 = 512;
  v8 = 0LL;
  v11 = 0LL;
  if ( (int)ZwAllocateReserveObject(gptiCurrent + 1496LL, v6, 1LL) < 0 )
  {
    UserSetLastError(14);
    *(_QWORD *)(gptiCurrent + 1496LL) = 0LL;
  }
  else
  {
    v1 = *(_QWORD *)(gptiCurrent + 1472LL);
    if ( v1 )
    {
      v5[0] = gptiCurrent + 1504LL;
      v5[1] = a1;
      HMAssignmentLock(v5, 0LL);
    }
  }
  return v1;
}
