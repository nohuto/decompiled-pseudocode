bool NtIsSystemResumeAutomatic()
{
  return (PopFullWake & 3) == 0;
}
