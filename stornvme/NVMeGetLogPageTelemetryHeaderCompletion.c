char __fastcall NVMeGetLogPageTelemetryHeaderCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r15
  _WORD *v8; // rdi
  __int64 SrbDataBuffer; // rax
  unsigned int *v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // ecx
  int v13; // ecx
  char v14; // al
  unsigned int v15; // r8d
  __int64 v16; // rbp
  unsigned int v17; // ecx
  int v18; // edx
  __int16 v19; // ax
  char v20; // r8
  __int64 v21; // rcx
  int v23; // [rsp+28h] [rbp-90h]
  unsigned int *v24; // [rsp+C0h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v24 = 0LL;
  v5 = SrbExtension;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v24);
  v7 = *(_QWORD *)(a1 + 1840);
  v8 = (_WORD *)SrbDataBuffer;
  LOBYTE(SrbDataBuffer) = *(_BYTE *)(v5 + 4232);
  v10 = v24;
  if ( (_BYTE)SrbDataBuffer == 7 )
  {
    if ( *(_BYTE *)(a2 + 3) != 1 )
      goto LABEL_13;
    v11 = *(_QWORD *)(v5 + 4200);
    if ( *(_BYTE *)v11 != 7 )
      goto LABEL_13;
    *(_BYTE *)(v5 + 4235) = 1;
    if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
    {
      NVMeZeroMemory(v8, *v10);
      v6 = 0LL;
    }
    *v8 = *(_WORD *)(v11 + 5);
    LOBYTE(SrbDataBuffer) = *(_BYTE *)(v11 + 7);
    *((_BYTE *)v8 + 9) |= 6u;
    *((_BYTE *)v8 + 2) = SrbDataBuffer;
    v12 = *(unsigned __int16 *)(v11 + 12);
    if ( (*(_BYTE *)(v7 + 261) & 0x40) != 0 )
    {
      LODWORD(SrbDataBuffer) = *(_DWORD *)(v11 + 16);
      if ( v12 <= (unsigned int)SrbDataBuffer )
        v12 = *(_DWORD *)(v11 + 16);
    }
    if ( v12 )
    {
      v13 = (v12 + 1) << 9;
      v14 = v8[17] & 0xF0 | 3;
      *(_DWORD *)(v8 + 15) = 17827840;
      *((_BYTE *)v8 + 34) = v14;
      *((_BYTE *)v8 + 39) = v13;
      *((_BYTE *)v8 + 38) = BYTE1(v13);
      *((_BYTE *)v8 + 37) = BYTE2(v13);
      *((_BYTE *)v8 + 36) = HIBYTE(v13);
      *(_BYTE *)(a1 + 4324) = 16;
      *(_DWORD *)(a1 + 4316) = v13;
      *(_BYTE *)(v5 + 4233) = 1;
      LOBYTE(SrbDataBuffer) = *((_BYTE *)v8 + 32);
      *(_BYTE *)(v5 + 4234) = SrbDataBuffer;
    }
    if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
    {
LABEL_13:
      *(_BYTE *)(v5 + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      *(_BYTE *)(v5 + 4232) = 8;
      LOBYTE(v15) = 8;
      BuildGetLogPageCommandForTelemetryLog(
        a1,
        v5,
        v15,
        *(_DWORD *)(v5 + 4240),
        *(_QWORD *)(v5 + 4208),
        v23,
        0LL,
        1,
        1u);
      *(_BYTE *)(v5 + 4253) |= 4u;
      *(_QWORD *)(v5 + 4224) = NVMeGetLogPageTelemetryHeaderCompletion;
      LOBYTE(SrbDataBuffer) = ProcessCommand(a1, a2);
      return SrbDataBuffer;
    }
    *(_WORD *)(v11 + 5) = v6;
    *(_BYTE *)(v11 + 7) = v6;
    *(_DWORD *)(v11 + 8) = 0;
    *(_WORD *)(v11 + 12) = v6;
  }
  else if ( (_BYTE)SrbDataBuffer == 8 )
  {
    if ( *(_BYTE *)(a2 + 3) == 1 )
    {
      v16 = *(_QWORD *)(v5 + 4200);
      if ( (*(_BYTE *)(v5 + 4235) & 1) == 0 )
      {
        NVMeZeroMemory(v8, *v24);
        *v8 = *(_WORD *)(v16 + 5);
        LOBYTE(SrbDataBuffer) = *(_BYTE *)(v16 + 7);
        *((_BYTE *)v8 + 9) |= 6u;
        v6 = 0LL;
        *((_BYTE *)v8 + 2) = SrbDataBuffer;
      }
      v17 = *(unsigned __int16 *)(v16 + 12);
      if ( (*(_BYTE *)(v7 + 261) & 0x40) != 0 )
      {
        LODWORD(SrbDataBuffer) = *(_DWORD *)(v16 + 16);
        if ( v17 <= (unsigned int)SrbDataBuffer )
          v17 = *(_DWORD *)(v16 + 16);
      }
      if ( v17 )
      {
        v18 = (v17 + 1) << 9;
        v19 = 8 * (*(unsigned __int8 *)(v5 + 4233) + 1);
        v20 = 16;
        *((_BYTE *)v8 + 31) = v19;
        *((_BYTE *)v8 + 30) = HIBYTE(v19);
        if ( *(_BYTE *)(v5 + 4234) == 16 )
          v20 = 17;
        LOBYTE(v8[4 * *(unsigned __int8 *)(v5 + 4233) + 16]) = v20;
        HIBYTE(v8[4 * *(unsigned __int8 *)(v5 + 4233) + 16]) = 2;
        LOBYTE(v8[4 * *(unsigned __int8 *)(v5 + 4233) + 17]) = v8[4 * *(unsigned __int8 *)(v5 + 4233) + 17] & 0xF0 | 2;
        v21 = *(unsigned __int8 *)(v5 + 4233);
        LOBYTE(v8[4 * v21 + 19]) = BYTE1(v18);
        HIBYTE(v8[4 * v21 + 18]) = BYTE2(v18);
        HIBYTE(v8[4 * v21 + 19]) = v18;
        LOBYTE(v8[4 * v21 + 18]) = HIBYTE(v18);
        SrbDataBuffer = *(unsigned __int8 *)(v5 + 4233);
        *(_BYTE *)(a1 + 4325) = v8[4 * SrbDataBuffer + 16];
        *(_DWORD *)(a1 + 4320) = v18;
        ++*(_BYTE *)(v5 + 4233);
      }
    }
    else if ( (*(_BYTE *)(v5 + 4235) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 3) = 1;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    LODWORD(SrbDataBuffer) = 8 * *(unsigned __int8 *)(v5 + 4233) + 32;
    *v10 = SrbDataBuffer;
  }
  else if ( *(_BYTE *)(a1 + 24) != (_BYTE)v6 )
  {
    LOBYTE(SrbDataBuffer) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
    v6 = 0LL;
  }
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
  {
    LOBYTE(SrbDataBuffer) = NVMeFreeDmaBuffer(
                              a1,
                              *(unsigned int *)(v5 + 4240),
                              (__int64 *)(v5 + 4200),
                              *(_QWORD *)(v5 + 4208));
    v6 = 0LL;
  }
  *(_BYTE *)(v5 + 4253) |= 8u;
  *(_QWORD *)(v5 + 4200) = v6;
  *(_DWORD *)(v5 + 4240) = v6;
  return SrbDataBuffer;
}
