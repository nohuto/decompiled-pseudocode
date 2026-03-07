char __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int16 *v8; // r9
  __int16 v9; // cx
  __int16 v10; // ax
  __int64 v11; // rdx
  unsigned __int8 v12; // r8^1
  char v13; // r11
  char v14; // r8d^2
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 v17; // di
  char v18; // si
  char v19; // al
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( !v7 )
  {
    *(_BYTE *)(v5 + 3) = 4;
LABEL_3:
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    return SrbExtension;
  }
  if ( *(_BYTE *)(v5 + 3) != 1 )
    goto LABEL_3;
  GetSrbDataBuffer(a2, &v21);
  v9 = *v8;
  LODWORD(v21) = *(_DWORD *)(v6 + 4232);
  v10 = KelvinToCelsius(v9);
  if ( v14 )
  {
    v15 = 2LL * v12;
    *(_WORD *)(v11 + 8 * v15 + 58) = v10;
    *(_BYTE *)(v11 + 8 * v15 + 61) = v13;
LABEL_9:
    v17 = BYTE1(v21);
    if ( BYTE1(v21) >= (unsigned __int8)v21 )
    {
      v18 = BYTE2(v21);
      v13 = 0;
    }
    else
    {
      v17 = BYTE1(v21) + 1;
      *(_WORD *)((char *)&v21 + 1) = (unsigned __int8)(BYTE1(v21) + 1);
      v18 = 0;
    }
    goto LABEL_13;
  }
  v16 = 2LL * v12;
  *(_WORD *)(v11 + 8 * v16 + 56) = v10;
  *(_BYTE *)(v11 + 16 * (v12 + 2LL) + 28) = v13;
  *(_BYTE *)(v11 + 8 * v16 + 62) = v13;
  if ( !v12 && !*(_WORD *)(*(_QWORD *)(a1 + 1840) + 266LL) )
    goto LABEL_9;
  v17 = BYTE1(v21);
  v18 = v13;
  BYTE2(v21) = v13;
LABEL_13:
  v19 = *(_BYTE *)(v6 + 4253);
  if ( v13 )
  {
    *(_BYTE *)(v6 + 4253) = v19 & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v6 + 4096, v17, v18);
    *(_BYTE *)(v6 + 4253) &= ~4u;
    *(_QWORD *)(v6 + 4224) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v6 + 4232) = (unsigned int)v21;
    LOBYTE(SrbExtension) = ProcessCommand(a1, a2);
  }
  else
  {
    LOBYTE(SrbExtension) = v19 | 8;
    *(_BYTE *)(v6 + 4253) = SrbExtension;
  }
  return SrbExtension;
}
