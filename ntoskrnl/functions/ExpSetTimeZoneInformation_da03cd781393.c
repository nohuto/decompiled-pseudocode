NTSTATUS __fastcall ExpSetTimeZoneInformation(unsigned __int64 a1, int a2)
{
  char SiloTimeZoneMarker; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  wchar_t *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD ValueData[4]; // [rsp+30h] [rbp-398h] BYREF
  _OWORD v18[27]; // [rsp+40h] [rbp-388h] BYREF
  wchar_t v19[216]; // [rsp+1F0h] [rbp-1D8h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v19, 0, sizeof(v19));
  SiloTimeZoneMarker = 0;
  if ( a2 == 172 )
  {
    v5 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 172 > 0x7FFFFFFF0000LL || a1 + 172 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v18[0] = *(_OWORD *)a1;
    v18[1] = *(_OWORD *)(a1 + 16);
    v18[2] = *(_OWORD *)(a1 + 32);
    v18[3] = *(_OWORD *)(a1 + 48);
    v18[4] = *(_OWORD *)(a1 + 64);
    v18[5] = *(_OWORD *)(a1 + 80);
    v18[6] = *(_OWORD *)(a1 + 96);
    v18[7] = *(_OWORD *)(a1 + 112);
    v6 = a1 + 128;
    v18[8] = *(_OWORD *)v6;
    v18[9] = *(_OWORD *)(v6 + 16);
    *(_QWORD *)&v18[10] = *(_QWORD *)(v6 + 32);
    DWORD2(v18[10]) = *(_DWORD *)(v6 + 40);
    memset((char *)&v18[10] + 12, 0, 0x100uLL);
    BYTE12(v18[26]) = 1;
  }
  else
  {
    if ( a2 != 432 )
      return -1073741820;
    v5 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 432 > 0x7FFFFFFF0000LL || a1 + 432 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v7 = v18;
    v8 = 3LL;
    do
    {
      *v7 = *(_OWORD *)a1;
      v7[1] = *(_OWORD *)(a1 + 16);
      v7[2] = *(_OWORD *)(a1 + 32);
      v7[3] = *(_OWORD *)(a1 + 48);
      v7[4] = *(_OWORD *)(a1 + 64);
      v7[5] = *(_OWORD *)(a1 + 80);
      v7[6] = *(_OWORD *)(a1 + 96);
      v7 += 8;
      *(v7 - 1) = *(_OWORD *)(a1 + 112);
      a1 += 128LL;
      --v8;
    }
    while ( v8 );
    *v7 = *(_OWORD *)a1;
    v7[1] = *(_OWORD *)(a1 + 16);
    v7[2] = *(_OWORD *)(a1 + 32);
  }
  ExAcquireTimeRefreshLock(1u);
  Blink = PsGetCurrentServerSiloGlobals()[78].Blink;
  v10 = v19;
  do
  {
    *(struct _LIST_ENTRY *)v10 = *Blink;
    *((struct _LIST_ENTRY *)v10 + 1) = Blink[1];
    *((struct _LIST_ENTRY *)v10 + 2) = Blink[2];
    *((struct _LIST_ENTRY *)v10 + 3) = Blink[3];
    *((struct _LIST_ENTRY *)v10 + 4) = Blink[4];
    *((struct _LIST_ENTRY *)v10 + 5) = Blink[5];
    *((struct _LIST_ENTRY *)v10 + 6) = Blink[6];
    v10 += 64;
    *((struct _LIST_ENTRY *)v10 - 1) = Blink[7];
    Blink += 8;
    --v5;
  }
  while ( v5 );
  *(struct _LIST_ENTRY *)v10 = *Blink;
  *((struct _LIST_ENTRY *)v10 + 1) = Blink[1];
  *((struct _LIST_ENTRY *)v10 + 2) = Blink[2];
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  if ( !PsIsCurrentThreadInServerSilo(v12, v11)
    || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker()) != 0
    || (ValueData[0] = 1,
        result = RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u),
        result >= 0) )
  {
    v14 = RtlpSetTimeZoneInformationWorker((wchar_t *)v18, 0x1B0u);
    if ( v14 >= 0 )
      v14 = NtSetSystemTime(0LL, 0LL);
    if ( v14 < 0 )
    {
      RtlpSetTimeZoneInformationWorker(v19, 0x1B0u);
      if ( PsIsCurrentThreadInServerSilo(v16, v15) && !SiloTimeZoneMarker )
      {
        ValueData[0] = 0;
        RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u);
      }
    }
    return v14;
  }
  return result;
}
