__int64 HalpInterruptStandardEndOfInterrupt()
{
  return (*(__int64 (__fastcall **)(_QWORD))(HalpInterruptController + 96))(*(_QWORD *)(HalpInterruptController + 16));
}
