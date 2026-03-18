/*
 * XREFs of NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DCC4
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001D9D8 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     memmove @ 0x1C0004880 (memmove.c)
 *     GetControllerMaxTransferSize @ 0x1C0007BB0 (GetControllerMaxTransferSize.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C0010FA8 (BuildGetLogPageCommandForTelemetryLog.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryLog(__int64 a1, unsigned int a2)
{
  unsigned int ControllerMaxTransferSize; // eax
  void **v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int DmaBuffer; // edi
  unsigned int v9; // edx
  __int64 v10; // r12
  unsigned int v11; // r12d
  unsigned int v12; // r12d
  __int64 v13; // rbx
  unsigned int v14; // r8d
  __int64 v15; // rbx
  unsigned int v16; // r8d
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  int v21; // [rsp+28h] [rbp-28h]
  unsigned int v22; // [rsp+90h] [rbp+40h]
  void *Src; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h]

  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  v5 = (void **)(a1 + 4248);
  v6 = 512;
  Src = 0LL;
  v24 = 0LL;
  v22 = 512;
  v7 = ControllerMaxTransferSize;
  DmaBuffer = StorPortExtendedFunction(0LL, a1, a2);
  if ( !DmaBuffer && *v5 )
  {
    NVMeZeroMemory(*v5, a2);
    v9 = v7;
    *(_DWORD *)(a1 + 4256) = a2;
    if ( a2 < v7 )
      v9 = a2;
    DmaBuffer = NVMeAllocateDmaBuffer(a1, v9);
    if ( !DmaBuffer )
    {
      if ( !Src )
        return DmaBuffer;
      v10 = 4LL;
      if ( a2 <= 0x200 )
      {
LABEL_14:
        LocalCommandReuse(a1, a1 + 944);
        v15 = *(_QWORD *)(a1 + 1008);
        LOBYTE(v16) = 8;
        *(_BYTE *)(v15 + 4253) |= 3u;
        *(_WORD *)(v15 + 4244) = 0;
        BuildGetLogPageCommandForTelemetryLog(a1, v15, v16, 0x200u, v24, v21, 0LL, 1, *(_BYTE *)(a1 + 156) & 1);
        *(_BYTE *)(v15 + 4253) |= 4u;
        *(_QWORD *)(v15 + 4200) = Src;
        *(_QWORD *)(v15 + 4208) = v24;
        *(_DWORD *)(v15 + 4240) = 512;
        ProcessCommand(a1, a1 + 952);
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *(_BYTE *)(a1 + 955) == 1 )
        {
          v17 = *v5;
          v18 = Src;
          do
          {
            *v17 = *v18;
            v17[1] = v18[1];
            v17[2] = v18[2];
            v17[3] = v18[3];
            v17[4] = v18[4];
            v17[5] = v18[5];
            v17[6] = v18[6];
            v17 += 8;
            v19 = v18[7];
            v18 += 8;
            *(v17 - 1) = v19;
            --v10;
          }
          while ( v10 );
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
          v11 = v7;
          if ( a2 - v6 < v7 )
            v11 = a2 - v6;
          v12 = v11 & 0xFFFFFE00;
          if ( !v12 )
            break;
          LocalCommandReuse(a1, a1 + 944);
          v13 = *(_QWORD *)(a1 + 1008);
          LOBYTE(v14) = 8;
          *(_BYTE *)(v13 + 4253) |= 3u;
          *(_WORD *)(v13 + 4244) = 0;
          BuildGetLogPageCommandForTelemetryLog(a1, v13, v14, v12, v24, v21, v22, 0, 1u);
          *(_BYTE *)(v13 + 4253) |= 4u;
          *(_QWORD *)(v13 + 4200) = Src;
          *(_QWORD *)(v13 + 4208) = v24;
          *(_DWORD *)(v13 + 4240) = v12;
          ProcessCommand(a1, a1 + 952);
          WaitForCommandCompleteWithCustomTimeout(a1);
          if ( *(_BYTE *)(a1 + 955) != 1 )
            goto LABEL_26;
          memmove((char *)*v5 + v22, Src, v12);
          v6 = v12 + v22;
          v22 = v6;
          if ( v6 >= a2 )
          {
            v10 = 4LL;
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
    NVMeFreeDmaBuffer(a1, v7, (__int64 *)&Src, v24);
  }
  if ( DmaBuffer )
  {
    if ( *v5 )
      StorPortExtendedFunction(1LL, a1, *v5);
    *(_OWORD *)v5 = 0LL;
  }
  return DmaBuffer;
}
