/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x1C002FAC4
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C002F970 (OSNotifyCreateThermalZone.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C001BA9C (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001DBF4 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(volatile signed __int32 *a1, __int64 a2, struct _KEVENT **a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  struct _KEVENT *v6; // rbx
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v8; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdi
  void *v11; // rax
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *v13; // rdi
  const char *v14; // rdx
  const char *v15; // rcx
  void *v16; // rcx
  _LIST_ENTRY *v17; // rcx

  result = ACPIBuildDeviceExtension(a1, RootDeviceExtension, a3);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *a3;
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)&v6->Header.WaitListHead, 0x8300000uLL);
      PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x150uLL, 0x54706341u);
      v6[8].Header.WaitListHead.Flink = PoolWithTag;
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x150uLL);
        v8[11].Blink = v8 + 11;
        v8[11].Flink = v8 + 11;
        KeInitializeEvent((PRKEVENT)&v8[15].Blink, NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)&v8[17].Blink, NotificationEvent, 1u);
        Flink = v6->Header.WaitListHead.Flink;
        Blink = (_LIST_ENTRY *)&unk_1C00701BA;
        v11 = &unk_1C00701BA;
        if ( ((unsigned __int64)Flink & 0x200000000000LL) != 0 )
        {
          Blink = v6[23].Header.WaitListHead.Blink;
          if ( ((unsigned __int64)Flink & 0x400000000000LL) != 0 )
            v11 = *(void **)&v6[24].Header.Lock;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x59u,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            v5,
            (char)v6,
            (__int64)Blink,
            (__int64)v11);
      }
      else
      {
        v12 = v6->Header.WaitListHead.Flink;
        v13 = (_LIST_ENTRY *)&unk_1C00701BA;
        v14 = (const char *)&unk_1C00701BA;
        v15 = (const char *)&unk_1C00701BA;
        if ( ((unsigned __int64)v12 & 0x200000000000LL) != 0 )
        {
          v14 = (const char *)v6[23].Header.WaitListHead.Blink;
          if ( ((unsigned __int64)v12 & 0x400000000000LL) != 0 )
            v15 = *(const char **)&v6[24].Header.Lock;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x57u,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            80,
            (char)v6,
            v14,
            v15);
          v12 = v6->Header.WaitListHead.Flink;
        }
        v5 = -1073741670;
        v16 = &unk_1C00701BA;
        if ( ((unsigned __int64)v12 & 0x200000000000LL) != 0 )
        {
          v13 = v6[23].Header.WaitListHead.Blink;
          if ( ((unsigned __int64)v12 & 0x400000000000LL) != 0 )
            v16 = *(void **)&v6[24].Header.Lock;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x58u,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            154,
            (char)v6,
            (__int64)v13,
            (__int64)v16);
        v17 = v6[8].Header.WaitListHead.Flink;
        if ( v17 )
        {
          ExFreePoolWithTag(v17, 0);
          v6[8].Header.WaitListHead.Flink = 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&v6->Header.WaitListHead, 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
