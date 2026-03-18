/*
 * XREFs of UpdateMonitorDevices @ 0x1C006C2B0
 * Callers:
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0069090 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C0069BFC (DrvSetMonitorsDimState.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C0069F80 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00756BC (DrvUpdateDisplayDriverParameters.c)
 *     DrvSetMonitorBrightness @ 0x1C007E8AC (DrvSetMonitorBrightness.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00CF400 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C017492C (DrvPVPGetFirstActiveMonitor.c)
 *     GetMonitorPhysicalDimensions @ 0x1C0175210 (GetMonitorPhysicalDimensions.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UpdateMonitorDevices(char a1)
{
  wchar_t *v1; // rbx
  char v2; // r14
  struct _DEVICE_OBJECT *v3; // rcx
  char v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  PVOID v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // eax
  void *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  PVOID v14; // rdx
  char v15; // r15
  char *v16; // r14
  __int64 v17; // r12
  int v18; // r10d
  unsigned int v19; // edx
  char v20; // al
  bool v21; // al
  char v22; // r15
  void *v23; // rdx
  PVOID v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 Pool2; // rdi
  bool v28; // zf
  char v29; // r15
  PVOID BackTrace[26]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v32; // [rsp+138h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+140h] [rbp+77h] BYREF

  v1 = gpGraphicsDeviceList;
  v2 = a1;
  while ( v1 )
  {
    v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)v1 + 17);
    P = 0LL;
    v4 = 1;
    if ( v3 )
    {
      if ( (int)GreDeviceIoControlImpl(v3, 0x23201Bu, 0LL, 0, &P, 8u, &v32, 1u, 1) >= 0 )
      {
        v8 = P;
        if ( P )
        {
          v9 = 0LL;
          if ( _bittest((const signed __int32 *)P, 0x1Du) )
          {
            do
            {
              v9 = (unsigned int)(v9 + 1);
              v6 = 5 * v9;
            }
            while ( _bittest((const signed __int32 *)P + 5 * v9, 0x1Du) );
          }
          v10 = *((_DWORD *)v1 + 54);
          if ( v2 )
          {
            v15 = 0;
            if ( v10 == (_DWORD)v9 )
            {
              if ( !(_DWORD)v9 )
                goto LABEL_10;
              v16 = (char *)P + 4;
              v17 = *((_QWORD *)v1 + 28) - (_QWORD)P;
              do
              {
                v18 = *((_DWORD *)v16 - 1);
                v19 = *(_DWORD *)&v16[v17 - 4];
                v7 = (unsigned int)v18 >> 30;
                v20 = v19 ^ v18;
                v5 = v19 >> 31;
                LOBYTE(v7) = v5 ^ (v18 < 0) ^ 1 | (v20 | (*(_DWORD *)&v16[v17 - 4] >> 1) ^ ~(unsigned __int8)((unsigned int)v18 >> 1) | (*(_DWORD *)&v16[v17 - 4] >> 30) ^ ~(_BYTE)v7) & 1;
                v6 = (unsigned __int8)v7;
                if ( *(_DWORD *)&v16[v17] != *(_DWORD *)v16 )
                  v6 = 1LL;
                LOBYTE(v6) = v15 | v6;
                v21 = *(_DWORD *)&v16[v17 + 4] != *((_DWORD *)v16 + 1)
                   || *(_DWORD *)&v16[v17 + 8] != *((_DWORD *)v16 + 2);
                v22 = v21;
                if ( v16[v17 + 12] != v16[12] )
                  v22 = 1;
                v16 += 20;
                v15 = v6 | v22;
                --v9;
              }
              while ( v9 );
              v8 = P;
              if ( !v15 )
                goto LABEL_10;
            }
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
          }
          else
          {
            if ( v10 >= (unsigned int)v9 )
              goto LABEL_9;
            v23 = (void *)*((_QWORD *)v1 + 28);
            if ( v23 )
            {
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v23);
              v8 = P;
            }
            if ( !(20 * (_DWORD)v9) )
            {
              *((_QWORD *)v1 + 28) = 0LL;
LABEL_68:
              *((_DWORD *)v1 + 54) = 0;
              ExFreePoolWithTag(v8, 0);
              return;
            }
            v24 = gpLeakTrackingAllocator;
            v25 = (unsigned int)(20 * v9);
            if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646747) != 0x76646747
              || (v26 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
            {
LABEL_51:
              Pool2 = ExAllocatePool2(260LL, v25);
              goto LABEL_52;
            }
            while ( *((_DWORD *)gpLeakTrackingAllocator + v26) != 1986291527 )
            {
              if ( ++v26 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_51;
            }
            v29 = 0;
            if ( v25 < 0x1000 || ((20 * (_WORD)v9) & 0xFFF) != 0 )
            {
              v29 = 1;
              v25 += 16LL;
            }
            Pool2 = ExAllocatePool2(260LL, v25);
            if ( !Pool2 )
              goto LABEL_63;
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v29 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v24,
                                      Pool2,
                                      BackTrace) )
              {
                Pool2 += 16LL;
                goto LABEL_52;
              }
LABEL_62:
              ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_63:
              Pool2 = 0LL;
            }
            else if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                          v24,
                                          Pool2,
                                          BackTrace) )
            {
              goto LABEL_62;
            }
LABEL_52:
            *((_QWORD *)v1 + 28) = Pool2;
            v28 = Pool2 == 0;
            v8 = P;
            if ( v28 )
              goto LABEL_68;
LABEL_9:
            *((_DWORD *)v1 + 54) = v9;
            if ( !(_DWORD)v9 )
            {
LABEL_10:
              ExFreePoolWithTag(v8, 0);
              v2 = a1;
              if ( !v4 )
                goto LABEL_15;
              goto LABEL_11;
            }
            v4 = 0;
            v12 = (unsigned int)v9;
            v13 = 0LL;
            do
            {
              *(_DWORD *)(v13 + *((_QWORD *)v1 + 28)) = 0;
              v14 = P;
              if ( (*(_DWORD *)((_BYTE *)P + v13) & 1) != 0 )
              {
                *(_DWORD *)(*((_QWORD *)v1 + 28) + v13) |= 1u;
                v14 = P;
              }
              if ( (*(_DWORD *)((_BYTE *)v14 + v13) & 2) == 0 )
              {
                *(_DWORD *)(*((_QWORD *)v1 + 28) + v13) |= 2u;
                v14 = P;
              }
              if ( *(int *)((char *)v14 + v13) >= 0 )
              {
                *(_DWORD *)(*((_QWORD *)v1 + 28) + v13) |= 0x80000000;
                v14 = P;
              }
              if ( (*(_DWORD *)((_BYTE *)v14 + v13) & 0x40000000) == 0 )
              {
                *(_DWORD *)(*((_QWORD *)v1 + 28) + v13) |= 0x40000000u;
                v14 = P;
              }
              *(_DWORD *)(*((_QWORD *)v1 + 28) + v13 + 4) = *(_DWORD *)((char *)v14 + v13 + 4);
              *(_QWORD *)(*((_QWORD *)v1 + 28) + v13 + 8) = *(_QWORD *)((char *)P + v13 + 8);
              *(_BYTE *)(*((_QWORD *)v1 + 28) + v13 + 16) = *((_BYTE *)P + v13 + 16);
              v13 += 20LL;
              --v12;
            }
            while ( v12 );
          }
          v8 = P;
          goto LABEL_10;
        }
      }
    }
LABEL_11:
    if ( !v2 )
    {
      v11 = (void *)*((_QWORD *)v1 + 28);
      if ( v11 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v11);
      *((_DWORD *)v1 + 54) = 0;
      *((_QWORD *)v1 + 28) = 0LL;
    }
LABEL_15:
    v1 = (wchar_t *)*((_QWORD *)v1 + 16);
  }
}
