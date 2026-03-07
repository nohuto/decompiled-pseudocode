unsigned __int64 __fastcall HalpTimerSetTimerBackedProfileInterval(unsigned int a1)
{
  unsigned int Number; // ebx
  char v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( !HalpProfileTimer )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProfilingActive )
  {
    v3 = 1;
    if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) == 0 && Number )
    {
      v4 = *(unsigned int *)(HalpProfileData + 24);
LABEL_9:
      *(_DWORD *)(32LL * Number + HalpProfileData + 24) = v4;
      return v4;
    }
  }
  else
  {
    v3 = 0;
  }
  v5 = HalpSetTimer(HalpProfileTimer, 2, a1, v3, &v6);
  v4 = v6;
  if ( v5 >= 0 )
    goto LABEL_9;
  return v4;
}
