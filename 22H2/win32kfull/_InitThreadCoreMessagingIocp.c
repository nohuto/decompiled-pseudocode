/*
 * XREFs of _InitThreadCoreMessagingIocp @ 0x1C011E320
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall InitThreadCoreMessagingIocp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]
  __int128 v15; // [rsp+50h] [rbp-18h]

  v3 = 0LL;
  v10[1] = 0;
  v14 = 0;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    v8 = 5LL;
LABEL_9:
    UserSetLastError(v8, a2, a3);
    return v3;
  }
  if ( *(_QWORD *)(gptiCurrent + 1464LL) )
  {
    v8 = 1247LL;
    goto LABEL_9;
  }
  v10[0] = 48;
  v11 = 0LL;
  v13 = 512;
  v12 = 0LL;
  v15 = 0LL;
  if ( (int)ZwAllocateReserveObject(gptiCurrent + 1456LL, v10, 1LL) < 0 )
  {
    UserSetLastError(14LL, v5, v6);
    *(_QWORD *)(gptiCurrent + 1456LL) = 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(gptiCurrent + 1432LL);
    if ( v3 )
    {
      v9[0] = gptiCurrent + 1464LL;
      v9[1] = a1;
      HMAssignmentLock(v9);
    }
  }
  return v3;
}
