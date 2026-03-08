/*
 * XREFs of xxxReceiverDied @ 0x1C00949E0
 * Callers:
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     SendMsgCleanup @ 0x1C0094980 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C00DE9B0 (SuspendThreadQueue.c)
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C0094A8C (UnlinkSendListSms.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx
  unsigned int v6; // ecx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h] BYREF
  __int64 v19; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  __int64 v21; // [rsp+80h] [rbp-28h]
  __int128 v22; // [rsp+88h] [rbp-20h]

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
      v7 = (_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v8 + 8) != a1 + 16 || (v9 = *(_QWORD **)(a1 + 24), (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
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
      v6 = v5 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      v6 = v5 | 0x8001;
    }
    *(_DWORD *)(a1 + 84) = v6;
    SetWakeBit(result, 0x200u);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    if ( (v5 & 4) == 0 )
    {
      result = v5 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        HIDWORD(v18) = 0;
        v10 = v5 | 1;
        v17 = 0LL;
        *(_DWORD *)(a1 + 84) = v10;
        v11 = 33;
        if ( (v10 & 0x400) != 0 )
          v11 = 289;
        v21 = 0LL;
        v12 = *(_QWORD *)(a1 + 112);
        LODWORD(v18) = v11;
        v19 = *(_QWORD *)(a1 + 48);
        v20 = *(_QWORD *)(a1 + 56);
        v16 = 0LL;
        v22 = 0LL;
        ThreadLock(v12, &v16);
        xxxInterSendMsgEx(
          *(struct tagWND **)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(struct tagTHREADINFO **)(a1 + 64),
          (__int64)&v18,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = ThreadUnlock1(v14, v13, v15);
      }
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x4000) == 0 )
      return UnlinkSendListSms(a1);
  }
  return result;
}
