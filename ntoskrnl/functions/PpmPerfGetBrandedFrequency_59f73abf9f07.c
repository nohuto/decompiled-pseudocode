__int64 __fastcall PpmPerfGetBrandedFrequency(PPROCESSOR_NUMBER ProcNumber, _DWORD *a2)
{
  unsigned int v2; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  a2[1] = 0;
  if ( ProcNumber )
  {
    if ( ProcNumber->Reserved
      || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
    {
      v2 = -1073741811;
    }
    else
    {
      PpmPerfAccumulateBrandedFrequency(ProcessorIndexFromNumber, a2);
    }
  }
  else
  {
    v7[1] = (unsigned __int16 *)qword_140C0BD78[0];
    v7[0] = (unsigned __int16 *)&PpmCheckRegistered;
    v8 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v7) )
      PpmPerfAccumulateBrandedFrequency(v11, a2);
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v2;
}
