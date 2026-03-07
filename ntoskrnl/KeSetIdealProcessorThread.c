UCHAR __stdcall KeSetIdealProcessorThread(PKTHREAD Thread, UCHAR Processor)
{
  unsigned __int16 AffinityPrimaryGroup; // ax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v5; // [rsp+38h] [rbp+10h] BYREF
  UCHAR v6; // [rsp+3Ah] [rbp+12h]
  char v7; // [rsp+3Bh] [rbp+13h]

  v4 = 0;
  if ( Thread == KeGetCurrentThread() )
    AffinityPrimaryGroup = Thread->AffinityPrimaryGroup;
  else
    AffinityPrimaryGroup = Thread->UserAffinityPrimaryGroup;
  v6 = Processor;
  v5 = AffinityPrimaryGroup;
  v7 = 0;
  KeSetIdealProcessorThreadByNumber(Thread, &v5, &v4);
  return BYTE2(v4);
}
