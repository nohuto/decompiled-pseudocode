/*
 * XREFs of OSNotifyCreateOperationRegion @ 0x1C003285C
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000D8BC (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C00325E0 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 *     AMLIIterateParentNext @ 0x1C00488A4 (AMLIIterateParentNext.c)
 */

__int64 __fastcall OSNotifyCreateOperationRegion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rax
  __int64 v3; // rdi
  __int16 v4; // ax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 v7; // cl
  unsigned int v8; // eax
  int v9; // ecx
  bool v10; // zf
  _QWORD *Pool2; // rax
  int v12; // edx
  struct _WORK_QUEUE_ITEM *v13; // r8

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  for ( i = AMLIGetParent(a1); ; i = AMLIIterateParentNext(v5) )
  {
    v5 = i;
    if ( !i )
      break;
    v3 = *(_QWORD *)i;
    v4 = *(_WORD *)(*(_QWORD *)i + 66LL);
    if ( v4 != 8 )
    {
      if ( v4 == 6 )
      {
        v6 = *(_QWORD *)(v3 + 104);
        if ( v6 )
        {
          v7 = *(_BYTE *)(v1 + 12);
          v8 = v7 < 0x1Fu ? 1 << v7 : 0x80000000;
          v9 = *(_DWORD *)(v6 + 668);
          if ( (v9 & v8) == 0 )
          {
            v10 = *(_DWORD *)(v6 + 368) == 3;
            *(_DWORD *)(v6 + 668) = v8 | v9;
            if ( v10 && (unsigned __int8)(*(_BYTE *)(v1 + 12) - 8) <= 1u )
            {
              Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1299211073LL);
              if ( Pool2 )
              {
                *Pool2 = 0LL;
                Pool2[2] = OSNotifyCreateOperationRegionWorker;
                Pool2[3] = Pool2;
                ACPIInitReferenceDeviceExtension(v6);
                v13[1].List.Flink = (_LIST_ENTRY *)v6;
                ExQueueWorkItem(v13, DelayedWorkQueue);
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v12) = 2;
                WPP_RECORDER_SF_qD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v12,
                  21,
                  14,
                  (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
                  v6,
                  *(_BYTE *)(v1 + 12));
              }
            }
          }
        }
      }
      AMLIDereferenceHandleEx(v5);
      return 0LL;
    }
  }
  return 0LL;
}
