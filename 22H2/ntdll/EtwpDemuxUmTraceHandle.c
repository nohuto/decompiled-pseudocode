/*
 * XREFs of EtwpDemuxUmTraceHandle @ 0x180110CC0
 * Callers:
 *     EtwpGetPrivateLoggerContextByName @ 0x180049A24 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetPrivateLoggerContext @ 0x18004C054 (EtwpGetPrivateLoggerContext.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x180050CE4 (EtwpTraceUmEvent.c)
 *     EtwpShutdownPrivateLoggers @ 0x180081F90 (EtwpShutdownPrivateLoggers.c)
 *     EtwpIsPrivateLoggerOn @ 0x180084BF0 (EtwpIsPrivateLoggerOn.c)
 *     EtwpGetUmProcessImageInfo @ 0x1800878A4 (EtwpGetUmProcessImageInfo.c)
 *     EtwpTraceUmMessage @ 0x180110FF8 (EtwpTraceUmMessage.c)
 * Callees:
 *     NtTraceControl @ 0x1800A0D70 (NtTraceControl.c)
 */

__int64 __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = 2LL * v4;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8), 1u);
    v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v4);
    if ( (v6 & 1) != 0 || !*(_QWORD *)(v6 + 560) )
      goto LABEL_9;
    v7 = *(unsigned __int16 *)(v6 + 568);
    if ( !(_WORD)v7 )
    {
      if ( NtTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v6 + 560), 8u, &OutputBuffer, 2u, &ReturnLength)
        || ReturnLength != 2 )
      {
        goto LABEL_9;
      }
      v7 = OutputBuffer;
      *(_WORD *)(v6 + 568) = OutputBuffer;
    }
    if ( v7 == a1 )
      break;
LABEL_9:
    ++v4;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v5 + 8));
    if ( v4 >= 8u )
      return 4201LL;
  }
  *a2 = v4;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8));
  return 0LL;
}
