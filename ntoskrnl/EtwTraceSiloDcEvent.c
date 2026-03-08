/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1405FB110
 * Callers:
 *     MmLogQueryCombineStats @ 0x14079BD2C (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x140A0F788 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x140A0FD54 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2C028 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x140A2F8F8 (MmPerfLogSessionRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloDcEvent(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
