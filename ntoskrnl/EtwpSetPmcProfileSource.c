__int64 __fastcall EtwpSetPmcProfileSource(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdi

  v2 = 0;
  v3 = a2;
  if ( !a2 || a2 > EtwpMaxProfilingSources )
    return 3221225485LL;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_140C31BA8 )
    {
      ExFreePoolWithTag(qword_140C31BA8, 0);
      qword_140C31BA8 = 0LL;
      EtwpPmcProfile = 0;
    }
    v5 = v3;
    qword_140C31BA8 = (PVOID)ExAllocatePool2(64LL, 616 * v3, 1484223557LL);
    if ( qword_140C31BA8 )
    {
      EtwpPmcProfile = v3;
      if ( (_DWORD)v3 )
      {
        v6 = 0LL;
        do
        {
          KeInitializeProfileCallback(
            (unsigned __int16 *)((char *)qword_140C31BA8 + v6),
            (__int64)EtwpPmcInterrupt,
            (unsigned int)*a1,
            *a1);
          v6 += 616LL;
          ++a1;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v2;
}
