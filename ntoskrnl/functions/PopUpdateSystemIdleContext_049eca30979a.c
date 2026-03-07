void __fastcall PopUpdateSystemIdleContext(int a1)
{
  __int64 v2; // rdx
  char v3; // di
  int v4; // ebp
  char v5; // bl
  int v6; // r14d
  int v7; // edi
  unsigned __int64 v8; // r15
  int v9; // ecx
  int v10; // ebx
  int v11; // r9d
  _BYTE v12[80]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, 0x4CuLL);
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  v3 = 0;
  if ( (PopFullWake & 3) == 0 )
    goto LABEL_7;
  PopAcquireAdaptiveLock(1, v2);
  if ( PopAdaptiveBootContext && (qword_140D53288 & 8) != 0 )
  {
    PopReleaseAdaptiveLock();
LABEL_7:
    v3 = 1;
    goto LABEL_8;
  }
  PopReleaseAdaptiveLock();
LABEL_8:
  v4 = PopSystemIdleContext;
  v5 = 0;
  v6 = dword_140C09804;
  if ( (PopSimulate & 0x1000000) == 0 )
    v5 = v3;
  v7 = 0;
  v8 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities(&PopCapabilities, (__int64)v12);
  if ( v5 )
  {
    v7 = dword_140C3D4A0;
    if ( dword_140C3D4A0 )
    {
      v10 = 4;
      goto LABEL_27;
    }
    v7 = 0;
    goto LABEL_26;
  }
  v9 = *((_DWORD *)PopPolicy + 15);
  if ( PopPlatformAoAc )
  {
    if ( v9 )
    {
      v7 = *((_DWORD *)PopPolicy + 15);
      v10 = 1;
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  if ( !v9 || !v12[3] && !v12[4] && !v12[5] )
  {
    if ( *((_DWORD *)PopPolicy + 22) && (unsigned __int8)PopIsDozeSupported(v12) )
    {
      v7 = v11;
      v10 = 3;
      goto LABEL_27;
    }
LABEL_26:
    v10 = 5;
    goto LABEL_27;
  }
  v7 = *((_DWORD *)PopPolicy + 15);
  v10 = 2;
LABEL_27:
  if ( a1 == 1 || a1 == 4 )
    PopPulseSystemIdleEvent(3u);
  if ( a1 == 3 )
  {
    PopIdleCancelAoAcDozeS4Timer(6u);
    if ( byte_140C3C9D1 )
      PopIdleArmAoAcDozeS4Timer();
  }
  PopSystemIdleContext = v10;
  dword_140C09804 = v7;
  qword_140C09930 = v8;
  dword_140C09938 = a1;
  dword_140C0993C = v4;
  dword_140C09940 = v6;
  PopDiagTraceSystemIdleContextUpdate(a1, v4, v6, v10, v7);
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
