bool __fastcall VIDMM_DEVICE::IsBetterYieldCandidate(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax

  if ( !a2 )
    return 1;
  v5 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  return *((_QWORD *)this + 29) - v5 * TimeIncrement < *((_QWORD *)a2 + 29) - v5 * TimeIncrement;
}
