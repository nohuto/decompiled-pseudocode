void __fastcall WppInitGlobalLoggerWdf(
        const wchar_t *LoggerName,
        const _GUID *pControlGuid,
        unsigned __int64 *pLogger,
        unsigned int *pFlags,
        unsigned __int8 *pLevel)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  int v10; // r15d
  __int64 v11; // rax
  _OWORD *Pool2; // rdi
  __int64 v13; // rax
  size_t v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  PVOID SystemRoutineAddress; // rax
  PVOID v18; // rax
  int v19; // ebx
  unsigned int aZero; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int Lstart; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int Lflags; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int Llevel; // [rsp+3Ch] [rbp-C4h] BYREF
  _UNICODE_STRING LoggerNameStr; // [rsp+40h] [rbp-C0h] BYREF
  const _GUID *ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE parms[3]; // [rsp+60h] [rbp-A0h] BYREF

  ReturnLength = pControlGuid;
  v6 = -1LL;
  Lflags = 0;
  v7 = -1LL;
  Llevel = 0;
  Lstart = 0;
  aZero = 0;
  v10 = 0;
  do
    ++v7;
  while ( LoggerName[v7] );
  if ( v7 <= 0x7FFFFFFF )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( LoggerName[v11] );
    Pool2 = (_OWORD *)ExAllocatePool2(256LL, (unsigned int)(2 * v11 + 142), 1162040403LL);
    if ( Pool2 )
    {
      if ( !wcscmp_0(LoggerName, L"GlobalLogger") )
      {
        v10 = 1;
        *Pool2 = *(_OWORD *)L"WMI\\GlobalLogger\\";
        Pool2[1] = *(_OWORD *)L"alLogger\\";
        *((_WORD *)Pool2 + 16) = aWmiGloballogge[16];
      }
      else
      {
        *Pool2 = *(_OWORD *)L"WMI\\AutoLogger\\";
        *((_QWORD *)Pool2 + 2) = *(_QWORD *)L"Logger\\";
        *((_DWORD *)Pool2 + 6) = *(_DWORD *)L"er\\";
        *((_WORD *)Pool2 + 14) = aWmiAutologger[14];
        v13 = -1LL;
        do
          ++v13;
        while ( LoggerName[v13] );
        v14 = (unsigned int)(2 * v13);
        v15 = -1LL;
        do
          ++v15;
        while ( *((_WORD *)Pool2 + v15) );
        memmove((char *)Pool2 + 2 * v15, LoggerName, v14);
        v16 = -1LL;
        do
          ++v16;
        while ( *((_WORD *)Pool2 + v16) );
        *((_WORD *)Pool2 + v16) = 92;
      }
      parms[0].QueryRoutine = 0LL;
      parms[0].Name = L"Start";
      parms[1].QueryRoutine = 0LL;
      parms[0].EntryContext = &Lstart;
      parms[1].Flags = 0;
      parms[0].DefaultData = &aZero;
      parms[0].Flags = 288;
      parms[0].DefaultType = 0x4000000;
      parms[0].DefaultLength = 4;
      LoggerNameStr = 0LL;
      RtlInitUnicodeString(&LoggerNameStr, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&LoggerNameStr);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      if ( ((int (__fastcall *)(__int64, _OWORD *, _RTL_QUERY_REGISTRY_TABLE *, _QWORD, _QWORD))SystemRoutineAddress)(
             2147483650LL,
             Pool2,
             parms,
             0LL,
             0LL) >= 0
        && Lstart )
      {
        parms[0].QueryRoutine = 0LL;
        parms[0].Name = L"Flags";
        parms[0].Flags = 288;
        parms[0].EntryContext = &Lflags;
        parms[0].DefaultType = 0x4000000;
        parms[0].DefaultData = &aZero;
        parms[1].Name = L"Level";
        parms[1].EntryContext = &Llevel;
        parms[1].DefaultData = &aZero;
        parms[0].DefaultLength = 4;
        parms[1].QueryRoutine = 0LL;
        parms[1].Flags = 288;
        parms[1].DefaultType = 0x4000000;
        parms[1].DefaultLength = 1;
        parms[2].QueryRoutine = 0LL;
        parms[2].Flags = 0;
        do
          ++v6;
        while ( *((_WORD *)Pool2 + v6) );
        WppGuidToStr((wchar_t *)Pool2 + (unsigned int)v6, ReturnLength);
        LoggerNameStr = 0LL;
        RtlInitUnicodeString(&LoggerNameStr, L"RtlQueryRegistryValuesEx");
        v18 = MmGetSystemRoutineAddress(&LoggerNameStr);
        if ( !v18 )
          v18 = RtlQueryRegistryValues;
        v19 = ((__int64 (__fastcall *)(__int64, _OWORD *, _RTL_QUERY_REGISTRY_TABLE *, _QWORD, _QWORD))v18)(
                2147483650LL,
                Pool2,
                parms,
                0LL,
                0LL);
        ExFreePoolWithTag(Pool2, 0x45435453u);
        if ( v19 >= 0 && Lstart == 1 )
        {
          if ( v10 )
          {
            *pLogger = 1LL;
          }
          else
          {
            LODWORD(ReturnLength) = 0;
            LoggerNameStr = 0LL;
            RtlInitUnicodeString(&LoggerNameStr, LoggerName);
            if ( WmiQueryTraceInformation(TraceHandleByNameClass, pLogger, 8u, (PULONG)&ReturnLength, &LoggerNameStr) < 0 )
              *pLogger = 0LL;
          }
          *pFlags = Lflags & 0x7FFFFFFF;
          *pLevel = Llevel;
        }
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0x45435453u);
      }
    }
  }
}
