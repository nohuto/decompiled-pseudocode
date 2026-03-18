/*
 * XREFs of PopUpdateSystemIdleContext @ 0x1408258D8
 * Callers:
 *     PopInitSIdle @ 0x140825874 (PopInitSIdle.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032EE20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140410BB4 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     memset @ 0x140435400 (memset.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E208 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopPulseSystemIdleEvent @ 0x1407A8AEC (PopPulseSystemIdleEvent.c)
 *     PopFilterCapabilities @ 0x1407A8C44 (PopFilterCapabilities.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x140825ACC (PopDiagTraceSystemIdleContextUpdate.c)
 *     PopIsDozeSupported @ 0x140980BB4 (PopIsDozeSupported.c)
 */

void __fastcall PopUpdateSystemIdleContext(int a1)
{
  char v2; // di
  int v3; // ebp
  char v4; // bl
  int v5; // r14d
  int v6; // edi
  unsigned __int64 v7; // r15
  int v8; // ecx
  int v9; // ebx
  int v10; // r9d
  _BYTE v11[80]; // [rsp+30h] [rbp-68h] BYREF

  memset(v11, 0, 0x4CuLL);
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  v2 = 0;
  if ( (PopFullWake & 3) == 0 )
    goto LABEL_7;
  PopAcquireAdaptiveLock(1);
  if ( PopAdaptiveBootContext && (qword_140D53290 & 8) != 0 )
  {
    PopReleaseAdaptiveLock();
LABEL_7:
    v2 = 1;
    goto LABEL_8;
  }
  PopReleaseAdaptiveLock();
LABEL_8:
  v3 = PopSystemIdleContext;
  v4 = 0;
  v5 = dword_140C09804;
  if ( (PopSimulate & 0x1000000) == 0 )
    v4 = v2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities(&PopCapabilities, (__int64)v11);
  if ( v4 )
  {
    v6 = dword_140C3D920;
    if ( dword_140C3D920 )
    {
      v9 = 4;
      goto LABEL_27;
    }
    v6 = 0;
    goto LABEL_26;
  }
  v8 = *((_DWORD *)PopPolicy + 15);
  if ( PopPlatformAoAc )
  {
    if ( v8 )
    {
      v6 = *((_DWORD *)PopPolicy + 15);
      v9 = 1;
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  if ( !v8 || !v11[3] && !v11[4] && !v11[5] )
  {
    if ( *((_DWORD *)PopPolicy + 22) && (unsigned __int8)PopIsDozeSupported(v11) )
    {
      v6 = v10;
      v9 = 3;
      goto LABEL_27;
    }
LABEL_26:
    v9 = 5;
    goto LABEL_27;
  }
  v6 = *((_DWORD *)PopPolicy + 15);
  v9 = 2;
LABEL_27:
  if ( a1 == 1 || a1 == 4 )
    PopPulseSystemIdleEvent(3u);
  if ( a1 == 3 )
  {
    PopIdleCancelAoAcDozeS4Timer(6u);
    if ( byte_140C3CD91 )
      PopIdleArmAoAcDozeS4Timer();
  }
  PopSystemIdleContext = v9;
  dword_140C09804 = v6;
  qword_140C09930 = v7;
  dword_140C09938 = a1;
  dword_140C0993C = v3;
  dword_140C09940 = v5;
  PopDiagTraceSystemIdleContextUpdate(a1, v3, v5, v9, v6);
  PopReleaseRwLock(&PopSystemIdleLock);
}
