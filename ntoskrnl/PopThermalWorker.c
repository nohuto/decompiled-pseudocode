/*
 * XREFs of PopThermalWorker @ 0x140846460
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14039CBDC (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x14058D2A4 (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140592AB8 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140592BEC (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopPrepareIoctl @ 0x140846A50 (PopPrepareIoctl.c)
 *     PopCheckThermalPolicy @ 0x140846B78 (PopCheckThermalPolicy.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140846CFC (PopDiagTraceThermalCoolingMode.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140987FC0 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceActiveCooling @ 0x140989298 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14098CF00 (PopDiagTracePassiveCooling.c)
 */

void __fastcall PopThermalWorker(__int64 a1)
{
  int v1; // esi
  ULONG_PTR v2; // r12
  __int64 v4; // r13
  IRP *v5; // r15
  struct _DEVICE_OBJECT *BugCheckParameter4; // rbx
  __int64 v7; // r8
  int Status; // eax
  char v9; // bp
  int v10; // r14d
  char v11; // al
  char v12; // dl
  int v13; // r9d
  char v14; // cl
  char v15; // al
  char v16; // cl
  __int64 v17; // rcx
  __int128 *v18; // r9
  int v19; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v21; // al
  __int64 v22; // rdx
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  char v25; // cl
  char v26; // al
  char v27; // cl
  char v28; // al
  char v29; // cl
  unsigned int v30; // ecx
  unsigned int v31; // eax
  int v32; // ecx
  char v33; // al
  __int64 v34; // r8
  int v35; // eax
  int v36; // ecx
  int v37; // r12d
  int v38; // r8d
  bool v39; // r15
  char v40; // al
  char v41; // al
  char v42; // al
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // [rsp+30h] [rbp-58h]
  bool v48; // [rsp+31h] [rbp-57h] BYREF
  char v49; // [rsp+32h] [rbp-56h]
  int v50; // [rsp+34h] [rbp-54h] BYREF
  struct _DEVICE_OBJECT *v51; // [rsp+38h] [rbp-50h]
  IRP *v52; // [rsp+40h] [rbp-48h]
  __int128 v53; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0;
  v2 = a1 + 432;
  v47 = 0;
  v49 = 0;
  v53 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v52 = v5;
  v51 = BugCheckParameter4;
  v48 = 0;
  v50 = 0;
  PopAcquireRwLockExclusive(a1 + 432);
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    goto LABEL_64;
  }
  Status = v5->IoStatus.Status;
  v9 = 1;
  v10 = 4;
  if ( Status < 0 )
  {
    if ( Status == -1073741667 || Status == -1073741536 )
      goto LABEL_7;
    if ( *(_BYTE *)(a1 + 64) == 7 )
    {
      *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_7;
    }
    *(_BYTE *)(a1 + 64) = 5;
LABEL_64:
    KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 )
  {
    v21 = *(_BYTE *)(a1 + 65);
    *(_QWORD *)(a1 + 240) = v4;
    if ( (v21 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v21 | 2;
      PopDiagTraceThermalZoneEnumeration(a1);
    }
    PopCheckThermalPolicy(a1, v4, &v48, &v50);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    LOBYTE(v7) = v48;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 64) != 2 )
  {
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 3:
        *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
LABEL_7:
        v11 = 0;
        goto LABEL_8;
      case 4:
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
        goto LABEL_7;
      case 6:
        *(_BYTE *)(a1 + 505) = *(_BYTE *)(a1 + 144);
        *(_BYTE *)(a1 + 64) = 10;
        goto LABEL_7;
      case 7:
        *(_BYTE *)(a1 + 228) = 1;
        *(_BYTE *)(a1 + 64) = 8;
        break;
      case 8:
        break;
      case 0xA:
        *(_BYTE *)(a1 + 64) = 7;
        goto LABEL_7;
      default:
        PopInternalAddToDumpFile((__int64)v5, 0xD0u, (__int64)BugCheckParameter4);
        KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v5, (ULONG_PTR)BugCheckParameter4);
    }
    v30 = *(_DWORD *)(a1 + 216);
    LOBYTE(v7) = v30 < 0x64;
    v31 = *(_DWORD *)(a1 + 80) - v30;
    v48 = v30 < 0x64;
    v32 = 5 * v31;
    v33 = *(_BYTE *)(a1 + 65);
    v50 = 2 * v32;
    if ( (v33 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v33 | 2;
      PopDiagTraceThermalZoneEnumeration(a1);
      LOBYTE(v7) = v48;
    }
LABEL_33:
    v22 = *(unsigned __int8 *)(a1 + 69);
    v23 = *(_DWORD *)(a1 + 220);
    v24 = *(unsigned __int8 *)(a1 + 144);
    if ( v23 == (_DWORD)v22 )
    {
      v25 = *(_BYTE *)(a1 + 65);
      v26 = v25 & 4;
      if ( v23 < v24 )
      {
        if ( v26 )
          goto LABEL_36;
      }
      else if ( !v26 )
      {
        goto LABEL_36;
      }
    }
    *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 220);
    PopThermalUpdateActiveTimeTracking(a1 + 504, v22);
    v28 = *(_BYTE *)(a1 + 65);
    v47 = 1;
    if ( v23 < v24 )
    {
      if ( (v28 & 4) == 0 )
      {
        LOBYTE(v7) = 1;
        PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v7, 0LL);
        LOBYTE(v34) = 1;
        PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v34, 1LL);
        *(_QWORD *)(a1 + 248) = v4;
      }
    }
    else if ( (v28 & 4) != 0 )
    {
      PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 0LL);
      PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 1LL);
    }
    v29 = *(_BYTE *)(a1 + 65);
    LOBYTE(v7) = v48;
    if ( v23 < v24 )
      v25 = v29 | 4;
    else
      v25 = v29 & 0xFB;
    *(_BYTE *)(a1 + 65) = v25;
LABEL_36:
    if ( *(_DWORD *)(a1 + 216) == *(_DWORD *)(a1 + 80) )
    {
      v27 = v25 & 1;
      if ( (_BYTE)v7 )
      {
        if ( v27 )
          goto LABEL_39;
      }
      else if ( !v27 )
      {
LABEL_39:
        PopCheckAndHandleThermalConditions(a1);
        v11 = v47;
        v2 = a1 + 432;
        BugCheckParameter4 = v51;
        v5 = v52;
        goto LABEL_8;
      }
    }
    else
    {
      LOBYTE(v22) = *(_BYTE *)(a1 + 80);
      PopThermalUpdatePassiveTimeTracking(a1 + 504, v22);
      v35 = *(_DWORD *)(a1 + 216);
      v36 = *(_DWORD *)(a1 + 128);
      v49 = 1;
      *(_DWORD *)(a1 + 84) = v35;
      PopDiagTraceThermalZoneThrottlePerfTrack(v36, 100 - v35, (__int64)BugCheckParameter4);
      LOBYTE(v7) = v48;
    }
    v37 = v50;
    PopDiagTracePassiveCooling(a1 + 112, (_DWORD)v51, v7, v50, 0);
    v39 = v48;
    v40 = *(_BYTE *)(a1 + 65);
    if ( v48 )
    {
      if ( (v40 & 1) == 0 )
      {
        LOBYTE(v38) = 1;
        PopDiagTracePassiveCooling(a1 + 112, (_DWORD)v51, v38, v37, 1);
        *(_QWORD *)(a1 + 256) = v4;
      }
    }
    else if ( (v40 & 1) != 0 )
    {
      PopDiagTracePassiveCooling(a1 + 112, (_DWORD)v51, 0, v37, 1);
      PopDiagTraceThermalZoneThrottleDurationPerfTrack((v4 - *(_QWORD *)(a1 + 256)) / 0x2710uLL, (__int64)v51);
    }
    v41 = *(_BYTE *)(a1 + 65);
    if ( v39 )
      v42 = v41 | 1;
    else
      v42 = v41 & 0xFE;
    *(_BYTE *)(a1 + 65) = v42;
    goto LABEL_39;
  }
  *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
  PopDiagTraceThermalCoolingMode(BugCheckParameter4);
  if ( WmiThermalPolicyEventEnabled )
    PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
  v11 = 1;
LABEL_8:
  v12 = v49;
  v13 = a1 + 70;
  v14 = v11;
  if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
    v14 = 1;
  v15 = *(_BYTE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
    v12 = 1;
  switch ( v15 )
  {
    case 6:
      goto LABEL_23;
    case 10:
      v10 = 16;
      v13 = a1 + 1040;
      v9 = 0;
      v19 = 2703512;
      v1 = 16;
      goto LABEL_25;
    case 7:
LABEL_59:
      v13 = a1 + 204;
      v19 = 2703508;
      *(_DWORD *)(a1 + 204) = 1;
      v9 = 0;
      v1 = 24;
      goto LABEL_24;
  }
  if ( v14 )
  {
    *(_BYTE *)(a1 + 64) = 3;
    v19 = 2719880;
    goto LABEL_25;
  }
  if ( v12 )
  {
    *(_BYTE *)(a1 + 64) = 4;
    v13 = a1 + 84;
    v19 = 2719884;
    goto LABEL_25;
  }
  v16 = PopCoolingMode;
  if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
  {
    v13 = a1 + 68;
    *(_BYTE *)(a1 + 64) = 2;
    *(_BYTE *)(a1 + 68) = v16;
    v19 = 2719876;
    v10 = 1;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 64) = 8;
    *(_BYTE *)(a1 + 208) = 1;
    goto LABEL_59;
  }
  v17 = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v43 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v43 )
    {
      v44 = *(_QWORD *)(a1 + 96) + v43;
      if ( v44 <= v4 )
        *(_DWORD *)(a1 + 112) = 0;
      else
        v17 = v44;
    }
  }
  v18 = 0LL;
  if ( PopThermalPollingMode )
  {
    v45 = *(unsigned int *)(a1 + 232);
    if ( (_DWORD)v45 )
    {
      v46 = *(_QWORD *)(a1 + 240) + v45;
      if ( v46 <= v4 )
      {
        *(_DWORD *)(a1 + 112) = 0;
        v17 = 0LL;
      }
      else if ( !v17 || v17 >= v46 )
      {
        v17 = v46;
      }
    }
    if ( !PopThermalPollingWakesAllowed )
    {
      *((_QWORD *)&v53 + 1) = -1LL;
      v18 = &v53;
    }
  }
  if ( v17 )
    KeSetTimer2(a1 + 296, v4 - v17, 0LL, (__int64)v18);
LABEL_23:
  v1 = 92;
  v13 = a1 + 112;
  v19 = 2703488;
LABEL_24:
  v10 = v1;
LABEL_25:
  LOBYTE(v7) = v9;
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), v19, v7, v13, v10, v1);
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
  CurrentStackLocation[-1].Context = (PVOID)a1;
  CurrentStackLocation[-1].Control = -32;
  IofCallDriver(BugCheckParameter4, v5);
LABEL_26:
  PopReleaseRwLock(v2);
}
