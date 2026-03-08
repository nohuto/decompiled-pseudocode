/*
 * XREFs of QueryTemperatureInfoHealthLogCompletion @ 0x1C0019910
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C0010DDC (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     KelvinToCelsius @ 0x1C0014AF4 (KelvinToCelsius.c)
 */

__int64 __fastcall QueryTemperatureInfoHealthLogCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int16 v8; // cx
  __int16 v9; // ax
  __int64 v10; // r9
  __int64 v11; // r11
  __int16 v12; // dx
  _WORD *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r10
  __int16 *v17; // r11
  unsigned int *v18; // r14
  __int64 v19; // r8
  __int16 v20; // ax
  __int64 v21; // r11
  __int64 v22; // r8
  __int16 v23; // r10
  unsigned __int16 v24; // dx
  unsigned int v25; // [rsp+68h] [rbp+10h]
  unsigned int *v26; // [rsp+78h] [rbp+20h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v26 = 0LL;
  v5 = SrbExtension;
  result = GetSrbDataBuffer(a2, &v26);
  v7 = v5 + 4200;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    HIBYTE(v25) = 0;
    v8 = *(_WORD *)(*(_QWORD *)v7 + 1LL);
    *(_WORD *)(result + 52) = 0;
    v9 = KelvinToCelsius(v8);
    *(_WORD *)(v10 + 54) = v9;
    v12 = 8;
    v13 = (_WORD *)(v11 + 214);
    *(_DWORD *)(v10 + 56) = -2147450880;
    do
    {
      if ( *v13 )
        break;
      --v13;
      --v12;
    }
    while ( v12 );
    v14 = *(unsigned int *)(v10 + 32);
    v15 = v12 + 1;
    v16 = 1;
    *(_WORD *)(v10 + 40) = v15;
    if ( v14 <= 16 * (unsigned __int64)v15 + 24 )
      LODWORD(v14) = 16 * v15 + 24;
    v17 = (__int16 *)(v11 + 200);
    *(_DWORD *)(v10 + 32) = v14;
    if ( v15 > 1u )
    {
      v18 = v26;
      do
      {
        v19 = 16LL * v16;
        if ( *v18 < (unsigned __int64)(v19 + 40) )
          break;
        *(_WORD *)(v19 + v10 + 52) = v16;
        v20 = KelvinToCelsius(*v17);
        v17 = (__int16 *)(v21 + 2);
        *(_WORD *)(v22 + v10 + 54) = v20;
        v16 = v23 + 1;
        *(_DWORD *)(v22 + v10 + 56) = -2147450880;
      }
      while ( v16 < v24 );
    }
    LOBYTE(v25) = v16 - 1;
    *(_WORD *)((char *)&v25 + 1) = 0;
    *(_BYTE *)(v5 + 4253) = *(_BYTE *)(v5 + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v5 + 4096, 0, 0);
    *(_BYTE *)(v5 + 4253) &= ~4u;
    *(_QWORD *)(v5 + 4224) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v5 + 4232) = v25;
    result = ProcessCommand(a1, a2);
  }
  else
  {
    *(_BYTE *)(v5 + 4253) |= 8u;
  }
  if ( *(_QWORD *)v7 )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v5 + 4240), (__int64 *)(v5 + 4200), *(_QWORD *)(v5 + 4208));
  *(_DWORD *)(v5 + 4240) = 0;
  *(_QWORD *)v7 = 0LL;
  return result;
}
