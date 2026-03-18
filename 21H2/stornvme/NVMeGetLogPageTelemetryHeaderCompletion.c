/*
 * XREFs of NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C001D870
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C001A0C4 (BuildGetLogPageCommandForTelemetryLog.c)
 */

char __fastcall NVMeGetLogPageTelemetryHeaderCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  _WORD *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned int v11; // ecx
  int v12; // ecx
  char v13; // al
  __int64 v14; // r14
  unsigned int v15; // edx
  __int16 v16; // ax
  int v17; // edx
  __int64 v18; // rcx
  int v20; // [rsp+28h] [rbp-90h]

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v7 = *(_WORD **)(v5 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_WORD **)(v5 + 24);
    v8 = 16LL;
  }
  LOBYTE(SrbExtension) = *(_BYTE *)(SrbExtension + 4232);
  v9 = *(_QWORD *)(a1 + 1640);
  if ( (_BYTE)SrbExtension == 7 )
  {
    if ( *(_BYTE *)(v5 + 3) != 1 )
      goto LABEL_16;
    v10 = *(_QWORD *)(v6 + 4200);
    if ( *(_BYTE *)v10 != 7 )
      goto LABEL_16;
    *(_BYTE *)(v6 + 4235) = 1;
    if ( !*(_BYTE *)(a1 + 20) )
      NVMeZeroMemory(v7, *(_DWORD *)(v5 + v8));
    *v7 = *(_WORD *)(v10 + 5);
    LOBYTE(SrbExtension) = *(_BYTE *)(v10 + 7);
    *((_BYTE *)v7 + 9) |= 6u;
    *((_BYTE *)v7 + 2) = SrbExtension;
    v11 = *(unsigned __int16 *)(v10 + 12);
    if ( (*(_BYTE *)(v9 + 261) & 0x40) != 0 )
    {
      LODWORD(SrbExtension) = *(_DWORD *)(v10 + 16);
      if ( v11 <= (unsigned int)SrbExtension )
        v11 = *(_DWORD *)(v10 + 16);
    }
    if ( v11 )
    {
      v12 = (v11 + 1) << 9;
      v13 = v7[17] & 0xF0 | 3;
      *(_DWORD *)(v7 + 15) = 17827840;
      *((_BYTE *)v7 + 34) = v13;
      *((_BYTE *)v7 + 38) = BYTE1(v12);
      *((_BYTE *)v7 + 37) = BYTE2(v12);
      *((_BYTE *)v7 + 39) = v12;
      *((_BYTE *)v7 + 36) = HIBYTE(v12);
      *(_BYTE *)(a1 + 4124) = 16;
      *(_DWORD *)(a1 + 4116) = v12;
      *(_BYTE *)(v6 + 4233) = 1;
      LOBYTE(SrbExtension) = *((_BYTE *)v7 + 32);
      *(_BYTE *)(v6 + 4234) = SrbExtension;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
LABEL_16:
      *(_BYTE *)(v6 + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      *(_BYTE *)(v6 + 4232) = 8;
      BuildGetLogPageCommandForTelemetryLog(a1, v6, 8u, *(_DWORD *)(v6 + 4240), *(_QWORD *)(v6 + 4208), v20, 0LL, 1, 1u);
      *(_BYTE *)(v6 + 4253) |= 4u;
      *(_QWORD *)(v6 + 4224) = NVMeGetLogPageTelemetryHeaderCompletion;
      LOBYTE(SrbExtension) = ProcessCommand(a1, a2);
      return SrbExtension;
    }
    *(_WORD *)(v10 + 5) = 0;
    *(_BYTE *)(v10 + 7) = 0;
    *(_DWORD *)(v10 + 8) = 0;
    *(_WORD *)(v10 + 12) = 0;
  }
  else if ( (_BYTE)SrbExtension == 8 )
  {
    if ( *(_BYTE *)(v5 + 3) == 1 )
    {
      v14 = *(_QWORD *)(v6 + 4200);
      if ( (*(_BYTE *)(v6 + 4235) & 1) == 0 )
      {
        NVMeZeroMemory(v7, *(_DWORD *)(v5 + v8));
        *v7 = *(_WORD *)(v14 + 5);
        LOBYTE(SrbExtension) = *(_BYTE *)(v14 + 7);
        *((_BYTE *)v7 + 9) |= 6u;
        *((_BYTE *)v7 + 2) = SrbExtension;
      }
      v15 = *(unsigned __int16 *)(v14 + 12);
      if ( (*(_BYTE *)(v9 + 261) & 0x40) != 0 )
      {
        LODWORD(SrbExtension) = *(_DWORD *)(v14 + 16);
        if ( v15 <= (unsigned int)SrbExtension )
          v15 = *(_DWORD *)(v14 + 16);
      }
      if ( v15 )
      {
        v16 = 8 * (*(unsigned __int8 *)(v6 + 4233) + 1);
        *((_BYTE *)v7 + 31) = v16;
        *((_BYTE *)v7 + 30) = HIBYTE(v16);
        v17 = (v15 + 1) << 9;
        LOBYTE(v7[4 * *(unsigned __int8 *)(v6 + 4233) + 16]) = (*(_BYTE *)(v6 + 4234) == 16) + 16;
        HIBYTE(v7[4 * *(unsigned __int8 *)(v6 + 4233) + 16]) = 2;
        LOBYTE(v7[4 * *(unsigned __int8 *)(v6 + 4233) + 17]) = v7[4 * *(unsigned __int8 *)(v6 + 4233) + 17] & 0xF0 | 2;
        v18 = *(unsigned __int8 *)(v6 + 4233);
        LOBYTE(v7[4 * v18 + 19]) = BYTE1(v17);
        HIBYTE(v7[4 * v18 + 18]) = BYTE2(v17);
        HIBYTE(v7[4 * v18 + 19]) = v17;
        LOBYTE(v7[4 * v18 + 18]) = HIBYTE(v17);
        SrbExtension = *(unsigned __int8 *)(v6 + 4233);
        *(_BYTE *)(a1 + 4125) = v7[4 * SrbExtension + 16];
        *(_DWORD *)(a1 + 4120) = v17;
        ++*(_BYTE *)(v6 + 4233);
      }
    }
    else if ( (*(_BYTE *)(v6 + 4235) & 1) != 0 )
    {
      *(_BYTE *)(v5 + 3) = 1;
    }
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 4;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    LODWORD(SrbExtension) = 8 * *(unsigned __int8 *)(v6 + 4233) + 32;
    *(_DWORD *)(a2 + v8) = SrbExtension;
  }
  else if ( *(_BYTE *)(a1 + 24) )
  {
    LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  if ( !*(_BYTE *)(a1 + 20) )
    LOBYTE(SrbExtension) = NVMeFreeDmaBuffer(
                             a1,
                             *(unsigned int *)(v6 + 4240),
                             (__int64 *)(v6 + 4200),
                             *(_QWORD *)(v6 + 4208));
  *(_BYTE *)(v6 + 4253) |= 8u;
  *(_QWORD *)(v6 + 4200) = 0LL;
  *(_DWORD *)(v6 + 4240) = 0;
  return SrbExtension;
}
