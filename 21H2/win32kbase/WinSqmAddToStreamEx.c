/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C01678C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WinSqmEventWrite @ 0x1C005B8DC (WinSqmEventWrite.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     WinSqmEventEnabled @ 0x1C00B75B4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00B760C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _GUID *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // r10d
  int v16; // eax
  __int64 v17; // rax
  PVOID v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  ULONGLONG Pool2; // rbx
  __int64 v23; // r8
  ULONGLONG v24; // rdi
  unsigned int v25; // r13d
  unsigned int v26; // r12d
  ULONG v27; // ecx
  char v28; // r15
  __int64 v29; // r15
  ULONG v30; // ecx
  ULONGLONG v31; // rdx
  NTSTATUS v32; // eax
  int v33; // r11d
  ULONG v34; // ecx
  ULONG v35; // [rsp+20h] [rbp-E0h] BYREF
  ULONGLONG v36; // [rsp+28h] [rbp-D8h]
  PVOID BackTrace[20]; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[7]; // [rsp+D0h] [rbp-30h] BYREF
  int v39; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v40; // [rsp+1B0h] [rbp+B0h] BYREF

  v40 = a3;
  v39 = a2;
  memset(UserData, 0, sizeof(UserData));
  v35 = 0;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v10 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v10 = (struct _GUID *)&unk_1C0267080;
      if ( a1 )
        v10 = a1;
    }
    if ( (unsigned int)WinSqmEventEnabled(&SQM_ADD_STREAMROW, v10) )
    {
      v13 = v40;
      v14 = v35;
      v15 = 0;
      if ( v40 > 0x40 )
        v13 = 64;
      v40 = v13;
      if ( v13 )
      {
        do
        {
          v12 = 2LL * v15;
          v11 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v15 + 4) - 1);
          if ( *(_DWORD *)(a4 + 16LL * v15 + 4) == 1 )
          {
            v16 = 19;
          }
          else
          {
            v11 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v15 + 4) - 2);
            if ( *(_DWORD *)(a4 + 16LL * v15 + 4) == 2 )
            {
              v11 = *(_QWORD *)(a4 + 16LL * v15 + 8);
              v17 = -1LL;
              do
                ++v17;
              while ( *(_WORD *)(v11 + 2 * v17) );
              if ( (unsigned int)v17 > 0x80 )
                LODWORD(v17) = 128;
              v16 = 2 * v17 + 17;
            }
            else
            {
              if ( *(_DWORD *)(a4 + 16LL * v15 + 4) != 3 )
                return;
              v16 = 23;
            }
          }
          ++v15;
          v14 = (v16 & 0xFFFFFFF8) + (unsigned int)v14;
          v35 = v14;
        }
        while ( v15 < v13 );
      }
      if ( (unsigned int)v14 <= 0x4400
        || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12), LODWORD(v14) = v35, v35 <= 0x4400) )
      {
        v18 = gpLeakTrackingAllocator;
        v19 = (unsigned int)v14;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D715355) != 0x6D715355
          || (v20 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
LABEL_29:
          Pool2 = ExAllocatePool2(260LL, (unsigned int)v14);
          goto LABEL_30;
        }
        while ( *((_DWORD *)gpLeakTrackingAllocator + v20) != 1836143445 )
        {
          if ( ++v20 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_29;
        }
        v28 = 0;
        if ( (unsigned int)v14 < 0x1000uLL || (v14 & 0xFFF) != 0 )
        {
          v28 = 1;
          v19 = (unsigned int)v14 + 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v19);
        if ( Pool2 )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v28 && (Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v18,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
LABEL_30:
              if ( !Pool2 )
                return;
              goto LABEL_31;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v18,
                                       Pool2,
                                       BackTrace) )
          {
LABEL_31:
            UserData[0].Ptr = (ULONGLONG)v10;
            v24 = Pool2;
            UserData[1].Ptr = (ULONGLONG)&v39;
            *(_QWORD *)&UserData[0].Size = 16LL;
            v25 = 0;
            UserData[2].Ptr = (ULONGLONG)&unk_1C029A528;
            *(_QWORD *)&UserData[1].Size = 4LL;
            UserData[3].Ptr = (ULONGLONG)&v40;
            UserData[4].Ptr = (ULONGLONG)&v35;
            *(_QWORD *)&UserData[2].Size = 4LL;
            *(_QWORD *)&UserData[3].Size = 4LL;
            for ( *(_QWORD *)&UserData[4].Size = 4LL; v25 < v40; v24 += v26 )
            {
              *(_DWORD *)v24 = *(_DWORD *)(a4 + 16LL * v25 + 4);
              switch ( *(_DWORD *)(a4 + 16LL * v25 + 4) )
              {
                case 1:
                  v34 = v35;
                  v26 = 16;
                  if ( v24 + 16 > Pool2 + v35 )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v21, v23);
                    v34 = v35;
                  }
                  if ( v24 + 16 > Pool2 + v34 )
                    goto LABEL_65;
                  *(_DWORD *)(v24 + 8) = *(_DWORD *)(a4 + 16LL * v25 + 8);
                  break;
                case 2:
                  v29 = -1LL;
                  do
                    ++v29;
                  while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v25 + 8) + 2 * v29) );
                  v30 = v35;
                  if ( (unsigned int)v29 > 0x80 )
                    LODWORD(v29) = 128;
                  v26 = (2 * v29 + 17) & 0xFFFFFFF8;
                  v31 = v24 + v26;
                  v36 = v31;
                  if ( v31 > Pool2 + v35 )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v31, v23);
                    v30 = v35;
                    v31 = v36;
                  }
                  if ( v31 > Pool2 + v30 )
                    goto LABEL_65;
                  v32 = RtlStringCchCopyW(
                          (unsigned __int16 *)(v24 + 8),
                          (unsigned int)(v29 + 1),
                          *(size_t **)(a4 + 16LL * v25 + 8));
                  if ( ((v32 + v33) & v33) == 0 && v32 != -2147483643 )
                    goto LABEL_65;
                  break;
                case 3:
                  v26 = 16;
                  v27 = v35;
                  if ( v24 + 16 > Pool2 + v35 )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v21, v23);
                    v27 = v35;
                  }
                  if ( v24 + 16 > Pool2 + v27 )
                    goto LABEL_65;
                  *(_QWORD *)(v24 + 8) = *(_QWORD *)(a4 + 16LL * v25 + 8);
                  break;
                default:
                  goto LABEL_65;
              }
              *(_DWORD *)(v24 + 4) = v26;
              ++v25;
            }
            UserData[5].Size = v35;
            UserData[5].Ptr = Pool2;
            UserData[6].Ptr = (ULONGLONG)&a5;
            UserData[5].Reserved = 0;
            *(_QWORD *)&UserData[6].Size = 4LL;
            WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, UserData);
LABEL_65:
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (char *)Pool2);
            return;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
      }
    }
  }
}
