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
