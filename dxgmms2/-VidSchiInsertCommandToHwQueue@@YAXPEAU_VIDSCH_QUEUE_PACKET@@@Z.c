/*
 * XREFs of ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CEE2
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001DC60 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001D260 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C001D4C6 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiInsertCommandToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r8
  bool v11; // bl
  __int64 *v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-20h]
  char v16; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  v16 = 0;
  v15 = &v14;
  v14 = (__int64)&v14;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 724));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2884));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 1580));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 1584));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 240));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 148));
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 6;
  WdLogSingleEntry2(4LL, a1, v1);
  v7 = (_QWORD *)(v1 + 160);
  v8 = *(_QWORD **)(v1 + 168);
  v9 = (_QWORD *)((char *)a1 + 32);
  if ( *v8 != v1 + 160 )
    goto LABEL_13;
  *v9 = v7;
  *((_QWORD *)a1 + 5) = v8;
  *v8 = v9;
  *(_QWORD *)(v1 + 168) = v9;
  v10 = *(_QWORD **)(v1 + 208);
  if ( v10 != v7 )
  {
    WdLogSingleEntry4(4LL, v1, v10, a1, *((int *)a1 + 12));
    goto LABEL_12;
  }
  v11 = !VidSchiPacketBlockedOnWaitCondition(a1);
  WdLogSingleEntry3(4LL, v1, v9, v11);
  *(_QWORD *)(v1 + 208) = v9;
  if ( v11 )
  {
    VidSchiSetHwQueueState(v1, 1LL);
    v12 = (__int64 *)(v1 + 176);
    if ( *v12 )
      goto LABEL_12;
    v13 = v15;
    if ( (__int64 *)*v15 == &v14 )
    {
      v12[1] = (__int64)v15;
      *v12 = (__int64)&v14;
      *v13 = (__int64)v12;
      v15 = v12;
      v16 = 0;
      goto LABEL_12;
    }
LABEL_13:
    __fastfail(3u);
  }
  if ( (_QWORD *)*v7 == v9 )
    VidSchiSetHwQueueState(v1, 2LL);
LABEL_12:
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v14);
}
