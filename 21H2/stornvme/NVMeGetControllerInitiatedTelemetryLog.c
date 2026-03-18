/*
 * XREFs of NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C0022AC8 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     GetControllerMaxTransferSize @ 0x1C000569C (GetControllerMaxTransferSize.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C001A0C4 (BuildGetLogPageCommandForTelemetryLog.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryLog(__int64 a1, unsigned int a2)
{
  unsigned int ControllerMaxTransferSize; // eax
  void **v5; // r12
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int DmaBuffer; // esi
  __int64 v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r13
  unsigned int v12; // r13d
  unsigned int v13; // r13d
  void *v14; // rcx
  __int64 v15; // rbx
  void *v16; // rcx
  __int64 v17; // rbx
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  int v22; // [rsp+28h] [rbp-28h]
  unsigned int v23; // [rsp+90h] [rbp+40h]
  void *Src; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h]

  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  v5 = (void **)(a1 + 4048);
  v6 = 512;
  Src = 0LL;
  v25 = 0LL;
  v23 = 512;
  v7 = ControllerMaxTransferSize;
  DmaBuffer = StorPortExtendedFunction(0LL, a1, a2, 1701672526LL);
  if ( !DmaBuffer && *v5 )
  {
    NVMeZeroMemory(*v5, a2);
    v10 = v7;
    *(_DWORD *)(a1 + 4056) = a2;
    if ( a2 < v7 )
      v10 = a2;
    DmaBuffer = NVMeAllocateDmaBuffer(a1, v10);
    if ( !DmaBuffer )
    {
      if ( !Src )
        return DmaBuffer;
      v11 = 4LL;
      if ( a2 <= 0x200 )
      {
LABEL_14:
        v16 = *(void **)(a1 + 952);
        *(_BYTE *)(a1 + 867) = 0;
        memset(v16, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        v17 = *(_QWORD *)(a1 + 952);
        *(_QWORD *)(a1 + 920) = v17;
        *(_DWORD *)(a1 + 856) = 1;
        *(_BYTE *)(v17 + 4253) |= 3u;
        *(_WORD *)(v17 + 4244) = 0;
        BuildGetLogPageCommandForTelemetryLog(a1, v17, 8u, 0x200u, v25, v22, 0LL, 1, *(_BYTE *)(a1 + 156) & 1);
        *(_BYTE *)(v17 + 4253) |= 4u;
        *(_QWORD *)(v17 + 4200) = Src;
        *(_QWORD *)(v17 + 4208) = v25;
        *(_DWORD *)(v17 + 4240) = 512;
        ProcessCommand(a1, a1 + 864);
        WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
        if ( *(_BYTE *)(a1 + 867) == 1 )
        {
          v18 = *v5;
          v19 = Src;
          do
          {
            *v18 = *v19;
            v18[1] = v19[1];
            v18[2] = v19[2];
            v18[3] = v19[3];
            v18[4] = v19[4];
            v18[5] = v19[5];
            v18[6] = v19[6];
            v18 += 8;
            v20 = v19[7];
            v19 += 8;
            *(v18 - 1) = v20;
            --v11;
          }
          while ( v11 );
        }
        else
        {
LABEL_26:
          DmaBuffer = -1056964607;
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = v7;
          if ( a2 - v6 < v7 )
            v12 = a2 - v6;
          v13 = v12 & 0xFFFFFE00;
          if ( !v13 )
            break;
          v14 = *(void **)(a1 + 952);
          *(_BYTE *)(a1 + 867) = 0;
          memset(v14, 0, 0x10A0uLL);
          *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
          v15 = *(_QWORD *)(a1 + 952);
          *(_QWORD *)(a1 + 920) = v15;
          *(_DWORD *)(a1 + 856) = 1;
          *(_BYTE *)(v15 + 4253) |= 3u;
          *(_WORD *)(v15 + 4244) = 0;
          BuildGetLogPageCommandForTelemetryLog(a1, v15, 8u, v13, v25, v22, v23, 0, 1u);
          *(_BYTE *)(v15 + 4253) |= 4u;
          *(_QWORD *)(v15 + 4200) = Src;
          *(_QWORD *)(v15 + 4208) = v25;
          *(_DWORD *)(v15 + 4240) = v13;
          ProcessCommand(a1, a1 + 864);
          WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
          if ( *(_BYTE *)(a1 + 867) != 1 )
            goto LABEL_26;
          memmove((char *)*v5 + v23, Src, v13);
          v6 = v13 + v23;
          v23 = v6;
          if ( v6 >= a2 )
          {
            v11 = 4LL;
            goto LABEL_14;
          }
        }
        DmaBuffer = -1056964598;
      }
    }
  }
  if ( Src )
  {
    if ( a2 < v7 )
      v7 = a2;
    NVMeFreeDmaBuffer(a1, v7, (__int64 *)&Src, v25);
  }
  if ( DmaBuffer )
  {
    if ( *v5 )
      StorPortExtendedFunction(1LL, a1, *v5, v9);
    *(_OWORD *)v5 = 0LL;
  }
  return DmaBuffer;
}
