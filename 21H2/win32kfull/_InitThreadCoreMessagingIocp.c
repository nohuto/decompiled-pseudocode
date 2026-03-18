/*
 * XREFs of _InitThreadCoreMessagingIocp @ 0x1C010A1D4
 * Callers:
 *     NtUserInitThreadCoreMessagingIocp @ 0x1C010A120 (NtUserInitThreadCoreMessagingIocp.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall InitThreadCoreMessagingIocp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v2 = 0LL;
  v8[1] = 0;
  v12 = 0;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    v6 = 5LL;
LABEL_9:
    UserSetLastError(v6, a2);
    return v2;
  }
  if ( *(_QWORD *)(gptiCurrent + 1464LL) )
  {
    v6 = 1247LL;
    goto LABEL_9;
  }
  v8[0] = 48;
  v9 = 0LL;
  v11 = 512;
  v10 = 0LL;
  v13 = 0LL;
  if ( (int)ZwAllocateReserveObject(gptiCurrent + 1456LL, v8, 1LL) < 0 )
  {
    UserSetLastError(14LL, v4);
    *(_QWORD *)(gptiCurrent + 1456LL) = 0LL;
  }
  else
  {
    v2 = *(_QWORD *)(gptiCurrent + 1432LL);
    if ( v2 )
    {
      v7[0] = gptiCurrent + 1464LL;
      v7[1] = a1;
      HMAssignmentLock(v7, 0LL);
    }
  }
  return v2;
}
