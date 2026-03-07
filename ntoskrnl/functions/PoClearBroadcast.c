void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C3C9F0;
  if ( qword_140C3C9F0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C3C9F0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
