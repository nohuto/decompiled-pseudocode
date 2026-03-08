/*
 * XREFs of WheaFlushETWEventsSelectProcessor @ 0x14057DE20
 * Callers:
 *     KiAltContextWorkQueueAddItem @ 0x14057DD74 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140610BC4 (WheaFlushETWEventsAddWorkRtn.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1402C1200 (KeGetCurrentProcessorNumberEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403644D0 (KeGetProcessorNumberFromIndex.c)
 */

NTSTATUS __fastcall WheaFlushETWEventsSelectProcessor(PPROCESSOR_NUMBER ProcNumber)
{
  int Number; // edi
  NTSTATUS result; // eax
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+32h] [rbp-16h]
  __int16 v7; // [rsp+36h] [rbp-12h]
  ULONG ProcIndex; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0;
  ProcIndex = 0;
  KeGetCurrentProcessorNumberEx(ProcNumber);
  Number = ProcNumber->Number;
  v4[1] = (unsigned __int16 *)qword_140D1EFE8[0];
  v4[0] = (unsigned __int16 *)KeActiveProcessors;
  v5 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&ProcIndex, v4);
    if ( result )
      break;
    if ( ProcIndex != Number )
      return KeGetProcessorNumberFromIndex(ProcIndex, ProcNumber);
  }
  return result;
}
