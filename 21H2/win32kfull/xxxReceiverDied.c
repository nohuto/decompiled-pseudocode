/*
 * XREFs of xxxReceiverDied @ 0x1C00F7FC0
 * Callers:
 *     SendMsgCleanup @ 0x1C00F7EF0 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C0105CE0 (SuspendThreadQueue.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C00AC18C (UnlinkSendListSms.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h]
  _DWORD v19[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-30h]
  __int64 v22; // [rsp+80h] [rbp-28h]
  __int128 v23; // [rsp+88h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v3 = *(_DWORD *)(a1 + 84) | 2;
  *(_DWORD *)(a1 + 84) = v3;
  if ( (*(_DWORD *)(v1 + 488) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 84) = v3 & 0xFFFFBFFF;
  }
  else
  {
    if ( (v3 & 0x8010) == 0 )
    {
      --*(_DWORD *)(v1 + 536);
      v8 = (_QWORD *)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v9 + 8) != a1 + 16 || (v10 = *(_QWORD **)(a1 + 24), (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = 0LL;
    }
    if ( *(_QWORD *)(v1 + 520) == v1 + 520 )
    {
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 448) + 8LL), 0xFFFFFFBF);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 448) + 4LL), 0xFFFFFFBF);
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v5 & 1) != 0 )
    {
      v7 = v5 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      v7 = v5 | 0x8001;
    }
    *(_DWORD *)(a1 + 84) = v7;
    SetWakeBit(result, 0x200u);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    LOWORD(v6) = *(_DWORD *)(a1 + 84);
    if ( (v5 & 4) == 0 )
    {
      result = v5 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v19[1] = 0;
        v11 = v5 | 1;
        v18 = 0LL;
        *(_DWORD *)(a1 + 84) = v11;
        v12 = 33;
        if ( (v11 & 0x400) != 0 )
          v12 = 289;
        v22 = 0LL;
        v13 = *(_QWORD *)(a1 + 112);
        v19[0] = v12;
        v20 = *(_QWORD *)(a1 + 48);
        v21 = *(_QWORD *)(a1 + 56);
        v17 = 0LL;
        v23 = 0LL;
        ThreadLock(v13, (__int64 *)&v17);
        xxxInterSendMsgEx(
          *(struct tagWND **)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(struct tagTHREADINFO **)(a1 + 64),
          (__int64)v19,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1(v15, v14, v16);
        v6 = *(_DWORD *)(a1 + 84);
      }
    }
    if ( (v6 & 0x4000) == 0 )
      return UnlinkSendListSms((__int64 *)a1);
  }
  return result;
}
