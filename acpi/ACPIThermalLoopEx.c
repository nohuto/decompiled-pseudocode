void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  int v9; // ebp
  KIRQL v10; // r15
  char v11; // r12
  int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r9
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // r9d
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  unsigned int i; // edx
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  char v34; // dl
  int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  KIRQL v41; // al
  _QWORD *v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rdx

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v10 = v8;
  *(_DWORD *)(a1 + 192) = v9;
  v11 = 1;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
    while ( 1 )
    {
LABEL_3:
      if ( !v11 )
        goto LABEL_82;
      while ( 1 )
      {
        v12 = *(_DWORD *)(a1 + 192);
        if ( (v12 & 0x40000000) != 0 )
          goto LABEL_89;
        if ( (v12 & 0x10000000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v12 | 0x8000000;
          if ( (v12 & 0x8000000) == 0 )
            ACPISetDeviceWorker(a1, 0x2000LL);
        }
        v13 = *(_DWORD *)(a1 + 192);
        if ( (v13 & 0x8000000) != 0 )
        {
LABEL_89:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
          goto LABEL_90;
        }
        if ( (v13 & 0x10) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v13 | 0x40000010;
          v44 = 17LL;
          goto LABEL_95;
        }
        if ( (v13 & 8) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v13 | 0x40000008;
          KeReleaseSpinLock(v4, v10);
          v14 = *(unsigned int *)(v3 + 100);
          v15 = 1346589535;
          goto LABEL_12;
        }
        v16 = *(_DWORD *)(a1 + 192);
        if ( (v13 & 2) != 0 && *(_QWORD *)(v3 + 120) )
        {
          v17 = *(_DWORD *)(v3 + 104);
          if ( v17 )
          {
            v18 = *(_DWORD *)(v3 + 108);
            if ( v18 > v17 && *(_DWORD *)(v3 + 16) <= v18 - v17 )
            {
              v16 = v13 & 0xFFFFFBFF;
              *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
            }
            v13 = v16;
            v19 = *(_DWORD *)(v3 + 104);
            if ( ~*(_DWORD *)(v3 + 108) > v19 && *(_DWORD *)(v3 + 16) >= *(_DWORD *)(v3 + 108) + v19 )
            {
              v13 = v16 & 0xFFFFFBFF;
              *(_DWORD *)(a1 + 192) = v16 & 0xFFFFFBFF;
            }
          }
          v20 = *(_DWORD *)(v3 + 20);
          v21 = v13;
          if ( v20 )
          {
            if ( (v22 = *(_DWORD *)(v3 + 108), v22 < v20) && *(_DWORD *)(v3 + 16) >= v20
              || v22 > v20 && *(_DWORD *)(v3 + 16) <= v20 )
            {
              v21 = v13 & 0xFFFFFBFF;
              *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
            }
          }
          v23 = *(_DWORD *)(v3 + 28);
          v24 = v21;
          if ( v23 )
          {
            if ( (v25 = *(_DWORD *)(v3 + 108), v25 < v23) && *(_DWORD *)(v3 + 16) >= v23
              || v25 > v23 && *(_DWORD *)(v3 + 16) <= v23 )
            {
              v24 = v21 & 0xFFFFFBFF;
              *(_DWORD *)(a1 + 192) = v21 & 0xFFFFFBFF;
            }
          }
          v26 = *(_DWORD *)(v3 + 76);
          v27 = v24;
          if ( v26 )
          {
            if ( (v28 = *(_DWORD *)(v3 + 108), v28 < v26) && *(_DWORD *)(v3 + 16) >= v26
              || v28 > v26 && *(_DWORD *)(v3 + 16) <= v26 )
            {
              v27 = v24 & 0xFFFFFBFF;
              *(_DWORD *)(a1 + 192) = v24 & 0xFFFFFBFF;
            }
          }
          v29 = *(_DWORD *)(v3 + 24);
          if ( v29 )
          {
            if ( (v30 = *(_DWORD *)(v3 + 108), v30 < v29) && *(_DWORD *)(v3 + 16) >= v29
              || v30 > v29 && *(_DWORD *)(v3 + 16) <= v29 )
            {
              *(_DWORD *)(a1 + 192) = v27 & 0xFFFFFBFF;
            }
          }
          for ( i = 0; i < *(unsigned __int8 *)(v3 + 32); ++i )
          {
            v32 = *(_DWORD *)(v3 + 4LL * i + 36);
            if ( v32 )
            {
              if ( (v33 = *(_DWORD *)(v3 + 108), v33 < v32) && *(_DWORD *)(v3 + 16) >= v32
                || v33 > v32 && *(_DWORD *)(v3 + 16) <= v32 )
              {
                *(_DWORD *)(a1 + 192) &= ~0x400u;
              }
            }
          }
          v16 = *(_DWORD *)(a1 + 192);
          if ( (v16 & 0x400) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v16 & 0xBFFFF9FF | 0x40000400;
            *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 16);
            KeReleaseSpinLock(v4, v10);
            v14 = *(unsigned int *)(v3 + 108);
            v15 = 1230259295;
LABEL_12:
            if ( (unsigned int)ACPIGet(a1, v15, 546308096, v14, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
              ACPIThermalLoop(a1, 0x40000000LL);
            goto LABEL_82;
          }
        }
        if ( (v16 & 4) == 0 )
        {
          v44 = 4LL;
          *(_DWORD *)(a1 + 192) = v16 | 0x40000004;
          goto LABEL_95;
        }
        if ( (v16 & 1) == 0 )
        {
          v44 = 1LL;
          *(_DWORD *)(a1 + 192) = v16 | 0x40000001;
          goto LABEL_95;
        }
        if ( (v16 & 0x100) == 0 )
        {
          v44 = 256LL;
          *(_DWORD *)(a1 + 192) = v16 | 0x40000100;
          goto LABEL_95;
        }
        v34 = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL);
        if ( (v16 & 0x202) == 2 && v34 )
        {
          v44 = 512LL;
          *(_DWORD *)(a1 + 192) = v16 | 0x44000200;
          goto LABEL_95;
        }
        if ( (v16 & 0x20000002) == 0x20000002 )
          goto LABEL_89;
        if ( !*(_BYTE *)(v3 + 273) && (v16 & 2) == 0 )
          break;
        if ( (v16 & 0x40) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v16 | 0x40;
          AcpiDiagTraceThermalNotification((_DWORD *)v3, a1, 128);
        }
        v37 = *(_DWORD *)(a1 + 192);
        if ( (v37 & 0x80u) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v37 | 0x80;
          AcpiDiagTraceThermalNotification((_DWORD *)v3, a1, 129);
        }
        v38 = *(_DWORD *)(a1 + 192);
        if ( (v38 & 0x800) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v38 | 0x800;
          AcpiDiagTraceTemperatureChange(v3, a1);
        }
        v39 = *(_DWORD *)(a1 + 192);
        if ( (v39 & 0x4000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v39 | 0x4000;
          AcpiDiagTraceTemperatureTelemetry(a1);
        }
        v40 = *(_DWORD *)(a1 + 192);
        if ( (v40 & 0x1000) != 0 )
        {
          if ( !ACPIThermalCompletePendingIrps(a1) )
            goto LABEL_89;
          goto LABEL_3;
        }
        *(_DWORD *)(a1 + 192) = v40 | 0x1000;
        KeReleaseSpinLock(v4, v10);
        v41 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
        v42 = (_QWORD *)qword_1C006EAA8;
        v43 = (_QWORD *)(a1 + 208);
        if ( *(__int64 **)qword_1C006EAA8 != &AcpiThermalZoneList )
          __fastfail(3u);
        *(_QWORD *)(a1 + 216) = qword_1C006EAA8;
        *v43 = &AcpiThermalZoneList;
        *v42 = v43;
        qword_1C006EAA8 = a1 + 208;
        KeReleaseSpinLock(&AcpiThermalConstraintLock, v41);
LABEL_82:
        v10 = KeAcquireSpinLockRaiseToDpc(v4);
        v11 = 1;
      }
      ++*(_DWORD *)v3;
      v35 = *(_DWORD *)(a1 + 192) | 2;
      *(_DWORD *)(a1 + 192) = v35;
      if ( v34 )
      {
        v44 = 514LL;
        *(_DWORD *)(a1 + 192) = v35 | 0x44000200;
LABEL_95:
        ACPISetDeviceWorker(a1, v44);
        continue;
      }
      if ( !*(_QWORD *)(v3 + 112) )
      {
        *(_DWORD *)(a1 + 192) = v35 & 0xEFFFFFFF;
        continue;
      }
      *(_DWORD *)(a1 + 192) = v35 | 0x40000000;
      KeReleaseSpinLock(v4, v10);
      *(_OWORD *)(v3 + 136) = 0LL;
      *(_OWORD *)(v3 + 152) = 0LL;
      *(_QWORD *)(v3 + 168) = 0LL;
      v11 = 0;
      if ( !ACPIDeviceHasFirmwareDependencies(a1) || *(_DWORD *)(a1 + 548) == 1 )
        break;
      v36 = -1073741661;
LABEL_85:
      ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v36, v3 + 136, a1);
    }
    v36 = AMLIAsyncEvalObject(*(_QWORD *)(v3 + 112), (int)v3 + 136, 0, 0, (__int64)ACPIThermalTMPCallback, a1);
    if ( v36 != 259 )
      goto LABEL_85;
    goto LABEL_82;
  }
LABEL_90:
  KeReleaseSpinLock(v4, v10);
}
