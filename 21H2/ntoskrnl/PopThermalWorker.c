/*
 * XREFs of PopThermalWorker @ 0x1407C0790
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403C5528 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1403C55CC (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x14056F8B0 (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140573474 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140573594 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140778838 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14078E0DC (PopThermalUpdateActiveTimeTracking.c)
 *     PopPrepareIoctl @ 0x1407C0BC4 (PopPrepareIoctl.c)
 *     PopCheckThermalPolicy @ 0x1407C0C34 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407C0E00 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407C0E90 (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTracePassiveCooling @ 0x1408EACE8 (PopDiagTracePassiveCooling.c)
 */

void __fastcall PopThermalWorker(__int64 a1)
{
  int v1; // esi
  ULONG_PTR v2; // r12
  __int64 v4; // rbx
  IRP *v5; // r13
  struct _DEVICE_OBJECT *BugCheckParameter4; // r15
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
  bool v22; // r13
  __int64 v23; // rdx
  unsigned int v24; // r15d
  unsigned int v25; // r12d
  char v26; // al
  char v27; // cl
  char v28; // cl
  char v29; // cl
  char v30; // al
  __int64 v31; // r8
  unsigned int v32; // ecx
  char v33; // al
  int v34; // eax
  int v35; // ecx
  __int64 v36; // r8
  int v37; // r12d
  int v38; // r8d
  char v39; // al
  char v40; // al
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // [rsp+30h] [rbp-68h]
  bool v47; // [rsp+31h] [rbp-67h] BYREF
  char v48; // [rsp+32h] [rbp-66h]
  int v49; // [rsp+34h] [rbp-64h] BYREF
  struct _DEVICE_OBJECT *v50; // [rsp+38h] [rbp-60h]
  __int64 v51; // [rsp+40h] [rbp-58h]
  IRP *v52; // [rsp+48h] [rbp-50h]
  __int128 v53; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v2 = a1 + 432;
  v46 = 0;
  v48 = 0;
  v53 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v52 = v5;
  v50 = BugCheckParameter4;
  v51 = MEMORY[0xFFFFF78000000008];
  v47 = 0;
  v49 = 0;
  PopAcquireRwLockExclusive(a1 + 432);
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    goto LABEL_69;
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
LABEL_69:
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
      PopDiagTraceThermalZoneEnumeration(
        (char *)(a1 + 112),
        (unsigned __int16 *)(a1 + 1040),
        (__int64)BugCheckParameter4);
    }
    PopCheckThermalPolicy(a1, v4, &v47, &v49);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    v22 = v47;
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
    v32 = *(_DWORD *)(a1 + 216);
    v22 = v32 < 0x64;
    v33 = *(_BYTE *)(a1 + 65);
    v49 = 10 * (*(_DWORD *)(a1 + 80) - v32);
    if ( (v33 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v33 | 2;
      PopDiagTraceThermalZoneEnumeration(
        (char *)(a1 + 112),
        (unsigned __int16 *)(a1 + 1040),
        (__int64)BugCheckParameter4);
    }
LABEL_33:
    v23 = *(unsigned __int8 *)(a1 + 69);
    v24 = *(_DWORD *)(a1 + 220);
    v25 = *(unsigned __int8 *)(a1 + 144);
    if ( v24 == (_DWORD)v23 )
    {
      v28 = *(_BYTE *)(a1 + 65);
      v30 = v28 & 4;
      if ( v24 >= v25 )
      {
        if ( !v30 )
          goto LABEL_40;
      }
      else if ( v30 )
      {
        goto LABEL_40;
      }
    }
    *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 220);
    PopThermalUpdateActiveTimeTracking(a1 + 504, v23);
    v26 = *(_BYTE *)(a1 + 65);
    v46 = 1;
    if ( v24 >= v25 )
      goto LABEL_35;
    if ( (v26 & 4) != 0 )
    {
      if ( v24 >= v25 )
      {
LABEL_35:
        if ( (v26 & 4) != 0 )
        {
          PopDiagTraceActiveCooling(a1 + 112, v50, 0LL, 0LL);
          PopDiagTraceActiveCooling(a1 + 112, v50, 0LL, 1LL);
        }
      }
    }
    else
    {
      LOBYTE(v7) = 1;
      PopDiagTraceActiveCooling(a1 + 112, v50, v7, 0LL);
      LOBYTE(v31) = 1;
      PopDiagTraceActiveCooling(a1 + 112, v50, v31, 1LL);
      *(_QWORD *)(a1 + 248) = v4;
    }
    v27 = *(_BYTE *)(a1 + 65);
    if ( v24 < v25 )
      v28 = v27 | 4;
    else
      v28 = v27 & 0xFB;
    *(_BYTE *)(a1 + 65) = v28;
LABEL_40:
    if ( *(_DWORD *)(a1 + 216) == *(_DWORD *)(a1 + 80) )
    {
      BugCheckParameter4 = v50;
      v29 = v28 & 1;
      if ( v22 )
      {
        if ( v29 )
          goto LABEL_43;
      }
      else if ( !v29 )
      {
LABEL_43:
        PopCheckAndHandleThermalConditions(a1, v23);
        v11 = v46;
        v2 = a1 + 432;
        v4 = v51;
        v5 = v52;
        goto LABEL_8;
      }
    }
    else
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
      v34 = *(_DWORD *)(a1 + 216);
      BugCheckParameter4 = v50;
      v35 = *(_DWORD *)(a1 + 128);
      v36 = (__int64)v50;
      v48 = 1;
      *(_DWORD *)(a1 + 84) = v34;
      PopDiagTraceThermalZoneThrottlePerfTrack(v35, 100 - v34, v36);
    }
    v37 = v49;
    LOBYTE(v7) = v22;
    PopDiagTracePassiveCooling(a1 + 112, (_DWORD)BugCheckParameter4, v7, v49, 0);
    v39 = *(_BYTE *)(a1 + 65);
    if ( v22 )
    {
      if ( (v39 & 1) == 0 )
      {
        LOBYTE(v38) = 1;
        PopDiagTracePassiveCooling(a1 + 112, (_DWORD)BugCheckParameter4, v38, v37, 1);
        *(_QWORD *)(a1 + 256) = v51;
      }
    }
    else if ( (v39 & 1) != 0 )
    {
      PopDiagTracePassiveCooling(a1 + 112, (_DWORD)BugCheckParameter4, 0, v37, 1);
      PopDiagTraceThermalZoneThrottleDurationPerfTrack(
        (v51 - *(_QWORD *)(a1 + 256)) / 0x2710uLL,
        (__int64)BugCheckParameter4);
    }
    v40 = *(_BYTE *)(a1 + 65);
    if ( v22 )
      v41 = v40 | 1;
    else
      v41 = v40 & 0xFE;
    *(_BYTE *)(a1 + 65) = v41;
    goto LABEL_43;
  }
  *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
  PopDiagTraceThermalCoolingMode(BugCheckParameter4);
  if ( WmiThermalPolicyEventEnabled )
    PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
  v11 = 1;
LABEL_8:
  v12 = v48;
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
LABEL_60:
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
    goto LABEL_60;
  }
  v17 = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v42 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v42 )
    {
      v43 = *(_QWORD *)(a1 + 96) + v42;
      if ( v43 <= v4 )
        *(_DWORD *)(a1 + 112) = 0;
      else
        v17 = v43;
    }
  }
  v18 = 0LL;
  if ( PopThermalPollingMode )
  {
    v44 = *(unsigned int *)(a1 + 232);
    if ( (_DWORD)v44 )
    {
      v45 = *(_QWORD *)(a1 + 240) + v44;
      if ( v45 <= v4 )
      {
        *(_DWORD *)(a1 + 112) = 0;
        v17 = 0LL;
      }
      else if ( !v17 || v17 >= v45 )
      {
        v17 = v45;
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
