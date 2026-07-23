/*
 * XREFs of TtmiSetDisplayPowerRequest @ 0x1408FF398
 * Callers:
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140901190 (TtmpDispatchSetDisplayPowerRequest.c)
 * Callees:
 *     TtmiGetTerminalById @ 0x1408FD93C (TtmiGetTerminalById.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408FDC88 (TtmiSetPendingOnOffRequest.c)
 *     TtmiScheduleSessionWorker @ 0x1408FF2A0 (TtmiScheduleSessionWorker.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408FFACC (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x140902A24 (TtmiLogDisplayPowerRequestSet.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall TtmiSetDisplayPowerRequest(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 i; // r10
  __int64 *v12; // r10
  unsigned int v13; // ecx
  bool v14; // r14
  _QWORD *PoolWithTag; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r11
  __int64 j; // r10
  _QWORD *v22; // r10
  __int64 v24; // rdx
  _QWORD *v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v29[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  v28 = 0LL;
  v29[0] = 0LL;
  if ( a4 )
  {
    if ( !(unsigned __int8)TtmpFindPowerRequestEntryById(a1, a3, &v28) )
    {
      v9 = 818LL;
LABEL_28:
      v4 = -1073741275;
      goto LABEL_29;
    }
    v10 = v28 + 48;
    for ( i = *(_QWORD *)(v28 + 48); i != v10; i = *v12 )
    {
      if ( (int)TtmiGetTerminalById(v29, a1, *(_DWORD *)(i - 8)) >= 0 && *(_DWORD *)(v29[0] + 28LL) == a2[7] )
      {
        v4 = -1073741270;
        v9 = 861LL;
        goto LABEL_29;
      }
    }
    if ( a2[8] == -1 )
    {
      v4 = -1073741675;
      v9 = 874LL;
      goto LABEL_29;
    }
    v13 = a2[10];
    v14 = v13 - 2 <= 1;
    if ( v13 == 2 )
      TtmiSetPendingOnOffRequest(a1, a2, 1, 8u, 0x54416455u);
    if ( !v14 )
    {
      v4 = -1073741637;
      goto LABEL_31;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x52507454u);
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      v16 = 0xFFFFFFFFLL;
      v17 = 3221225626LL;
      v9 = 892LL;
      goto LABEL_30;
    }
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0LL;
    *(_DWORD *)PoolWithTag = a2[7];
    v18 = PoolWithTag + 1;
    v19 = *(_QWORD **)(v10 + 8);
    if ( *v19 == v10 )
    {
      *v18 = v10;
      v18[1] = v19;
      *v19 = v18;
      *(_QWORD *)(v10 + 8) = v18;
      ++a2[8];
      goto LABEL_31;
    }
    goto LABEL_38;
  }
  if ( !(unsigned __int8)TtmpFindPowerRequestEntryById(a1, a3, &v28) )
  {
    v9 = 937LL;
    goto LABEL_28;
  }
  v20 = v28 + 48;
  for ( j = *(_QWORD *)(v28 + 48); ; j = *v22 )
  {
    if ( j == v20 )
    {
      v9 = 981LL;
      goto LABEL_28;
    }
    if ( (int)TtmiGetTerminalById(v29, a1, *(_DWORD *)(j - 8)) >= 0 && *(_DWORD *)(v29[0] + 28LL) == a2[7] )
      break;
  }
  v24 = *v22;
  if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v25 = (_QWORD *)v22[1], (_QWORD *)*v25 != v22) )
LABEL_38:
    __fastfail(3u);
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  ExFreePoolWithTag(v22 - 1, 0x52507454u);
  v26 = a2[8];
  if ( v26 )
  {
    v27 = v26 - 1;
    a2[8] = v27;
    if ( !v27 )
    {
      a2[9] |= 0x24u;
      TtmiScheduleSessionWorker(a1, 2);
    }
  }
  else
  {
    v4 = -1073741811;
    v9 = 1008LL;
LABEL_29:
    v17 = 0xFFFFFFFFLL;
    v16 = v4;
LABEL_30:
    TtmiLogError("TtmiSetDisplayPowerRequest", v9, v16, v17);
  }
LABEL_31:
  TtmiLogDisplayPowerRequestSet(a2[7], a3, a4, v4);
  return v4;
}
