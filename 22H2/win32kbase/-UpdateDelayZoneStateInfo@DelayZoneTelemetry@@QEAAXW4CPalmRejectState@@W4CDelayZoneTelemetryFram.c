/*
 * XREFs of ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01FBF0C
 * Callers:
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01E5544 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01E6364 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E6564 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01E6F44 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C01FC214 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 */

void __fastcall DelayZoneTelemetry::UpdateDelayZoneStateInfo(
        DelayZoneTelemetry *a1,
        int a2,
        __int64 a3,
        int a4,
        _DWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax

  v5 = *((_DWORD *)a1 + 2);
  v9 = v5 % 0xD5;
  if ( a4 == 4 && *((_DWORD *)a1 + 12 * (((int)v9 - 1) % 0xD5u) + 524) == 3 )
  {
    v10 = v5 - 1;
    if ( !v5 )
      v10 = 0;
    *((_DWORD *)a1 + 2) = v10;
  }
  else
  {
    v11 = 6 * v9;
    *((_DWORD *)a1 + 12 * v9 + 516) = -1;
    *((_DWORD *)a1 + 2 * v11 + 517) = *a5;
    *((_DWORD *)a1 + 2 * v11 + 518) = a5[1];
    if ( qword_1C02962D0 )
      v12 = qword_1C02962D0();
    else
      v12 = 0;
    *((_DWORD *)a1 + 2 * v11 + 519) = v12;
    *((_DWORD *)a1 + 2 * v11 + 525) = a5[2];
    *((_DWORD *)a1 + 2 * v11 + 526) = a5[3];
    *((_QWORD *)a1 + v11 + 260) = 2LL;
    *((_DWORD *)a1 + 2 * v11 + 522) = a2;
    *((_DWORD *)a1 + 2 * v11 + 523) = 0;
    *((_DWORD *)a1 + 2 * v11 + 524) = a4;
    *((_DWORD *)a1 + 2 * v11 + 527) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ++*((_DWORD *)a1 + 2);
    if ( a4 != 3 )
      DelayZoneTelemetry::UploadTelemetryData(a1, 0);
  }
}
