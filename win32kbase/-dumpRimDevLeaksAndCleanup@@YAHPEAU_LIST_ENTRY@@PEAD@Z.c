/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00D1B5C
 * Callers:
 *     RIMUnInitialize @ 0x1C00D19B0 (RIMUnInitialize.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C0034C6C (RIMFreeSpecificDevWorker.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00EF582 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C017D810 (-DbgPrintGDI@@YAXPEADZZ.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rsi
  char v5; // dl
  int v6; // edx
  int v7; // r8d
  struct _LIST_ENTRY *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v12; // rbx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog);
  DbgPrintGDI("%s\n", "RIMDevObj leaks");
  do
  {
    v8 = Flink - 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        13,
        (__int64)&WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids,
        (_BYTE)Flink - 16);
    }
    DbgPrintGDI("Leaked %p: ", &Flink[-1]);
    Flink = Flink->Flink;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        4,
        1,
        14,
        (__int64)&WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids);
    DbgPrintGDI("Cleaning up\n", v9, v10);
    if ( BYTE1(v8->Blink) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 273LL);
    Blink = v8[25].Blink;
    v12 = (unsigned __int64)&v8[4].Blink & -(__int64)(v8 != 0LL);
    if ( !Blink )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 281LL);
    RIMFreeSpecificDevWorker((__int64)Blink, v12);
    ObfDereferenceObject(Blink);
  }
  while ( Flink != a1 );
  return 1LL;
}
