/*
 * XREFs of xxxReceiverDied @ 0x1C00DAA6C
 * Callers:
 *     zzzCancelJournalling @ 0x1C00292F8 (zzzCancelJournalling.c)
 *     SendMsgCleanup @ 0x1C00DA140 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C0117410 (SuspendThreadQueue.c)
 * Callees:
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C006A290 (UnlinkSendListSms.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  int v6; // ecx
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  _QWORD v18[3]; // [rsp+50h] [rbp-58h] BYREF
  _DWORD v19[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-30h]
  __int64 v22; // [rsp+80h] [rbp-28h]
  __int128 v23; // [rsp+88h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = *(_DWORD *)(a1 + 84) | 2;
  *(_DWORD *)(a1 + 84) = v6;
  if ( (*(_DWORD *)(v4 + 488) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 84) = v6 & 0xFFFFBFFF;
  }
  else
  {
    if ( (v6 & 0x8010) == 0 )
    {
      --*(_DWORD *)(v4 + 536);
      v10 = (_QWORD *)(a1 + 16);
      a3 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a3 + 8) != a1 + 16 || (v11 = *(__int64 **)(a1 + 24), (_QWORD *)*v11 != v10) )
        __fastfail(3u);
      *v11 = a3;
      *(_QWORD *)(a3 + 8) = v11;
      *v10 = 0LL;
    }
    if ( *(_QWORD *)(v4 + 520) == v4 + 520 )
    {
      *(_WORD *)(*(_QWORD *)(v4 + 448) + 6LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)(v4 + 448) + 4LL) &= ~0x40u;
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v8 & 1) != 0 )
    {
      v17 = v8 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      v17 = v8 | 0x8001;
    }
    *(_DWORD *)(a1 + 84) = v17;
    SetWakeBit(result, 0x200u);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    v9 = v8;
    if ( (v8 & 4) == 0 )
    {
      result = v8 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v18[2] = 0LL;
        v12 = v8 | 1;
        v19[1] = 0;
        v13 = 33;
        v14 = *(_QWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 84) = v12;
        if ( (v12 & 0x400) != 0 )
          v13 = 289;
        v22 = 0LL;
        v19[0] = v13;
        v20 = *(_QWORD *)(a1 + 48);
        v21 = *(_QWORD *)(a1 + 56);
        v23 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v18;
        v18[1] = v14;
        if ( v14 )
          HMLockObject(v14);
        xxxInterSendMsgEx(
          *(_QWORD *)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(_QWORD *)(a1 + 64),
          v19,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1(v16);
        v9 = *(unsigned int *)(a1 + 84);
      }
    }
    if ( (v9 & 0x4000) == 0 )
      return UnlinkSendListSms((__int64 *)a1, v9, a3, a4);
  }
  return result;
}
