/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x1C0020570
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000A950 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     KelvinToCelsius @ 0x1C001C6CC (KelvinToCelsius.c)
 */

char __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int16 *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r8
  __int16 v9; // ax
  unsigned __int8 v10; // dh
  __int64 v11; // r8
  char v12; // r10
  char v13; // edx^2
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int8 v16; // si
  char v17; // bp
  char v18; // al
  unsigned int v20; // [rsp+50h] [rbp+18h]

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( !v8 )
  {
    *(_BYTE *)(v5 + 3) = 4;
LABEL_3:
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    return SrbExtension;
  }
  if ( *(_BYTE *)(v5 + 3) != 1 )
    goto LABEL_3;
  v20 = *(_DWORD *)(SrbExtension + 4232);
  v9 = KelvinToCelsius(*v6);
  if ( v13 )
  {
    v14 = 2LL * v10;
    *(_WORD *)(v11 + 8 * v14 + 58) = v9;
    *(_BYTE *)(v11 + 8 * v14 + 61) = v12;
LABEL_9:
    v16 = BYTE1(v20);
    if ( BYTE1(v20) >= (unsigned __int8)v20 )
    {
      v17 = BYTE2(v20);
      v12 = 0;
    }
    else
    {
      v16 = BYTE1(v20) + 1;
      *(_WORD *)((char *)&v20 + 1) = (unsigned __int8)(BYTE1(v20) + 1);
      v17 = 0;
    }
    goto LABEL_13;
  }
  v15 = 2LL * v10;
  *(_BYTE *)(v11 + 16 * (v10 + 2LL) + 28) = v12;
  *(_WORD *)(v11 + 8 * v15 + 56) = v9;
  *(_BYTE *)(v11 + 8 * v15 + 62) = v12;
  if ( !v10 && !*(_WORD *)(*(_QWORD *)(a1 + 1640) + 266LL) )
    goto LABEL_9;
  v16 = BYTE1(v20);
  v17 = v12;
  BYTE2(v20) = v12;
LABEL_13:
  v18 = *(_BYTE *)(v7 + 4253);
  if ( v12 )
  {
    *(_BYTE *)(v7 + 4253) = v18 & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v7 + 4096, v16, v17);
    *(_BYTE *)(v7 + 4253) &= ~4u;
    *(_QWORD *)(v7 + 4224) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v7 + 4232) = v20;
    LOBYTE(SrbExtension) = ProcessCommand(a1, a2);
  }
  else
  {
    LOBYTE(SrbExtension) = v18 | 8;
    *(_BYTE *)(v7 + 4253) = SrbExtension;
  }
  return SrbExtension;
}
