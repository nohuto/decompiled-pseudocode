/*
 * XREFs of ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01E50D0
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180D4C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02BD19C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C030DA44 (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C001CA98 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableClockCalibration(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
  {
    v5 = v4 + 1168;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    v6 = *((_BYTE *)this + 1026);
    if ( a2 )
    {
      if ( !v6
        && (qword_1C013A870 & 0x461C8ED7) != 0
        && (qword_1C013A878 & 0xFFFFFFFFB9E37128uLL) == 0
        && (qword_1C013A870 & 0x4000) != 0 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)(*((_QWORD *)this + 2) + 104LL), 0);
        DXGPUSHLOCK::AcquireShared(v9);
        v7 = *((_QWORD *)this + 2);
        v10 = 1;
        if ( !*(_DWORD *)(v7 + 160) )
        {
          KeSetTimerEx(
            (PKTIMER)((char *)this + 1040),
            *(LARGE_INTEGER *)((char *)this + 1032),
            50,
            (PKDPC)((char *)this + 1104));
          *((_BYTE *)this + 1026) = 1;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
      }
    }
    else if ( v6 )
    {
      KeCancelTimer((PKTIMER)((char *)this + 1040));
      KeFlushQueuedDpcs();
      *((_BYTE *)this + 1026) = 0;
    }
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
