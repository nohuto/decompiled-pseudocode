/*
 * XREFs of NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001D968 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     GetControllerMaxTransferSize @ 0x1C0007A5C (GetControllerMaxTransferSize.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C0010F38 (BuildGetLogPageCommandForTelemetryLog.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryLog(__int64 a1, unsigned int a2)
{
  unsigned int ControllerMaxTransferSize; // eax
  void **v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int DmaBuffer; // edi
  __int64 v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r12
  unsigned int v12; // r12d
  unsigned int v13; // r12d
  __int64 v14; // rbx
  unsigned int v15; // r8d
  __int64 v16; // rbx
  unsigned int v17; // r8d
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  int v22; // [rsp+28h] [rbp-28h]
  unsigned int v23; // [rsp+90h] [rbp+40h]
  void *Src; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h]

  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  v5 = (void **)(a1 + 4248);
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
    *(_DWORD *)(a1 + 4256) = a2;
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
        LocalCommandReuse(a1, a1 + 944);
        v16 = *(_QWORD *)(a1 + 1008);
        LOBYTE(v17) = 8;
        *(_BYTE *)(v16 + 4253) |= 3u;
        *(_WORD *)(v16 + 4244) = 0;
        BuildGetLogPageCommandForTelemetryLog(a1, v16, v17, 0x200u, v25, v22, 0LL, 1, *(_BYTE *)(a1 + 156) & 1);
        *(_BYTE *)(v16 + 4253) |= 4u;
        *(_QWORD *)(v16 + 4200) = Src;
        *(_QWORD *)(v16 + 4208) = v25;
        *(_DWORD *)(v16 + 4240) = 512;
        ProcessCommand(a1, a1 + 952);
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *(_BYTE *)(a1 + 955) == 1 )
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
          LocalCommandReuse(a1, a1 + 944);
          v14 = *(_QWORD *)(a1 + 1008);
          LOBYTE(v15) = 8;
          *(_BYTE *)(v14 + 4253) |= 3u;
          *(_WORD *)(v14 + 4244) = 0;
          BuildGetLogPageCommandForTelemetryLog(a1, v14, v15, v13, v25, v22, v23, 0, 1u);
          *(_BYTE *)(v14 + 4253) |= 4u;
          *(_QWORD *)(v14 + 4200) = Src;
          *(_QWORD *)(v14 + 4208) = v25;
          *(_DWORD *)(v14 + 4240) = v13;
          ProcessCommand(a1, a1 + 952);
          WaitForCommandCompleteWithCustomTimeout(a1);
          if ( *(_BYTE *)(a1 + 955) != 1 )
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
