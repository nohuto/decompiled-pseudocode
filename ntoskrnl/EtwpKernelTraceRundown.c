/*
 * XREFs of EtwpKernelTraceRundown @ 0x14080D9F8
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14037F908 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x1409E2228 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1409EBEA0 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpOpenLogger @ 0x140205B30 (EtwpOpenLogger.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     EtwpCloseLogger @ 0x1403BC590 (EtwpCloseLogger.c)
 *     KeTraceHgsPlusRundown @ 0x140574738 (KeTraceHgsPlusRundown.c)
 *     MmLogQueryCombineStats @ 0x14079BD2C (MmLogQueryCombineStats.c)
 *     EtwpProcessThreadImageRundown @ 0x14080DC50 (EtwpProcessThreadImageRundown.c)
 *     WmiTraceRundownNotify @ 0x1408479D8 (WmiTraceRundownNotify.c)
 *     EtwpClockSourceRunDown @ 0x1409EBC38 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1409EBDB8 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x1409EBF14 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1409EC290 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x1409EC610 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1409EC76C (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1409EC980 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1409ECE34 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1409ECFE0 (EtwpSpinLockConfigRunDown.c)
 *     CmEtwRunDown @ 0x140A0F788 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2C028 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x140A2F8F8 (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x140A3D248 (MmLogSystemShareablePfnInfo.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6)
{
  unsigned int v7; // esi
  unsigned int v8; // r14d
  BOOLEAN v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rdi
  __int64 v20; // rdi
  unsigned int v21; // r8d
  __int64 v22; // r8
  __int64 v23; // r9
  char v24[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+18h] BYREF

  v25 = a3;
  v7 = a4;
  v24[0] = 0;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v11 = EtwpOpenLogger(v8, a2, 0, v24);
  v16 = v11;
  if ( v11 )
  {
    if ( !a1 )
    {
      v18 = 4LL;
      goto LABEL_13;
    }
    v13 = a1[1];
    if ( (v13 & 0x20) != 0 && !(_BYTE)v7 )
      EtwpLogRefSetAutoMark(0LL, v11);
    if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (*a1 & 1) != 0 || (*a1 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
    {
      LOBYTE(v14) = v7;
      EtwpProcessThreadImageRundown((_DWORD)a1, v16, v14, a5, a6);
    }
    v17 = *a1;
    if ( (*a1 & 0x20000) != 0 )
    {
      if ( (a1[2] & 0x1000000) == 0 )
      {
        v15 = 0;
LABEL_58:
        v21 = v17 >> 17;
        LOBYTE(v21) = (v17 & 0x20000) != 0;
        CmEtwRunDown(a2, v8, v21, v15, v7);
LABEL_12:
        v18 = (__int64)(a1 + 1);
        if ( (a1[1] & 2) != 0 )
        {
          LOBYTE(v14) = 1;
          LOBYTE(v12) = v7;
          EtwpSampledProfileRunDown(v16, v12, v14);
LABEL_14:
          if ( (*(_DWORD *)v18 & 0x400) != 0 )
          {
            LOBYTE(v12) = v7;
            EtwpSampledProfileRunDown(v16, v12, 0LL);
          }
          if ( (*(_DWORD *)v18 & 0x10000) != 0 )
          {
            LOBYTE(v12) = v7;
            EtwpSpinLockConfigRunDown(v16, v12);
          }
          if ( (*(_DWORD *)v18 & 0x20000) != 0 )
          {
            LOBYTE(v12) = v7;
            EtwpExecutiveResourceConfigRunDown(v16, v12);
          }
          if ( (*(_DWORD *)v18 & 0x400008) != 0 )
            MmPerfLogSessionRundown(a2, v8, v7);
          if ( (*(_DWORD *)v18 & 0x8000049) != 0 )
          {
            LOBYTE(v12) = v7;
            EtwpPoolRunDown(v16, v12);
          }
          if ( (a1[2] & 0x100000) != 0 )
          {
            LOBYTE(v12) = v7;
            EtwpClockSourceRunDown(v16, v12);
          }
          if ( (a1[5] & 0x180) != 0 )
            KeTraceHgsPlusRundown(v7);
LABEL_28:
          if ( (_BYTE)v7 )
          {
            if ( a1 )
            {
              if ( (*(_DWORD *)v18 & 0x8000000) != 0 )
              {
                MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
                MmLogSystemShareablePfnInfo(a2, v8);
              }
              if ( (*(_DWORD *)v18 & 0x20) != 0 )
              {
                LOBYTE(v13) = v7;
                EtwpLogRefSetAutoMark(v13, v16);
              }
            }
            goto LABEL_34;
          }
          if ( a1 )
          {
            if ( (*(_DWORD *)v18 & 0x8000000) != 0 )
            {
              MmLogSystemShareablePfnInfo(a2, v8);
              MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
            }
            if ( (*(_DWORD *)v18 & 9) != 0 || (a1[5] & 0x40) != 0 )
            {
              EtwpLogMemInfoRundown(v16);
              if ( (a1[5] & 0x40) != 0 )
              {
                v22 = 650LL;
                v23 = 2LL;
              }
              else
              {
                v22 = 547LL;
                v23 = 0LL;
              }
              MmIdentifyPhysicalMemory(a2, v8, v22, v23);
            }
            if ( (*(_DWORD *)v18 & 0x80000) != 0 )
            {
              MmLogQueryCombineStats(a2, &v25, 0LL);
              v8 = v25;
            }
            if ( (*a1 & 0x200) != 0 )
              WmiTraceRundownNotify(**(_QWORD **)(v16 + 1096), v8);
            v20 = (__int64)(a1 + 4);
            if ( (a1[4] & 0x8000) != 0 )
            {
              PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
              goto LABEL_47;
            }
          }
          else
          {
            v20 = 16LL;
          }
          if ( !a1 )
          {
LABEL_34:
            EtwpCloseLogger(v8, a2, v24[0]);
            return IoSetThreadHardErrorMode(v10);
          }
LABEL_47:
          if ( (*(_DWORD *)v20 & 0x40) != 0 || (*(_DWORD *)v20 & 0x80u) != 0 )
            EtwpObjectTypeRundown(v16, 0LL);
          if ( (a1[2] & 0x10000) != 0 )
            EtwpProcessorRundown(v16);
          goto LABEL_34;
        }
LABEL_13:
        if ( !a1 )
          goto LABEL_28;
        goto LABEL_14;
      }
    }
    else if ( (a1[2] & 0x1000000) == 0 )
    {
      goto LABEL_12;
    }
    LOBYTE(v15) = 1;
    goto LABEL_58;
  }
  return IoSetThreadHardErrorMode(v10);
}
